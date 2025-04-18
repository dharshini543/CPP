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
    for(auto auditorium:m_auditoriums)
    {
        delete auditorium.second;
    }
}

void AuditoriumBookingManager::addAuditorium()
{
    m_auditoriums[1] = new Auditorium(1, "A1");
    m_auditoriums[2] = new Auditorium(2, "A2");
    m_auditoriums[3] = new Auditorium(3, "A3");
    m_auditoriums[4] = new Auditorium(4, "A4");
    m_auditoriums[5] = new Auditorium(5, "A5");
    m_auditoriums[6] = new Auditorium(6, "A6");
    m_auditoriums[7] = new Auditorium(7, "A7");
    m_auditoriums[8] = new Auditorium(8, "A8");
    m_auditoriums[9] = new Auditorium(9, "A9");
    m_auditoriums[10] = new Auditorium(10, "A10");

}

void AuditoriumBookingManager::showAvailableAuditoriums(Date &date)
{
    cout << "\nAvailable auditoriums on " << date.toString()<<endl;;

    vector<int> booked = m_bookings[date];
    bool found = false;

    for (auto auditorium : m_auditoriums)
    {
        int id = auditorium.first;
        if (find(booked.begin(), booked.end(), id) == booked.end())
        {
            cout << "ID: " << id << " - " << auditorium.second->getName() << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No auditoriums available on this date.\n";
    }
}

void AuditoriumBookingManager::bookAuditorium(int& id,Date &date)
{
    if (m_auditoriums.find(id) == m_auditoriums.end())
    {
        cout << "Invalid auditorium ID.\n";
        return;
    }
    vector<int>& bookedList = m_bookings[date];

    if (find(bookedList.begin(), bookedList.end(), id) != bookedList.end())
    {
        cout << "Auditorium " << id << " is already booked on " << date.toString() << ".\n";
    }
    else
    {
        bookedList.push_back(id);
        cout << "Successfully booked auditorium " << id << " for " << date.toString() << ".\n";
    }
}

