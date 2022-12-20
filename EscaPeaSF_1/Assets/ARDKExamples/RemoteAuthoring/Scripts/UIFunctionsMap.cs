using UnityEngine;
using UnityEngine.UI;
using Niantic.ARDKExamples.RemoteAuthoring;

public class UIFunctionsMap : MonoBehaviour
{
    public Text transferTemp;
    public GameObject ploppyItemMenu;
    public RawImage playerIcon;
    public Texture cloudTexture;
    public Texture exploreTexture;
    public Texture fountainTexture;
    public Text currentObjectTxt;
    public Button locate;
    private GameManager gameManager;
    public GameObject initialUI;



    public void onInitialUIPressed()
    {
        gameManager.initial_UI = false;
        initialUI.SetActive(false);
    }

    
    public void onExplorePressed()
    {
        Debug.Log("explore puzzle pressed");
        playerIcon.enabled = true;
        GameManager.Instance.puzzleID = 1;
        transferTemp.text = 1.ToString();
        ploppyItemMenu.SetActive(false);
        playerIcon.texture = exploreTexture;
        playerIcon.canvasRenderer.SetAlpha(1.0f);
        currentObjectTxt.text = "Explore";
        locate.gameObject.SetActive(true);
    }

    public void onCloudPressed()
    {
        Debug.Log("cloud puzzle pressed");
        playerIcon.enabled = true;
        GameManager.Instance.puzzleID = 0;
        transferTemp.text = 0.ToString();
        ploppyItemMenu.SetActive(false);
        playerIcon.texture = cloudTexture;
        playerIcon.canvasRenderer.SetAlpha(1.0f);
        currentObjectTxt.text = "Cloud";
        locate.gameObject.SetActive(true);
    }

    public void onFountainPressed()
    {
        Debug.Log("Fountain puzzle pressed");
        playerIcon.enabled = true;
        GameManager.Instance.puzzleID = 2;
        transferTemp.text = 2.ToString();
        ploppyItemMenu.SetActive(false);
        playerIcon.texture = fountainTexture;
        playerIcon.canvasRenderer.SetAlpha(1.0f);
        currentObjectTxt.text = "Fountain";
        locate.gameObject.SetActive(true);
    }

    public void onPloppyPressed()
    {
        ploppyItemMenu.SetActive(true);
    }



    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        playerIcon.canvasRenderer.SetAlpha(0.0f);
        playerIcon.enabled = false;
        initialUI.SetActive(gameManager.initial_UI);
    }

    private void Update()
    {
    }
}
