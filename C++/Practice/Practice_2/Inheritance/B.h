#ifndef B_H
#define B_H

#include "A.h"
class B:public A
{
public:
    B();
   virtual ~B();
   virtual void fun();
};

#endif // B_H
