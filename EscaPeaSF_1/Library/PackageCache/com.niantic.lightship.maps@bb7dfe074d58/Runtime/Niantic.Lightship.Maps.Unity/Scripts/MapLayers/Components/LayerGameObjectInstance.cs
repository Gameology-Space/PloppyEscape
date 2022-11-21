// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Unity.MapLayers.Components.BaseTypes;
using Niantic.Lightship.Maps.Utilities;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Components
{
    /// <summary>
    /// This <see cref="MapLayerComponent"/> contains and
    /// manages a single <see cref="GameObject"/> instance
    /// </summary>
    public class LayerGameObjectInstance : MapLayerComponent
    {
        [SerializeField]
        private Transform _gameObject;

        [SerializeField]
        private float _heightOffset;

        [SerializeField]
        private bool _scaleWithMapRadius;

        [SerializeField]
        private double _relativeScale = 1.0d;

        [SerializeField]
        private double _minimumScale;

        [SerializeField]
        private double _maximumScale = double.PositiveInfinity;

        /// <inheritdoc />
        public override void OnMapOriginChanged() { }

        /// <inheritdoc />
        public override void Initialize(LightshipMap lightshipMap, GameObject parent)
        {
            base.Initialize(lightshipMap, parent);

            // Hook our GameObject up to the parent and set its position and scale
            _gameObject.SetParent(ParentMapLayer.transform, false);
            _gameObject.localScale = GetLocalScale(LightshipMap.MapRadius);
            _gameObject.position += _heightOffset * Vector3.up;

            if (_scaleWithMapRadius)
            {
                lightshipMap.MapRadiusChanged += OnMapRadiusChanged;
            }
        }

        private void OnDestroy()
        {
            LightshipMap.MapRadiusChanged -= OnMapRadiusChanged;
        }

        private void OnMapRadiusChanged(double mapRadius)
        {
            if (_scaleWithMapRadius)
            {
                _gameObject.transform.localScale = GetLocalScale(mapRadius);
            }
        }

        /// <summary>
        /// Gets a local scale for object instances.  If "scale
        /// with map radius" is set, this scale will be based on
        /// the <see cref="LightshipMap"/>'s viewable map radius.
        /// </summary>
        /// <param name="mapRadius">The map's radius</param>
        /// <returns></returns>
        private Vector3 GetLocalScale(double mapRadius)
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
