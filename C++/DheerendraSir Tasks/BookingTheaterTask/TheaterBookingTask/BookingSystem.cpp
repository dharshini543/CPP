#include "BookingSystem.h"
#include"Auditorium.h"
#include <iostream>

BookingSystem::BookingSystem()
{
    cout<<"BookingSystem Constructor"<<endl;
    m_auditoriums.push_back(Auditorium("A1"));
    m_auditoriums.push_back(Auditorium("A2"));
    m_auditoriums.push_back(Auditorium("A3"));
    m_auditoriums.push_back(Auditorium("A4"));
    m_auditoriums.push_back(Auditorium("A5"));
    m_auditoriums.push_back(Auditorium("A6"));
    m_auditoriums.push_back(Auditorium("A7"));
    m_auditoriums.push_back(Auditorium("A8"));
    m_auditoriums.push_back(Auditorium("A9"));
    m_auditoriums.push_back(Auditorium("A10"));

}

BookingSystem::~BookingSystem()
{
    cout<<"BookingSystem Destructor"<<endl;
}

void BookingSystem::displayAvailableAuditoriums(int date)
{
    cout << "\nAvailable theaters on April " << date << ":\n";
    bool found = false;
    for(auto auditorium: m_auditoriums)
    {
        if (!isBooked(auditorium.getName(), date))
        {
            cout << "Auditorium " << auditorium.getName() << " is available\n";
            found = true;
        }
    }
    if (!found)
    {
        cout << "No auditoriums are available on this date.\n";
    }

}

void BookingSystem::bookAuditorium(int date, string &auditoriumName)
{
    if (isBooked(auditoriumName, date))
    {
        cout << "Auditorium " << auditoriumName << " is already booked on " << date << ".\n";
    }
    else
    {
        m_bookings.push_back(BookingDetails(auditoriumName,date));
        cout << "Auditorium " << auditoriumName << " successfully booked for " << date << ".\n";
    }
}

int BookingSystem::isBooked(string name, int date)
{
    for (auto booking : m_bookings)
    {
        if (booking.getName() == name && booking.getDate() == date)
        {
            return true;
        }
    }
    return false;
}

