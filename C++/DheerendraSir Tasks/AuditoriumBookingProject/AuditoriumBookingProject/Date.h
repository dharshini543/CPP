#ifndef DATE_H
#define DATE_H
#include <istream>
using namespace std;

class Date
{
public:
    Date();
    ~Date();
    int getDay();
    int getMonth();
    int getYear();
    bool operator < (const Date& other) const;
    friend istream &operator >> (istream& in, Date& date);

private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // DATE_H
