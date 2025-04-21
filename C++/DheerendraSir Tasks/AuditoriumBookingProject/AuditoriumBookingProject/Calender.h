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
    void printMonthCalender(int year, int month);
    void printTodayDate();
    Year* getOrCreateYear(int year);

private:
    list<Year*> m_years;
};

#endif // CALENDER_H
