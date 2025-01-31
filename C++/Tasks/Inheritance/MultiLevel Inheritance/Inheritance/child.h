#ifndef CHILD_H
#define CHILD_H
#include "parent.h"

class child:public parent
{
public:
    child(int salary, string c_name, int c_age, int c_phno);
    void display();
    ~child();
};

#endif // CHILD_H
