#include "MyClass.h"
#include <iostream>

void MyClass::callFunc()
{
    (this->*funcPtr)();
}

void MyClass::myFunction()
{
    std::cout << "myFunction called"<<std::endl;
}
