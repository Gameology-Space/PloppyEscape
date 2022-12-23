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
        public bool explore_SunIsMoving;
        public bool explore_SunOkToSpawn;

        // puzzle fountain variables
        public bool fountain_Summer;
        public bool fountain_Spring;
        public bool fountain_Winter;
        public bool fountain_Fall;
        public bool fountain_Completed;
        public int fountain_AlterID;
        public bool fountain_PWPopup;

        // puzzle cloud variables
        public bool cloud_Sequence1;
        public bool cloud_Sequence2;
        public bool cloud_Sequence3;
        public bool cloud_Complete;
        
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
            explore_SunOkToSpawn = true;
            fountain_AlterID = 0;
            fountain_PWPopup = false;
        }

        private void Update()
        {
            ExploreLogic();
            CloudLogic();
            FountainLogic();

            allComplete = explore_Completed && cloud_Complete && fountain_Completed;
        }

        private void ExploreLogic()
        {

        // explore component check
        if (explore_SunIsPlaced)
        {
            if (explore_Panel1_Handle && explore_Panel2_Handle)
            {
                explore_GridHasPower = true;
            }
            else
            {
                explore_GridHasPower = false;
            }

            if (explore_Panel3_Handle && explore_Panel4_Handle)
            {
                explore_BuildingHasPower = true;
            }
            else
            {
                explore_BuildingHasPower = false;
            }
        }

        // explore complete check
            if(explore_GridHasPower && explore_BuildingHasPower)
            {
                explore_Completed = true;
            }

        }

        private void CloudLogic()
        {
            if(fountain_Fall && fountain_Spring && fountain_Summer && fountain_Winter)
            {
            fountain_Completed = true;
            }
        }
        private void FountainLogic()
        {

        }

}