// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using Object = UnityEngine.Object;

namespace Niantic.Lightship.Maps.Unity.ExtensionMethods
{
    /// <summary>
    /// Extension methods for <see cref="UnityEngine.Object"/>
    /// </summary>
    public static class ObjectExtensions
    {
        /// <summary>
        /// Checks if the reference to a type derived from <see cref="Object"/> is
        /// null.  Unity overrides many of the equality and null coalescing and
        /// propagation operators to perform lifetime checks of the underlying Unity
        /// engine object, so this extension method is a workaround for cases where
        /// the desired behavior is just a simple null check.  For more information, see
        /// <see href="https://github.com/JetBrains/resharper-unity/wiki/Possible-unintended-bypass-of-lifetime-check-of-underlying-Unity-engine-object">
        /// this page from JetBrains.</see>
        /// </summary>
        /// <param name="object">The Unity Object to check for null</param>
        /// <returns>True if the reference is null</returns>
        public static bool IsReferenceNull(this Object @object)
        {
            return ReferenceEquals(@object, null);
        }
    }
}
