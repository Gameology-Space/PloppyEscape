// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using JetBrains.Annotations;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Logging;
using Niantic.Lightship.Maps.Unity.Builders.BaseTypes;
using Niantic.Lightship.Maps.Unity.Configuration;
using Niantic.Lightship.Maps.Unity.MapLayers;
using Niantic.Lightship.Maps.Unity.Utilities;
using Niantic.Lightship.Maps.Utilities;
using Niantic.Platform.Debugging;
using UnityEngine;


namespace Niantic.Lightship.Maps.Unity.Core
{
    using MapTileObjectDictionary = Dictionary<ulong, PooledObject<MapTileObject>>;

    /// <summary>
    /// LightshipMap listens to the stream of events from MapTileStreamService, creates game objects
    /// for map tiles and then defers rendering to the Tile Builders.
    ///
    /// The mapTile game objects are direct children of this LightshipMap, and individual features like
    /// roads are children of the map tiles.
    /// </summary>
    [PublicAPI]
    public class LightshipMap : MonoBehaviour, ILightshipMap
    {
        [Serializable]
        private class ViewableMapArea
        {
            [SerializeField]
            private double _latitude = 47.6198924f;

            [SerializeField]
            private double _longitude = -122.3534126f;

            [SerializeField]
            private double _mapRadius = 500f;

            public double MapRadius => _mapRadius;
            public LatLng LatLng => new LatLng(_latitude, _longitude);
        }

        #region Serialized fields

        [Tooltip("If set, the map will always be positioned with its center at the scene's origin")]
        [SerializeField]
        private bool _centerMapAtOrigin;

        [Tooltip(
            "The maximum distance the map is allowed to move away from the origin (in "
                + "meters). If the map's center moves further than this limit, all maptiles "
                + "and objects placed on the map will be moved back to the scene's origin."
        )]
        [SerializeField]
        private float _maximumMapOffset = 1000.0f;
        private float _maximumMapOffsetSquared;

        [SerializeField]
        private List<FeatureBuilderBase> _builders;

        [SerializeField]
        private GameObject _mapTilePrefab;

        [SerializeField]
        private ViewableMapArea _defaultLocation = new ViewableMapArea();

        [SerializeField]
        private List<MapLayer> _mapLayers = new List<MapLayer>();

        #endregion
        #region Private fields

        private readonly LinkedList<IMapTile> _mapTilesToProcess = new LinkedList<IMapTile>();
        private readonly Dictionary<ulong, IMapTile> _activeTiles = new Dictionary<ulong, IMapTile>();
        private readonly MapTileObjectDictionary _activeMapTiles = new MapTileObjectDictionary();
        private ObjectPool<MapTileObject> _mapTileObjectPool;

        private Transform _inactiveTilesParent;
        private Transform _activeTilesParent;
        private Transform _mapLayersParent;

        private MapUnitConverter _unitConverter;
        private ViewPoint _currentViewPoint;

        private ILightshipMapsSystem _mapsSystem;
        private IMapViewManager _mapViewManager;
        private ITileStreamService _tileStreamService;

        private MapsAuthConfig _authConfig;
        private string _lightshipApiKey;

        private static ChannelLogger Log { get; } = new ChannelLogger(nameof(LightshipMap));

        #endregion
        #region Public events and properties

        /// <inheritdoc />
        public event Action<IMapTile, MapTileObject> MapTileAdded;

        /// <inheritdoc />
        public event Action<IMapTile, MapTileObject> MapTileRemoved;

        /// <inheritdoc />
        public event Action<double> MapRadiusChanged;

        /// <inheritdoc />
        public event Action<LatLng> MapCenterChanged;

        /// <inheritdoc />
        public event Action<LatLng> MapOriginChanged;

        /// <inheritdoc />
        public LatLng MapOrigin => _unitConverter.MapOrigin;

        /// <inheritdoc />
        public LatLng MapCenter => _currentViewPoint.Center;

        /// <inheritdoc />
        public double MapRadius => _currentViewPoint.MapAreaRadiusM;

        /// <inheritdoc />
        public double MapScale => _unitConverter.MapScale;

        /// <inheritdoc />
        public IReadOnlyDictionary<ulong, IMapTile> ActiveMapTiles => _activeTiles;

        /// <inheritdoc />
        public bool IsMapCenteredAtOrigin => _centerMapAtOrigin;

        #endregion
        #region Methods called by Unity

