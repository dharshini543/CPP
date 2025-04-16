#ifndef CALENDAR_H
#define CALENDAR_H
#include<string>
using namespace std;

class Calendar
{
public:
    Calendar();
    ~Calendar();
    void display();
    void displayCurrentDate();

private:
    int m_date;
    int m_year;
    string m_daysInWeek[7] = {"Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};
    string m_month;
};

#endif // CALENDAR_H
