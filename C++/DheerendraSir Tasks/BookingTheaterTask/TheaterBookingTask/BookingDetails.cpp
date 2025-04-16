#include "BookingDetails.h"
#include <iostream>

BookingDetails::BookingDetails(string name, int date)
{
    //cout<<"BookingDetails Constructor"<<endl;
    m_auditoriumName = name;
    m_date = date;
}

BookingDetails::~BookingDetails()
{
    //cout<<"BookingDetails Destructor"<<endl;
}

string BookingDetails::getName()
{
    return m_auditoriumName;
}

int BookingDetails::getDate()
{
    return m_date;
}
