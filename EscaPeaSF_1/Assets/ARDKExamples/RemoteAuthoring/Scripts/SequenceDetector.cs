using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SequenceDetector : MonoBehaviour
{
    //private Material bar1, bar2, bar3;
    //private GameObject test1;
    private GameManager gm;

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

    private string[] noteSequence2 =
    {
        "1-1-G4",
        "1-2-AS4"
    };

    private string[] noteSequence3 =
    {
        "1-3-A4",
        "1-1-G4"
    };

    // The index of the current button in the sequence.
    private int currentButtonIndex1 = 0;
    private int currentButtonIndex2 = 0;
    private int currentButtonIndex3 = 0;


    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();


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

    public void CheckSequence(string pressedKey)
    {
        // Check if the current button in the sequence has been pressed.
        if ((pressedKey == noteSequence1[currentButtonIndex1]) && (gm.cloud_line1))
        {
            // Increment the index to move to the next button in the sequence.
            currentButtonIndex1++;
            gm.cloud_CorrectNote = true;
            Debug.Log("S1 correct");

            // If we have reached the end of the sequence, reset the index to 0.
            if (currentButtonIndex1 == noteSequence1.Length)
            {
                currentButtonIndex1 = 0;

                // The sequence has been detected! Do something here.
                Debug.Log("Full correct sequence 1 detected!");
                gm.cloud_Sequence1 = true;
                gm.cloud_line1 = false;
                gm.cloud_line2 = true;
                currentButtonIndex2 = 0;
                //return true;
            }
        }
        else
        {
            currentButtonIndex1 = 0;
            gm.cloud_CorrectNote = false;
            //return false;
        }
    
        // Check if the current button in the sequence has been pressed.
        if (pressedKey == noteSequence2[currentButtonIndex2] && (gm.cloud_line2))
        {
            // Increment the index to move to the next button in the sequence.
            currentButtonIndex2++;
            gm.cloud_CorrectNote = true;
            Debug.Log("S2 correct");

            // If we have reached the end of the sequence, reset the index to 0.
            if (currentButtonIndex2 == noteSequence2.Length)
            {
                currentButtonIndex2 = 0;

                // The sequence has been detected! Do something here.
                Debug.Log("Full correct sequence 2 detected!");
                gm.cloud_Sequence2 = true;
                gm.cloud_line2 = false;
                gm.cloud_line3 = true;
                currentButtonIndex3 = 0;
                //return true;
            }
        }
        else
        {
            currentButtonIndex2 = 0;
            gm.cloud_CorrectNote = false;
            //return false;
        }


        // Check if the current button in the sequence has been pressed.
        if (pressedKey == noteSequence3[currentButtonIndex3] && (gm.cloud_line3))
        {
            // Increment the index to move to the next button in the sequence.
            currentButtonIndex3++;
            gm.cloud_CorrectNote = true;
            Debug.Log("S3 correct");

            // If we have reached the end of the sequence, reset the index to 0.
            if (currentButtonIndex3 == noteSequence3.Length)
            {
                currentButtonIndex3 = 0;

                // The sequence has been detected! Do something here.
                Debug.Log("Full correct sequence 3 detected!");
                gm.cloud_Sequence3 = true;
                gm.cloud_line3 = false;
   
                //return true;
            }
        }
        else
        {
            currentButtonIndex3 = 0;
            gm.cloud_CorrectNote = false;
            //return false;
        }
        //return false;
    }
}
