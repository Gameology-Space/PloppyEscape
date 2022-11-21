// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders.Roads
{
    internal class RoadMeshData
    {
        public RoadMeshData(int vertCount, int indexCount)
        {
            Vertices = new Vector3[vertCount];
            Indices = new int[indexCount];
        }

        public readonly Vector3[] Vertices;
        public readonly int[] Indices;
    }
}
