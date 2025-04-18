#include "BookingSystem.h"
#include"Auditorium.h"
#include <iostream>

BookingSystem::BookingSystem()
{
    cout<<"BookingSystem Constructor"<<endl;
    m_auditoriums.push_back(Auditorium("A","Available"));
    m_auditoriums.push_back(Auditorium("B","Available"));
    m_auditoriums.push_back(Auditorium("C","Available"));
    m_auditoriums.push_back(Auditorium("D","Available"));
    m_auditoriums.push_back(Auditorium("E","Available"));
    m_auditoriums.push_back(Auditorium("F","Available"));
    m_auditoriums.push_back(Auditorium("G","Available"));
    m_auditoriums.push_back(Auditorium("H","Available"));
    m_auditoriums.push_back(Auditorium("I","Available"));
    m_auditoriums.push_back(Auditorium("J","Booked"));

}

BookingSystem::~BookingSystem()
{
    cout<<"BookingSystem Destructor"<<endl;

}

void BookingSystem::displayAvailableAuditoriums(int date)
{
    cout << "\nAvailable theaters on April " << date << ":\n";
    vector<string> booked = m_bookings[date];

    for (auto auditorium : m_auditoriums)
    {
        bool isBooked = false;
        for (string status : booked)
        {
            if (status == auditorium.getName() )
            {
                isBooked = true;
                break;
            }
        }
        if (!isBooked)
        {
            if(auditorium.getStatus() == "Available")
            {
            cout << "- " << auditorium.getName() << endl;
            }
        }
    }

}

void BookingSystem::bookAuditorium(int date, string &auditoriumName)
{
    vector<string>& booked = m_bookings[date];

    for (auto t : booked)
    {
        if (t == auditoriumName)
        {
            cout << "\nTheater " << auditoriumName << " is already booked on April " << date << "!\n";
            return;
        }
    }

    booked.push_back(auditoriumName);
    cout << "\nBooked " << auditoriumName << " on April " << date << " successfully!\n";
}

