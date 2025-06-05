#include "Base.h"
#include <iostream>
using namespace std;

Base::Base()
{
    cout << "Base default constructor called" << endl;
}

Base::Base(const string& name)
    : m_name(name)
{
    cout << "Base constructor called for " << m_name << endl;
}

Base::~Base()
{
    cout << "Base destructor called for " << m_name << endl;
}

void Base::addChild(Base* child)
{
    m_childrens.push_back(child);
}

void Base::print() const
{
    cout << m_name <<" print function called"<< endl;
    for (Base* child : m_childrens)
    {
        child->print();

    }
}

vector<Base *> Base::findChild(const string& name)
{
    vector<Base*> result;
    for (Base* child : m_childrens)
    {
        if (child->getName() == name)
        {
            result.push_back(child);
        }
    }
    return result;
}

string Base::getName() const
{
    return m_name;
}

void Base::getMe() const
{
    cout <<endl<< m_name<< " getMe():  function called"<< endl;
    for (Base* child : m_childrens)
    {
        child->getMe();

    }
}



