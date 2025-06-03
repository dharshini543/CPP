#include "Office.h"
#include <iostream>

Office::Office(const string &name)
    : Base(name)
{
    cout << "Office constructor for " << m_name << endl;
}

Office::~Office()
{
    cout << "Office destructor for " << m_name << endl;
}

void Office::addChild(Base* child)
{
    children.push_back(child);
}

void Office::print() const
{
    cout << "Office Name: " << m_name << endl;
    for (auto emp : children)
    {
        emp->print();
    }
}

vector<string> Office::findChild(const string& name)
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

void Office::getMe() const
{
    Base::getMe();
    cout << "Office getMe(): " << m_name << endl;

    for (auto emp : children)
    {
        emp->getMe();
    }
}


