using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManualAlignAnchor : MonoBehaviour
{
    private GameObject anchorHolder;

    // Start is called before the first frame update
    void Start()
    {
        anchorHolder = GameObject.Find("AnchorHolder");
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void moveX()
    {
        anchorHolder.transform.Rotate(90.0F, 0.0f, 0.0f);
    }
}
