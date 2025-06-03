#include "Employee.h"
#include <iostream>

Employee::Employee(const string& name, Base* parent)
    : Base(name), Ptr(parent)
{
    cout << "Employee constructor called for " << m_name << endl<<endl;
    if (Ptr)
        Ptr->addChild(this);
}

Employee::~Employee()
{
    cout << "Employee destructor for " << m_name << endl;
}

void Employee::addChild(Base* child)
{
    children.push_back(child);
}

void Employee::print() const
{
    cout << "Employee Name: " << m_name << endl;
    for (auto child : children)
    {
        child->print();

    }
}

vector<string> Employee::findChild(const string& name)
{
    vector<string> result;
    for (auto child : children)
    {
        if (child->getName() == name)
        {
            result.push_back(name);
        }
    }
    return result;
}

void Employee::getMe() const
{
    cout << "Employee getMe(): " << m_name << endl;

    for (auto child : children)
    {
        child->getMe();
    }
}



