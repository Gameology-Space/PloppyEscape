using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDKExamples.RemoteAuthoring;
using UnityEngine.UI;
using System;
//using TMPRo;

public class UIFunctionsMap : MonoBehaviour
{
    public Text transferTemp;
    public GameObject ploppyItemMenu;
    public RawImage playerIcon;
    public Texture cloudTexture;
    public Texture exploreTexture;
    public Texture fountainTexture;
    public Text currentObjectTxt;
    public Button locate;

    
    public void onExplorePressed()
    {
        Debug.Log("explore puzzle pressed");
        GameManager.Instance.puzzleID = 1;
        transferTemp.text = 1.ToString();
        ploppyItemMenu.SetActive(false);
        playerIcon.texture = exploreTexture;
        playerIcon.canvasRenderer.SetAlpha(1.0f);
        currentObjectTxt.text = "Explore";
        locate.gameObject.SetActive(true);
    }

    public void onCloudPressed()
    {
        Debug.Log("cloud puzzle pressed");
        GameManager.Instance.puzzleID = 0;
        transferTemp.text = 0.ToString();
        ploppyItemMenu.SetActive(false);
        playerIcon.texture = cloudTexture;
        playerIcon.canvasRenderer.SetAlpha(1.0f);
        currentObjectTxt.text = "Cloud";
        locate.gameObject.SetActive(true);
    }

    public void onFountainPressed()
    {
        Debug.Log("Fountain puzzle pressed");
        GameManager.Instance.puzzleID = 2;
        transferTemp.text = 2.ToString();
        ploppyItemMenu.SetActive(false);
        playerIcon.texture = fountainTexture;
        playerIcon.canvasRenderer.SetAlpha(1.0f);
        currentObjectTxt.text = "Fountain";
        locate.gameObject.SetActive(true);
    }

    public void onPloppyPressed()
    {
        ploppyItemMenu.SetActive(true);
    }

    public void onStartLocationScanPressed()
    {
        //_locationSelectView.LoadButtonClicked();
        //ploppyDetail.SetActive(false);

    }

    private void Start()
    {
        //transferTemp = GameObject.Find("Transfer").GetComponent<Text>();
        //_locationSelectView = LocationMenu.GetComponent<LocationSelectView>();
        
        //Debug.Log(_locationSelectView.name);

        playerIcon.canvasRenderer.SetAlpha(0.0f);
        //locate.gameObject.SetActive(false);
    }

    private void Update()
    {
        // var touchPosition = Vector3.zero;
        // bool touchDetected = false;
        
        // if (Input.touchCount == 1)
        // {
        //     if (Input.touches[0].phase == TouchPhase.Ended)
        //     {
        //         touchPosition = Input.touches[0].position;
        //         touchDetected = true;
        //     }
        // }

        // if (Input.GetMouseButtonDown(0))
        // {
        //     touchPosition = Input.mousePosition;
        //     touchDetected = true;
        // }

        // if (touchDetected)
        // {
            
        //    //GameManager.Instance.puzzleID = Convert.ToInt32(transferTemp.text);
        // }




    }




}
