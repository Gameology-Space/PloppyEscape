// Copyright 2022 Niantic, Inc. All Rights Reserved.

#if UNITY_EDITOR
using System;
using System.IO;
using Niantic.Lightship.Maps.Unity.Builders.BaseTypes;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Unity.ExtensionMethods;
using Niantic.Platform.Debugging;
using UnityEditor;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Niantic.Lightship.Maps.Unity.Utilities.Editor
{
    internal static class LightshipMapPrefabImporter
    {
        private static readonly char SLASH = Path.DirectorySeparatorChar;

        [MenuItem("Lightship/Maps SDK/Add Lightship Map To Scene")]
        public static void ImportLightshipMapPrefab()
        {
            try
            {
                var importerConfigGuids = AssetDatabase.FindAssets(
                    "t:LightshipMapImporterConfig",
                    new[]
                    {
                        "Packages/com.niantic.lightship.maps", // Found here in published package
                        "Assets/" // Found here during package development
                    }
                );

                // This should NEVER happen in the published package
                if (importerConfigGuids.IsEmpty())
                {
                    Log.Error(
                        "No LightshipMapImporterConfig instance found. "
                            + "If you are a Lightship Developer and are seeing this error, "
                            + "please contact the Lightship Team."
                    );
                    return;
                }

                var importerConfig = AssetDatabase.LoadAssetAtPath<LightshipMapImporterConfig>(
                    AssetDatabase.GUIDToAssetPath(importerConfigGuids[0])
                );

                var importPath = importerConfig.DefaultImportPath.Replace('/', SLASH);

                LightshipMapImporterConfig.Directory.CreateDirectories(importPath, importerConfig.DirectoryStructure);

                // Copy and Unpack LightshipMap prefab
                var lightshipMapPrefab =
                    PrefabUtility.InstantiatePrefab(importerConfig.LightshipMapPrefab) as GameObject;

                PrefabUtility.UnpackPrefabInstance(
                    lightshipMapPrefab,
                    PrefabUnpackMode.Completely,
                    InteractionMode.AutomatedAction
                );

                // Save unpacked prefab as new prefab in Assets
                var savedPrefabPath = Path.Combine(importPath, "Prefabs", "LightshipMap.prefab");
                var savedPrefab = PrefabUtility.SaveAsPrefabAssetAndConnect(
                    lightshipMapPrefab,
                    savedPrefabPath,
                    InteractionMode.AutomatedAction
                );

                // Replace all the (relevant) references
                ReplaceReferencesAndDuplicateAssets(importPath, lightshipMapPrefab);
                PrefabUtility.ApplyPrefabInstance(lightshipMapPrefab, InteractionMode.AutomatedAction);

                AssetDatabase.SaveAssetIfDirty(savedPrefab);

                Selection.activeObject = lightshipMapPrefab;
                EditorGUIUtility.PingObject(savedPrefab);

                AssetDatabase.Refresh();
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
        }

        private static void ReplaceReferencesAndDuplicateAssets(string importPath, GameObject prefab)
        {
            var serializedPrefab = new SerializedObject(prefab.GetComponent<LightshipMap>());

            // Duplicate the default Builders
            var buildersProp = serializedPrefab.FindProperty("_builders");

            for (int i = 0; i < buildersProp.arraySize; i++)
            {
                var builderProp = buildersProp.GetArrayElementAtIndex(i);
                var oldBuilder = builderProp.objectReferenceValue as FeatureBuilderBase;
                var newBuilder = DuplicateAsset(oldBuilder, Path.Combine(importPath, "Builders"));
                builderProp.objectReferenceValue = newBuilder;
            }

            // Duplicate the MapTileTemplate prefab
            var mapTileProp = serializedPrefab.FindProperty("_mapTilePrefab");
            var oldPrefab = mapTileProp.objectReferenceValue as GameObject;

            var newPrefab = DuplicateAsset(oldPrefab, Path.Combine(importPath, "Prefabs"));

            mapTileProp.objectReferenceValue = newPrefab;
            serializedPrefab.ApplyModifiedPropertiesWithoutUndo();
        }

        private static T DuplicateAsset<T>(T oldAsset, string newPath) where T : Object
        {
            var oldPath = AssetDatabase.GetAssetPath(oldAsset);
            var assetName = Path.GetFileName(oldPath);
            newPath = Path.Combine(newPath, assetName);
            var asset = AssetDatabase.LoadAssetAtPath<T>(newPath);

            if (asset)
            {
                return asset;
            }

            AssetDatabase.CopyAsset(oldPath, newPath);
            return AssetDatabase.LoadAssetAtPath<T>(newPath);
        }
    }
}
#endif
