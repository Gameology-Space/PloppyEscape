// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Unity.Core;
using UnityEngine;

namespace Niantic.Lightship.Maps.Samples.OrbitCamera
{
    public class PlayerController : MonoBehaviour
    {
        [SerializeField]
        private LightshipMap _lightshipMap;

        [SerializeField]
        private float _editorMovementSpeed;

        [SerializeField]
        private Camera _camera;

        private Vector3 _targetPosition;
        private Vector3 _currentPosition;

        private void Start()
        {
            _lightshipMap.MapOriginChanged += OnMapOriginChanged;
        }

        private void OnMapOriginChanged(LatLng center)
        {
            var offset = _targetPosition - _currentPosition;
            _currentPosition = _lightshipMap.LatLngToScene(center);
            _targetPosition = _currentPosition + offset;
        }

        private void Update()
        {
            UpdateEditorInput();
            UpdatePlayerPosition();
            UpdateMapViewPosition();
        }

        private void UpdateEditorInput()
        {
            var movementVector = Vector3.zero;

            if (Input.GetKey(KeyCode.W))
            {
                movementVector += Vector3.forward;
            }
            if (Input.GetKey(KeyCode.S))
            {
                movementVector -= Vector3.forward;
            }
            if (Input.GetKey(KeyCode.A))
            {
                movementVector += Vector3.left;
            }
            if (Input.GetKey(KeyCode.D))
            {
                movementVector += Vector3.right;
            }

            // Make editor movement relative to the direction the camera is facing
            var cameraForward = _camera.transform.forward;
            float yRotation = Vector3.SignedAngle(Vector3.forward, cameraForward, Vector3.up);
            movementVector = Quaternion.AngleAxis(yRotation, Vector3.up) * movementVector;

            _targetPosition += movementVector * (_editorMovementSpeed * Time.deltaTime);
        }

        private void UpdatePlayerPosition()
        {
            var offset = _currentPosition - _targetPosition;
            float movementDistance = offset.magnitude;

            if (movementDistance > 200.0f)
            {
                // Jump rather than interpolate if the target position is really far away
                _currentPosition = _targetPosition;
            }
            else if (movementDistance > 0.1f)
            {
                // Rotate the player to face their movement direction, as long as it's not a stationary
                var rotation = Quaternion.LookRotation(offset.normalized, Vector3.up);
                transform.rotation = rotation;
            }

            _currentPosition = Vector3.Lerp(_currentPosition, _targetPosition, Time.deltaTime / 2.0f);
            transform.position = _currentPosition;
        }

        private void UpdateMapViewPosition()
        {
            // Center the Lightship map at the player's location
            var playerPosition = transform.position;
            playerPosition.y = 0.0f;
            _lightshipMap.SetMapCenter(playerPosition);
        }
    }
}
