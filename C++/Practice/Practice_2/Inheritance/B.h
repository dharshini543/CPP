#ifndef B_H
#define B_H

#include "A.h"
class B:public A
{
public:
    B();
   virtual ~B();
protected:
    void fun();
    void display();
private:
    void show();
};

#endif // B_H
