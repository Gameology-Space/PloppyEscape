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

    private AudioSource audioSource;


    public void changeColorOnce()
    {
        StartCoroutine(FadeToColor(colorEnd, duration));
        audioSource = GetComponent<AudioSource>();
        audioSource.Play();
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

    }
}
