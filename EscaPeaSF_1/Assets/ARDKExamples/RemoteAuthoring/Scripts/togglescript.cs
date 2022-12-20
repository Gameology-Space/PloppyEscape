using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDKExamples.RemoteAuthoring;

public class togglescript : MonoBehaviour
{
    public GameObject secretUI;


    public void ToggleSecretUI()
    {
        if(secretUI.activeSelf)
        {
            secretUI.SetActive(false);
        }
        else
        {
            secretUI.SetActive(true);
        }
            
    }


}
