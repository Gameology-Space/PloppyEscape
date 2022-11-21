// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Unity.MapLayers.Components.BaseTypes;
using Niantic.Lightship.Maps.Unity.Utilities;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Components
{
    /// <summary>
    /// This <see cref="MapLayerComponent"/> instantiates
    /// <see cref="GameObject"/>s from a given prefab.
    /// </summary>
    public class LayerGameObjectPlacement : LayerPrefabPlacementBase<GameObject>
    {
        /// <inheritdoc />
        public override PooledObject<GameObject> PlaceInstance(in LatLng latLng, string instanceName = null)
        {
            // Get or create a prefab instance from the object pool
            var pooledObject = ObjectPool.GetOrCreate();
            var instance = pooledObject.Value;
            Instances.Add(instance, latLng);

            // Enable and un-hide this object (if it was pooled)
            UnityObjectUtils.EnableAndShow(instance);
            instance.name = instanceName ?? _name;
            PositionInstance(instance, latLng);

            return pooledObject;
        }

        private void PositionInstance(GameObject instance, in LatLng latLng)
        {
            // Hook this up to the parent and set its position and scale
            var position = LightshipMap.LatLngToScene(latLng) + _heightOffset * Vector3.up;
            instance.transform.SetParent(ParentMapLayer.transform, false);
            instance.transform.localScale = GetLocalScale(LightshipMap.MapRadius);
            instance.transform.position = position;
        }

        /// <inheritdoc />
        protected override void OnObjectPoolRelease(GameObject instance)
        {
            base.OnObjectPoolRelease(instance);
            UnityObjectUtils.DisableAndHide(instance);
        }

        /// <inheritdoc />
        protected override void OnLightshipMapRadiusChanged(double mapRadius)
        {
            if (_scaleWithMapRadius)
            {
                foreach (var instance in Instances)
                {
                    instance.Key.transform.localScale = GetLocalScale(mapRadius);
                }
            }
        }

        /// <inheritdoc />
        public override void OnMapOriginChanged()
        {
            foreach (var instance in Instances)
            {
                // Recalculate the object's position from its LatLng if the
                // parent LightshipMap was repositioned to the origin.
                PositionInstance(instance.Key, instance.Value);
            }
        }
    }
}
