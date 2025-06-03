#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
public:
    void (MyClass::*funcPtr)();

    void callFunc();
    void myFunction();
};

#endif // MYCLASS_H
