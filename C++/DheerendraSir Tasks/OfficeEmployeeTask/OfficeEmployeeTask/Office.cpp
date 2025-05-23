#include "Office.h"
#include <iostream>

Office::Office(const string &name) : m_officeName(name)
{
    cout<<"office constructor called"<<endl;
}

Office::~Office()
{
    cout<<"office destructor called"<<endl;
}

void Office::addEmployee(Employee* emp)
{
    cout<<"office constructor called"<<endl;
    employees.push_back(emp);
}

void Office::print()
{
    cout << "Office Name: " << m_officeName << endl;
    for (auto emp : employees)
    {
        emp->print();
        cout << "  Employee Name: " << emp->getName() << endl;
    }
}
