#ifndef CALENDER_H
#define CALENDER_H
#include<list>
#include "Year.h"

using namespace std;

class Calender
{
public:
    Calender();
    ~Calender();

    Year* getOrCreateYear(int year);
    void printMonthCalender();
    void navigate();
    void printTodayDate();

private:
    list<Year*> m_years;
    int m_currentYear;
    int m_currentMonth;

};


#endif // CALENDER_H
