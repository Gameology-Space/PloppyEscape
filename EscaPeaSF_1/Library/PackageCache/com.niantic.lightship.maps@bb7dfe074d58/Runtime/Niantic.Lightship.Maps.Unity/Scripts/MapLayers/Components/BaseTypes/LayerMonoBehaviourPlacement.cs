// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Unity.Utilities;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Components.BaseTypes
{
    /// <summary>
    /// Base class for <see cref="MapLayerComponent"/>s that instantiate
    /// <see cref="MonoBehaviour"/>s from a given prefab.
    /// </summary>
    /// <typeparam name="T">The <see cref="MonoBehaviour"/>'s type</typeparam>
    public class LayerMonoBehaviourPlacement<T> : LayerPrefabPlacementBase<T> where T : MonoBehaviour
    {
        /// <inheritdoc />
        public override PooledObject<T> PlaceInstance(in LatLng latLng, string instanceName = null)
        {
            // Get or create a prefab instance from the object pool
            var pooledObject = ObjectPool.GetOrCreate();
            var instance = pooledObject.Value;
            Instances.Add(instance, latLng);

            // Enable and un-hide this object (if it was pooled)
            UnityObjectUtils.EnableAndShow(instance.gameObject);
            instance.name = instanceName ?? _name;
            PositionInstance(instance, latLng);

            return pooledObject;
        }

        private void PositionInstance(T instance, in LatLng latLng)
        {
            // Hook this up to the parent and set its position and scale
            var instanceTransform = instance.transform;
            var position = LightshipMap.LatLngToScene(latLng);
            instanceTransform.SetParent(ParentMapLayer.transform, false);
            instanceTransform.localScale = GetLocalScale(LightshipMap.MapRadius);
            instanceTransform.position = position + _heightOffset * Vector3.up;
        }

        /// <inheritdoc />
        protected override void OnObjectPoolRelease(T instance)
        {
            base.OnObjectPoolRelease(instance);
            UnityObjectUtils.DisableAndHide(instance.gameObject);
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
