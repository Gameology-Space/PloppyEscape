// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using Niantic.Lightship.Maps.Unity.Builders;
using Niantic.Lightship.Maps.Utilities;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Core
{
    /// <summary>
    /// An object representing a single maptile in the scene.
    /// </summary>
    public class MapTileObject : MonoBehaviour
    {
        private readonly Dictionary<Guid, MeshFilter> _meshesByBuilder = new Dictionary<Guid, MeshFilter>();
        private readonly Dictionary<Guid, GameObject> _objectBuilderParents = new Dictionary<Guid, GameObject>();
        private IReadOnlyList<IFeatureBuilder> _builders;

        /// <summary>
        /// Called to initialize this instance and all of its builders
        /// </summary>
        /// <param name="builders">A list of builders to initialize</param>
        public void Initialize(IReadOnlyList<IFeatureBuilder> builders)
        {
            _builders = builders;

            foreach (var builder in _builders)
            {
                switch (builder)
                {
                    case IMeshBuilder meshBuilder:
                        _meshesByBuilder.Add(builder.Id, meshBuilder.CreateMeshComponents(this));
                        break;

                    case IObjectBuilder objectBuilder:
                        _objectBuilderParents.Add(builder.Id, objectBuilder.CreateParent(this));
                        break;
                }
            }
        }

        /// <summary>
        /// Called when a maptile is added to the scene.  This method generates
        /// meshes and objects for all of the features in this maptile.
        /// </summary>
        /// <param name="mapTile">The IMapTile containing data to build the mesh from.</param>
        public void Build(IMapTile mapTile)
        {
            foreach (var builder in _builders)
            {
                if (MathEx.IsBetween(mapTile.Level, builder.MinLOD, builder.MaxLOD))
                {
                    switch (builder)
                    {
                        case IMeshBuilder meshBuilder:
                            meshBuilder.Build(mapTile, _meshesByBuilder[builder.Id]);
                            break;

                        case IObjectBuilder objectBuilder:
                            objectBuilder.Build(mapTile, _objectBuilderParents[builder.Id]);
                            break;
                    }
                }
            }
        }

        /// <summary>
        /// Recursively sets a layer value for this <see cref="MapTileObject"/>
        /// and all of its child objects in the hierarchy.
        /// </summary>
        /// <param name="layer">The layer value to set</param>
        public void SetLayerOnAllChildren(int layer)
        {
            SetLayerOnChildren(gameObject, layer);
        }

        /// <summary>
        /// Called by <see cref="SetLayerOnAllChildren"/> to recursively
        /// set a layer value on all child objects in the hierarchy.
        /// </summary>
        /// <param name="gameObject">The <see cref="GameObject"/>
        /// whose layer should be set</param>
        /// <param name="layer">The layer value</param>
        private static void SetLayerOnChildren(GameObject gameObject, int layer)
        {
            gameObject.layer = layer;

            foreach (Transform child in gameObject.transform)
            {
                SetLayerOnChildren(child.gameObject, layer);
            }
        }

        /// <summary>
        /// Called when a maptile is removed from the scene.  This method cleans up
        /// meshes or other resources created by the <see cref="Build"/> method.
        /// </summary>
        public void Release()
        {
            foreach (var builder in _builders)
            {
                switch (builder)
                {
                    case IMeshBuilder meshBuilder:
                        meshBuilder.Release(_meshesByBuilder[builder.Id]);
                        break;

                    case IObjectBuilder objectBuilder:
                        objectBuilder.Release(_objectBuilderParents[builder.Id]);
                        break;
                }
            }
        }
    }
}
