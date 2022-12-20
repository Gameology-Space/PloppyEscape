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


    private void Update()
    {

    }




}
