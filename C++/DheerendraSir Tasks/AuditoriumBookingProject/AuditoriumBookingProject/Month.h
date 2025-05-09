#ifndef MONTH_H
#define MONTH_H
#include"AuditoriumBookingManager.h"
#include "Day.h"
#include <vector>
using namespace std;

class Month
{
public:
    Month(int month);
    ~Month();

    int getMonth();
    Day* getDay(int day);
    void addDay(int day);
    void print(int year, AuditoriumBookingManager *manager);

    vector<Day*> getDays();
    int getWeekDay(int year, int month);
private:
    int m_month;
    vector<Day*> m_days;
};


#endif // MONTH_H
