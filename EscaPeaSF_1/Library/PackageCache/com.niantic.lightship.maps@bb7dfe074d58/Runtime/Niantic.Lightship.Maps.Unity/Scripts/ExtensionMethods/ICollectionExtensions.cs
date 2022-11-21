// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections;

namespace Niantic.Lightship.Maps.Unity.ExtensionMethods
{
    /// <summary>
    /// Extension methods for <see cref="ICollection"/>
    /// </summary>
    // ReSharper disable once InconsistentNaming
    public static class ICollectionExtensions
    {
        /// <summary>
        /// Returns whether the collection contains any elements
        /// </summary>
        /// <param name="collection">The collection to check</param>
        /// <returns>True if the collection is empty</returns>
        public static bool IsEmpty(this ICollection collection)
        {
            return collection.Count == 0;
        }
    }
}
