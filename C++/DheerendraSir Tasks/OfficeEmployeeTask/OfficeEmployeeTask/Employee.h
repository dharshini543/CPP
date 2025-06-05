#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Base.h"

class Employee : public Base
{
public:
    Employee(const string &name, Base* parent);
    ~Employee();

};

#endif



