using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuzzleLogic : MonoBehaviour
{
    private GameObject switchHandle1, switchHandle2;
    
    // Start is called before the first frame update
    void Start()
    {
        //switchHandle1 = GameObject.Find("electric_control_panel_3-lever(Clone)");
        //switchHandle1 = GameObject.Find("electric_control_panel_3-lever");
        //switchHandle1 = GameObject.FindWithTag("ELever");
        //switchHandle1 = GameObject.FindGameObjectWithTag("ELever");
        //switchHandle1 = GameObject.Find
        //switchHandle1 = Resources.Load<GameObject>("electric_control_panel_3-lever");
        //switchHandle1 = Resources.Load<GameObject>("electric_control_panel_3-lever(Clone)");
        // so... don't try to find prefab, create a script to prefab and make it change based on game manager script. 

    }

    // Update is called once per frame
    void Update()
    {
            var touchPosition = Vector3.zero;
            bool touchDetected = false;

            if (Input.touchCount == 1)
            {
                if (Input.touches[0].phase == TouchPhase.Ended)
                {
                    touchPosition = Input.touches[0].position;
                    touchDetected = true;
                }
            }

            if (Input.GetMouseButtonDown(0))
            {
                touchPosition = Input.mousePosition;
                touchDetected = true;
            }

            if (touchDetected)
            {

                turnHandle();
            }
    }

    void turnHandle()
    {

    }
}