        private void Awake()
        {
            // Load a Lightship API key, or prompt to enter one
            _lightshipApiKey = LightshipApiKeyUtil.Load();

            Log.Info("Initializing Magnesium");
            _mapsSystem = LightshipMapsSystem.Initialize(Application.persistentDataPath, _lightshipApiKey);
            _tileStreamService = _mapsSystem.TileStreamService;
            _mapViewManager = _mapsSystem.MapViewManager;

            // Clear any child objects
            DetachAndHideChildObjects();

            Assert.IsNull(_mapLayersParent);
            _mapLayersParent = CreateTransformGroup("MapLayers");
            _mapLayers.ForEach(layer => layer.Initialize(this, _mapLayersParent));

            Assert.IsNull(_activeTilesParent);
            _activeTilesParent = CreateTransformGroup("ActiveTiles");

            Assert.IsNull(_inactiveTilesParent);
            _inactiveTilesParent = CreateTransformGroup("InactiveTiles");
            _inactiveTilesParent.gameObject.SetActive(false);

            // Initialize our maptile feature builders
            _builders.ForEach(builder => builder.Initialize(this));

            // Initialize the ObjectPool used for MapTileObjects
            _mapTileObjectPool = new ObjectPool<MapTileObject>(
                _mapTilePrefab.GetComponent<MapTileObject>(),
                mapTileObject => mapTileObject.Initialize(_builders),
                mapTileObject => mapTileObject.Release()
            );

            Log.Info("Initializing Tile Manager");
            _tileStreamService.MapTileDataReady += QueueMapTile;
            _tileStreamService.MapTileDeleted += ReleaseMapTile;

            // Initialize the unit converter and set our starting position
            _unitConverter = new MapUnitConverter(_defaultLocation.LatLng);
            _unitConverter.MapOriginChanged += OnMapOriginChanged;
            _maximumMapOffsetSquared = _maximumMapOffset * _maximumMapOffset;
            SetViewableArea(_unitConverter.MapOrigin, _defaultLocation.MapRadius);

            Transform CreateTransformGroup(string groupName)
            {
                var newGameObject = new GameObject(groupName);
                var newTransform = newGameObject.transform;
                newGameObject.layer = gameObject.layer;
                newTransform.SetParent(transform);
                return newTransform;
            }
        }

        private void OnDestroy()
        {
            if (_tileStreamService != null)
            {
                _tileStreamService.MapTileDataReady -= QueueMapTile;
                _tileStreamService.MapTileDeleted -= ReleaseMapTile;
            }

            LightshipMapsSystem.Instance.Shutdown();
        }

        private void Update()
        {
            // Process the first tile in the queue.  Map tile creation is throttled
            // to one per frame so that we don't bog down Unity's main thread.
            var node = _mapTilesToProcess.First;
            if (node != null)
            {
                var mapTile = node.Value;
                _mapTilesToProcess.RemoveFirst();
                AddMapTile(mapTile);
            }

            _mapsSystem.ProcessEvents();
        }

        #endregion
        #region Methods used to set the map's viewable area

        /// <inheritdoc />
        public void OffsetMapCenter(Vector3 offset)
        {
            var latLng = _unitConverter.SceneToLatLng(-transform.position - offset);
            var radius = _currentViewPoint.MapAreaRadiusM;
            SetViewableAreaInternal(latLng, radius);
        }

        /// <inheritdoc />
        public void SetMapCenter(LatLng latLng)
        {
            var radius = _currentViewPoint.MapAreaRadiusM;
            SetViewableAreaInternal(latLng, radius);
        }

        /// <inheritdoc />
        public void SetMapCenter(Vector3 center)
        {
            var latLng = _unitConverter.SceneToLatLng(center);
            var radius = _currentViewPoint.MapAreaRadiusM;
            SetViewableAreaInternal(latLng, radius);
        }

        /// <inheritdoc />
        public void SetMapRadius(double mapRadius)
        {
            var radius = _unitConverter.SceneToMeters(mapRadius, MapCenter.Latitude);
            SetViewableAreaInternal(MapCenter, radius);
        }

        /// <inheritdoc />
        public void SetViewableArea(in LatLng latLng, double mapRadius)
        {
            var radius = _unitConverter.SceneToMeters(mapRadius, latLng.Latitude);
            SetViewableAreaInternal(latLng, radius);
        }

        /// <inheritdoc />
        public void SetViewableArea(Vector3 center, double mapRadius)
        {
            var latLng = _unitConverter.SceneToLatLng(center);
            var radius = _unitConverter.SceneToMeters(mapRadius, latLng.Latitude);
            SetViewableAreaInternal(latLng, radius);
        }

        private void SetViewableAreaInternal(in LatLng latLng, double mapRadius)
        {
            bool mapCenterChanged = MapCenter != latLng;
            bool mapRadiusChanged = !MathEx.AlmostEqual(MapRadius, mapRadius);

            _currentViewPoint = new ViewPoint(latLng, mapRadius);
            _mapViewManager.SetView(_mapViewManager.MainViewId, _currentViewPoint);

            if (mapCenterChanged)
            {
                // Raise an event if the map's center changed
                MapCenterChanged?.Invoke(latLng);
            }

            if (mapRadiusChanged)
            {
                // Raise an event if the map's radius changed
                MapRadiusChanged?.Invoke(mapRadius);
            }

            // Compute the world space position of the new map
            // center.  If it's further than our maximum allowed
            // offset, trigger a full map reposition.  This can
            // be expensive, so if the map is set to be centered
            // at the origin, just set our transform's position.

            var position = _unitConverter.LatLngToScene(MapCenter);
            var distanceSquared = position.MagnitudeSquared;

            if (distanceSquared > _maximumMapOffsetSquared)
            {
                Log.Info($"Repositioning the map ({distanceSquared} squared meters from the origin)");
                _unitConverter.MapOrigin = MapCenter;
            }
            else if (_centerMapAtOrigin)
            {
                transform.position = -(Vector3)position;
            }
        }

