#ifndef MONTH_H
#define MONTH_H

#include "Date.h"
#include<list>

class Month
{
public:
    Month(string monthName);
    ~Month();
private:
    string m_monthName;
    list<Date*> m_dates;
};

#endif // MONTH_H
