// #include "CalendarUI.h"
// #include <QApplication>
// #include <QPushButton>
// #include <QLabel>
// #include <QInputDialog>
// #include <QMessageBox>
// #include "calendar.h"

// CalendarUI::CalendarUI(Calender* calendar, QWidget* parent)
//     : QWidget(parent), m_calendar(calendar)
// {
//     m_calendar->setBookingManager(&m_bookingManager);
//     m_bookingManager.addAuditorium();

//     setFixedSize(700, 500);
//     setupUI();
//     updateCalendar();
// }

// int DaysInMonth(int month, int year)
// {
//     if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
//         return 29;
//     int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//     return daysInMonth[month - 1];
// }

// void CalendarUI::setupUI()
// {
//     m_monthLabel = new QLabel(this);
//     m_monthLabel->setGeometry(270, 10, 160, 30);

//     m_leftBtn = new QPushButton("<", this);
//     m_leftBtn->setGeometry(200, 10, 60, 30);
//     connect(m_leftBtn, &QPushButton::clicked, this, &CalendarUI::goPreviousMonth);

//     m_rightBtn = new QPushButton(">", this);
//     m_rightBtn->setGeometry(430, 10, 60, 30);
//     connect(m_rightBtn, &QPushButton::clicked, this, &CalendarUI::goNextMonth);

//     for (int i = 0; i < 42; ++i) {
//         QPushButton* dayBtn = new QPushButton(this);
//         dayBtn->setGeometry((i % 7) * 90 + 20, (i / 7) * 50 + 60, 80, 40);
//         connect(dayBtn, &QPushButton::clicked, this, &CalendarUI::handleDateClick);
//         m_dayButtons.push_back(dayBtn);
//     }

//     Date today = Date::getCurrentDate();
//     m_currentMonth = today.getMonth();
//     m_currentYear = today.getYear();
// }

// void CalendarUI::updateCalendar() {
//     static const char* monthNames[] = {
//         "", "January", "February", "March", "April", "May", "June",
//         "July", "August", "September", "October", "November", "December"
//     };

//     m_monthLabel->setText(QString("%1 %2").arg(monthNames[m_currentMonth]).arg(m_currentYear));

//     // Hide all buttons initially
//     for (auto btn : m_dayButtons) {
//         btn->hide();
//     }

//     // Calculate the weekday the month starts on
//     tm time_in = {};
//     time_in.tm_year = m_currentYear - 1900;
//     time_in.tm_mon = m_currentMonth - 1;
//     time_in.tm_mday = 1;
//     mktime(&time_in);
//     int startDay = time_in.tm_wday; // Sunday = 0

//     int daysInMonth = DaysInMonth(m_currentMonth, m_currentYear);

//     for (int day = 1; day <= daysInMonth; ++day) {
//         int index = startDay + day - 1;
//         QPushButton* btn = m_dayButtons[index];

//         Date d(day, m_currentMonth, m_currentYear);
//         int bookings = m_bookingManager.getBookingCount(d);
//         int available = m_bookingManager.getAvailableCount(d);

//         btn->setEnabled(true);
//         btn->setStyleSheet("");  // Clear any previous style

//         if (available == 0) {
//             btn->setEnabled(false);
//             btn->setText(" ");
//             btn->setStyleSheet("background-color: lightgray;"); // Fully booked
//         } else if (bookings > 0) {
//             btn->setText(QString("%1/%2").arg(day).arg(bookings));
//         } else {
//             btn->setText(QString::number(day));
//         }

//         btn->setProperty("day", day);
//         btn->show();
//     }
// }


// void CalendarUI::goPreviousMonth() {
//     if (--m_currentMonth < 1) {
//         m_currentMonth = 12;
//         --m_currentYear;
//     }
//     updateCalendar();
// }

// void CalendarUI::goNextMonth() {
//     if (++m_currentMonth > 12) {
//         m_currentMonth = 1;
//         ++m_currentYear;
//     }
//     updateCalendar();
// }


// void CalendarUI::handleDateClick() {
//     QPushButton* btn = qobject_cast<QPushButton*>(sender());
//     int day = btn->property("day").toInt();
//     Date selectedDate(day, m_currentMonth, m_currentYear);

//     std::vector<int> availableIDs = m_bookingManager.getAvailableAuditoriumIDs(selectedDate);
//     if (availableIDs.empty()) {
//         QMessageBox::warning(this, "No Availability", "No auditoriums are available on this date.");
//         return;
//     }

//     QStringList auditoriumList;
//     for (int id : availableIDs) {
//         auditoriumList << QString::number(id);
//     }

//     bool ok;
//     QString selected = QInputDialog::getItem(this, "Select Auditorium",
//                                              "Choose an auditorium:", auditoriumList, 0, false, &ok);

//     if (ok && !selected.isEmpty()) {
//         int selectedAuditoriumID = selected.toInt();
//         if (m_bookingManager.bookAuditorium(selectedAuditoriumID, selectedDate)) {
//             QMessageBox::information(this, "Booking Successful",
//                                      QString("Auditorium %1 successfully booked for %2/%3/%4.")
//                                          .arg(selectedAuditoriumID)
//                                          .arg(day).arg(m_currentMonth).arg(m_currentYear));
//             updateCalendar();
//         } else {
//             QMessageBox::warning(this, "Booking Failed", "Could not book selected auditorium.");
//         }
//     }
// }

#include "CalendarUI.h"
#include <QApplication>
#include <ctime>

