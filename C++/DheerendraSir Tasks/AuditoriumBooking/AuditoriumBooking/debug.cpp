#include "debug.h"
#include<iostream>
using namespace std;

bool Debug::m_isEnabled = true;

Debug::Debug()
{
    if(Debug::getEnabled())
        cout<<"Debug Constructur"<<endl;
}
Debug::~Debug()
{
    if(Debug::getEnabled())
        cout<<"Debug Destructur"<<endl;
}

void Debug:: setEnabled(bool enable)
{
    m_isEnabled = enable;
}

bool  Debug::getEnabled()
{
    return m_isEnabled;
}
