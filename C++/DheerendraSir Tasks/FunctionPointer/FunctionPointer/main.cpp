#include "MyClass.h"

int main()
{
    MyClass obj;
    obj.funcPtr = &MyClass::myFunction;
    obj.callFunc();

    return 0;
}
