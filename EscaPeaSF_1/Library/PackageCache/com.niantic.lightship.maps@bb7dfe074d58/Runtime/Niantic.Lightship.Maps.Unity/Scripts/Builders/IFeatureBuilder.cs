// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;

namespace Niantic.Lightship.Maps.Unity.Builders
{
    /// <summary>
    /// The base type for all maptile feature builders
    /// </summary>
    public interface IFeatureBuilder
    {
        /// <summary>
        /// A unique id used internally to identify this builder
        /// </summary>
        Guid Id { get; }

        /// <summary>
        /// The minimum zoom level for this builder.  This property and <see cref="MaxLOD"/>
        /// define the range of maptile zoom levels in which this builder will be active.
        /// </summary>
        int MinLOD { get; }

        /// <summary>
        /// The maximum zoom level for this builder.  This property and <see cref="MinLOD"/>
        /// define the range of maptile zoom levels in which this builder will be active.
        /// </summary>
        int MaxLOD { get; }
    }
}
