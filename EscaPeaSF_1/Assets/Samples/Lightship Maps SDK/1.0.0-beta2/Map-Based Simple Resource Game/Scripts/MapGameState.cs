// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using Niantic.Lightship.Maps.Coordinates;
using UnityEngine;

namespace Niantic.Lightship.Maps.Samples.GameSample
{
    /// <summary>
    /// This singleton holds the current values for resources and tracks placed buildings
    /// It also updates the UI on resource values, which
    /// TODO: Save state so resources and structure and persistent
    /// </summary>
    public class MapGameState : MonoBehaviour
    {
        public static MapGameState Instance { get; private set; }

        private void Awake()
        {
            Instance = this;
//            LoadResources();
        }

        // -- ploppy --
        // modify below to initial game state
        // private void LoadResources()
        // {
        //     _resources[ResourceType.Wood] = 0;
        //     _resources[ResourceType.Planks] = 0;
        //     _resources[ResourceType.Stone] = 0;
        //     _resources[ResourceType.Bricks] = 0;

        //     _resourceProduction[ResourceType.Wood] = true;
        // }

    }
}
