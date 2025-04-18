#ifndef DAY_H
#define DAY_H

#include<string>
using namespace std;

class Day
{
public:
    Day(int day);
    ~Day();
private:
    int m_day;
    string m_dayOfWeek[7] = {"Sun","Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
};

#endif // DAY_H
