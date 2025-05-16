#include "calendar.h"
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <termios.h>
#include "debug.h"

#define LEFT_ARROW 68
#define RIGHT_ARROW 67
#define ENTER_KEY 10

using namespace std;

Calender::Calender()
{
    if (Debug::getEnabled())
        cout << "Calender Constructor" << endl;

    time_t now = time(0);
    tm* localTime = localtime(&now);
    m_currentYear = localTime->tm_year + 1900;
    m_currentMonth = localTime->tm_mon + 1;
}

Calender::~Calender()
{
    if (Debug::getEnabled())
        cout << "Calender Destructor" << endl;

    for (auto year : m_years)
    {
        delete year;
    }
}

int Calender::getCurrentYear()
{
    time_t now = time(0);
    tm *ltm =localtime(&now);
    int year = (1900+ltm->tm_year);
    return year;
}
int Calender::getCurrentMonth()
{
    time_t now = time(0);
    tm *ltm =localtime(&now);
    int month = ltm->tm_mon + 1;
    return month;
}

int Calender::getCurrentDay()
{
    time_t now = time(0);
    tm *ltm =localtime(&now);
    int day = ltm->tm_mday;
    return day;
}

Date Calender::getCurrentDate()
{
    time_t now = time(0);
    tm* localTime = localtime(&now);
    return Date(localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);
}

Year* Calender::getYear(int year)
{
    for (auto y : m_years)
    {
        if (y->getYear() == year)
        {
            return y;
        }
    }
    return nullptr;
}

Month* Calender::getMonth(int year, int month)
{
    Year* y = getYear(year);
    if (!y) {
        addYear(year);
        y = getYear(year);
    }

    Month* m = y->getMonth(month);
    if (!m) {
        y->addMonth(month);
        m = y->getMonth(month);
    }

    return m;
}


void Calender::setBookingManager(AuditoriumBookingManager* bookingManager)
{
    m_bookingManager = bookingManager;
}

void Calender::addYear(int year)
{
    Year* newYear = new Year(year);
    m_years.push_back(newYear);
}

void Calender::setYearAndMonth(int year, int month)
{
    cout << "Switching to " << month << "-" << year << "\n";
    m_currentYear = year;
    m_currentMonth = month;
}

void Calender::printMonthCalender()
{
    Year* year = getYear(m_currentYear);
    if (!year)
    {
        addYear(m_currentYear);
        year = getYear(m_currentYear);
    }
    Month* month = year->getMonth(m_currentMonth);
    if (!month)
    {
        year->addMonth(m_currentMonth);
        month = year->getMonth(m_currentMonth);
    }
    month->print(m_currentYear, m_bookingManager);
}

void Calender::printSpecificMonth(int year, int month)
{
    Year* y = getYear(year);
    if (!y)
    {
        addYear(year);
        y = getYear(year);
    }
    Month* m = y->getMonth(month);
    if (!m)
    {
        y->addMonth(month);
        m = y->getMonth(month);
    }
    m->print(year, m_bookingManager);
}


void Calender::navigate()
{
    char input;
    do {
        clearScreen();
        printMonthCalender();
        cout << endl;
        this->printTodayDate();

        cout << "Use arrow keys (← →) to navigate, Enter to continue booking: ";
        input = getArrowKey();

        if (input == LEFT_ARROW)
        {
            if (--m_currentMonth < 1)
            {
                m_currentMonth = 12;
                --m_currentYear;
            }
        }
        else if (input == RIGHT_ARROW)
        {
            if (++m_currentMonth > 12)
            {
                m_currentMonth = 1;
                ++m_currentYear;
            }
        }

    } while (input != ENTER_KEY);
}

AuditoriumBookingManager *Calender::bookingManager() const
{
    return m_bookingManager;
}

void Calender::printTodayDate()
{
    time_t t;
    struct tm* today;

    time(&t);
    today = localtime(&t);

    cout << "Today's Date : " << today->tm_mday << "/"
         << (today->tm_mon + 1) << "/"
         << (today->tm_year + 1900) << endl << endl;
}


void Calender::clearScreen()
{
    cout << "\033[H\033[J" << flush;
}


char Calender::getch()
{
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

char Calender::getArrowKey()
{
    char c = getch();
    if (c == 27)
    {
        getch();
        return getch();
    }
    return c;
}
