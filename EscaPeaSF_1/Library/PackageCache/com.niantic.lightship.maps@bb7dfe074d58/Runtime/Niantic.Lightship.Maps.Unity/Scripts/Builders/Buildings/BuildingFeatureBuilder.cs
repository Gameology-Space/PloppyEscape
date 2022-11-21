// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using Niantic.Lightship.Maps.Features;
using Niantic.Lightship.Maps.Geometry;
using Niantic.Lightship.Maps.Unity.Builders.BaseTypes;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders.Buildings
{
    /// <summary>
    /// A builder for <see cref="BuildingFeature"/>s
    /// </summary>
    [CreateAssetMenu(fileName = "NewBuildingBuilder", menuName = "Lightship Maps/Builders/Building Builder")]
    public class BuildingFeatureBuilder : MeshBuilder
    {
        [SerializeField]
        private float _minHeight;

        [SerializeField]
        private float _maxHeight = 0.2f;

        /// <inheritdoc />
        public override void Build(IMapTile mapTile, MeshFilter meshFilter)
        {
            var combineInstances = new List<CombineInstance>();

            foreach (var feature in mapTile.GetTileData(Layer))
            {
                if (feature is IBuildingFeature buildingFeature)
                {
                    var buildingMeshes = MakeMeshes(buildingFeature);
                    combineInstances.AddRange(buildingMeshes);
                }
            }

            if (combineInstances.Count == 0)
            {
                return;
            }

            var combinedMesh = new Mesh();
            combinedMesh.CombineMeshes(combineInstances.ToArray(), true, false);

            foreach (var inst in combineInstances)
            {
                DestroyImmediate(inst.mesh);
            }

            SetMeshForFilter(combinedMesh, meshFilter);
        }

        private List<CombineInstance> MakeMeshes(IBuildingFeature buildingData)
        {
            var height = Mathf.Clamp(buildingData.Height, _minHeight, _maxHeight);

            var pointCount = buildingData.Points.Length;
            var normals = new Vector3[pointCount];
            var uvs = new Vector2[pointCount];

            for (int i = 0; i < pointCount; i++)
            {
                normals[i] = Vector3.up;
                uvs[i] = new Vector2(0.25f, 0.25f);
            }

            var topMesh = new Mesh
            {
                vertices = MoveUp(buildingData.Points, height),
                uv = uvs,
                normals = normals,
                triangles = buildingData.Indices
            };

            var instances = new List<CombineInstance>
            {
                new CombineInstance { mesh = topMesh },
                new CombineInstance { mesh = GenerateWallMesh(buildingData.ExteriorEdges, height) }
            };

            return instances;
        }

        private static Vector3[] MoveUp(Vector3[] points, float height)
        {
            var delta = Vector3.up * height;
            var outPoints = new Vector3[points.Length];

            for (int i = 0; i < points.Length; ++i)
            {
                outPoints[i] = points[i] + delta;
            }

            return outPoints;
        }

        private static Mesh GenerateWallMesh(LineSegment[] exteriorEdges, float height)
        {
            var wallCount = exteriorEdges.Length;
            var vertices = new Vector3[wallCount * 4];
            var normals = new Vector3[vertices.Length];
            var triangles = new int[wallCount * 6];
            var uvs = new Vector2[vertices.Length];
            var heightOffset = Vector3.up * height;

            int vertexIndex = 0;
            int triIndex = 0;

            foreach (var exteriorEdge in exteriorEdges)
            {
                var edge = exteriorEdge.VertexB - exteriorEdge.VertexA;
                var normal = Vector3.Cross(Vector3.up, edge).normalized;

                // Vertices
                var vertexIndex0 = vertexIndex++;
                var vertexIndex1 = vertexIndex++;
                var vertexIndex2 = vertexIndex++;
                var vertexIndex3 = vertexIndex++;

                vertices[vertexIndex0] = exteriorEdge.VertexA;
                vertices[vertexIndex1] = exteriorEdge.VertexB;
                vertices[vertexIndex2] = exteriorEdge.VertexA + heightOffset;
                vertices[vertexIndex3] = exteriorEdge.VertexB + heightOffset;

                // Normals
                normals[vertexIndex0] = normal;
                normals[vertexIndex1] = normal;
                normals[vertexIndex2] = normal;
                normals[vertexIndex3] = normal;

                // Triangles
                triangles[triIndex++] = vertexIndex2;
                triangles[triIndex++] = vertexIndex1;
                triangles[triIndex++] = vertexIndex0;

                triangles[triIndex++] = vertexIndex2;
                triangles[triIndex++] = vertexIndex3;
                triangles[triIndex++] = vertexIndex1;
            }

            for (int i = 0; i < uvs.Length; i++)
            {
                uvs[i] = new Vector2(0.75f, 0.75f);
            }

            var mesh = new Mesh
            {
                vertices = vertices,
                uv = uvs,
                normals = normals,
                triangles = triangles
            };

            return mesh;
        }
    }
}
