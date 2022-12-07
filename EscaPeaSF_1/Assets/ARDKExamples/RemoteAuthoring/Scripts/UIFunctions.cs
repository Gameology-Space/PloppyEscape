using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDKExamples.RemoteAuthoring;
using UnityEngine.UI;
using System;

public class UIFunctions : MonoBehaviour
{
    public Text transferTemp;
    
    public void onExplorePressed()
    {
        Debug.Log("explore puzzle pressed");
        GameManager.Instance.puzzleID = 11;
    }

    public void onCloudPressed()
    {
        Debug.Log("cloud puzzle pressed");
        GameManager.Instance.puzzleID = 1;
    }

    public void onFountainPressed()
    {
        Debug.Log("Fountain puzzle pressed");
        GameManager.Instance.puzzleID = 7;
    }

// -------------- test sites --------------------
    public void onQuarryPressed()
    {
        Debug.Log("Quarry puzzle pressed");
        GameManager.Instance.puzzleID = 8;

    }

    public void onNummiPressed()
    {
        Debug.Log("Nummi puzzle pressed");
        GameManager.Instance.puzzleID = 10;
    }

    public void onEnsanadaPressed()
    {
        Debug.Log("Ensanada");
        GameManager.Instance.puzzleID = 9;
    }
    // -------------- test sites --------------------

    private void Start()
    {
        transferTemp = GameObject.Find("Transfer").GetComponent<Text>();
    }

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
            
           GameManager.Instance.puzzleID = Convert.ToInt32(transferTemp.text);
        }
    }


}
