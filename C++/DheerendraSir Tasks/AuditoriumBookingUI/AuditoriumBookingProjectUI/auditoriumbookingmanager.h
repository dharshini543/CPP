#ifndef AUDITORIUMBOOKINGMANAGER_H
#define AUDITORIUMBOOKINGMANAGER_H

#include "auditorium.h"
#include "date.h"
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
    bool bookAuditorium(int id, const Date &date);
    int getBookingCount(Date& date);
    int getAvailableCount(Date &date);
    std::vector<auditoriumID> getAvailableAuditoriumIDs(const Date& date);

private:
    map<auditoriumID, Auditorium*> m_auditoriums;
    map<Date, vector<auditoriumID>> m_bookings;
};

#endif // AUDITORIUMBOOKINGMANAGER_H
