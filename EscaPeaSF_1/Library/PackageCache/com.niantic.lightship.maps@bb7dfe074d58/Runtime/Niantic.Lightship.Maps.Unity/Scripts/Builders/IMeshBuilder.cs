// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Unity.Core;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders
{
    /// <summary>
    /// The base type for maptile feature builders that generate meshes
    /// </summary>
    public interface IMeshBuilder : IFeatureBuilder
    {
        /// <summary>
        /// Creates <see cref="MeshRenderer"/> and <see cref="MeshFilter"/> components
        /// on a new <see cref="GameObject"/> that are used to render generated meshes.
        /// </summary>
        /// <param name="mapTileObject">The <see cref="MapTileObject"/> that
        /// the new mesh rendering components will be attached to</param>
        /// <returns>The <see cref="MeshFilter"/> component</returns>
        MeshFilter CreateMeshComponents(MapTileObject mapTileObject);

        /// <summary>
        /// Called when a maptile is added to the scene.  This method
        /// generates meshes for a specific set of maptile features.
        /// </summary>
        /// <param name="mapTile">The <see cref="IMapTile"/> containing features to build</param>
        /// <param name="meshFilter">The <see cref="MeshFilter"/> used to render the mesh</param>
        void Build(IMapTile mapTile, MeshFilter meshFilter);

        /// <summary>
        /// Called when a maptile is removed from the scene.  This method cleans up
        /// meshes or other resources created by the <see cref="Build"/> method.
        /// </summary>
        /// <param name="meshFilter">The <see cref="MeshFilter"/> created
        /// by the call to <see cref="CreateMeshComponents"/></param>
        void Release(MeshFilter meshFilter);
    }
}
