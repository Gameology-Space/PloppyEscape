using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.Lightship.Maps;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Coordinates;


public class SpawnMyObject : MonoBehaviour
{
    public GameObject _cubePrefab;
    public LightshipMap _lightshipMap;

    public LatLng wayspot1 = new LatLng(37.7955155,-122.3941076);
    public LatLng wayspot2 = new LatLng(37.7948488,-122.3968132);
    public LatLng wayspot3 = new LatLng(37.7952367,-122.4000663);
    public LatLng wayspot4 = new LatLng(37.7968574,-122.4000663);

    public void OnButtonClick()
    {
        Instantiate(_cubePrefab, _lightshipMap.LatLngToScene(in wayspot1), Quaternion.identity);
        Instantiate(_cubePrefab, _lightshipMap.LatLngToScene(in wayspot2), Quaternion.identity);
        Instantiate(_cubePrefab, _lightshipMap.LatLngToScene(in wayspot3), Quaternion.identity);
        Instantiate(_cubePrefab, _lightshipMap.LatLngToScene(in wayspot4), Quaternion.identity);
    }
}
