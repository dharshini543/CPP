#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date
{
public:
    Date();
    ~Date();
    int getDay();
    int getMonth();
    int getYear();
    bool operator<(const Date& other) const;
    bool operator==(const Date& other);
    bool operator!=(const Date& other);
    string toString();
    friend istream &operator >>(istream& in, Date& date);
    friend ostream & operator <<(ostream& out, Date date);

private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // DATE_H
