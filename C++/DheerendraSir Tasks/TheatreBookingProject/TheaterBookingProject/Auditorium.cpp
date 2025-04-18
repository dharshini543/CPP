#include "Auditorium.h"
#include <iostream>

Auditorium::Auditorium(int ID, string name)
{
    cout<<"Auditorium Constructor"<<endl;
    m_auditoriumID = ID;
    m_auditoriumName = name;
}

Auditorium::~Auditorium()
{
    cout<<"Auditorium Destructor"<<endl;
}

string Auditorium::getName()
{
    return m_auditoriumName;
}

int Auditorium::getID()
{
    return m_auditoriumID;
}
