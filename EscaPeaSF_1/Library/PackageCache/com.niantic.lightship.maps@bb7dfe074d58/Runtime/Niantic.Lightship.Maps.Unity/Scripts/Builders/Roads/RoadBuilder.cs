// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Niantic.Lightship.Maps.Features;
using Niantic.Lightship.Maps.Unity.Builders.BaseTypes;
using Niantic.Lightship.Maps.Unity.Utilities;
using UnityEngine;
using UnityEngine.Assertions;

namespace Niantic.Lightship.Maps.Unity.Builders.Roads
{
    /// <summary>
    /// A builder for road meshes.
    /// </summary>
    [CreateAssetMenu(fileName = "NewRoadBuilder", menuName = "Lightship Maps/Builders/Road Builder")]
    public class RoadBuilder : MeshBuilder
    {
        [SerializeField]
        private float _roadThickness;

        // Knobs to adjust smooth road building
        [Header("Smooth Road knobs")]
        [Tooltip("Road end cap vertex count.")]
        [Range(1, 8)]
        [SerializeField]
        private int _endCapPointCount = 4;

        // 1 is straight line, 0.85 = 31.8 degree deviation ... if bigger then insert smoothing points
        [Tooltip("Road - insert extra points when bend is more than cos(x degree)")]
        [Range(0.7f, 0.9f)]
        [SerializeField]
        private float _bendThreshold = 0.85f;

        // Sharpness of inserted curve (0.25 - fairly smooth, 0.15 - sharper turns) see algorithm below
        [Tooltip("Road smoothness factor. (0.1 - sharp -> 0.25 smooth turn)")]
        [Range(0.1f, 0.25f)]
        [SerializeField]
        private float _smoothFactor = 0.15f;

        private readonly List<LinearFeatureSet> _allFeatures = new List<LinearFeatureSet>();

        /// <inheritdoc />
        public override void Build(IMapTile mapTile, MeshFilter meshFilter)
        {
            SetFeaturesFromTile(mapTile);
            Parallel.ForEach(_allFeatures, AppraiseLinearFeature);

            var currVertIndex = 0;
            var currIndicesIndex = 0;

            foreach (var featureSet in _allFeatures)
            {
                featureSet.VertStartIndex = currVertIndex;
                featureSet.IndicesStartIndex = currIndicesIndex;
                currVertIndex += featureSet.NeededVerts;
                currIndicesIndex += featureSet.NeededIndices;
            }

            var featureMeshData = new RoadMeshData(currVertIndex, currIndicesIndex);

            Parallel.ForEach(_allFeatures, featureSet => ProcessRoadFeature(featureSet, featureMeshData));

            var mesh = MeshBuilderUtils.BuildSplitStreamMesh(
                "RoadMain",
                featureMeshData.Vertices,
                featureMeshData.Indices
            );

            SetMeshForFilter(mesh, meshFilter);
        }

        private void SetFeaturesFromTile(IMapTile tile)
        {
            _allFeatures.Clear();

            foreach (var featureKind in Features)
            {
                foreach (var feature in tile.GetTileData(Layer, featureKind))
                {
                    if (feature is ILinearFeature linearFeature)
                    {
                        _allFeatures.Add(new LinearFeatureSet(linearFeature));
                    }
                }
            }
        }

        private void ProcessRoadFeature(LinearFeatureSet featureSet, RoadMeshData roadMeshDatum)
        {
            var pointOffset = 0;
            var lastEndVerticesIndex = featureSet.VertStartIndex;
            var lastEndIndicesIndex = featureSet.IndicesStartIndex;

            foreach (var strip in featureSet.LinearFeature.LineStrips)
            {
                var startVerticesIndex = lastEndVerticesIndex;
                var startIndicesIndex = lastEndIndicesIndex;

                RoadBuilderUtils.CreateMiteredWidePolyline(
                    roadMeshDatum.Vertices,
                    roadMeshDatum.Indices,
                    startVerticesIndex,
                    startIndicesIndex,
                    featureSet.LinearFeature.Points,
                    pointOffset,
                    strip,
                    _roadThickness,
                    out lastEndVerticesIndex,
                    out lastEndIndicesIndex,
                    _endCapPointCount,
                    _bendThreshold,
                    _smoothFactor
                );

                pointOffset += strip;
            }

            Assert.AreEqual(lastEndVerticesIndex - featureSet.VertStartIndex, featureSet.NeededVerts);
            Assert.AreEqual(lastEndIndicesIndex - featureSet.IndicesStartIndex, featureSet.NeededIndices);
        }

        private void AppraiseLinearFeature(LinearFeatureSet featureSet)
        {
            var offset = 0;
            foreach (var strip in featureSet.LinearFeature.LineStrips)
            {
                if (strip < 2)
                {
                    continue;
                }

                // Add vertex and index counts for end caps
                featureSet.NeededVerts += _endCapPointCount * 2; // Two end caps
                featureSet.NeededIndices += _endCapPointCount * 2 * 3; // Three indices per vert per end cap

                // Count smoothing verts and indices with mocked methods
                for (var i = 0; i < strip - 1; ++i)
                {
                    if (i == 0)
                    {
                        // Two starting vertices for first strip
                        featureSet.NeededVerts += 2;
                    }

                    if (i < strip - 2)
                    {
                        var tangent0 = (
                            featureSet.LinearFeature.Points[1 + offset + i]
                            - featureSet.LinearFeature.Points[offset + i]
                        ).normalized;

                        var tangent1 = (
                            featureSet.LinearFeature.Points[2 + offset + i]
                            - featureSet.LinearFeature.Points[1 + offset + i]
                        ).normalized;

                        if (Vector3.Dot(tangent0, tangent1) < _bendThreshold)
                        {
                            RoadBuilderUtils.CalculateSmoothingVerts(
                                featureSet.LinearFeature.Points[i + offset],
                                featureSet.LinearFeature.Points[i + 1 + offset],
                                featureSet.LinearFeature.Points[i + 2 + offset],
                                ref featureSet.NeededVerts,
                                ref featureSet.NeededIndices,
                                _bendThreshold,
                                3,
                                _smoothFactor
                            );
                            continue;
                        }
                    }

                    featureSet.NeededVerts += 2;
                    featureSet.NeededIndices += 6;
                }

                offset += strip;
            }
        }
    }
}
