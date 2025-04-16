#ifndef CALENDER_H
#define CALENDER_H

#include <map>
#include <string>
using namespace std;
class Calender
{
public:
    Calender();
    ~Calender();
    void display();
    void displayCurrentDate();
private:
    int m_date;
    string m_weekdays[7] = {"Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};
    int m_year;
    string m_month;
};

#endif // CALENDER_H
