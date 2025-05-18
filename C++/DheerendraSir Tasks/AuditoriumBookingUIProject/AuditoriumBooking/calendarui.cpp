// #include "calendarui.h"
// #include <ctime>
// #include <iostream>

// CalendarUI::CalendarUI(Calender* calendar, QWidget* parent)
//     : QWidget(parent), m_calendar(calendar)
// {
//     m_calendar->setBookingManager(&m_bookingManager);
//     m_bookingManager.addAuditorium();

//     cout << "Calendar UI Constructor" << endl;
//     setFixedSize(700, 500);
//     setupUI();
//     updateCalendar();
// }

// CalendarUI::~CalendarUI()
// {
//     cout << "Calendar UI Destructor" << endl;
// }

// void CalendarUI::setupUI()
// {
//     m_leftBtn = new QPushButton("<", this);
//     m_leftBtn->setGeometry(200, 10, 60, 30);
//     connect(m_leftBtn, &QPushButton::clicked, this, &CalendarUI::goPreviousMonth);

//     m_rightBtn = new QPushButton(">", this);
//     m_rightBtn->setGeometry(440, 10, 60, 30);
//     connect(m_rightBtn, &QPushButton::clicked, this, &CalendarUI::goNextMonth);

//     m_monthYearBtn = new QPushButton(this);
//     m_monthYearBtn->setGeometry(270, 10, 160, 30);
//     m_monthYearBtn->setEnabled(false);

//     const char* daysOfWeek[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
//     for (int i = 0; i < 7; ++i)
//     {
//         QPushButton* dayLabel = new QPushButton(daysOfWeek[i], this);
//         dayLabel->setGeometry(i * 90 + 20, 50, 80, 30);
//         dayLabel->setEnabled(false);
//     }

//     for (int i = 0; i < 42; ++i)
//     {
//         QPushButton* dayBtn = new QPushButton(this);
//         dayBtn->setGeometry((i % 7) * 90 + 20, (i / 7) * 50 + 90, 80, 40);
//         connect(dayBtn, &QPushButton::clicked, this, &CalendarUI::handleDateClick);
//         m_dayButtons.push_back(dayBtn);
//     }

//     m_todayLabel = new QPushButton(this);
//     m_todayLabel->setGeometry(200, 360, 300, 30);
//     m_todayLabel->setEnabled(false);

//     m_currentMonth = m_calendar->getCurrentMonth();
//     m_currentYear = m_calendar->getCurrentYear();
// }

// void CalendarUI::updateCalendar()
// {
//     const char* monthNames[] = {
//         "", "January", "February", "March", "April", "May", "June",
//         "July", "August", "September", "October", "November", "December"
//     };

//     char monthYear[100];
//     sprintf(monthYear, "%s %d", monthNames[m_currentMonth], m_currentYear);
//     m_monthYearBtn->setText(monthYear);

//     for (auto dayBtn : m_dayButtons)
//     {
//         dayBtn->hide();
//         dayBtn->setStyleSheet("");
//     }

//     for (auto btn : m_auditoriumButtons)
//     {
//         btn->hide();
//         delete btn;
//     }
//     m_auditoriumButtons.clear();

//     int startDay = m_month->getWeekDay(m_currentYear, m_currentMonth);
//     int totalDays = m_month->getDaysInMonth(m_currentMonth, m_currentYear);

//     Date currentDate = m_calendar->getCurrentDate();

//     for (int day = 1; day <= totalDays; ++day)
//     {
//         int index = startDay + day - 1;
//         QPushButton* btn = m_dayButtons[index];

//         Date btnDate(day, m_currentMonth, m_currentYear);
//         int bookings = m_bookingManager.getBookingCount(btnDate);
//         int available = m_bookingManager.getAvailableCount(btnDate);

//         btn->setEnabled(true);
//         btn->setStyleSheet("");

//         char dayText[20];

