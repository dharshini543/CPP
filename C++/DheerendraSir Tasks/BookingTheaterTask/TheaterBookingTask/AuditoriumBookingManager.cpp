#include "AuditoriumBookingManager.h"
#include"Auditorium.h"
#include <iostream>
#include<ostream>
using namespace  std;

AuditoriumBookingManager::AuditoriumBookingManager()
{
    cout<<"AuditoriumBookingManager Constructor"<<endl;

    m_auditoriumsList.push_back(new Auditorium(1, "A1", 10));
    m_auditoriumsList.push_back(new Auditorium(2, "A2", 15));
    m_auditoriumsList.push_back(new Auditorium(3, "A3", 10));
    m_auditoriumsList.push_back(new Auditorium(4, "A4", 10));
    m_auditoriumsList.push_back(new Auditorium(5, "A5", 15));
    m_auditoriumsList.push_back(new Auditorium(6, "A6", 10));
    m_auditoriumsList.push_back(new Auditorium(7, "A7", 15));
    m_auditoriumsList.push_back(new Auditorium(8, "A8", 10));
    m_auditoriumsList.push_back(new Auditorium(9, "A9", 15));
    m_auditoriumsList.push_back(new Auditorium(10, "A10", 10));

}

AuditoriumBookingManager::~AuditoriumBookingManager()
{
    cout<<"AuditoriumBookingManager Destructor"<<endl;

    for(auto auditorium:m_auditoriumsList)
    {
        delete auditorium;
    }
}

void AuditoriumBookingManager::displayAvailableAuditoriums(Date date)
{
    cout << "\nAvailable theaters on April ";
    cout << date << ":\n";
    list<int> auditoriumBooked = m_bookingsList[date];
    int found = 0;

    for(auto auditorium: m_auditoriumsList)
    {
        found = 0;
        for(auto booked:auditoriumBooked)
        {
            if(booked == auditorium->getNumber())
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            cout << "Auditorium    "<<auditorium->getNumber()<<" is available"<<endl;
        }
    }
}

void AuditoriumBookingManager::bookAuditorium(Date &date, int& auditoriumNumber)
{
    list<int>& auditoriumBooked = m_bookingsList[date];

    for(auto booked:auditoriumBooked)
    {
        if(booked == auditoriumNumber)
        {
            cout<<"Theater "<<auditoriumNumber << "is already booked on April " <<date <<endl;
            return;
        }
    }
    auditoriumBooked.push_back(auditoriumNumber);
    cout<<"Booked Auditorium: "<<auditoriumNumber<<" on April "<<date<<" successfully"<<endl;
}

