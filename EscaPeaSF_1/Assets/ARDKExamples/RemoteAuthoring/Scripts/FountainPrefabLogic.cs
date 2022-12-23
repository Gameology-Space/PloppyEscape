using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FountainPrefabLogic : MonoBehaviour
{
    private MeshRenderer mr;
    private GameManager gm;

    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();

        if (!(this.name == "SunPrefabLegend(Clone)" || this.name == "SunPrefabMoving(Clone)" || this.name == "SunPrefabPlaced(Clone)"))
        {
            mr = GetComponent<MeshRenderer>();
            mr.enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        // find the prefab name and tie it to game manager boolean based on game state
        if(this.name == "Cylinder(Clone)")
        {
            mr.enabled = gm.fountain_Fall;
        }
        else if(this.name == "Cylinder Blue(Clone)")
        {
            mr.enabled = gm.fountain_Spring;
        }
        else if (this.name == "Cylinder Green(Clone)")
        {
            mr.enabled = gm.fountain_Summer;
        }
        else if (this.name == "Cylinder Red(Clone)")
        {
            mr.enabled = gm.fountain_Winter;
        }


        //// giant note ------ lessons leared -------
        ///
        //// you cannot enable/disable a tracked anchor object, it won't comeback
        ///  instead, turn off it's children.
        ///  
        //// giant note ------ lessons leared -------


        else if (this.name == "SunPrefabLegend(Clone)")
        {
            //this.gameObject.SetActive(!gm.explore_SunIsMoving);
            //this.gameObject.SetActive(!gm.explore_SunIsPlaced);
            transform.GetChild(0).gameObject.SetActive(!gm.explore_SunIsPlaced && !gm.explore_SunIsMoving);
            transform.GetChild(1).gameObject.SetActive(!gm.explore_SunIsPlaced && !gm.explore_SunIsMoving);
        }
        else if (this.name == "SunPrefabMoving(Clone)")
        {
            //this.gameObject.SetActive(!gm.explore_SunIsPlaced);
            transform.GetChild(0).gameObject.SetActive(!gm.explore_SunIsPlaced);
            transform.GetChild(1).gameObject.SetActive(!gm.explore_SunIsPlaced);
        }
        else if (this.name == "SunPrefabPlaced(Clone)")
        {
            transform.GetChild(0).gameObject.SetActive(gm.explore_SunIsPlaced);
            transform.GetChild(1).gameObject.SetActive(gm.explore_SunIsPlaced);
        }
    }
}