//         if (btnDate < currentDate)
//         {
//             sprintf(dayText, "%d", day);
//             btn->setText(dayText);
//             btn->setEnabled(false);  // disable past dates but show day
//         }
//         else if (available == 0)
//         {
//             sprintf(dayText, "%d", day);
//             btn->setText(dayText);
//             btn->setEnabled(false);
//             btn->setStyleSheet("background-color: lightgray;");  // fully booked grayed out
//         }
//         else if (bookings > 0)
//         {
//             sprintf(dayText, "%d/%d", day, bookings);
//             btn->setText(dayText);
//         }
//         else
//         {
//             sprintf(dayText, "%d", day);
//             btn->setText(dayText);
//         }

//         btn->setProperty("day", day);
//         btn->show();
//     }

//     Date today = m_calendar->getCurrentDate();
//     char todayText[30];
//     sprintf(todayText, "Today's Date: %02d-%02d-%d", today.getDay(), today.getMonth(), today.getYear());
//     m_todayLabel->setText(todayText);
// }

// void CalendarUI::goPreviousMonth()
// {
//     if (--m_currentMonth < 1)
//     {
//         m_currentMonth = 12;
//         --m_currentYear;
//     }
//     m_calendar->setYearAndMonth(m_currentYear, m_currentMonth);
//     updateCalendar();
// }

// void CalendarUI::goNextMonth()
// {
//     if (++m_currentMonth > 12)
//     {
//         m_currentMonth = 1;
//         ++m_currentYear;
//     }
//     m_calendar->setYearAndMonth(m_currentYear, m_currentMonth);
//     updateCalendar();
// }

// void CalendarUI::handleDateClick()
// {
//     QPushButton* senderBtn = qobject_cast<QPushButton*>(sender());
//     int day = senderBtn->property("day").toInt();

//     Date clickedDate(day, m_currentMonth, m_currentYear);
//     if (clickedDate < m_calendar->getCurrentDate())
//     {
//         return;
//     }

//     m_selectedDay = day;

//     for (auto btn : m_auditoriumButtons)
//     {
//         btn->hide();
//         delete btn;
//     }
//     m_auditoriumButtons.clear();

//     showAuditoriumButtonsForDate(day);
// }

// void CalendarUI::showAuditoriumButtonsForDate(int day)
// {
//     Date selectedDate(day, m_currentMonth, m_currentYear);
//     std::vector<int> availableIDs = m_bookingManager.getAvailableAuditoriumIDs(selectedDate);

//     if (availableIDs.empty())
//         return;

//     int startX = 20;
//     int startY = 450;

//     for (int i = 0; i < (int)availableIDs.size(); ++i)
//     {
//         char btnText[50];
//         sprintf(btnText, "Auditorium %d", availableIDs[i]);
//         QPushButton* auditoriumBtn = new QPushButton(btnText, this);

//         auditoriumBtn->setGeometry(startX + (i % 5) * 130, startY + (i / 5) * 35, 120, 30);

//         auditoriumBtn->setProperty("auditoriumID", availableIDs[i]);
//         connect(auditoriumBtn, &QPushButton::clicked, this, &CalendarUI::handleAuditoriumSelection);
//         auditoriumBtn->show();
//         m_auditoriumButtons.push_back(auditoriumBtn);
//     }
// }

// void CalendarUI::handleAuditoriumSelection()
// {
//     QPushButton* btn = qobject_cast<QPushButton*>(sender());
//     int auditoriumID = btn->property("auditoriumID").toInt();
//     Date selectedDate(m_selectedDay, m_currentMonth, m_currentYear);

//     if (selectedDate < m_calendar->getCurrentDate())
//     {
//         return;
//     }

//     m_bookingManager.bookAuditorium(auditoriumID, selectedDate);
//     updateCalendar();

//     for (auto b : m_auditoriumButtons)
//     {
//         b->hide();
//         delete b;
//     }
//     m_auditoriumButtons.clear();
// }


#include "calendarui.h"
#include <ctime>
#include <cstring>
#include <cstdio>

CalendarUI::CalendarUI(Calender* calendar, QWidget* parent)
    : QWidget(parent), m_calendar(calendar)
{
    m_calendar->setBookingManager(&m_bookingManager);
    m_bookingManager.addAuditorium();

    setFixedSize(700, 500);
    setupUI();
    updateCalendar();
}

