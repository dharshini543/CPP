#ifndef MONTH_H
#define MONTH_H
#include"auditoriumbookingmanager.h"
#include "day.h"
#include <vector>
using namespace std;

class Month
{
public:
    Month(int month);
    ~Month();

    int getDaysInMonth(int month, int year);
    int getMonth();
    Day* getDay(int day);
    void addDay(int day);
    void print(int year, AuditoriumBookingManager *manager);
    int getWeekDay(int year, int month);

    vector<Day*> getDays();

private:
    int m_month;
    vector<Day*> m_days;
};


#endif // MONTH_H
