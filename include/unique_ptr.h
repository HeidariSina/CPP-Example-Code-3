#ifndef UNIQUE_PTR
#define UNIQUE_PTR

template <typename T>
class UniquePtr
{
public:
    UniquePtr();
    UniquePtr(T *p);
    ~UniquePtr();
    UniquePtr(UniquePtr &ptr);
    T get();
    T &operator*();
    T &operator=();

private:
    T *_p;
};

#endif // UNIQUE_PTR