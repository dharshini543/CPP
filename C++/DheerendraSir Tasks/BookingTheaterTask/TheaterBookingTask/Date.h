#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{
public:
    Date();
    ~Date();
    friend istream & operator >>(istream& in, Date& date)
    {
        in>>date.m_day>>date.m_month>>date.m_year;
        return in;
    }
    int getDay();
    int getMonth();
    int getYear();
private:
    int m_day;
    int m_month;
    int m_year;

};

#endif // DATE_H
