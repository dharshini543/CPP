#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H

#include "Auditorium.h"
#include "BookingDetails.h"
#include <list>

#include <vector>

class BookingSystem
{
public:
    BookingSystem();
    ~BookingSystem();
    void displayAvailableAuditoriums(int date);
    void bookAuditorium(int date, string& auditoriumName);
    int isBooked(string name,int date);

private:
    vector<Auditorium> m_auditoriums;
    list<BookingDetails> m_bookings;
};

#endif // BOOKINGSYSTEM_H
