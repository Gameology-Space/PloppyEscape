// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using Niantic.Lightship.Maps.Logging;
using Niantic.Lightship.Maps.Samples.CustomMapLayers.StateBoundaries;
using Niantic.Lightship.Maps.Unity.Core;
using Niantic.Lightship.Maps.Unity.MapLayers.Components;
using UnityEngine;

namespace Niantic.Lightship.Maps.Samples.CustomMapLayers
{
    using PooledObjectList = List<PooledObject<GameObject>>;

    public class CustomMapLayersManager : MonoBehaviour
    {
        [SerializeField]
        private LayerPolygonRenderer _visitedStatePolygonRenderer;

        [SerializeField]
        private LayerPolygonRenderer _selectedStatePolygonRenderer;

        [SerializeField]
        private LayerLineRenderer _selectedStateLineRenderer;

        private State _selectedState;
        private readonly HashSet<State> _visitedStates = new HashSet<State>();
        private readonly PooledObjectList _selectedStatePolygons = new PooledObjectList();
        private readonly PooledObjectList _selectedStateBorders = new PooledObjectList();

        private static ChannelLogger Log { get; } = new ChannelLogger(nameof(CustomMapLayers));

        public void OnStateSelected(State state)
        {
            if (_visitedStates.Contains(state))
            {
                return;
            }

            Log.Info($"Selected {state.Name}");
            var previousState = _selectedState;
            _visitedStates.Add(state);
            _selectedState = state;

            _selectedStatePolygons.ForEach(p => p.Dispose());
            _selectedStateBorders.ForEach(p => p.Dispose());

            _selectedStatePolygons.Clear();
            _selectedStateBorders.Clear();

            var stateName = $"Selected State ({state.StateId})";
            var borderName = $"Selected State Border ({state.StateId})";

            foreach (var boundary in state.Boundaries)
            {
                _selectedStatePolygons.Add(_selectedStatePolygonRenderer.DrawPolygon(boundary.Points, stateName));
                _selectedStateBorders.Add(_selectedStateLineRenderer.DrawLoop(boundary.Points, borderName));
            }

            if (previousState == null)
            {
                return;
            }

            var visitedName = $"Visited State ({previousState.StateId})";

            foreach (var boundary in previousState.Boundaries)
            {
                _visitedStatePolygonRenderer.DrawPolygon(boundary.Points, visitedName);
            }
        }
    }
}
