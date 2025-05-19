#include "CalendarUI.h"
#include <ctime>
#include <iostream>

CalendarUI::CalendarUI(Calender* calendar, QWidget* parent)
    : QWidget(parent), m_calendar(calendar)
{
    cout<<"Calendar UI Constructor"<<endl;
    setFixedSize(700, 500);
    setupUI();
    updateCalendar();
}

CalendarUI::~CalendarUI()
{
    cout<<"Calendar UI Destructor"<<endl;
}

void CalendarUI::setupUI()
{
    m_leftBtn = new QPushButton("<", this);
    m_leftBtn->setGeometry(200, 10, 60, 30);
    connect(m_leftBtn, &QPushButton::clicked, this, &CalendarUI::goPreviousMonth);

    m_rightBtn = new QPushButton(">", this);
    m_rightBtn->setGeometry(440, 10, 60, 30);
    connect(m_rightBtn, &QPushButton::clicked, this, &CalendarUI::goNextMonth);

    m_monthYearBtn = new QPushButton(this);
    m_monthYearBtn->setGeometry(270, 10, 160, 30);
    m_monthYearBtn->setEnabled(false);

    const char* daysOfWeek[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    for (int i = 0; i < 7; ++i)
    {
        QPushButton* dayLabel = new QPushButton(daysOfWeek[i], this);
        dayLabel->setGeometry(i * 90 + 20, 50, 80, 30);
        dayLabel->setEnabled(false);
    }

    for (int i = 0; i < 42; ++i)
    {
        QPushButton* dayBtn = new QPushButton(this);
        dayBtn->setGeometry((i % 7) * 90 + 20, (i / 7) * 50 + 90, 80, 40);
        m_dayButtons.push_back(dayBtn);
    }

    m_todayLabel = new QPushButton(this);
    m_todayLabel->setGeometry(200, 430, 300, 30);
    m_todayLabel->setEnabled(false);

    m_currentMonth = m_calendar->getCurrentMonth();
    m_currentYear = m_calendar->getCurrentYear();
}

void CalendarUI::updateCalendar()
{
    const char* monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    char monthYear[100];
    sprintf(monthYear, "%s %d", monthNames[m_currentMonth], m_currentYear);
    m_monthYearBtn->setText(monthYear);

    for (auto dayButtons:m_dayButtons)
    {
        dayButtons->hide();
    }

    int startDay = m_month->getWeekDay(m_currentYear,m_currentMonth);
    int totalDays = m_month->getDaysInMonth(m_currentMonth,m_currentYear);


    for (int day = 1; day <= totalDays; ++day)
    {
        int index = startDay + day - 1;
        char dayText[4];
        sprintf(dayText, "%d", day);
        m_dayButtons[index]->setText(dayText);
        m_dayButtons[index]->show();
    }


    Date today = m_calendar->getCurrentDate();
    char todayText[30];
    sprintf(todayText, "Today's Date: %02d-%02d-%d", today.getDay(), today.getMonth(), today.getYear());
    m_todayLabel->setText(todayText);
}

void CalendarUI::goPreviousMonth()
{
    if (--m_currentMonth < 1)
    {
        m_currentMonth = 12;
        --m_currentYear;
    }
    m_calendar->setYearAndMonth(m_currentYear, m_currentMonth);
    updateCalendar();
}

void CalendarUI::goNextMonth()
{
    if (++m_currentMonth > 12)
    {
        m_currentMonth = 1;
        ++m_currentYear;
    }
    m_calendar->setYearAndMonth(m_currentYear, m_currentMonth);
    updateCalendar();
}


