#include "MyClass.h"
#include <iostream>
using namespace  std;

MyClass::MyClass()
{
    cout << "Constructor"<<endl;
}

MyClass::~MyClass()
{
    cout << "Destructor"<<endl;
}

void* MyClass::operator new(size_t size)
{
    cout<<"Overloaded new "<<endl;
    void* ptr = malloc(size);
    return ptr;
}

void MyClass::operator delete(void* ptr)
{
    cout<<"Overloaded delete "<<endl;
    free(ptr);
}
