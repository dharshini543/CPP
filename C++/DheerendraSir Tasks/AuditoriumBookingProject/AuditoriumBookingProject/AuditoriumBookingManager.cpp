#include "AuditoriumBookingManager.h"
#include"Auditorium.h"
#include <iostream>
using namespace  std;
#include"Date.h"
#include <algorithm>

typedef int AuditoriumID;

AuditoriumBookingManager::AuditoriumBookingManager()
{
    cout<<"AuditoriumBookingManager Constructor"<<endl;
}

AuditoriumBookingManager::~AuditoriumBookingManager()
{
    cout<<"AuditoriumBookingManager Destructor"<<endl;
    for(auto auditorium : m_auditoriums)
    {
        delete auditorium.second;
    }
}

void AuditoriumBookingManager::addAuditorium()
{
    for(int auditoriumID = 1; auditoriumID <= 10; auditoriumID++)
    {
        m_auditoriums[auditoriumID] = new Auditorium(auditoriumID);
    }
}

void AuditoriumBookingManager::showAvailableAuditoriums(Date& date)
{
    cout << "\nAvailable auditoriums on " << date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<<endl;

    vector<AuditoriumID> booked = m_bookings[date];
    bool found = false;

    for (auto auditorium : m_auditoriums)
    {
        int id = auditorium.first;
        if (find(booked.begin(), booked.end(), id) == booked.end())
        {
            cout << "Auditorium    "<<auditorium.second->getID()<<" is available"<<endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No auditoriums available on this date.\n";
    }
}

void AuditoriumBookingManager::bookAuditorium(int& id, Date&  date)
{

    if (m_auditoriums.find(id) == m_auditoriums.end())
    {
        cout << "Invalid auditorium ID.\n";
        return;
    }

    vector<AuditoriumID>& bookedList = m_bookings[date];

    if (find(bookedList.begin(), bookedList.end(), id) != bookedList.end())
    {
        cout << "Auditorium " << id << " is already booked on " << date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<< ".\n";
    }
    else
    {
        bookedList.push_back(id);
        cout << "Successfully booked auditorium " << id << " for " <<date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<< ".\n";
    }
}

