using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Niantic.ARDKExamples.RemoteAuthoring
{
    public class LocationSelectView: MonoBehaviour
    {
        private LocationManifestManager _locationManifestManager;
        //public PuzzleStart _puzzlestart;

        [SerializeField]
        private Dropdown locationDropdown;

        [SerializeField]
        private Button loadLocationButton;

        [SerializeField]
        private Button openButton;

        [SerializeField]
        private Button closeButton;

        [SerializeField]
        private Text statusLog;

        public Text printLocationInt;
        public Text puzzleIDLoad;

        public GameObject ploppyDetails;


        [SerializeField]
        private Text localizationStatus;
        [SerializeField]
        private Text localizationStatus2;

        private int _selectedLocation = 0;

        

        public void Start()
        {
            _locationManifestManager = LocationManifestManager.Instance;
            //populate dropdown with list of locations from manifests
            var locNames = _locationManifestManager.GetLocationNames();
            List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
            foreach (var locName in locNames)
            {
                options.Add(new Dropdown.OptionData(locName));
            }

            //locationDropdown.options = options;

            // //keep track of selected location
            // locationDropdown.onValueChanged.AddListener(OnChangeDropdown);

            //link load button to load behavior
            loadLocationButton.onClick.AddListener(LoadButtonClicked);

            // //link close button
            // closeButton.onClick.AddListener(CloseButtonClicked);

            // //link open button
            // openButton.onClick.AddListener(OpenButtonClicked);

            //subscribe to status tracking to present to user
            _locationManifestManager.StatusLogChangeEvent += StatusLogChanged;
            _locationManifestManager.AddLocalizationStatusListener(LocationStatusChanged);

            //default to first item selected
            //locationDropdown.value = 0;

            //my add for ploppy to load on start with puzzle id pass from manager
            
            if(GameManager.Instance.puzzleID < 3)
            {
                _selectedLocation = GameManager.Instance.puzzleID;
               //LoadButtonClicked();
               Debug.Log("Current Selected:" + _selectedLocation);
            }
            else
            {
                Debug.Log("Not picked location");
            }
        }

        // private void OnChangeDropdown(int selected)
        // {
        //     _selectedLocation = selected;
        //     printLocationInt.text = selected.ToString(); // bw 
        // }

        public void LoadButtonClicked()
        {
            _selectedLocation = GameManager.Instance.puzzleID;
            _locationManifestManager.LoadWayspotAnchors(_selectedLocation);
            Debug.Log("loaded: " + _selectedLocation);
            ploppyDetails.SetActive(false);

        }

        // private void CloseButtonClicked()
        // {
        //     gameObject.SetActive(false);
        // }

        // private void OpenButtonClicked()
        // {
        //     gameObject.SetActive(true);
        // }

        private void StatusLogChanged(string message)
        {
            statusLog.text = message;
        }

        private void LocationStatusChanged(string statusMessage)
        {
            localizationStatus.text = "Localization Status: " + statusMessage;
            localizationStatus2.text = "Localization: " + statusMessage;
        }

        private void LoadPuzzleAnchors(int puzzleID)
        {
            _locationManifestManager.LoadWayspotAnchors(puzzleID);
        }

        void Update()
        {
            puzzleIDLoad.text = GameManager.Instance.puzzleID.ToString();
        }
    }
}