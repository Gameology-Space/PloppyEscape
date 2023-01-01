using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudIndicatorColors : MonoBehaviour
{
    private GameManager gm;
    private Color color;

    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if((gm.cloud_line1) && (gameObject.name == "Line1Indicator"))
        {
            GetComponent<Renderer>().material.color = Color.red;
        }
        else
        {
            GetComponent<Renderer>().material.color = Color.white;
        }
        
    }

    // capsule
    // white and visible when line is active and playing
    // red when wrong note played
    // green when rigth not played
    // invisible when line not active

    // balls
    // visible when line is active
    // invisible when line is inactive

}
