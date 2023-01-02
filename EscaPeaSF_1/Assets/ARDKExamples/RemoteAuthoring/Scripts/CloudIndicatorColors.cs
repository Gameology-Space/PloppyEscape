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
        GetComponent<Renderer>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(gm.cloud_line1) 
        {
            if (gameObject.name == "Line1Indicator")
            {
                GetComponent<Renderer>().enabled = true;
                // green when it is correct note
                // blue if passed
                // red when it is incorrect
                if(gm.cloud_CorrectNote1)
                {
                    GetComponent<Renderer>().material.color = Color.green;
                }
                else
                {
                    GetComponent<Renderer>().material.color = Color.red;
                }
            }
            else if((gameObject.name == "b1-1") || (gameObject.name == "b1-2") || (gameObject.name == "b1-3"))
            {
                GetComponent<Renderer>().enabled = true;
                GetComponent<Renderer>().material.color = Color.yellow;
            }
        }
        else if(gm.cloud_line2)
        {
            if (gameObject.name == "Line1Indicator")
            {
                GetComponent<Renderer>().material.color = Color.blue;
            }

            if (gameObject.name == "Line2Indicator")
            {
                GetComponent<Renderer>().enabled = true;
                if (gm.cloud_CorrectNote2)
                {
                    GetComponent<Renderer>().material.color = Color.green;
                }
                else
                {
                    GetComponent<Renderer>().material.color = Color.red;
                }
            }
            else if ((gameObject.name == "b2-1") || (gameObject.name == "b2-2") || (gameObject.name == "b2-3") || (gameObject.name == "b2-4") || (gameObject.name == "b2-5"))
            {
                GetComponent<Renderer>().enabled = true;
                GetComponent<Renderer>().material.color = Color.yellow;
            }
        }
        else if(gm.cloud_line3)
        {
            if (gameObject.name == "Line2Indicator")
            {
                GetComponent<Renderer>().material.color = Color.blue;
            }

            if (gameObject.name == "Line3Indicator")
            {
                GetComponent<Renderer>().enabled = true;
                if (gm.cloud_CorrectNote3)
                {
                    GetComponent<Renderer>().material.color = Color.green;
                }
                else
                {
                    GetComponent<Renderer>().material.color = Color.red;
                }
            }
            else if ((gameObject.name == "b3-1") || (gameObject.name == "b3-2") || (gameObject.name == "b3-3"))
            {
                GetComponent<Renderer>().enabled = true;
                GetComponent<Renderer>().material.color = Color.yellow;
            }

        }
        else
        {
            GetComponent<Renderer>().material.color = Color.magenta;
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
