
// Constructor
template <typename T>
UniquePtr<T>::UniquePtr() : _p{nullptr} {};

// Constructor
template <typename T>
UniquePtr<T>::UniquePtr(T *p) : _p{p} {}

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
T *UniquePtr<T>::get()
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
UniquePtr<T> &UniquePtr<T>::operator=(UniquePtr<T> &ptr)
{
    if (this == &ptr)
        return *this;
    delete _p;
    _p = ptr.get();
    return *this;
}

// OP ->
template <typename T>
T *UniquePtr<T>::operator->()
{
    return _p;
}

// Reset
template <typename T>
void UniquePtr<T>::reset()
{
    _p = nullptr;
}

// Reset 2
template <typename T>
UniquePtr<T> UniquePtr<T>::reset(T *p)
{
    delete _p;
    _p = p;
    return *this;
}