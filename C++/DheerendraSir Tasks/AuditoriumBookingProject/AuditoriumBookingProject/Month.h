#ifndef MONTH_H
#define MONTH_H

#include "Day.h"
#include <vector>
using namespace std;

class Month
{
public:
    Month(int month);
    ~Month();

    int getMonth();
    Day* getOrCreateDay(int day);
    void print(int year);

private:
    int m_month;
    vector<Day*> m_days;
};


#endif // MONTH_H
