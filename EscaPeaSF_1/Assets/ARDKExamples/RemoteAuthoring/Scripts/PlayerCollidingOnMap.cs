using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//using Ploppy.Puzzle;

public class PlayerCollidingOnMap : MonoBehaviour
{
    public Text transferID;

    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider collider)
    {

        if(collider.name == "cloudMapIcon")
        {
            Debug.Log("Collided cloud");
        }
        else if(collider.name == "ExploreMapIcon")
        {
            Debug.Log("Collided explore");
        }
        else if(collider.name == "FountainMapIcon")
        {
            Debug.Log("Collided fountain");
        }


        // var hitResourceItem = collider.GetComponent<PuzzleDetails>();
        // if (hitResourceItem == null)
        // {
        //     return;
        // }


        // // --Ploppy-- 
        // // Add action if button is pressed here

        // Debug.Log(hitResourceItem.puzzleName);
        // Debug.Log(hitResourceItem.puzzleDifficulty);
        // Debug.Log(hitResourceItem.puzzleClear);

        // transferID.text = hitResourceItem.puzzleID.ToString();
    }
}
