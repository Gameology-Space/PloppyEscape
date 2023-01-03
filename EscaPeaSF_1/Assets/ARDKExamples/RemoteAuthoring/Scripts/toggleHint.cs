using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class toggleHint : MonoBehaviour
{
    public GameObject hintUI;
    public GameManager gameManager;
    private Text hint1, hint2, hint3, hint4;

    public void ToggleHintUI()
    {
        if (hintUI.activeSelf)
        {
            hintUI.SetActive(false);
        }
        else
        {
            hintUI.SetActive(true);
        }

    }

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        hint1 = GameObject.Find("Hint1").GetComponent<Text>();
        hint2 = GameObject.Find("Hint2").GetComponent<Text>();
        hint3 = GameObject.Find("Hint3").GetComponent<Text>();
        hint4 = GameObject.Find("Hint4").GetComponent<Text>();
    }

    private void Update()
    {
        HintUpdate();

    }

    private void HintUpdate()
    {
        if(gameManager.puzzleID == 0) // cloud
        {
            hint1.text = "1. Turn up the sound volume.";
            hint2.text = "2. The cloud sings";
            hint3.text = "3. Play melody 1";
            hint4.text = "4. Play the rest";
        }
        else if (gameManager.puzzleID == 1) //explore
        {
            hint1.text = "1. How to power Solar Panels?";
            if(gameManager.explore_SunIsPlaced)
            {
                hint1.color = Color.grey;
            }
            hint2.text = "2. Flip a switch, see what happens.";
            if(gameManager.explore_Panel1_Handle || gameManager.explore_Panel2_Handle || gameManager.explore_Panel3_Handle || gameManager.explore_Panel4_Handle)
            {
                hint2.color = Color.grey;
            }
            hint3.text = "3. Provide power to the building.";
            if(gameManager.explore_BuildingHasPower)
            {
                hint3.color = Color.gray;
            }
            hint4.text = "4. Supply extra power to the grid";
            if(gameManager.explore_GridHasPower)
            {
                hint4.color = Color.gray;
            }
        }
        else if (gameManager.puzzleID == 2) //fountain
        {
            hint1.text = "1. What is this called?";
            hint2.text = "2. Find and read the sign.";
            hint3.text = "3. Enter a password at each table.";
            hint4.text = "";
        }
        else
        {
            hint1.text = "";
            hint2.text = "";
            hint3.text = "";
            hint4.text = "";
        }
    }
}
