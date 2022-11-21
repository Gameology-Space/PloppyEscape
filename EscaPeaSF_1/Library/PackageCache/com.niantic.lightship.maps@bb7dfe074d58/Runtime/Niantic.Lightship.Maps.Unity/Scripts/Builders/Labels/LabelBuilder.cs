// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Features;
using Niantic.Lightship.Maps.Unity.Builders.BaseTypes;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders.Labels
{
    /// <summary>
    /// A builder for labels whose data come from <see cref="ILabelInfo"/>s
    /// on a set of <see cref="IMapTileFeature"/> instances.
    /// </summary>
    [CreateAssetMenu(fileName = "NewLabelBuilder", menuName = "Lightship Maps/Builders/Label Builder")]
    public class LabelBuilder : ObjectBuilder
    {
        [SerializeField]
        private LabelObject _labelPrefab;

        /// <inheritdoc />
        public override void Build(IMapTile mapTile, GameObject parent)
        {
            if (Features.Length == 0)
            {
                AddLabelsForLayer(mapTile, parent);
            }
            else
            {
                AddLabelsForLayerAndFeatures(mapTile, parent);
            }
        }

        /// <inheritdoc />
        public override void Release(GameObject parent)
        {
            foreach (Transform child in parent.transform)
            {
                Destroy(child.gameObject);
            }
        }

        private void AddLabelsForLayer(IMapTile mapTile, GameObject parent)
        {
            var features = mapTile.GetTileData(Layer);

            foreach (var feature in features)
            {
                AddLabel(feature.Label, parent);
            }
        }

        private void AddLabelsForLayerAndFeatures(IMapTile mapTile, GameObject parent)
        {
            foreach (var featureKind in Features)
            {
                var features = mapTile.GetTileData(Layer, featureKind);

                foreach (var feature in features)
                {
                    AddLabel(feature.Label, parent);
                }
            }
        }

        private void AddLabel(ILabelInfo labelInfo, GameObject parent)
        {
            if (!string.IsNullOrEmpty(labelInfo?.Text))
            {
                var labelObject = Instantiate(_labelPrefab);
                labelObject.Initialize(labelInfo, parent);
            }
        }
    }
}
