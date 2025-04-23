#ifndef AUDITORIUMBOOKINGMANAGER_H
#define AUDITORIUMBOOKINGMANAGER_H

#include "Auditorium.h"
#include "Date.h"
#include <map>
#include <vector>

typedef int auditoriumID;

class AuditoriumBookingManager
{
public:
    AuditoriumBookingManager();
    ~AuditoriumBookingManager();

    void addAuditorium();
    void showAvailableAuditoriums(Date& date);
    void bookAuditorium(int& id, Date& date);

private:
    map<auditoriumID, Auditorium*> m_auditoriums;
    map<Date, vector<auditoriumID>> m_bookings;
};

#endif // AUDITORIUMBOOKINGMANAGER_H
