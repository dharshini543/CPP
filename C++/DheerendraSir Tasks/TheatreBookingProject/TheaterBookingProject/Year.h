#ifndef YEAR_H
#define YEAR_H

#include "Month.h"
#include<list>
using namespace std;

class Year
{
public:
    Year(int yearNum);
    ~Year();
private:
    int m_yearNum;
    list<Month*> m_months;
};

#endif // YEAR_H
