#include "Calender.h"
#include <iomanip>
#include <iostream>

Calender::Calender()
{
    cout<<"Calender Constructor"<<endl;
    m_years.push_back(new Year(2025));
}

Calender::~Calender()
{
    cout<<"Calender Destructor"<<endl;
}

bool isToday(int year, int month, int day)
{
    time_t t = time(nullptr);
    tm* now = localtime(&t);

    return (now->tm_year + 1900 == year &&
            now->tm_mon + 1 == month &&
            now->tm_mday == day);
}

int getStartDayOfWeek(int year, int month)
{
    tm time_in = {};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;
    mktime(&time_in);
    return time_in.tm_wday;
}

int getDaysInMonth(int year, int month)
{
    if (month == 2)
    {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
    }
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return daysInMonth[month - 1];
}

void Calender::printMonthCalender(int year,int month)
{
    cout << "\n     April " << year << "\n";
    cout << "Su  Mo  Tu  We  Th  Fr  Sa\n";

    int startDay = getStartDayOfWeek(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    int currentDay = 1;

    for (int i = 0; i < startDay; ++i)
        cout << "    ";

    for (int i = startDay; currentDay <= daysInMonth; ++i)
    {
        bool today = isToday(year, month, currentDay);
            cout << setw(2) << currentDay << "  ";

        if ((i + 1) % 7 == 0)
        cout <<endl;

        currentDay++;
    }
    cout <<endl<<endl;

}

void Calender::printTodayDate()
{
    time_t t;
    struct tm* today;

    time(&t);
    today = localtime(&t);

    cout<<"Today's Date : "<<today->tm_mday<<"/0"<<today->tm_mon + 1<<"/"<<today->tm_year + 1900<<endl<<endl;
}
