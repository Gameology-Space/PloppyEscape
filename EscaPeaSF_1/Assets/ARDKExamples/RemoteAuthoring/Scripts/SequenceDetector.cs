using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SequenceDetector : MonoBehaviour
{
    private string[] noteSequence =
    {
        "1-1-G4",
        "1-2-AS4",
        "1-3-A4"
    };

    // The index of the current button in the sequence.
    private int currentButtonIndex = 0;


    // Start is called before the first frame update
    void Start()
    {    
    }


    // Update is called once per frame
    void Update()
    {
    }

    public bool CheckSequence(string pressedKey)
    {
        // Check if the current button in the sequence has been pressed.
        if (pressedKey == noteSequence[currentButtonIndex])
        {
            // Increment the index to move to the next button in the sequence.
            currentButtonIndex++;
            Debug.Log("one correct note");

            // If we have reached the end of the sequence, reset the index to 0.
            if (currentButtonIndex == noteSequence.Length)
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
            return false;
        }

        return false;
    }
}