CalendarUI::~CalendarUI()
{
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

        connect(dayBtn, &QPushButton::clicked, this, [=]() {
            handleDateClick(i);
        });

    }

    m_todayLabel = new QPushButton(this);
    m_todayLabel->setGeometry(200, 360, 300, 30);
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

    for (auto dayBtn : m_dayButtons)
    {
        dayBtn->hide();
        dayBtn->setText("");
        dayBtn->setEnabled(false);
    }

    for (auto btn : m_auditoriumButtons)
    {
        btn->hide();
        delete btn;
    }
    m_auditoriumButtons.clear();

    int startDay = m_month->getWeekDay(m_currentYear, m_currentMonth);
    int totalDays = m_month->getDaysInMonth(m_currentMonth, m_currentYear);

    Date currentDate = m_calendar->getCurrentDate();

    for (int day = 1; day <= totalDays; ++day)
    {
        int index = startDay + day - 1;
        QPushButton* btn = m_dayButtons[index];

        Date btnDate(day, m_currentMonth, m_currentYear);
        int bookings = m_bookingManager.getBookingCount(btnDate);
        int available = m_bookingManager.getAvailableCount(btnDate);

        char label[20];
        if (btnDate < currentDate)
        {
            sprintf(label, "%d", day);
            btn->setText(label);
            btn->setEnabled(false);
        }
        else if (available == 0)
        {
            sprintf(label, "%d", day);
                        btn->setText(label);
                        btn->setEnabled(false);
                        btn->setStyleSheet("background-color: lightgray;");
        }
        else if (bookings > 0)
        {
            sprintf(label, "%d/%d", day, bookings);
            btn->setText(label);
            btn->setEnabled(true);
        }
        else
        {
            sprintf(label, "%d", day);
            btn->setText(label);
            btn->setEnabled(true);
        }

        btn->show();
    }

    Date today = m_calendar->getCurrentDate();
    char todayText[50];
    sprintf(todayText, "Today's Date: %02d-%02d-%04d", today.getDay(), today.getMonth(), today.getYear());
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

void CalendarUI::handleDateClick(int index)
{
    if (index < 0 || index >= (int)m_dayButtons.size())
        return;

    QPushButton* btn = m_dayButtons[index];
    string text = btn->text().toStdString();

    int day = 0;
    sscanf(text.c_str(), "%d", &day);

    Date clickedDate(day, m_currentMonth, m_currentYear);
    if (clickedDate < m_calendar->getCurrentDate())
    {
        return;
    }

    m_selectedDay = day;

    for (auto b : m_auditoriumButtons)
    {
        b->hide();
        delete b;
    }
    m_auditoriumButtons.clear();

    showAuditoriumButtonsForDate(day);
}

void CalendarUI::showAuditoriumButtonsForDate(int day)
{
    Date selectedDate(day, m_currentMonth, m_currentYear);
    std::vector<int> availableIDs = m_bookingManager.getAvailableAuditoriumIDs(selectedDate);

    int startX = 20;
    int startY = 450;

    for (int i = 0; i < (int)availableIDs.size(); ++i)
    {
        int auditoriumID = availableIDs[i];
        char btnText[30];
        sprintf(btnText, "Auditorium %d", auditoriumID);

        QPushButton* auditoriumBtn = new QPushButton(btnText, this);
        auditoriumBtn->setGeometry(startX + (i % 5) * 130, startY + (i / 5) * 35, 120, 30);

        connect(auditoriumBtn, &QPushButton::clicked, this, [=]() {
            handleAuditoriumSelection(auditoriumID);
        });

        auditoriumBtn->show();
        m_auditoriumButtons.push_back(auditoriumBtn);
    }
}

void CalendarUI::handleAuditoriumSelection(int auditoriumID)
{
    Date selectedDate(m_selectedDay, m_currentMonth, m_currentYear);

    if (selectedDate < m_calendar->getCurrentDate())
    {
        return;
    }

    m_bookingManager.bookAuditorium(auditoriumID, selectedDate);
    updateCalendar();

    for (auto b : m_auditoriumButtons)
    {
        b->hide();
        delete b;
    }
    m_auditoriumButtons.clear();
}
