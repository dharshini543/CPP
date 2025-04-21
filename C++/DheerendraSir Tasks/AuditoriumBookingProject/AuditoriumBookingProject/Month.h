#ifndef MONTH_H
#define MONTH_H

#include "Day.h"
#include<list>
using namespace std;

class Month
{
public:
    Month(int month);
    ~Month();
    int getMonth() const;
    Day* getOrCreateDay(int day);

private:
    int m_month;
    list<Day*> m_days;
};

#endif // MONTH_H
