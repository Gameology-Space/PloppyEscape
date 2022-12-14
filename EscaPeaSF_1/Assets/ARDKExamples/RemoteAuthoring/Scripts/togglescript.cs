using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDKExamples.RemoteAuthoring;

public class togglescript : MonoBehaviour
{
    GameManager gameManager;

    // Start is called before the first frame update
    void Start()
    {
        gameManager = Object.FindObjectOfType<GameManager>();
        //gameObject.GetComponent<Renderer>().enabled = false;
        //gameObject.SetActive(false);
    }


    public void ToggleHint1()
    {
        if(gameManager.explore_Hint1)
        {
            gameManager.explore_Hint1 = false;
        }
        else
        {
            gameManager.explore_Hint1 = true;
        }
    }
}
