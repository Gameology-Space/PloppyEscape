// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Unity.Core;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Components.BaseTypes
{
    /// <summary>
    /// The base class for components that can be added to a <see cref="MapLayer"/>
    /// </summary>
    public abstract class MapLayerComponent : MonoBehaviour
    {
        /// <summary>
        /// The <see cref="LightshipMap"/> to which this
        /// component's <see cref="MapLayer"/> belongs.
        /// </summary>
        protected LightshipMap LightshipMap;

        /// <summary>
        /// A <see cref="GameObject"/> for this component's <see cref="MapLayer"/>.
        /// All instances of objects created by this component will be parented to
        /// this <see cref="GameObject"/>.
        /// </summary>
        protected GameObject ParentMapLayer;

        /// <summary>
        /// Called from the <see cref="LightshipMap"/> associated
        /// with this component's <see cref="MapLayer"/> at startup.
        /// </summary>
        /// <param name="lightshipMap">The map associated with this component</param>
        /// <param name="parent">The <see cref="GameObject"/> created for instances of objects
        /// created by this component (which is assigned to <see cref="ParentMapLayer"/></param>
        public virtual void Initialize(LightshipMap lightshipMap, GameObject parent)
        {
            LightshipMap = lightshipMap;
            ParentMapLayer = parent;
        }

        /// <summary>
        /// Called from this component's <see cref="MapLayer"/> when its <see
        /// cref="LightshipMap"/> has been repositioned to the scene's origin.
        /// </summary>
        public abstract void OnMapOriginChanged();
    }
}
