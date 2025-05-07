#ifndef CALENDER_H
#define CALENDER_H
#include<list>
#include "AuditoriumBookingManager.h"
#include "Year.h"

using namespace std;

class Calender
{
public:
    Calender();
    ~Calender();

    Year* getYear(int year);
    void setBookingManager(AuditoriumBookingManager* m_bookingManager);
    void addYear(int year);
    void printSpecificMonth(int year, int month);
    void printMonthCalender();
    void navigate();
    void printTodayDate();

private:
    list<Year*> m_years;
    AuditoriumBookingManager* m_bookingManager;
    int m_currentYear;
    int m_currentMonth;

};


#endif // CALENDER_H
