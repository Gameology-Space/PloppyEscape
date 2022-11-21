// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.IO;
using Niantic.Lightship.Maps.Extensions;
using Niantic.Lightship.Maps.Proto;
using Niantic.Lightship.Maps.Unity.Core;
using UnityEditor;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders.BaseTypes
{
    /// <inheritdoc cref="IFeatureBuilder" />
    public abstract class FeatureBuilderBase : ScriptableObject, IFeatureBuilder
    {
        [SerializeField]
        private string _builderName;

        [Range(0, 17)]
        [SerializeField]
        private int _minLOD;

        [Range(0, 17)]
        [SerializeField]
        private int _maxLOD = 17;

        [SerializeField]
        private LayerKind _mapLayer = LayerKind.LAYER_UNDEFINED;

        [SerializeField]
        private FeatureKind[] _features = { };

        [SerializeField]
        protected Material[] _materials;

        protected string BuilderName => _builderName;
        protected LayerKind Layer => _mapLayer;
        protected FeatureKind[] Features => _features;

        /// <inheritdoc />
        public Guid Id { get; } = Guid.NewGuid();

        /// <inheritdoc />
        public int MinLOD => _minLOD;

        /// <inheritdoc />
        public int MaxLOD => _maxLOD;

        /// <summary>
        /// Builders may optionally implement this method if they need
        /// to perform any initialization or might need access to their
        /// parent <see cref="ILightshipMap"/> instance later on.
        /// </summary>
        /// <param name="lightshipMap">The map to which this builder belongs</param>
        public virtual void Initialize(ILightshipMap lightshipMap) { }

#if UNITY_EDITOR
        private void OnValidate()
        {
            _builderName =
                _builderName.NullIfEmptyOrWhitespace()
                ?? Path.GetFileNameWithoutExtension(AssetDatabase.GetAssetPath(this)).Replace("Builder", string.Empty);

            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }
#endif
    }
}
