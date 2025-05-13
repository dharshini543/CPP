#ifndef CALENDER_H
#define CALENDER_H
#include<list>
#include "auditoriumbookingmanager.h"
#include "year.h"

using namespace std;

class Calender
{
public:
    Calender();
    ~Calender();

    int getCurrentYear();
    int getCurrentMonth();
    int getCurrentDay();
    string getCurrentDate();

    Year* getYear(int year);
    void setBookingManager(AuditoriumBookingManager* m_bookingManager);
    void addYear(int year);
    void setYearAndMonth(int year, int month) ;
    void clearScreen();
    char getch();
    char getArrowKey();
    void printSpecificMonth(int year, int month);
    void printMonthCalender();
    void navigate();
    void printTodayDate();

    AuditoriumBookingManager *bookingManager() const;

private:
    list<Year*> m_years;
    AuditoriumBookingManager* m_bookingManager;
    int m_currentYear;
    int m_currentMonth;

};


#endif // CALENDER_H
