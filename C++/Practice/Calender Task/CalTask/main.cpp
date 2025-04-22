// --- Calender.h ---
#ifndef CALENDER_H
#define CALENDER_H

#include <list>

class Calender
{
public:
    Calender();
    ~Calender();

    void printMonthCalender();
    void navigate();

private:
    std::list<Year*> m_years;
    int currentYear;
    int currentMonth;

    Year* getOrCreateYear(int year);
};

#endif // CALENDER_H


// --- Calender.cpp ---
#include "Calender.h"
#include <iostream>
#include <iomanip>
#include <conio.h> // For _getch on Windows

Calender::Calender() : currentYear(2024), currentMonth(1) {}

Calender::~Calender()
{
    for (auto y : m_years)
        delete y;
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

void Calender::printMonthCalender()
{
    Year* y = getOrCreateYear(currentYear);
    Month* m = y->getOrCreateMonth(currentMonth);
    m->print(currentYear);
}

void Calender::navigate()
{
    char input;
    do {
        system("cls"); // Clear screen (Windows)
        printMonthCalender();
        std::cout << "\nPress < for previous, > for next, q to quit...\n";
        input = _getch();

        if (input == '<') {
            if (--currentMonth < 1) {
                currentMonth = 12;
                --currentYear;
            }
        } else if (input == '>') {
            if (++currentMonth > 12) {
                currentMonth = 1;
                ++currentYear;
            }
        }
    } while (input != 'q');
}


// --- Year.h ---
#ifndef YEAR_H
#define YEAR_H

#include "Month.h"
#include <vector>

class Year
{
public:
    Year(int year);
    ~Year();

    int getYear() const;
    Month* getOrCreateMonth(int month);

private:
    int m_year;
    std::vector<Month*> m_months;
};

#endif // YEAR_H


// --- Year.cpp ---
#include "Year.h"

Year::Year(int year) : m_year(year) {}

Year::~Year()
{
    for (auto m : m_months)
        delete m;
}

int Year::getYear() const { return m_year; }

Month* Year::getOrCreateMonth(int month)
{
    for (auto m : m_months)
        if (m->getMonth() == month)
            return m;

    Month* newMonth = new Month(month);
    m_months.push_back(newMonth);
    return newMonth;
}


// --- Month.h ---
#ifndef MONTH_H
#define MONTH_H

#include "Day.h"
#include <vector>

class Month
{
public:
    Month(int month);
    ~Month();

    int getMonth() const;
    Day* getOrCreateDay(int day);
    void print(int year) const;

private:
    int m_month;
    std::vector<Day*> m_days;
};

#endif // MONTH_H


// --- Month.cpp ---
#include "Month.h"
#include <iostream>
#include <iomanip>

int getDaysInMonth(int month, int year)
{
    if (month == 2) return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

int getWeekDay(int y, int m, int d)
{
    if (m < 3) { m += 12; y -= 1; }
    return (d + 2*m + 3*(m+1)/5 + y + y/4 - y/100 + y/400) % 7;
}

Month::Month(int month) : m_month(month) {}

Month::~Month()
{
    for (auto d : m_days)
        delete d;
}

int Month::getMonth() const { return m_month; }

Day* Month::getOrCreateDay(int day)
{
    for (auto d : m_days)
        if (d->getDay() == day)
            return d;

    Day* newDay = new Day(day);
    m_days.push_back(newDay);
    return newDay;
}

void Month::print(int year) const
{
    static const char* monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int numDays = getDaysInMonth(m_month, year);
    int startDay = getWeekDay(year, m_month, 1);

    std::cout << "\n     " << monthNames[m_month] << " " << year << "\n";
    std::cout << "Su Mo Tu We Th Fr Sa\n";

    for (int i = 0; i < startDay; ++i) std::cout << "   ";
    for (int i = 1; i <= numDays; ++i) {
        std::cout << std::setw(2) << i << " ";
        if ((i + startDay) % 7 == 0) std::cout << "\n";
    }
    std::cout << "\n";
}


// --- Day.h ---
#ifndef DAY_H
#define DAY_H

class Day
{
public:
    Day(int day);
    ~Day();
    int getDay() const;

private:
    int m_day;
};

#endif // DAY_H


// --- Day.cpp ---
#include "Day.h"

Day::Day(int day) : m_day(day) {}

Day::~Day() {}

int Day::getDay() const { return m_day; }


// --- main.cpp ---
#include "Calender.h"

int main()
{
    Calender c;
    c.navigate();
    return 0;
}
