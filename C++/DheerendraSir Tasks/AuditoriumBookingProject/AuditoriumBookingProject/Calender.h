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
    int currentYear;
    int currentMonth;

};


#endif // CALENDER_H
