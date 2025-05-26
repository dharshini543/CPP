#include "Employee.h"
#include "Office.h"
#include <iostream>
using namespace  std;

Employee::Employee(const string& name, Office* office)
    : m_employeeName(name), officePtr(office)
{
    cout<<"employee constructor with office parameter"<<endl;
        officePtr->addEmployee(this);
}

Employee::Employee(const string& name, Employee* emp)
    : m_employeeName(name), empPtr(emp)
{
    cout<<"employee constructor with employee parameter"<<endl;
        empPtr->addChild(this);
}

Employee::~Employee()
{
    cout<<"employee destructor called"<<endl;
}

string Employee::getName()
{
    return m_employeeName;
}

void Employee::addChild(Employee* child)
{
    children.push_back(child);
}

void Employee::print()
{
    for (auto child : children)
    {
        cout << "  Employee Name: " << child->getName() << endl;
        child->print();

    }
}