        private void OnMapOriginChanged()
        {
            Log.Info($"Map origin changed: {_unitConverter.MapOrigin}, {_unitConverter.MapScale}");

            // Reset our transform's position
            transform.position = Vector3.zero;

            // Trigger an update of all mapTile origins.
            foreach (var mapTile in _activeTiles.Values)
            {
                var wm = new WebMercator12(mapTile.Origin);
                var pooledObject = _activeMapTiles[mapTile.Id];
                var mapTileObject = pooledObject.Value;
                mapTileObject.transform.localScale = (float)MapScale * mapTile.Size * Vector3.one;
                mapTileObject.transform.localPosition = (Vector3)_unitConverter.WebMercator12ToScene(wm);
            }

            // Reposition all of our MapLayers.  Each layer is responsible
            // for repositioning all of the objects it owns as necessary.
            _mapLayers.ForEach(mapLayer => mapLayer.OnMapOriginChanged());

            // Raise an event so that objects placed on the map that aren't
            // managed by any of our MapLayers can be repositioned.
            MapOriginChanged?.Invoke(MapCenter);
        }

        #endregion
        #region Methods to convert between scene and LatLng coordinates

        /// <inheritdoc />
        public LatLng SceneToLatLng(Vector3 scenePosition)
        {
            var position = scenePosition + transform.position;
            return _unitConverter.SceneToLatLng(position);
        }

        /// <inheritdoc />
        public Vector3 LatLngToScene(in LatLng location)
        {
            return (Vector3)_unitConverter.LatLngToScene(location) + transform.position;
        }

        #endregion

        /// <summary>
        /// If the <see cref="LightshipMap"/> instance has any child objects
        /// attached to it, this method is called at startup to detach them
        /// and hide them from the hierarchy.  It can be useful for organizational
        /// purposes to attach objects or prefabs (like <see cref="MapLayer"/>s)
        /// to the <see cref="LightshipMap"/> that references them, but they
        /// shouldn't inherit the map's or any of its parents' transforms.
        /// </summary>
        private void DetachAndHideChildObjects()
        {
            while (gameObject.transform.childCount > 0)
            {
                var child = gameObject.transform.GetChild(0).gameObject;
                Log.Info($"Detaching child object '{child.name}'");
                UnityObjectUtils.DisableAndHide(child);
            }
        }

        /// <summary>
        /// Queues a map tile to be added to our scene.
        /// </summary>
        /// <param name="mapTile"></param>
        private void QueueMapTile(IMapTile mapTile)
        {
            _mapTilesToProcess.AddLast(mapTile);
        }

        /// <summary>
        /// Creates or reuses an existing game object for
        /// the mapTile and invokes the individual builders.
        /// </summary>
        private void AddMapTile(IMapTile mapTile)
        {
            if (_activeTiles.ContainsKey(mapTile.Id))
            {
                // Already have a tile for this id, don't rewrite / overwrite.
                return;
            }

            var wm = new WebMercator12(mapTile.Origin);
            var pooledObject = _mapTileObjectPool.GetOrCreate();
            var mapTileObject = pooledObject.Value;
            mapTileObject.name = $"Tile ({mapTile.TileCoordinateString})";

            var tileTransform = mapTileObject.transform;
            tileTransform.SetParent(_activeTilesParent.transform, true);
            tileTransform.localScale = (float)MapScale * mapTile.Size * Vector3.one;
            tileTransform.localPosition = (Vector3)_unitConverter.WebMercator12ToScene(wm);

            _activeTiles[mapTile.Id] = mapTile;
            _activeMapTiles[mapTile.Id] = pooledObject;

            mapTileObject.Build(mapTile);
            mapTileObject.SetLayerOnAllChildren(gameObject.layer);
            MapTileAdded?.Invoke(mapTile, mapTileObject);
        }

        /// <summary>
        /// Returns a mapTile to the pool.
        /// </summary>
        private void ReleaseMapTile(IMapTile mapTile)
        {
            // Remove this tile if it's in the queue
            var tileNode = _mapTilesToProcess.First;
            while (tileNode != null)
            {
                var next = tileNode.Next;
                if (tileNode.Value.Id == mapTile.Id)
                {
                    _mapTilesToProcess.Remove(tileNode.Value);
                }

                tileNode = next;
            }

            if (!_activeTiles.ContainsKey(mapTile.Id))
            {
                // Already deleted
                return;
            }

            var mapTileObject = _activeMapTiles[mapTile.Id];
            MapTileRemoved?.Invoke(mapTile, mapTileObject.Value);

            _activeTiles.Remove(mapTile.Id);
            _activeMapTiles.Remove(mapTile.Id);

            mapTileObject.Value.transform.SetParent(_inactiveTilesParent);
            mapTileObject.Dispose();
        }
    }
}
