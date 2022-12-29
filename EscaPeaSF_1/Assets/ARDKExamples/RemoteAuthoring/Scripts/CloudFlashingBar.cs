using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudFlashingBar : MonoBehaviour
{

    public string soundNote;

    [SerializeField]
    Color colorEnd;

    [SerializeField]
    [Range(0,2)]
    float duration;


    public void changeColorOnce()
    {

        Debug.Log("Color Changed");

        StartCoroutine(FadeToColor(colorEnd, duration));
    }


    IEnumerator FadeToColor(Color color, float duration)
    {
        Color startingColor = Color.clear;//GetComponent<Renderer>().material.color;
        float elapsedTime = 0f;

        while (elapsedTime < duration / 1.5)
        {
            GetComponent<Renderer>().material.color = Color.Lerp(startingColor, color, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        while ((elapsedTime >= duration/1.5) && (elapsedTime < duration))
        {
            GetComponent<Renderer>().material.color = Color.Lerp(color, startingColor, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        //GetComponent<Renderer>().material.color = color;
    }
}
