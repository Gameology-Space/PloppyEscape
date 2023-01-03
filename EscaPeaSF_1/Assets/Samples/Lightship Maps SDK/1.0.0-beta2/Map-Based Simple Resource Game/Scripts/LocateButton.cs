using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using Niantic.Lightship.Maps.Samples.GameSample;


namespace Niantic.Lightship.Maps.Samples.GameSample
{
    public class LocateButton : MonoBehaviour
    {
        public Text transfer;
        public GameObject playerHolder;
        public GameObject playerIcon;
        public Text arrowMarker;
        private PlayerLocationController playerLocationController;
        
        
        // Start is called before the first frame update
        void Start()
        {
            playerLocationController = playerHolder.GetComponent<PlayerLocationController>();
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void onLocatePressed()
        {
            playerIcon.SetActive(false);
            arrowMarker.text = "1";
            StartCoroutine(TurnBackOn());
            

            if (Convert.ToInt32(transfer.text) == 0)
            {
                Debug.Log("0");
                playerLocationController.LocatePuzzle(37.79639f, -122.39814f); //cloud
            }
            else if (Convert.ToInt32(transfer.text) == 1)
            {
                Debug.Log("1");
                playerLocationController.LocatePuzzle(37.800644999999996f, -122.398381f); //explore

            }
            else if (Convert.ToInt32(transfer.text) == 2)
            {
                Debug.Log("2");
                playerLocationController.LocatePuzzle(37.797607f, -122.39887f); //fountain

            }
            else
            {
                Debug.Log("nothing selected");
            }
        }

        IEnumerator TurnBackOn()
        {
            yield return new WaitForSeconds(5);
            playerIcon.SetActive(true);
            playerLocationController.GoBackAfterLocate();
            arrowMarker.text = "0";
        }
    }
}
