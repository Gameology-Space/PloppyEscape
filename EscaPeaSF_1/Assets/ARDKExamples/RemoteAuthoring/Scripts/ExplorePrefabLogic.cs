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
        mr = GetComponent<MeshRenderer>();
        mr.enabled = false;
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
            mr.enabled = gm.explore_Panel1_Handle;
        }
        else if (this.name == "Wall_SW2(Clone)")
        {
            mr.enabled = gm.explore_Panel2_Handle;
        }
        else if (this.name == "Wall_SW3(Clone)")
        {
            mr.enabled = gm.explore_Panel3_Handle;
        }
        else if (this.name == "Wall_SW4(Clone)")
        {
            mr.enabled = gm.explore_Panel4_Handle;
        }
        else if (this.name == "Wall_Building(Clone)")
        {
            mr.enabled = gm.explore_BuildingHasPower;
        }
        else if(this.name == "Wall_Grid(Clone)")
        {
            mr.enabled = gm.explore_GridHasPower;
        }
    }
}
