// Copyright 2022 Niantic, Inc. All Rights Reserved.

#if UNITY_EDITOR

using System;
using System.Collections.Generic;
using System.IO;
using Niantic.Lightship.Maps.Logging;
using Niantic.Lightship.Maps.Unity.MapLayers.Components.BaseTypes;
using Niantic.Platform.Debugging;
using UnityEditor;
using UnityEditor.ProjectWindowCallback;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Editor
{
    /// <summary>
    /// This class is responsible for creating and saving a new, empty <see cref="MapLayer"/> prefab
    /// </summary>
    internal class DoCreateMapLayerPrefab : EndNameEditAction
    {
        /// <summary>
        /// Additional <see cref="MapLayerComponent"/>s to add to the new <see cref="MapLayer"/>
        /// </summary>
        public List<Type> AdditionalComponents { get; } = new List<Type>();

        private static ChannelLogger Log { get; } = new ChannelLogger(nameof(MapLayer));

        /// <summary>
        /// Delegate called by <see cref="ProjectWindowUtil.StartNameEditingIfProjectWindowExists"/>
        /// to create and save our new <see cref="MapLayer"/> prefab.
        /// </summary>
        public override void Action(int _, string pathName, string __)
        {
            // Create a root GameObject and add a MapLayer component
            var fileName = Path.GetFileNameWithoutExtension(pathName);
            var mapLayerRootObject = new GameObject(fileName);
            var mapLayer = mapLayerRootObject.AddComponent<MapLayer>();
            mapLayer.LayerName = fileName;
            mapLayer.name = fileName;

            // Add any additional components, if specified
            foreach (var component in AdditionalComponents)
            {
                mapLayerRootObject.AddComponent(component);
            }

            // Save our new MapLayer's root GameObject as a prefab
            var prefab = PrefabUtility.SaveAsPrefabAsset(mapLayerRootObject, pathName, out var success);

            // Log whether the prefab was saved successfully
            var message = $"{(success ? "Created" : "Failed to create")} map layer prefab '{pathName}'";
            var severity = success ? LogLevel.Info : LogLevel.Error;
            Log.LogMessage(severity, message);

            // Destroy the root object, since it's no longer needed
            DestroyImmediate(mapLayerRootObject);

            if (success)
            {
                // Open the new prefab in the Inspector
                ProjectWindowUtil.ShowCreatedAsset(prefab);
                AssetDatabase.OpenAsset(prefab);
            }
        }
    }
}

#endif
