// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections.Generic;
using System.Threading;
using Niantic.Lightship.Maps.Logging;
using Niantic.Lightship.Maps.Unity.ExtensionMethods;
using Object = UnityEngine.Object;

namespace Niantic.Lightship.Maps.Unity.Core
{
    /// <summary>
    /// This internal interface is meant to allow instances of <see cref="PooledObject{T}"/> to
    /// access the <see cref="ObjectPool{T}"/> that they're managed by.  It's intentionally as
    /// narrowly-defined as possible, and is implemented explicitly in an effort to prevent these
    /// methods from being called by anything other than a <see cref="PooledObject{T}"/>.
    /// </summary>
    /// <typeparam name="T">The pooled objects' derived type</typeparam>
    internal interface IPooledObjectAccessor<out T> where T : Object
    {
        /// <summary>
        /// Checks whether a pooled object is still alive
        /// </summary>
        /// <param name="id">The pooled object's id</param>
        /// <returns>True if the object is still alive</returns>
        bool IsAlive(long id);

        /// <summary>
        /// Gets a pooled object by its unique id
        /// </summary>
        /// <param name="id">The pooled object's id</param>
        /// <returns>The pooled object</returns>
        T GetValue(long id);

        /// <summary>
        /// Returns an object to the pool
        /// </summary>
        /// <param name="id">The pooled object's id</param>
        void Release(long id);
    }

    /// <summary>
    /// A general-purpose object pool for types derived from Unity's <see cref="Object"/>
    /// </summary>
    /// <typeparam name="T">The pool's derived type</typeparam>
    public class ObjectPool<T> : IPooledObjectAccessor<T> where T : Object
    {
        private readonly Dictionary<long, T> _liveObjects = new Dictionary<long, T>();
        private readonly Queue<T> _pool = new Queue<T>();
        private readonly Action<T> _onCreate;
        private readonly Action<T> _onRelease;
        private readonly T _source;
        private long _objectId;

        private static ChannelLogger Log { get; } = new ChannelLogger(nameof(ObjectPool<T>));

        /// <summary>
        /// Initializes the Pool with the object to be duplicated.
        /// </summary>
        /// <param name="source">The object to be duplicated in the Pool.</param>
        /// <param name="onCreate">An action invoked on a newly instantiated object only when it is first created.</param>
        /// <param name="onRelease">An action invoked on an object when it is released</param>
        /// <exception cref="ArgumentNullException">Thrown if source is null.</exception>
        public ObjectPool(T source, Action<T> onCreate = null, Action<T> onRelease = null)
        {
            _source = !source.IsReferenceNull() ? source : throw new ArgumentNullException(nameof(source));
            _onCreate = onCreate;
            _onRelease = onRelease;
        }

        #region IPooledObjectAccessor

        /// <inheritdoc />
        bool IPooledObjectAccessor<T>.IsAlive(long id) => _liveObjects.ContainsKey(id);

        /// <inheritdoc />
        T IPooledObjectAccessor<T>.GetValue(long id)
        {
            VerifyObjectIsAlive(id, throwIfDisposed: true);
            return _liveObjects[id];
        }

        /// <inheritdoc />
        void IPooledObjectAccessor<T>.Release(long id)
        {
            VerifyObjectIsAlive(id, throwIfDisposed: false);

            if (_liveObjects.Remove(id, out var value))
            {
                _onRelease?.Invoke(value);
                _pool.Enqueue(value);
            }
        }

        #endregion

        /// <summary>
        /// Gets an object in the Pool if one is available.  Otherwise,
        /// returns a new instance of the object and calls onCreate() on it.
        /// </summary>
        /// <returns>An object in the Pool, if one is available.
        /// Otherwise, a new instance of the object.</returns>
        public PooledObject<T> GetOrCreate()
        {
            if (!_pool.TryDequeue(out var instance))
            {
                // If we couldn't reuse an instance of an object
                // that has been released, instantiate a new one
                instance = Object.Instantiate(_source);
                _onCreate?.Invoke(instance);
            }

            // Add the instance to our live object table
            var id = Interlocked.Increment(ref _objectId);
            _liveObjects[id] = instance;

            return new PooledObject<T>(id, this);
        }

        /// <summary>
        /// Checks whether an object with a given id is still alive
        /// </summary>
        /// <param name="id">The object's unique id</param>
        /// <param name="throwIfDisposed">Whether to throw if the object is not alive</param>
        /// <exception cref="ObjectDisposedException">Thrown if the object's id isn't
        /// found in the live object list, which can happen if an object is accessed
        /// after its <see cref="PooledObject{T}"/> has been disposed.</exception>
        private void VerifyObjectIsAlive(long id, bool throwIfDisposed)
        {
            if (!_liveObjects.ContainsKey(id))
            {
                var message = $"Pooled object '{id}' has already been disposed";
                Log.Error(message);

                if (throwIfDisposed)
                {
                    throw new ObjectDisposedException(message);
                }
            }
        }
    }
}
