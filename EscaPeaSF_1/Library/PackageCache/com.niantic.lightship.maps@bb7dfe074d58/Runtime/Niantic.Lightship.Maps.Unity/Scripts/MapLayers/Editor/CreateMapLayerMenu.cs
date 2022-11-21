// Copyright 2022 Niantic, Inc. All Rights Reserved.

#if UNITY_EDITOR

using System;
using Niantic.Lightship.Maps.Unity.MapLayers.Components;
using UnityEditor;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.MapLayers.Editor
{
    internal static class CreateMapLayerMenu
    {
        private const string MENU_ROOT = "Assets/Create/Lightship Maps/Map Layers/";
        private static readonly Texture2D PREFAB_ICON = EditorGUIUtility.IconContent("Prefab Icon").image as Texture2D;

        #region MenuItems

        [MenuItem(MENU_ROOT + "Empty Map Layer")]
        public static void CreateEmptyMapLayerPrefab()
        {
            CreateMapLayerPrefab();
        }

        [MenuItem(MENU_ROOT + "Line Rendering Layer")]
        public static void CreateLineRenderingMapLayerPrefab()
        {
            CreateMapLayerPrefab(typeof(LayerLineRenderer));
        }

        [MenuItem(MENU_ROOT + "Polygon Rendering Layer")]
        public static void CreatePolygonRenderingMapLayerPrefab()
        {
            CreateMapLayerPrefab(typeof(LayerPolygonRenderer));
        }

        [MenuItem(MENU_ROOT + "GameObject Placement Layer")]
        public static void CreateGameObjectPlacementMapLayerPrefab()
        {
            CreateMapLayerPrefab(typeof(LayerGameObjectPlacement));
        }

        [MenuItem(MENU_ROOT + "GameObject Instance Layer")]
        public static void CreateGameObjectInstanceMapLayerPrefab()
        {
            CreateMapLayerPrefab(typeof(LayerGameObjectInstance));
        }

        #endregion

        private static void CreateMapLayerPrefab(params Type[] additionalComponents)
        {
            const int instanceId = 0;
            var createMapLayerAction = ScriptableObject.CreateInstance<DoCreateMapLayerPrefab>();
            createMapLayerAction.AdditionalComponents.AddRange(additionalComponents);

            ProjectWindowUtil.StartNameEditingIfProjectWindowExists(
                instanceId,
                createMapLayerAction,
                "NewMapLayer.prefab",
                PREFAB_ICON,
                null
            );
        }
    }
}

#endif
