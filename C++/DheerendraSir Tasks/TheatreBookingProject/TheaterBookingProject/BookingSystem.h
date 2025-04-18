#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H

#include "Auditorium.h"
#include <map>
#include <vector>

class BookingSystem
{
public:
    BookingSystem();
    ~BookingSystem();
    void displayAvailableAuditoriums(int date);
    void bookAuditorium(int date, string& auditoriumName);
private:
    vector<Auditorium> m_auditoriums;
    map<int,vector<string>> m_bookings;
};

#endif // BOOKINGSYSTEM_H
