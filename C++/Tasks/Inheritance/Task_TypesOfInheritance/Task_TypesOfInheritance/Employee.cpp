#include "Employee.h"
#include<iostream>

Employee::Employee()
{
    cout<<"Employee Constructor"<<endl;
}

Employee::~Employee()
{
    cout<<"Employee Desstructor"<<endl;
}

void Employee::display()
{
    cout<<"Employee display"<<endl;
}
