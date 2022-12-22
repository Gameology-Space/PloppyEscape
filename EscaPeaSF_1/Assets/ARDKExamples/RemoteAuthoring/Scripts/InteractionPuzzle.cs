using System.Collections;
using System.Collections.Generic;
using Ploppy.Puzzle;
using UnityEngine;

public class InteractionPuzzle : MonoBehaviour
{

    [SerializeField]
    private Camera _mapCamera;
    private GameManager gm;
    public GameObject sunMoving;
    private GameObject spawnedSun;
    private Vector3 spawnPosition;

    // Start is called before the first frame update
    void Start()
    {
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    private void Update()
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

            CheckForInteractableTouch(touchPosition);
        }

        if (gm.explore_SunIsMoving)
        {
            spawnPosition = _mapCamera.transform.forward * 5 + _mapCamera.transform.position;
            spawnedSun.transform.position = spawnPosition;
        }
    }

    private void CheckForInteractableTouch(Vector3 touchPosition)
    {
        var touchRay = _mapCamera.ScreenPointToRay(touchPosition);

        // raycast into scene and see if we hit a map feature
        if (!Physics.Raycast(touchRay, out var hitInfo))
        {
            return;
        }

        // check if the collider we hit is a feature
        var hitResourceItem = hitInfo.collider.GetComponent<Transform>();
        if (hitResourceItem == null)
        {
            return;
        }

        //this is what is hitted.
        //add actions after hit
        Debug.Log(hitResourceItem.name);

        if(hitResourceItem.name == "ES1(Clone)")
        {
            Debug.Log("SW1 HIT");
            Debug.Log(gm.explore_Panel1_Handle);
            gm.explore_Panel1_Handle = !gm.explore_Panel1_Handle;
            Debug.Log(gm.explore_Panel1_Handle);
        }
        else if(hitResourceItem.name == "ES2(Clone)")
        {
            gm.explore_Panel2_Handle = !gm.explore_Panel2_Handle;
        }
        else if (hitResourceItem.name == "ES3(Clone)")
        {
            gm.explore_Panel3_Handle = !gm.explore_Panel3_Handle;
        }
        else if (hitResourceItem.name == "ES4(Clone)")
        {
            gm.explore_Panel4_Handle = !gm.explore_Panel4_Handle;
        }
        else if(hitResourceItem.name == "SunPrefabLegend(Clone)")
        {
            gm.explore_SunIsMoving = true;
            if(gm.explore_SunOkToSpawn)
            {
                spawnedSun = Instantiate(sunMoving, spawnPosition, Quaternion.identity);
                gm.explore_SunOkToSpawn = false;
            }
        }
        else if (hitResourceItem.name == "SunPrefabMoving(Clone)")
        {
            gm.explore_SunIsMoving = false;
            gm.explore_SunOkToSpawn = true;
            Destroy(spawnedSun);
        }

    }

}