CalendarUI::CalendarUI(Calender* calendar, QWidget* parent)
    : QWidget(parent), m_calendar(calendar)
{
    m_calendar->setBookingManager(&m_bookingManager);
    m_bookingManager.addAuditorium();

    setFixedSize(700, 500);
    setupUI();
    updateCalendar();
}

int DaysInMonth(int month, int year)
{
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
        return 29;
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return daysInMonth[month - 1];
}

void CalendarUI::setupUI()
{
    m_leftBtn = new QPushButton("<", this);
    m_leftBtn->setGeometry(200, 10, 60, 30);
    connect(m_leftBtn, &QPushButton::clicked, this, &CalendarUI::goPreviousMonth);

    m_rightBtn = new QPushButton(">", this);
    m_rightBtn->setGeometry(430, 10, 60, 30);
    connect(m_rightBtn, &QPushButton::clicked, this, &CalendarUI::goNextMonth);

    m_monthYearBtn = new QPushButton(this);
    m_monthYearBtn->setGeometry(270, 10, 160, 30);
    m_monthYearBtn->setEnabled(false);

    for (int i = 0; i < 42; ++i)
    {
        QPushButton* dayBtn = new QPushButton(this);
        dayBtn->setGeometry((i % 7) * 90 + 20, (i / 7) * 50 + 60, 80, 40);
        connect(dayBtn, &QPushButton::clicked, this, &CalendarUI::handleDateClick);
        m_dayButtons.push_back(dayBtn);
    }

    Date today = Date::getCurrentDate();
    m_currentMonth = today.getMonth();
    m_currentYear = today.getYear();
}

void CalendarUI::updateCalendar()
{
    static const char* monthNames[] ={
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    m_monthYearBtn->setText(QString("%1 %2").arg(monthNames[m_currentMonth]).arg(m_currentYear));

    for (auto btn : m_dayButtons)
    {
        btn->hide();
    }
    for (auto btn : m_auditoriumButtons)
    {
        btn->hide();
        delete btn;
    }
    m_auditoriumButtons.clear();

    tm time_in = {};
    time_in.tm_year = m_currentYear - 1900;
    time_in.tm_mon = m_currentMonth - 1;
    time_in.tm_mday = 1;
    mktime(&time_in);
    int startDay = time_in.tm_wday;

    int daysInMonth = DaysInMonth(m_currentMonth, m_currentYear);

    for (int day = 1; day <= daysInMonth; ++day)
    {
        int index = startDay + day - 1;
        QPushButton* btn = m_dayButtons[index];

        Date d(day, m_currentMonth, m_currentYear);
        int bookings = m_bookingManager.getBookingCount(d);
        int available = m_bookingManager.getAvailableCount(d);

        btn->setEnabled(true);
        btn->setStyleSheet("");

        if (available == 0)
        {
            btn->setEnabled(false);
            btn->setText(" ");
            btn->setStyleSheet("background-color: lightgray;");
        }
        else if (bookings > 0)
        {
            btn->setText(QString("%1/%2").arg(day).arg(bookings));
        }
        else
        {
            btn->setText(QString::number(day));
        }

        btn->setProperty("day", day);
        btn->show();
    }
}

void CalendarUI::goPreviousMonth()
{
    if (--m_currentMonth < 1)
    {
        m_currentMonth = 12;
        --m_currentYear;
    }
    updateCalendar();
}

void CalendarUI::goNextMonth()
{
    if (++m_currentMonth > 12)
    {
        m_currentMonth = 1;
        ++m_currentYear;
    }
    updateCalendar();
}

void CalendarUI::handleDateClick()
{
    QPushButton* senderBtn = qobject_cast<QPushButton*>(sender());
    int day = senderBtn->property("day").toInt();
    m_selectedDay = day;

    // Clear previous selection buttons
    for (auto btn : m_auditoriumButtons)
    {
        btn->hide();
        delete btn;
    }
    m_auditoriumButtons.clear();

    showAuditoriumButtonsForDate(day, senderBtn);
}

void CalendarUI::showAuditoriumButtonsForDate(int day, QPushButton* dayButton)
{
    Date selectedDate(day, m_currentMonth, m_currentYear);
    vector<int> availableIDs = m_bookingManager.getAvailableAuditoriumIDs(selectedDate);

    if (availableIDs.empty())
        return;

    QRect dayGeometry = dayButton->geometry();
    int startX = dayGeometry.right() + 5;
    int startY = dayGeometry.top();

    for (int i = 0; i < (int)availableIDs.size(); ++i)
    {
        QPushButton* auditoriumBtn = new QPushButton(QString::number(availableIDs[i]), this);
        auditoriumBtn->setGeometry(startX, startY + i * 35, 40, 30);
        auditoriumBtn->setProperty("auditoriumID", availableIDs[i]);
        connect(auditoriumBtn, &QPushButton::clicked, this, &CalendarUI::handleAuditoriumSelection);
        auditoriumBtn->show();
        m_auditoriumButtons.push_back(auditoriumBtn);
    }
}

void CalendarUI::handleAuditoriumSelection()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    int auditoriumID = btn->property("auditoriumID").toInt();
    Date selectedDate(m_selectedDay, m_currentMonth, m_currentYear);

    m_bookingManager.bookAuditorium(auditoriumID, selectedDate);
    updateCalendar();

    // Remove selection buttons
    for (auto b : m_auditoriumButtons)
    {
        b->hide();
        delete b;
    }
    m_auditoriumButtons.clear();
}
