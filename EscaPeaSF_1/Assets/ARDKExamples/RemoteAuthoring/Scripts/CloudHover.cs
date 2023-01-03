using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudHover : MonoBehaviour
{

    public AudioClip line1, line2, line3;
    public AudioSource audioSource;
    private GameManager gm;

    private void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        audioSource = GetComponent<AudioSource>();
    }



    public void PlayLineClip()
    {
        if (gm.cloud_line1)
        {
            audioSource.clip = line1;
        }
        else if (gm.cloud_line2)
        {
            audioSource.clip = line2;
        }
        else if (gm.cloud_line3)
        {
            audioSource.clip = line3;
        }
        audioSource.Play();
    }
}