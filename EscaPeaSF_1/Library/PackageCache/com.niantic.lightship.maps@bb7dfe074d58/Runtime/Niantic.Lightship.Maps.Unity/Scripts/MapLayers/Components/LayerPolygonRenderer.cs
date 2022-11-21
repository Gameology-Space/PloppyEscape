// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Unity.MapLayers.Components.BaseTypes;
using Niantic.Lightship.Maps.Unity.Utilities;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Components
{
    using InstanceDictionary = Dictionary<GameObject, LatLng>;

    /// <summary>
    /// This <see cref="MapLayerComponent"/> draws polygons on the map
    /// </summary>
    public class LayerPolygonRenderer : MapLayerComponent
    {
        [SerializeField]
        private string _name = "Polygon";

        [SerializeField]
        private Color _fillColor;

        [SerializeField]
        private float _heightOffset;

        private ObjectPool<GameObject> _objectPool;
        private readonly InstanceDictionary _instances = new InstanceDictionary();

        /// <summary>
        /// Draws a polygon defined by a list of <see cref="LatLng"/> coordinates.
        /// </summary>
        /// <param name="outline">The points along the polygon's edges, in order</param>
        /// <param name="instanceName">An optional name for the GameObject</param>
        /// <returns>A <see cref="GameObject"/> representing this polygon instance</returns>
        public PooledObject<GameObject> DrawPolygon(IReadOnlyList<LatLng> outline, string instanceName = null)
        {
            // The polygon triangulation algorithm assumes a
            // non-closed loop, so if the first and last vertices
            // are the same, then skip the first one in the list.
            int outlineIndex = outline[0] == outline[^1] ? 1 : 0;

            int pointCount = outline.Count - outlineIndex;
            var vertices = new Vector3[pointCount];

            for (int i = 0; i < vertices.Length; i++)
            {
                // Convert LatLng to world space position
                var latLng = outline[outlineIndex++];
                var point = LightshipMap.LatLngToScene(latLng);
                var local = ParentMapLayer.transform.InverseTransformPoint(point);
                vertices[i] = local;
            }

            // Build a triangle list for this polygon
            var convexPolygon = PolygonBuilder.Triangulate(vertices);

            // Fill primitive triangle list
            var triangles = new int[convexPolygon.Count];
            for (int i = 0; i < convexPolygon.Count; i++)
            {
                triangles[i] = i;
            }

            // Get or create an instance from the object pool
            var pooledObject = _objectPool.GetOrCreate();
            var instance = pooledObject.Value;

            // Keep track of the map's origin when this instance
            // was placed so that it can be repositioned with an
            // offset if the map's origin ever changes.
            _instances.Add(instance, LightshipMap.MapOrigin);

            // Enable and un-hide this object (if it was pooled)
            UnityObjectUtils.EnableAndShow(instance);
            instance.name = instanceName ?? _name;
            PositionInstance(instance, LightshipMap.MapOrigin);

            // Clear any existing data from the mesh (if it was pooled)
            var meshFilter = instance.GetComponent<MeshFilter>();
            var mesh = meshFilter.mesh;
            mesh.Clear();

            mesh.vertices = convexPolygon.ToArray();
            mesh.triangles = triangles;

            return pooledObject;
        }

        private void PositionInstance(GameObject instance, in LatLng latLng)
        {
            // Hook this up to the parent and set its position and scale
            var position = LightshipMap.LatLngToScene(latLng) + _heightOffset * Vector3.up;
            var localPos = ParentMapLayer.transform.InverseTransformPoint(position);
            instance.transform.SetParent(ParentMapLayer.transform, false);
            instance.transform.localScale = Vector3.one;
            instance.transform.localPosition = localPos;
        }

        /// <inheritdoc />
        public override void Initialize(LightshipMap lightshipMap, GameObject parent)
        {
            base.Initialize(lightshipMap, parent);

            var instance = CreateMeshRenderer();
            _objectPool = new ObjectPool<GameObject>(instance, null, OnObjectPoolRelease);
        }

        /// <inheritdoc />
        public override void OnMapOriginChanged()
        {
            foreach (var instance in _instances)
            {
                // Recalculate the object's position from its LatLng if the
                // parent LightshipMap was repositioned to the origin.
                PositionInstance(instance.Key, instance.Value);
            }
        }

        private void OnObjectPoolRelease(GameObject instance)
        {
            _instances.Remove(instance);
            UnityObjectUtils.DisableAndHide(instance);
        }

        private GameObject CreateMeshRenderer()
        {
            var go = new GameObject(_name);
            UnityObjectUtils.DisableAndHide(go);

            go.AddComponent<MeshFilter>();
            var meshRenderer = go.AddComponent<MeshRenderer>();
            var material = meshRenderer.material;
            material.shader = Shader.Find("UI/Unlit/Transparent");
            material.color = _fillColor;

            return go;
        }
    }
}
