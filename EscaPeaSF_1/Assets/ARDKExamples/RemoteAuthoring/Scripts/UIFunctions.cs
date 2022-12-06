using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDKExamples.RemoteAuthoring;

public class UIFunctions : MonoBehaviour
{
    public void onExplorePressed()
    {
        Debug.Log("explore puzzle pressed");
        GameManager.Instance.puzzleID = 11;
    }

    public void onCloudPressed()
    {
        Debug.Log("cloud puzzle pressed");
        GameManager.Instance.puzzleID = 1;
    }

    public void onFountainPressed()
    {
        Debug.Log("Fountain puzzle pressed");
        GameManager.Instance.puzzleID = 7;
    }

    public void onQuarryPressed()
    {
        Debug.Log("Quarry puzzle pressed");
        GameManager.Instance.puzzleID = 8;

    }

    public void onNummiPressed()
    {
        Debug.Log("Nummi puzzle pressed");
        GameManager.Instance.puzzleID = 10;
    }

    public void onEnsanadaPressed()
    {
        Debug.Log("Ensanada");
        GameManager.Instance.puzzleID = 9;
    }
}
