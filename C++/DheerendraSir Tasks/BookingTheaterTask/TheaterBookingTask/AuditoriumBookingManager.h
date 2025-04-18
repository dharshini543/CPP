#ifndef AUDITORIUMBOOKINGMANAGER_H
#define AUDITORIUMBOOKINGMANAGER_H

#include "Auditorium.h"
#include "Date.h"
#include <list>
#include <map>

typedef int auditoriumNumber;
class AuditoriumBookingManager
{
public:
    AuditoriumBookingManager();
    ~AuditoriumBookingManager();
    void displayAvailableAuditoriums(Date &date);
    void bookAuditorium(Date &date, int& auditoriumNumber);
    friend ostream & operator <<(ostream& out, Date date)
    {
        out<<date.getDay()<<date.getMonth()<<date.getYear();
        return out;
    }

private:
    list<Auditorium*> m_auditoriumsList;
    map<Date, list<auditoriumNumber>> m_bookingsList;
    map<list<auditoriumNumber>, Auditorium> m_auditoriums;
};

#endif // AUDITORIUMBOOKINGMANAGER_H
