using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplorePrefabLogic : MonoBehaviour
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
        if(this.name == "Wall_Solar(Clone)")
        {
            mr.enabled = gm.explore_SunIsPlaced;
        }
        else if(this.name == "Wall_SW1(Clone)")
        {
            mr.enabled = gm.explore_Panel1_Handle && gm.explore_SunIsPlaced;
        }
        else if (this.name == "Wall_SW2(Clone)")
        {
            mr.enabled = gm.explore_Panel2_Handle && gm.explore_SunIsPlaced;
        }
        else if (this.name == "Wall_SW3(Clone)")
        {
            mr.enabled = gm.explore_Panel3_Handle && gm.explore_SunIsPlaced;
        }
        else if (this.name == "Wall_SW4(Clone)")
        {
            mr.enabled = gm.explore_Panel4_Handle && gm.explore_SunIsPlaced;
        }
        else if (this.name == "Wall_Building(Clone)") 
        {
            mr.enabled = gm.explore_BuildingHasPower && gm.explore_SunIsPlaced;
        }
        else if(this.name == "Wall_Grid(Clone)")
        {
            mr.enabled = gm.explore_GridHasPower && gm.explore_SunIsPlaced;
        }
        else if(this.name == "ES1_On(Clone)")
        {
            mr.enabled = gm.explore_Panel1_Handle;
        }
        else if (this.name == "ES1_Off(Clone)")
        {
            mr.enabled = !gm.explore_Panel1_Handle;
        }
        else if (this.name == "ES2_On(Clone)")
        {
            mr.enabled = gm.explore_Panel2_Handle;
        }
        else if (this.name == "ES2_Off(Clone)")
        {
            mr.enabled = !gm.explore_Panel2_Handle;
        }
        else if (this.name == "ES3_On(Clone)")
        {
            mr.enabled = gm.explore_Panel3_Handle;
        }
        else if (this.name == "ES3_Off(Clone)")
        {
            mr.enabled = !gm.explore_Panel3_Handle;
        }
        else if (this.name == "ES4_On(Clone)")
        {
            mr.enabled = gm.explore_Panel4_Handle;
        }
        else if (this.name == "ES4_Off(Clone)")
        {
            mr.enabled = !gm.explore_Panel4_Handle;
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
