// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using TMPro;
using UnityEngine;
//using Niantic.ARDKExamples.RemoteAuthoring;

namespace Niantic.Lightship.Maps.Samples.GameSample
{
    /// <summary>
    /// Simple UI controller for the MapGame, it switches between a couple of screens and reacts to
    /// various button presses and keeps resources UI updated
    /// </summary>
    public class MapGameUIController : MonoBehaviour
    {
        [SerializeField]
        private MapGameMapInteractions _mapInteractibles;

        [SerializeField]
        private PlayerLocationController _player;

        [SerializeField]
        private GameObject _errorScreen;

        [SerializeField]
        private GameObject _gameOverScreen;

        [SerializeField]
        private TMP_Text _errorText;

        public GameObject instructionScreen;

        private void Start()
        {
            _gameOverScreen.SetActive(false);
            _player.OnGPSError += OnGpsError;
        }

        private void OnGpsError(string errorMessage)
        {
            _errorText.text = errorMessage;
            _errorScreen.SetActive(true);
        }

        private void OnDestroy()
        {
            if (_player != null)
            {
                _player.OnGPSError -= OnGpsError;
            }
        }

        public void OnGameOverContinuePressed()
        {
            _gameOverScreen.SetActive(false);
        }

        public void closeInstruction()
        {
            instructionScreen.SetActive(false);
        }

        public void openInstruction()
        {
            instructionScreen.SetActive(true);
        }

    }
}
