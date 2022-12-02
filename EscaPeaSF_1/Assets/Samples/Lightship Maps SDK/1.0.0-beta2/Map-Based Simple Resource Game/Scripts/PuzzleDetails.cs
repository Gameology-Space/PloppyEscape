using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuzzleDetails : MonoBehaviour
{
    [SerializeField]
    public string puzzleName;
    
    [SerializeField]
    public string puzzleDifficulty;

    [SerializeField]
    public bool puzzleClear;

    // Start is called before the first frame update
    void Start()
    {
        puzzleClear = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
