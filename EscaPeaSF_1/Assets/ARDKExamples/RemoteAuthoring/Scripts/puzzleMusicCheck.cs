using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class puzzleMusicCheck : MonoBehaviour
{
    private GameManager gm;
    private AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        audioSource = GameObject.Find("BackgroundMusic").GetComponent<AudioSource>();

        if(gm.puzzleID == 0) //if cloud, no background music
        {
            audioSource.playOnAwake = false;
            audioSource.Stop();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
