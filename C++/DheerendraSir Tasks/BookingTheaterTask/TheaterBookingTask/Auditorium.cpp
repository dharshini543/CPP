#include "Auditorium.h"
#include <iostream>

Auditorium::Auditorium(string name)
{
    //cout<<"Auditorium Constructor"<<endl;
    m_auditoriumName = name;
}

Auditorium::~Auditorium()
{
    //cout<<"Auditorium Destructor"<<endl;
}

string Auditorium::getName()
{
    return m_auditoriumName;
}


