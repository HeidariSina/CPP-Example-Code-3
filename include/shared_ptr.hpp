// // Constructor
// template <typename T>
// SharedPtr<T>::SharedPtr() : _p{nullptr} {};

// // Constructor
// template <typename T>
// SharedPtr<T>::SharedPtr(T *p) : _p{p} {}

// // Destructor
// template <typename T>
// SharedPtr<T>::~SharedPtr()
// {
//     delete _p;
//     _p = nullptr;
// }

// // Copy
// template <typename T>
// SharedPtr<T>::SharedPtr(SharedPtr<T> &ptr)
// {
//     _p = ptr.get();
// }

// // Get
// template <typename T>
// T *SharedPtr<T>::get()
// {
//     return _p;
// }

// // OP *
// template <typename T>
// T &SharedPtr<T>::operator*()
// {
//     return (*_p);
// }

// // OP =
// template <typename T>
// SharedPtr<T> &SharedPtr<T>::operator=(SharedPtr<T> &ptr)
// {
//     if (this == &ptr)
//         return *this;
//     delete _p;
//     _p = ptr.get();
//     return *this;
// }

// // OP ->
// template <typename T>
// T *SharedPtr<T>::operator->()
// {
//     return _p;
// }

// // Reset
// template <typename T>
// void SharedPtr<T>::reset()
// {
//     delete _p;
//     _p = nullptr;
// }

// // Reset 2
// template <typename T>
// SharedPtr<T> SharedPtr<T>::reset(T *p)
// {
//     delete _p;
//     _p = p;
//     return *this;
// }