using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.Lightship.Maps;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Coordinates;

public class MapIconSpawner : MonoBehaviour
{
    
    public GameObject puzzleExploratoruium_Icon;
    public GameObject puzzleCloudGate_Icon;
    public GameObject puzzleFourSeason_Icon;
    public GameObject testingArroyoPark_Icon;
    public GameObject testingQuarryLakesGarden_Icon;

    public LightshipMap _lightshipMap;

    private LatLng puzzleExploratorium_Location = new LatLng(37.800644999999996, -122.398381);
    private LatLng puzzleCloudGate_Location = new LatLng(37.79639, -122.39814);
    private LatLng puzzleFourSeason_Location = new LatLng(37.797607, -122.39887);
    private LatLng testingArroyoPark_Location = new LatLng(37.581547, -122.01407);
    private LatLng testingQuarryLakesGarden_Location = new LatLng(37.57564, -122.00994);
    
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(puzzleExploratoruium_Icon, _lightshipMap.LatLngToScene(in puzzleExploratorium_Location), Quaternion.identity);
        
        Instantiate(puzzleCloudGate_Icon, _lightshipMap.LatLngToScene(in puzzleCloudGate_Location), Quaternion.identity);
        Instantiate(puzzleFourSeason_Icon, _lightshipMap.LatLngToScene(in puzzleFourSeason_Location), Quaternion.identity);
        Instantiate(testingArroyoPark_Icon, _lightshipMap.LatLngToScene(in testingArroyoPark_Location), Quaternion.identity);
        Instantiate(testingQuarryLakesGarden_Icon, _lightshipMap.LatLngToScene(in testingQuarryLakesGarden_Location), Quaternion.identity);
    }

    // Update is called once per frame
    void Update()
    {
    }


}
