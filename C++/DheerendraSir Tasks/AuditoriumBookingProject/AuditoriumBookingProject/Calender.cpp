#include "Calender.h"
#include <iomanip>
#include"time.h"
#include <iostream>

Calender::Calender()
{
    cout<<"Calender Constructor"<<endl;
}

Calender::~Calender()
{
    cout<<"Calender Destructor"<<endl;
    for(auto year: m_years)
    {
        delete year;
    }
}

Year* Calender::getOrCreateYear(int year)
{
    for (auto y : m_years)
    {
        if (y->getYear() == year)
            return y;
    }
    Year* newYear = new Year(year);
    m_years.push_back(newYear);
    return newYear;
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
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return daysInMonth[month - 1];
}

void Calender::printMonthCalender(int year, int month)
{
    Year* y = this->getOrCreateYear(year);
    Month* m = y->getOrCreateMonth(month);

    string months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    cout << "\n     " << months[month - 1] << " " << year << "\n";
    cout << "Su  Mo  Tu  We  Th  Fr  Sa\n";

    int startDay = getStartDayOfWeek(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    for (int i = 0; i < startDay; ++i)
        cout << "    ";

    for (int i = 1; i <= daysInMonth; ++i)
    {
        Day* day = m->getOrCreateDay(i);
        cout << setw(2) << i << "  ";

        if ((startDay + i) % 7 == 0)
            cout << endl;
    }
    cout << "\n\n";
}

void Calender::printTodayDate()
{
    time_t t;
    struct tm* today;

    time(&t);
    today = localtime(&t);

    cout<<"Today's Date : "<<today->tm_mday<<"/0"<<today->tm_mon + 1<<"/"<<today->tm_year + 1900<<endl<<endl;
}

