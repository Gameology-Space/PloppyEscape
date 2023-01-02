using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudHover : MonoBehaviour
{
    // The speed at which the object will spin
    public float spinSpeed = 0.0f;

    void Update()
    {
        // Rotate the object around the y-axis
        transform.Rotate(0, spinSpeed * Time.deltaTime, 0);
    }
}