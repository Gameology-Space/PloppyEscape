using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;


public class MapIconMarker : MonoBehaviour
{
    private GameManager gm;
    //ParticleSystem[] particleSystems;
    private ParticleSystem wonMarker;
    private ParticleSystem locateHereMarker;
    private Text arrowTransfer;

    Dictionary<string, ParticleSystem> particleSystems = new
    Dictionary<string, ParticleSystem>();

    void Start()
    {
        

        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        //particleSystems = GetComponentsInChildren<ParticleSystem>();

        string[] names = { "MarkerWin", "MarkerHere" };
        ParticleSystem[] psArray = GetComponentsInChildren<ParticleSystem>();

        foreach (string name in names)
        {
            foreach (ParticleSystem ps in psArray)
            {
                if (ps.name == name)
                {
                    particleSystems[name] = ps;
                    break;
                }
            }
        }

        wonMarker = particleSystems["MarkerWin"];
        locateHereMarker = particleSystems["MarkerHere"];
    }





    // Update is called once per frame
    void Update()
    {
        if (gm.cloud_Complete && name == "PuzzlePrefabCloud(Clone)")
        {
            if(wonMarker.IsAlive())
            {
                //do nothing if it's alive
            }
            else
            {
                wonMarker.Play();
            }
        }

        if (gm.fountain_Completed && name == "PuzzlePrefabFountain(Clone)")
        {
            if (wonMarker.IsAlive())
            {
                //do nothing if it's alive
            }
            else
            {
                wonMarker.Play();
            }
        }

        if (gm.explore_Completed && name == "PuzzlePrefabExploratorium(Clone)")
        {
            if (wonMarker.IsAlive())
            {
                //do nothing if it's alive
            }
            else
            {
                wonMarker.Play();
            }
        }

        arrowTransfer = GameObject.Find("TransferArrow").GetComponent<Text>();


        bool value = false;

        if (arrowTransfer.text == "0")
        {
            value = false;
        }
        else if(arrowTransfer.text == "1")
        {
            value = true;
        }



        // arrow marker

        if (gm.puzzleID == 0 && value && name == "PuzzlePrefabCloud(Clone)")
        {
            if (locateHereMarker.IsAlive())
            {
                //do nothing if it's alive
            }
            else
            {
                locateHereMarker.Play();
            }
        }

        if (gm.puzzleID == 1 && value && name == "PuzzlePrefabExploratorium(Clone)")
        {
            if (locateHereMarker.IsAlive())
            {
                //do nothing if it's alive
            }
            else
            {
                locateHereMarker.Play();
            }
        }

        if (gm.puzzleID == 2 && value && name == "PuzzlePrefabFountain(Clone)")
        {
            if (locateHereMarker.IsAlive())
            {
                //do nothing if it's alive
            }
            else
            {
                locateHereMarker.Play();
            }
        }
    }
}
