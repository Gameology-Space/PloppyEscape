// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Utilities;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Components.BaseTypes
{
    /// <summary>
    /// Base class for all <see cref="MapLayerComponent"/>s
    /// that instantiate objects from a given prefab.
    /// </summary>
    /// <typeparam name="T">The prefab's type</typeparam>
    public abstract class LayerPrefabPlacementBase<T> : MapLayerComponent where T : Object
    {
        [SerializeField]
        protected string _name = "Prefab";

        [SerializeField]
        protected T _prefab;

        [SerializeField]
        protected float _heightOffset;

        [SerializeField]
        protected bool _scaleWithMapRadius;

        [SerializeField]
        protected double _relativeScale = 1.0d;

        [SerializeField]
        protected double _minimumScale;

        [SerializeField]
        protected double _maximumScale = double.PositiveInfinity;

        protected readonly Dictionary<T, LatLng> Instances = new Dictionary<T, LatLng>();
        protected ObjectPool<T> ObjectPool;

        /// <summary>
        /// Places an instance of this component's prefab
        /// at a given <see cref="LatLng"/> coordinate.
        /// </summary>
        /// <param name="latLng">The location to place the instance</param>
        /// <param name="instanceName">An optional name to assign to the instance</param>
        /// <returns>An instance placed at the desired <see cref="LatLng"/></returns>
        public abstract PooledObject<T> PlaceInstance(in LatLng latLng, string instanceName = null);

        /// <summary>
        /// Places an instance of this component's prefab at
        /// a given point in the Unity scene's world space.
        /// </summary>
        /// <param name="position">The location to place the instance</param>
        /// <param name="instanceName">An optional name to assign to the instance</param>
        /// <returns>An instance placed at the desired position</returns>
        public PooledObject<T> PlaceInstance(Vector3 position, string instanceName = null)
        {
            var latLng = LightshipMap.SceneToLatLng(position);
            return PlaceInstance(latLng, instanceName);
        }

        /// <inheritdoc />
        public override void Initialize(LightshipMap lightshipMap, GameObject parent)
        {
            base.Initialize(lightshipMap, parent);
            ObjectPool = new ObjectPool<T>(_prefab, null, OnObjectPoolRelease);

            if (_scaleWithMapRadius)
            {
                lightshipMap.MapRadiusChanged += OnLightshipMapRadiusChanged;
            }
        }

        /// <summary>
        /// Called when an object is released into the <see cref="ObjectPool{T}"/>
        /// </summary>
        /// <param name="instance">The instance being released</param>
        protected virtual void OnObjectPoolRelease(T instance)
        {
            Instances.Remove(instance);
        }

        private void OnDestroy()
        {
            LightshipMap.MapRadiusChanged -= OnLightshipMapRadiusChanged;
        }

        /// <summary>
        /// This method is called when the <see cref="LightshipMap"/>'s
        /// radius changes.  This method should be overridden if any
        /// action needs to be taken (such as scaling object instances)
        /// </summary>
        /// <param name="mapRadius">The new map radius</param>
        protected virtual void OnLightshipMapRadiusChanged(double mapRadius) { }

        /// <summary>
        /// Gets a local scale for object instances.  If "scale
        /// with map radius" is set, this scale will be based on
        /// the <see cref="LightshipMap"/>'s viewable map radius.
        /// </summary>
        /// <param name="mapRadius">The map's radius</param>
        /// <returns></returns>
        protected Vector3 GetLocalScale(double mapRadius)
        {
            if (!_scaleWithMapRadius)
            {
                return Vector3.one;
            }

            var scale = mapRadius * _relativeScale;
            var clampedScale = MathEx.Clamp(scale, _minimumScale, _maximumScale);
            return (float)clampedScale * Vector3.one;
        }
    }
}
