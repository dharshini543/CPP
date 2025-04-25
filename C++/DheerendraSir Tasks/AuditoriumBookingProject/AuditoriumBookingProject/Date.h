#ifndef DATE_H
#define DATE_H
#include <istream>
using namespace std;

class Date
{
public:
    Date();
    Date(int day, int month, int year);
    ~Date();

    int getDay();
    int getMonth();
    int getYear();
    Date getCurrentDate();
    bool operator < (const Date& other) const;
    friend istream &operator >> (istream& in, Date& date);

private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // DATE_H
