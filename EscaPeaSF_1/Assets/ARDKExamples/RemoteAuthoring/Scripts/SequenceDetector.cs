using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SequenceDetector : MonoBehaviour
{
    private KeyCode[] buttonSequence =
    {
        KeyCode.A,
        KeyCode.S,
        KeyCode.D
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
        // Check if the current button in the sequence has been pressed.
        if (Input.GetKeyDown(buttonSequence[currentButtonIndex]))
        {
            // Increment the index to move to the next button in the sequence.
            currentButtonIndex++;

            // If we have reached the end of the sequence, reset the index to 0.
            if (currentButtonIndex == buttonSequence.Length)
            {
                currentButtonIndex = 0;

                // The sequence has been detected! Do something here.
                Debug.Log("Button sequence detected!");
            }
        }
        // If the wrong button was pressed, reset the index to 0.
        else
        {
            currentButtonIndex = 0;
        }
    }
}
