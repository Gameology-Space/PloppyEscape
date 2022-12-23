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
   


    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
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
            }
            else
            {
                //bad answer
                inputField.text = "";
                StartCoroutine(FlashIncoorectPassword());
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
            }
            else
            {
                //bad answer
                StartCoroutine(FlashIncoorectPassword());
                inputField.text = "";
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
            }
            else
            {
                //bad answer
                StartCoroutine(FlashIncoorectPassword());
                inputField.text = "";
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

            }
            else
            {
                //bad answer
                inputField.text = "";
                StartCoroutine(FlashIncoorectPassword());
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
