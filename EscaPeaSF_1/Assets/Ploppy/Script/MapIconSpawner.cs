using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.Lightship.Maps;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Coordinates;

public class MapIconSpawner : MonoBehaviour
{
    
    public GameObject puzzleExploratoruiumIcon;
    public LightshipMap _lightshipMap;

    private LatLng _latLng = new LatLng(37.800644999999996, -122.398381);
    
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(puzzleExploratoruiumIcon, _lightshipMap.LatLngToScene(in _latLng), Quaternion.identity);ß
    }

    // Update is called once per frame
    void Update()
    {
    }


}
