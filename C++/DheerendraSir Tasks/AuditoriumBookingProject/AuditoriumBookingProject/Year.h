#ifndef YEAR_H
#define YEAR_H

#include "Month.h"
#include<list>
using namespace std;

class Year
{
public:
    Year(int year);
    ~Year();
    int getYear() const;
    Month* getOrCreateMonth(int month);

private:
    int m_year;
    list<Month*> m_months;
};

#endif // YEAR_H
