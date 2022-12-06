using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Niantic.ARDKExamples.RemoteAuthoring
{
    public class GameManager : MonoBehaviour
    {
        public static GameManager Instance;
        
        private void Awake()
        {
            if (Instance != null)
            {
                Destroy(gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        
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