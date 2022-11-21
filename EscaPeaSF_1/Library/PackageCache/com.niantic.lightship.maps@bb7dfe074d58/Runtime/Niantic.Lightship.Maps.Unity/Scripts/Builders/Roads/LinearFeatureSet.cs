// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Features;

namespace Niantic.Lightship.Maps.Unity.Builders.Roads
{
    internal class LinearFeatureSet
    {
        public LinearFeatureSet(ILinearFeature linearFeature)
        {
            LinearFeature = linearFeature;
        }

        public int NeededVerts;
        public int VertStartIndex;
        public int NeededIndices;
        public int IndicesStartIndex;
        public readonly ILinearFeature LinearFeature;
    }
}
