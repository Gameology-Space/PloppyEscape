// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Unity.Core;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders.BaseTypes
{
    /// <inheritdoc cref="IObjectBuilder" />
    public abstract class ObjectBuilder : FeatureBuilderBase, IObjectBuilder
    {
        /// <inheritdoc />
        public GameObject CreateParent(MapTileObject mapTileObject)
        {
            var parentGameObject = new GameObject { name = $"{BuilderName} Objects" };
            parentGameObject.transform.SetParent(mapTileObject.transform);
            parentGameObject.transform.localPosition = Vector3.zero;
            parentGameObject.transform.localScale = Vector3.one;

            return parentGameObject;
        }

        /// <inheritdoc />
        public abstract void Build(IMapTile mapTile, GameObject parent);

        /// <inheritdoc />
        public abstract void Release(GameObject parent);
    }
}
