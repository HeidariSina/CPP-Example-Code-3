#include "unique_ptr.h"

// Constructor
template <typename T>
UniquePtr<T>::UniquePtr() : _p{nullptr} {};

// Constructor
template <typename T>
UniquePtr<T>::UniquePtr(T *p){*_p = p};

// Destructor
template <typename T>
UniquePtr<T>::~UniquePtr()
{
    _p = nullptr;
}

// Copy
template <typename T>
UniquePtr<T>::UniquePtr(UniquePtr<T> &ptr)
{
    _p = ptr.get();
}

// Get
template <typename T>
T UniquePtr<T>::get()
{
    return _p;
}

// OP *
template <typename T>
T &UniquePtr<T>::operator*()
{
    return (*_p);
}

// OP =
template <typename T>
T &UniquePtr<T>::operator=(UniquePtr<T> &ptr)
{
    _p = ptr.get();
    ptr
}