using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SceneControl : MonoBehaviour
{

    public void navToMapScene()
    {
        SceneManager.LoadScene(0);
    }

    public void navToPuzzScene()
    {
        SceneManager.LoadScene(1);
    }
}
