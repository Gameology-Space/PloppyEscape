using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SequenceDetector : MonoBehaviour
{
    //private Material bar1, bar2, bar3;
    //private GameObject test1;

    private string[] noteSequence1 =
    {
        "1-1-G4",
        "1-2-AS4",
        "1-3-A4",
        "1-1-G4",
        "1-2-AS4",
        "1-2-AS4",
        "1-3-A4",
        "1-3-A4",
        "1-1-G4",
    };

    // The index of the current button in the sequence.
    private int currentButtonIndex = 0;


    // Start is called before the first frame update
    void Start()
    {

        // -------- question for Niantic --------------
        // why can't anchor restored object be found?
        // --------------------------------------------


        //test1 = GameObject.Find("Line1Indicator");
        //Debug.Log(test1.name);
        //test1.GetComponent<Renderer>().material.color = Color.red;

        //bar1 = GameObject.Find("Line1Indicator").GetComponent<Renderer>().material;

        //if(bar1 == null)
        //{
        //    Debug.Log("no bar1");
        //}
        //else
        //{
        //    Debug.Log("found it");
        //}
        //bar1.color = Color.blue;


        //bar2 = GameObject.Find("Line2Indicator").GetComponent<Renderer>().material;
        //bar3 = GameObject.Find("Line3Indicator").GetComponent<Renderer>().material;
    }

    public bool CheckSequence(string pressedKey)
    {
        // Check if the current button in the sequence has been pressed.
        if (pressedKey == noteSequence1[currentButtonIndex])
        {
            // Increment the index to move to the next button in the sequence.
            currentButtonIndex++;
            //bar1.color = Color.green;
            Debug.Log("one correct note");

            // If we have reached the end of the sequence, reset the index to 0.
            if (currentButtonIndex == noteSequence1.Length)
            {
                currentButtonIndex = 0;

                // The sequence has been detected! Do something here.
                Debug.Log("Full correct sequence detected!");
                return true;
            }
        }
        else
        {
            currentButtonIndex = 0;
            Debug.Log("Wrong Note played");
            //bar1.color = Color.red;
            return false;
        }

        return false;
    }
}
