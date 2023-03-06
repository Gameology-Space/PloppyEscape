using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


    public class GameManager : MonoBehaviour
    {
        public static GameManager Instance; //only one exist, all reference is to same object.
        private SoundPlayer soundPlayer;
        
        // Common Puzzle Variables for all ------------
        public int puzzleID;
        public int difficulty;
        public bool initial_UI;
        public bool allCompleteAcknowledge;
        public bool allComplete;
        public bool locateArrowActive;
        public bool winningStageUI;


    //one shot tracker
    private bool tempWin1;
    private bool tempWin2;
    private bool tempWin3;

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
        public bool cloud_line1, cloud_line2, cloud_line3;
        public bool cloud_Sequence1;
        public bool cloud_Sequence2;
        public bool cloud_Sequence3;
        public bool cloud_Complete;
        public bool cloud_CorrectNote1;
        public bool cloud_CorrectNote2;
        public bool cloud_CorrectNote3;

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
            cloud_line1 = true;
            cloud_CorrectNote1 = true;
            cloud_CorrectNote2 = true;
            cloud_CorrectNote3 = true;
            winningStageUI = false;
        tempWin1 = false;
        tempWin2 = false;
        tempWin3 = false;

            soundPlayer = GameObject.Find("SoundPlayer").GetComponent<SoundPlayer>();
        }

        private void Update()
        {
            ExploreLogic();
            CloudLogic();
            FountainLogic();
    

    allComplete = explore_Completed && cloud_Complete && fountain_Completed;
            if(allComplete)
            {
                SceneManager.LoadScene(2);
                winningStageUI = false;
            }

            
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

                if(!tempWin1)
            {
                winningStageUI = true;
                tempWin1 = true;
            }
                //soundPlayer.playWinExplore();
            }

        }

        private void FountainLogic()
        {
            if (fountain_Fall && fountain_Spring && fountain_Summer && fountain_Winter)
            {
                fountain_Completed = true;

            if(!tempWin2)
            {
            winningStageUI = true;
                tempWin2 = true;
            }
            }
        }

        private void CloudLogic()
        {


            if(cloud_Sequence1 && cloud_Sequence2 && cloud_Sequence3)
            {
                cloud_Complete = true;

            if (!tempWin3)
            {
                winningStageUI = true;
                tempWin3 = true;
            }
            }
        }

}