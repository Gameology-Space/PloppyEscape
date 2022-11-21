// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Unity.Core;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders
{
    /// <summary>
    /// The base type for maptile feature builders that instantiate
    /// <see cref="UnityEngine.Object"/>s attached to a <see cref="MapTileObject"/>
    /// </summary>
    public interface IObjectBuilder : IFeatureBuilder
    {
        /// <summary>
        /// Creates a <see cref="GameObject"/> that all <see cref="UnityEngine.Object"/>s
        /// instantiated by this builder will be parented to.
        /// </summary>
        /// <param name="mapTileObject"> The <see cref="MapTileObject"/> that
        /// the parent <see cref="GameObject"/> will be attached to</param>
        /// <returns>A new parent <see cref="GameObject"/></returns>
        GameObject CreateParent(MapTileObject mapTileObject);

        /// <summary>
        /// Called when a maptile is added to the scene.  This method
        /// instantiates objects for a specific set of maptile features.
        /// </summary>
        /// <param name="mapTile">The <see cref="IMapTile"/> containing features to build</param>
        /// <param name="parent">The <see cref="GameObject"/> instantiated by
        /// <see cref="CreateParent"/> that this builder's objects will be parented to</param>
        void Build(IMapTile mapTile, GameObject parent);

        /// <summary>
        /// Called when a maptile is removed from the scene.  This method cleans up
        /// objects or other resources created by the <see cref="Build"/> method.
        /// </summary>
        /// <param name="parent">The <see cref="GameObject"/> created
        /// by the call to <see cref="CreateParent"/></param>
        void Release(GameObject parent);
    }
}
