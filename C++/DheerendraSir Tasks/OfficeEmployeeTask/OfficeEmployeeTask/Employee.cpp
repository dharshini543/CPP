#include "Employee.h"
#include <iostream>

Employee::Employee(const string& name, Base* Ptr)
    : Base(name)
{
    cout << "Employee constructor called for " << m_name << endl<<endl;
    if (Ptr)
        Ptr->addChild(this);
}

Employee::~Employee()
{
    cout << "Employee destructor for " << m_name << endl;
}





