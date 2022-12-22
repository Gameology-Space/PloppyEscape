using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDKExamples.RemoteAuthoring;
using UnityEngine.UI;
using System;


public class UIFunctions : MonoBehaviour
{
    private GameManager gameManager;
    public Texture cloudPicture;
    public Texture explorePicture;
    public Texture fountainPicture;
    public RawImage detailImg;
    [HideInInspector] public LocationSelectView locationSelectView;
    public GameObject ploppyDetailUI;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        detailImg = GameObject.Find("DetailImage").GetComponent<RawImage>();
        locationSelectView = GameObject.Find("LocationMenu-Panel").GetComponent<LocationSelectView>();

        if (gameManager.puzzleID == 0)
        {
            detailImg.texture = cloudPicture;
        }
        else if(gameManager.puzzleID == 1)
        {
            detailImg.texture = explorePicture;
        }
        else if(gameManager.puzzleID == 2)
        {
            detailImg.texture = fountainPicture;
        }
    }

    public void OnStartLocationScanPressed()
    {
        locationSelectView.LoadButtonClicked();
        ploppyDetailUI.SetActive(false);

    }

    public void OnReloadPressed()
    {
        ploppyDetailUI.SetActive(true);
        if (gameManager.puzzleID == 0)
        {
            gameManager.cloud_Complete = false;
            gameManager.cloud_Sequence1 = false;
            gameManager.cloud_Sequence2 = false;
            gameManager.cloud_Sequence3 = false;
        }
        else if (gameManager.puzzleID == 1)
        {
            gameManager.explore_BuildingHasPower = false;
            gameManager.explore_Completed = false;
            gameManager.explore_GridHasPower = false;
            gameManager.explore_Panel1_Handle = false;
            gameManager.explore_Panel2_Handle = false;
            gameManager.explore_Panel3_Handle = false;
            gameManager.explore_Panel4_Handle = false;
            gameManager.explore_SunIsPlaced = false;
        }
        else if (gameManager.puzzleID == 2)
        {
            gameManager.fountain_Completed = false;
            gameManager.fountain_Fall = false;
            gameManager.fountain_Spring = false;
            gameManager.fountain_Summer = false;
            gameManager.fountain_Winter = false;
        }

    }


    private void Update()
    {

    }




}
