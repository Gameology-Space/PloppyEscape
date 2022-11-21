// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Features;
using TMPro;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Builders.Labels
{
    /// <summary>
    /// A simple prefab for holding the TextMeshPro component that will display the label
    /// </summary>
    public class LabelObject : MonoBehaviour
    {
        [SerializeField]
        private TextMeshPro _textMesh;

        [SerializeField]
        private MeshRenderer _meshRenderer;

        [SerializeField]
        private Shader _labelShader;

        [SerializeField]
        private Transform _transform;

        public void Initialize(ILabelInfo labelInfo, GameObject parent)
        {
            _textMesh.autoSizeTextContainer = true;
            _textMesh.text = labelInfo.Text;
            _meshRenderer.material.shader = _labelShader;
            _transform.SetParent(parent.transform);
            _transform.localPosition = new Vector3(labelInfo.PosX, 0, labelInfo.PosY);
        }
    }
}
