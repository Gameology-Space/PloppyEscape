using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundPlayer : MonoBehaviour
{
    [SerializeField] AudioClip correctMove, mapMusic, puzzleMusic, UIClicked, winCloud, winExplore, winFountain;
    [SerializeField] AudioClip playButtonAppear, badmove;

    private AudioSource audioSource;

    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
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

    public void playWinEnding()
    {
        audioSource.clip = winCloud;
        audioSource.PlayOneShot(audioSource.clip);
    }

    public void playWinExplore()
    {
        audioSource.clip = winExplore;
        audioSource.PlayOneShot(audioSource.clip);
    }

    public void playWinFountain()
    {
        audioSource.clip = winFountain;
        audioSource.PlayOneShot(audioSource.clip);
    }

    public void playBadMove()
    {
        audioSource.clip = badmove;
        audioSource.Play();
    }
}
