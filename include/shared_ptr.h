#ifndef SHARED_PTR
#define SHARED_PTR

template <typename T>
class SharedPtr
{
public:
    SharedPtr();
    SharedPtr(T *p);
    ~SharedPtr();
    SharedPtr(SharedPtr &ptr);
    T *get();
    T &operator*();
    T *operator->();
    SharedPtr<T> &operator=(SharedPtr &ptr);
    void reset();
    SharedPtr<T> reset(T *p);

private:
    T *_p;
};

// template <typename T>
// SharedPtr<T> make_unique(T p)
// {
//     SharedPtr<T> ptr{new T{p}};
//     return ptr;
// }

#include "shared_ptr.hpp"

#endif // SHARED_PTR