// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using Niantic.Lightship.Maps.Coordinates;
using Niantic.Lightship.Maps.Samples.Common.Coordinates;
using UnityEngine;

namespace Niantic.Lightship.Maps.Samples.CustomMapLayers.StateBoundaries
{
    [Serializable]
    public class Boundary : ISerializationCallbackReceiver
    {
        [SerializeField]
        private List<SerializableLatLng> _points = new List<SerializableLatLng>();

        public List<LatLng> Points { get; } = new List<LatLng>();

        public void OnBeforeSerialize()
        {
            _points.Clear();

            foreach (SerializableLatLng latLng in Points)
            {
                _points.Add(latLng);
            }
        }

        public void OnAfterDeserialize()
        {
            Points.Clear();

            foreach (LatLng latLng in _points)
            {
                Points.Add(latLng);
            }
        }
    }
}
