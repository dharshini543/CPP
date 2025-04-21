#include "AuditoriumBookingManager.h"
#include"Auditorium.h"
#include <iostream>
#include <algorithm>
#include"Date.h"
using namespace  std;

AuditoriumBookingManager::AuditoriumBookingManager()
{
    cout<<"AuditoriumBookingManager Constructor"<<endl;
    this->addAuditorium();
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
    m_auditoriums[10] = new Auditorium(10, "A1");
    m_auditoriums[20] = new Auditorium(20, "A2");
    m_auditoriums[30] = new Auditorium(30, "A3");
    m_auditoriums[40] = new Auditorium(40, "A4");
    m_auditoriums[50] = new Auditorium(50, "A5");
    m_auditoriums[60] = new Auditorium(60, "A6");
    m_auditoriums[70] = new Auditorium(70, "A7");
    m_auditoriums[80] = new Auditorium(80, "A8");
    m_auditoriums[90] = new Auditorium(90, "A9");
    m_auditoriums[100] = new Auditorium(100, "A10");
}

void AuditoriumBookingManager::showAvailableAuditoriums(Date& date)
{
    cout << "\nAvailable auditoriums on " << date.getDay()<<date.getMonth()<<date.getYear()<<endl;

    //cout << "\nAvailable auditoriums on " << date.toString()<<endl;

    vector<int> booked = m_bookings[date];
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
    vector<int>& bookedList = m_bookings[date];
    if (find(bookedList.begin(), bookedList.end(), id) != bookedList.end())
    {
        cout << "Auditorium " << id << " is already booked on " << date.getDay()<<date.getMonth()<<date.getYear()<< ".\n";
    }
    else
    {
        bookedList.push_back(id);
        cout << "Successfully booked auditorium " << id << " for " <<date.getDay()<<date.getMonth()<<date.getYear()<< ".\n";
    }
}

