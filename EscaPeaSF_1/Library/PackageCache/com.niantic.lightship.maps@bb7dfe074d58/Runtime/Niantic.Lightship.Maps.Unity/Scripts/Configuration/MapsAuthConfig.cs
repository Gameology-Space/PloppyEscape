// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.IO;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Niantic.Lightship.Maps.Unity.Configuration
{
    [CreateAssetMenu(fileName = "MapsAuthConfig", menuName = "Lightship Maps/Authentication/MapsAuthConfig", order = 0)]
    public class MapsAuthConfig : ScriptableObject
    {
        [SerializeField]
        [Tooltip("Obtain an API key from your Lightship Account Dashboard and copy it in here.")]
        private string _lightshipApiKey = "";

        private const string RESOURCES_DIR = "Maps SDK";

        public string LightshipAPIKey
        {
            get => _lightshipApiKey;
            internal set => _lightshipApiKey = value;
        }

        public static MapsAuthConfig[] Load()
        {
            return Resources.LoadAll<MapsAuthConfig>(RESOURCES_DIR) ?? Array.Empty<MapsAuthConfig>();
        }

#if UNITY_EDITOR
        public static MapsAuthConfig Create()
        {
            var resourcesPath = Path.Combine("Assets", "Resources", RESOURCES_DIR);
            var assetPath = Path.Combine(resourcesPath, "MapsAuthConfig.asset");

            Directory.CreateDirectory(resourcesPath);
            var authConfig = CreateInstance<MapsAuthConfig>();
            AssetDatabase.CreateAsset(authConfig, assetPath.Replace('\\', '/'));
            EditorUtility.SetDirty(authConfig);
            AssetDatabase.SaveAssetIfDirty(authConfig);
            AssetDatabase.Refresh();

            return authConfig;
        }
#endif
    }
}
