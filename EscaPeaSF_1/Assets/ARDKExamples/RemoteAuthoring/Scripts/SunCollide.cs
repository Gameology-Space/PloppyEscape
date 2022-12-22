using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SunCollide : MonoBehaviour
{
    // Start is called before the first frame update
    private GameManager gm;

    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }


    void OnTriggerEnter(Collider collider)
    {

        Debug.Log(collider.name);
        if (collider.name == "Solar_Panels_Roof_LOD1(Clone)")
        {
            gm.explore_SunIsPlaced = true;
        }

    }
}
