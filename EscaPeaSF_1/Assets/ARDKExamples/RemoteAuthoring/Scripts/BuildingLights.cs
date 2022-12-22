using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingLights : MonoBehaviour
{
    private GameManager gm;
    public Material day, night;
    private MeshRenderer mr;
    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        mr = GameObject.Find("window_glass_25").GetComponent<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!gm.explore_BuildingHasPower)
        {
            mr.material = day;
        }
        else
        {
            mr.material = night;
        }
    }
}
