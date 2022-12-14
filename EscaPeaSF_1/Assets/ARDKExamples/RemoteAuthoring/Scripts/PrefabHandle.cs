using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDKExamples.RemoteAuthoring;

public class PrefabHandle : MonoBehaviour
{
    GameManager gameManager;

    // Start is called before the first frame update
    void Start()
    {
        gameManager = Object.FindObjectOfType<GameManager>();
        gameObject.GetComponent<Renderer>().enabled = false;
        //gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(gameManager.explore_Hint1)
        {
            gameObject.GetComponent<Renderer>().enabled = true;
            //gameObject.SetActive(false);
            Debug.Log("Setting wallbox on");
        }
        else
        {
            gameObject.GetComponent<Renderer>().enabled = false;
        }
    }

}
