using System.Collections;
using System.Collections.Generic;
using UnityEngine;


    public class GameManager : MonoBehaviour
    {
        public static GameManager Instance; //only one exist, all reference is to same object.
        
        // Common Puzzle Variables for all ------------
        public int puzzleID;
        public int difficulty;
        public bool initial_UI;
        public bool allCompleteAcknowledge;
        public bool allComplete;
        

        // puzzle explore variables
        public bool explore_Panel1_Handle;
        public bool explore_Panel2_Handle;
        public bool explore_Panel3_Handle;
        public bool explore_Panel4_Handle;
        public bool explore_SunIsPlaced;
        public bool explore_BuildingHasPower;
        public bool explore_GridHasPower;
        public bool explore_Completed;
        public bool explore_Hint1, explore_Hint2, explore_Hint3;


        // puzzle fountain variables
        public bool fountain_Summer;
        public bool fountain_Spring;
        public bool fountain_Winter;
        public bool fountain_Fall;
        public bool fountain_Completed;
        public bool fountain_Hint1, fountain_Hint2, fountain_Hint3;

        // puzzle cloud variables
        public bool cloud_Sequence1;
        public bool cloud_Sequence2;
        public bool cloud_Sequence3;
        public bool cloud_Complete;
        public bool cloud_Hint1, cloud_Hint2, cloud_Hint3;
        
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
        void Start()
        {
            puzzleID = 999;
            difficulty = 0;
        }
    }