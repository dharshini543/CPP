#ifndef YEAR_H
#define YEAR_H

#include "Month.h"
#include <vector>
using namespace std;

class Year
{
public:
    Year(int year);
    ~Year();

    int getYear();
    Month* getMonth(int month);
    void addMonth(int month);


private:
    int m_year;
    vector<Month*> m_months;
};
#endif // YEAR_H
