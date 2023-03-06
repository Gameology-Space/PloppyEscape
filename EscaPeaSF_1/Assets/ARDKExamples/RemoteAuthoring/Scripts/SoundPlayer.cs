using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundPlayer : MonoBehaviour
{
    [SerializeField] AudioClip correctMove, mapMusic, puzzleMusic, UIClicked, winCloud, winExplore, winFountain;
    [SerializeField] AudioClip playButtonAppear;

    private AudioSource audioSource;

    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    private void Update()
    {
        
    }

    public void playCorrectMove()
    {
        audioSource.clip = correctMove;
        audioSource.Play();
    }

    public void playUIClicked()
    {
        audioSource.clip = UIClicked;
        audioSource.Play();
    }

    public void playButtonApear()
    {
        audioSource.clip = playButtonAppear;
        audioSource.Play();
    }

    public void playWinCloud()
    {
        audioSource.clip = winCloud;
        audioSource.Play();
    }

    public void playWinExplore()
    {
        audioSource.clip = winExplore;
        audioSource.Play();
    }

    public void playWinFountain()
    {
        audioSource.clip = winFountain;
        audioSource.Play();
    }
}
