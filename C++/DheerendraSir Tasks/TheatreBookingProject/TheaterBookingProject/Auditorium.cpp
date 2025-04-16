#include "Auditorium.h"
#include <iostream>

Auditorium::Auditorium(string name, string status)
{
    m_auditoriumName = name;
    m_auditoriumStatus = status;
}

Auditorium::~Auditorium()
{
}

string Auditorium::getName()
{
    return m_auditoriumName;
}

string Auditorium::getStatus()
{
    return m_auditoriumStatus;
}
