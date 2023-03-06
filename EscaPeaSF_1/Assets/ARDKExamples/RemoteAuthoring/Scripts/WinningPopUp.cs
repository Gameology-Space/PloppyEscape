using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinningPopUp : MonoBehaviour
{
    private GameManager gm;
    public GameObject winningUI;


    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        winningUI.SetActive(gm.winningStageUI);
    }

    public void setWinningUIOff()
    {
        gm.winningStageUI = false;
        winningUI.SetActive(false);
    }
}
