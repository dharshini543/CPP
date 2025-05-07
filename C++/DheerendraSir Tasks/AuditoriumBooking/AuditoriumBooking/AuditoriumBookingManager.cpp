#include "AuditoriumBookingManager.h"
#include"Auditorium.h"
#include <iostream>
using namespace  std;
#include"Date.h"
#include <algorithm>
#include"Debug.h"
typedef int AuditoriumID;

AuditoriumBookingManager::AuditoriumBookingManager()
{
    if(Debug::getEnabled())
        cout<<endl<<"AuditoriumBookingManager Constructor"<<endl;
}

AuditoriumBookingManager::~AuditoriumBookingManager()
{
    if(Debug::getEnabled())
        cout<<"AuditoriumBookingManager Destructor"<<endl;
    for(auto auditorium : m_auditoriums)
    {
        delete auditorium.second;
    }
}

void AuditoriumBookingManager::addAuditorium()
{
    for(int auditoriumID = 1; auditoriumID <= 2; auditoriumID++)
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

bool AuditoriumBookingManager::bookAuditorium(int& id, Date&  date)
{

    if (m_auditoriums.find(id) == m_auditoriums.end())
    {
        cout << "Invalid auditorium ID.\n";
        return false;
    }

    vector<AuditoriumID>& bookedList = m_bookings[date];

    if (find(bookedList.begin(), bookedList.end(), id) != bookedList.end())
    {
        cout << "Auditorium " << id << " is already booked on " << date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<< ".\n";
        return false;
    }
    else
    {
        bookedList.push_back(id);
        cout << "Successfully booked auditorium " << id << " for " <<date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<< ".\n\n";
        return true;
    }
}

int AuditoriumBookingManager::getBookingCount(Date &date)
{
    return m_bookings[date].size();
}

int AuditoriumBookingManager::getAvailableCount(Date &date)
{
    vector<AuditoriumID> bookedList = m_bookings[date];
    return m_auditoriums.size() - bookedList.size();
}
