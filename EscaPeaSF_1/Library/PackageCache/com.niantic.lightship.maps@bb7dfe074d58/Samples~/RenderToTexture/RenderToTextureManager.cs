// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Samples.Common.OrthographicCamera;
using Niantic.Lightship.Maps.Unity.Core;
using TMPro;
using UnityEngine;

namespace Niantic.Lightship.Maps.Samples.RenderToTexture
{
    public class RenderToTextureManager : MonoBehaviour
    {
        [SerializeField]
        private RenderTexture _mapRenderTexture;

        [SerializeField]
        private LightshipMap _lightshipMap;

        [SerializeField]
        private CanvasGroup _mapCanvas;

        [SerializeField]
        private TMP_Text _toggleMapButtonText;

        [SerializeField]
        private OrthographicCameraController _cameraController;

        private bool _isMapActive = true;

        private void Start()
        {
            // Set the render texture's size to match the size of its parent canvas.
            var rect = ((RectTransform)_mapCanvas.transform).rect;
            _mapRenderTexture.width = (int)rect.width;
            _mapRenderTexture.height = (int)rect.height;
        }

        /// <summary>
        /// This method is called when our toggle button is clicked to hide or
        /// show the map texture and enable or disable the map camera controller.
        /// </summary>
        public void ToggleMap()
        {
            // Toggle the map on or off
            _isMapActive = !_isMapActive;

            // Show or hide the map
            _lightshipMap.gameObject.SetActive(_isMapActive);
            _mapCanvas.alpha = _isMapActive ? 1.0f : 0.0f;

            // Set the toggle button's text to "hide" or "show"
            _toggleMapButtonText.text = _isMapActive ? "Hide Map" : "Show Map";

            // Enable or disable the camera controller
            _mapCanvas.blocksRaycasts = _isMapActive;
            _cameraController.enabled = _isMapActive;
        }
    }
}
