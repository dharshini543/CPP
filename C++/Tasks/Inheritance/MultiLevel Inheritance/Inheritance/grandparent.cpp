#include "grandparent.h"
#include<iostream>

grandparent::grandparent(string g_name, int g_age, int g_phonum) : m_name(g_name),m_age(g_age),m_phnum(g_phonum)
{

}

grandparent::~grandparent()
{
    cout<<"Grand Parent class Destructor called"<<endl;
}


