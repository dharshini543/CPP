#include "Calender.h"
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <termios.h>
#include "Debug.h"

#define LEFT_ARROW 68    // ASCII for left arrow in ANSI escape sequence
#define RIGHT_ARROW 67   // ASCII for right arrow
#define ENTER_KEY 10     // Line feed on Linux

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

void Calender::setBookingManager(AuditoriumBookingManager* bookingManager)
{
    m_bookingManager = bookingManager;
}

void Calender::addYear(int year)
{
    Year* newYear = new Year(year);
    m_years.push_back(newYear);
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


