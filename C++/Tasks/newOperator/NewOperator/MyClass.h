#ifndef MYCLASS_H
#define MYCLASS_H

#include <cstddef>

class MyClass
{
public:
    int data;

    MyClass();
    ~MyClass();

    void* operator new(size_t size);
    void operator delete(void* ptr);
};

#endif // MYCLASS_H
