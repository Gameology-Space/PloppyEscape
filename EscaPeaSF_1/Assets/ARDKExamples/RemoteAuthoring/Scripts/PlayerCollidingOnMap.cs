using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class PlayerCollidingOnMap : MonoBehaviour
{
    public Text transferID;
    private UIFunctionsMap _UIFunctionMap;
    public Button playButton;

    
    // Start is called before the first frame update
    void Start()
    {
        _UIFunctionMap = GameObject.Find("UI").GetComponent<UIFunctionsMap>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider collider)
    {
        
        playButton.gameObject.SetActive(true);

        if(collider.name == "cloudMapIcon")
        {
            Debug.Log("Collided cloud");
            _UIFunctionMap.onCloudPressed();
        }
        else if(collider.name == "ExploreMapIcon")
        {
            Debug.Log("Collided explore");
            _UIFunctionMap.onExplorePressed();
        }
        else if(collider.name == "FountainMapIcon")
        {
            Debug.Log("Collided fountain");
            _UIFunctionMap.onFountainPressed();
        }
    }

    void OnTriggerExit(Collider collider)
    {
        playButton.gameObject.SetActive(false);
    }
}
