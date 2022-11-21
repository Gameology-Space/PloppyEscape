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
    using LineRendererDictionary = Dictionary<GameObject, LineRenderer>;

    /// <summary>
    /// This <see cref="MapLayerComponent"/> is used to draw lines on the map
    /// </summary>
    public class LayerLineRenderer : MapLayerComponent
    {
        [SerializeField]
        private string _name = "Line";

        [SerializeField]
        private Color _fillColor;

        [SerializeField]
        private float _lineWidth;

        [SerializeField]
        private float _heightOffset;

        private ObjectPool<GameObject> _objectPool;
        private readonly InstanceDictionary _instances = new InstanceDictionary();
        private readonly LineRendererDictionary _lineRenderers = new LineRendererDictionary();

        /// <summary>
        /// Draws a loop defined by a list of <see cref="LatLng"/> coordinates.
        /// </summary>
        /// <param name="outline">The points along the loop, in order</param>
        /// <param name="instanceName">An optional name for the GameObject</param>
        /// <returns>A <see cref="GameObject"/> representing this line instance</returns>
        public PooledObject<GameObject> DrawLoop(IReadOnlyList<LatLng> outline, string instanceName = null)
        {
            // The line renderer is configured such that it assumes
            // a non-closed loop, so if the first and last vertices
            // are the same, then skip the first one in the list.
            int outlineIndex = outline[0] == outline[^1] ? 1 : 0;

            int pointCount = outline.Count - outlineIndex;
            var vertices = new Vector3[pointCount];

            // Get or create an instance from the object pool
            var pooledObject = _objectPool.GetOrCreate();
            var instance = pooledObject.Value;
            var lineRenderer = instance.GetComponent<LineRenderer>();

            // Keep track of the map's origin when this instance
            // was placed so that it can be repositioned with an
            // offset if the map's origin ever changes.
            _lineRenderers.Add(instance, lineRenderer);
            _instances.Add(instance, LightshipMap.MapOrigin);

            // Enable and un-hide this object (if it was pooled)
            UnityObjectUtils.EnableAndShow(instance);
            instance.name = instanceName ?? _name;
            PositionInstance(instance, LightshipMap.MapOrigin);

            lineRenderer.positionCount = pointCount;
            lineRenderer.widthMultiplier = (float)LightshipMap.MapRadius;

            for (int i = 0; i < vertices.Length; i++)
            {
                // Convert LatLng to world space position
                var latLng = outline[outlineIndex++];
                var point = LightshipMap.LatLngToScene(latLng);
                var local = ParentMapLayer.transform.InverseTransformPoint(point);
                lineRenderer.SetPosition(i, local);
            }

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
            lightshipMap.MapRadiusChanged += OnMapRadiusChanged;

            var lineRenderer = CreateLineRenderer();
            _objectPool = new ObjectPool<GameObject>(lineRenderer, null, OnObjectPoolRelease);
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
            _lineRenderers.Remove(instance);
            UnityObjectUtils.DisableAndHide(instance);
        }

        private void OnDestroy()
        {
            LightshipMap.MapRadiusChanged -= OnMapRadiusChanged;
        }

        private void OnMapRadiusChanged(double mapRadius)
        {
            foreach (var instance in _lineRenderers)
            {
                instance.Value.widthMultiplier = (float)mapRadius;
            }
        }

        private GameObject CreateLineRenderer()
        {
            var go = new GameObject(_name);
            UnityObjectUtils.DisableAndHide(go);

            var lineRenderer = go.AddComponent<LineRenderer>();
            lineRenderer.material.color = _fillColor;
            lineRenderer.useWorldSpace = false;
            lineRenderer.loop = true;
            lineRenderer.material.shader = Shader.Find("Unlit/Color");
            lineRenderer.widthCurve = AnimationCurve.Constant(1, 1, _lineWidth);
            lineRenderer.widthMultiplier = (float)LightshipMap.MapRadius;

            return go;
        }
    }
}
