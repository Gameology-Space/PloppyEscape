using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameManager
{
    public class GameManager : MonoBehaviour
    {
        public int puzzleID;
        public int difficulty;
        // Start is called before the first frame update
        void Start()
        {
            puzzleID = 999;
            difficulty = 0;
        }

        // Update is called once per frame
        void Update()
        {
            
        }
    }
}