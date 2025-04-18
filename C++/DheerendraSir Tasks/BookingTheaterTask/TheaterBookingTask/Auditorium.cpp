#include "Auditorium.h"
#include <iostream>

Auditorium::Auditorium(int number, string name, int capacity)
{
    //cout<<"Auditorium Constructor"<<endl;
    m_auditoriumNumber = number;
    m_auditoriumName = name;
    m_auditoriumCapacity = capacity;
}

Auditorium::~Auditorium()
{
    cout<<"Auditorium Destructor"<<endl;
}

string Auditorium::getName()
{
    return m_auditoriumName;
}

int Auditorium::getNumber()
{
    return m_auditoriumNumber;
}


