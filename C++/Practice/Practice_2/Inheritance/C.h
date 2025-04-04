#ifndef C_H
#define C_H

#include "B.h"
class C:public B
{
private:
    void fun();
protected:
    void display();
public:
    C();
 ~C();
    void show();
};

#endif // C_H
