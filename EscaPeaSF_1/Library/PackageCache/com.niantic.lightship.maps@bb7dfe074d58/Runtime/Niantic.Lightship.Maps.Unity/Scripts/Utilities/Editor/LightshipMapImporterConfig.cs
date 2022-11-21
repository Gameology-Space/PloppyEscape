// Copyright 2022 Niantic, Inc. All Rights Reserved.

#if UNITY_EDITOR
using System;
using System.IO;
using UnityEngine;

namespace Niantic.Lightship.Maps.Unity.Utilities.Editor
{
    // Commented out for package publication
    // Uncomment if needed for package development
    //[CreateAssetMenu(fileName = "ImporterConfig", menuName = "Lightship Maps/Importer Config")]
    internal class LightshipMapImporterConfig : ScriptableObject
    {
        [Tooltip("Root path for Lightship Maps asset imports, relative to Project root")]
        [SerializeField]
        private string _defaultImportPath;
        public string DefaultImportPath => _defaultImportPath;

        [SerializeField]
        private GameObject _lightshipMapPrefab;
        public GameObject LightshipMapPrefab => _lightshipMapPrefab;

        [Serializable]
        public struct Directory
        {
            [SerializeField]
            private string _directoryName;

            [SerializeField]
            private string[] _subDirectories;

            public string DirectoryName => _directoryName;
            public string[] SubDirectories => _subDirectories;

            public static void CreateDirectories(string pathRoot, Directory directory)
            {
                pathRoot = pathRoot.Replace('/', Path.DirectorySeparatorChar);

                var directoryToCreate = Path.Combine(pathRoot, directory.DirectoryName);
                bool createDirectory =
                    !string.IsNullOrEmpty(directory.DirectoryName) && !System.IO.Directory.Exists(directoryToCreate);

                if (createDirectory)
                {
                    System.IO.Directory.CreateDirectory(directoryToCreate);
                }

                foreach (var subDirectory in directory.SubDirectories)
                {
                    bool createSubdirectory =
                        !string.IsNullOrEmpty(subDirectory)
                        && !System.IO.Directory.Exists(directoryToCreate + subDirectory);

                    if (createSubdirectory)
                    {
                        System.IO.Directory.CreateDirectory(directoryToCreate + subDirectory);
                    }
                }
            }
        }

        [SerializeField]
        private Directory _directoryStructure;
        public Directory DirectoryStructure => _directoryStructure;
    }
}
#endif
