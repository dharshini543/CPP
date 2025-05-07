#include "Auditorium.h"
#include <iostream>
#include"Debug.h"
using namespace std;

Auditorium::Auditorium(int ID)
{
    if(Debug::getEnabled())
        cout<<"Auditorium Constructor"<<endl;
    m_auditoriumID = ID;
}

Auditorium::~Auditorium()
{
    if(Debug::getEnabled())
        cout<<"Auditorium Destructor"<<endl;
}

int Auditorium::getID()
{
    return m_auditoriumID;
}
