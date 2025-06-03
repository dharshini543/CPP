#include "Base.h"
#include <iostream>
using namespace std;

Base::Base()
{
    cout << "Base default constructor calle" << endl;
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
    children.push_back(child);
}

string Base::getName() const
{
    return m_name;
}

void Base::getMe() const
{
    cout << "Base getMe(): " << m_name << endl;
}



