#include "Auditorium.h"
#include <iostream>
using namespace std;
Auditorium::Auditorium(int ID)
{
    //cout<<"Auditorium Constructor"<<endl;
    m_auditoriumID = ID;
}

Auditorium::~Auditorium()
{
    cout<<"Auditorium Destructor"<<endl;
}

int Auditorium::getID()
{
    return m_auditoriumID;
}
