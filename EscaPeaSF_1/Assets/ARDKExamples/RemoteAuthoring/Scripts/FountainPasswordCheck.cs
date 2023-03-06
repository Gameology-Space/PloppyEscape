using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FountainPasswordCheck : MonoBehaviour
{
    public GameObject badPasswordPopup;
    public GameObject fountainPasswordPopup;
    private GameManager gm;
    public InputField inputField;
    private SoundPlayer soundPlayer;


    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        soundPlayer = GameObject.Find("SoundPlayer").GetComponent<SoundPlayer>();
    }

    // Update is called once per frame
    void Update()
    {
        fountainPasswordPopup.SetActive(gm.fountain_PWPopup);
    }

    public void OnEnterPasswordPressed()
    {
        CheckPassword(inputField.text);
    }

    public void OnClosePressed()
    {
        gm.fountain_PWPopup = false;
    }

    private void CheckPassword(string passEntered)
    {
        if(gm.fountain_AlterID == 1)
        {
            if(passEntered.ToLower() == "spring")
            {
                //correct
                Debug.Log("Correct: spring");
                //clear input after checking
                inputField.text = "";
                gm.fountain_PWPopup = false;
                gm.fountain_Spring = true;
                if (!(gm.fountain_Spring && gm.fountain_Summer && gm.fountain_Fall && gm.fountain_Winter))
                {
                    soundPlayer.playCorrectMove();
                }
            }
            else
            {
                //bad answer
                inputField.text = "";
                StartCoroutine(FlashIncoorectPassword());
                soundPlayer.playBadMove();
            }
        }
        else if (gm.fountain_AlterID == 2)
        {
            if (passEntered.ToLower() == "summer")
            {
                //correct
                Debug.Log("Correct: summer");
                inputField.text = "";
                gm.fountain_PWPopup = false;
                gm.fountain_Summer = true;

                if (!(gm.fountain_Spring && gm.fountain_Summer && gm.fountain_Fall && gm.fountain_Winter))
                {
                    soundPlayer.playCorrectMove();
                }
            }
            else
            {
                //bad answer
                StartCoroutine(FlashIncoorectPassword());
                inputField.text = "";
                soundPlayer.playBadMove();
            }
        }
        else if (gm.fountain_AlterID == 3)
        {
            if (passEntered.ToLower() == "fall")
            {
                //correct
                Debug.Log("Correct: fall");
                inputField.text = "";
                gm.fountain_PWPopup = false;
                gm.fountain_Fall = true;
                if (!(gm.fountain_Spring && gm.fountain_Summer && gm.fountain_Fall && gm.fountain_Winter))
                {
                    soundPlayer.playCorrectMove();
                }
            }
            else
            {
                //bad answer
                StartCoroutine(FlashIncoorectPassword());
                inputField.text = "";
                soundPlayer.playBadMove();
            }
        }
        else if (gm.fountain_AlterID == 4)
        {
            if (passEntered.ToLower() == "winter")
            {
                //correct
                Debug.Log("Correct: winter");
                inputField.text = "";
                gm.fountain_PWPopup = false;
                gm.fountain_Winter = true;
                if (!(gm.fountain_Spring && gm.fountain_Summer && gm.fountain_Fall && gm.fountain_Winter))
                {
                    soundPlayer.playCorrectMove();
                }

            }
            else
            {
                //bad answer
                inputField.text = "";
                StartCoroutine(FlashIncoorectPassword());
                soundPlayer.playBadMove();
            }
        }


    }

    IEnumerator FlashIncoorectPassword()
    {
        badPasswordPopup.SetActive(true);
        yield return new WaitForSeconds(3f);
        badPasswordPopup.SetActive(false);
    }
}
