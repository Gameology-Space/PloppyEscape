// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Unity.MapLayers.Components;
using UnityEngine;
using UnityEngine.UI;

namespace Niantic.Lightship.Maps.Samples.GameSample
{
    /// <summary>
    /// This class checks for input for touching the map, both in tapping on resource
    /// features and for placing new structures
    ///
    /// ScreenPointToLatLong shows an example of converting a screen touch position to a
    /// coordinate on the map in (Latitude Longitude)
    /// </summary>
    public class MapGameMapInteractions : MonoBehaviour
    {
        [SerializeField]
        private Camera _mapCamera;

        [SerializeField]
        private LightshipMap _lightshipMap;
        public Text transferID;

        private void Update()
        {
            var touchPosition = Vector3.zero;
            bool touchDetected = false;

            if (Input.touchCount == 1)
            {
                if (Input.touches[0].phase == TouchPhase.Ended)
                {
                    touchPosition = Input.touches[0].position;
                    touchDetected = true;
                }
            }

            if (Input.GetMouseButtonDown(0))
            {
                touchPosition = Input.mousePosition;
                touchDetected = true;
            }

            if (touchDetected)
            {

                CheckForInteractableTouch(touchPosition);
            }
        }

        private LatLng ScreenPointToLatLong(Vector3 screenPosition)
        {
            var clickRay = _mapCamera.ScreenPointToRay(screenPosition);
            var pointOnMap = clickRay.origin + clickRay.direction * (-clickRay.origin.y / clickRay.direction.y);
            return _lightshipMap.SceneToLatLng(pointOnMap);
        }


        // --Ploppy--
        // Ray cast to see where player is pointing
        // Use this for Ploppy!
        private void CheckForInteractableTouch(Vector3 touchPosition)
        {
            var touchRay = _mapCamera.ScreenPointToRay(touchPosition);

            // raycast into scene and see if we hit a map feature
            if (!Physics.Raycast(touchRay, out var hitInfo))
            {
                return;
            }

            // check if the collider we hit is a feature
            var hitResourceItem = hitInfo.collider.GetComponent<PuzzleDetails>();
            if (hitResourceItem == null)
            {
                return;
            }


            // --Ploppy-- 
            // Add action if button is pressed here

            Debug.Log(hitResourceItem.puzzleName);
            Debug.Log(hitResourceItem.puzzleDifficulty);
            Debug.Log(hitResourceItem.puzzleClear);
            
            transferID.text = hitResourceItem.puzzleID.ToString();
            Debug.Log(transferID.text);

            // spawn an animated floating text to show resources being gained
            //var floatingTextPosition = hitInfo.point + Vector3.up * 20.0f;
            // var forward = floatingTextPosition - _mapCamera.transform.position;
            // var rotation = Quaternion.LookRotation(forward, Vector3.up);
            // var floatText = Instantiate(_floatingTextPrefab, floatingTextPosition, rotation);
            // floatText.SetText($"+{amount} {hitResourceItem.ResourceType.ToString()}");
        }
    }
}
