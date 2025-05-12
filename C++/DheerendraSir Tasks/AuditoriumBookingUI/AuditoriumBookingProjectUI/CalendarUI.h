// #ifndef CALENDARUI_H
// #define CALENDARUI_H

// #include <QWidget>
// #include <QPushButton>
// #include <QLabel>
// #include <vector>
// #include "calendar.h"
// #include "auditoriumbookingmanager.h"

// class CalendarUI : public QWidget {
//     Q_OBJECT

// public:
//     CalendarUI(Calender* calendar, QWidget* parent = nullptr);
// private slots:
//     void goPreviousMonth();
//     void goNextMonth();
//     void handleDateClick();

// private:
//     void setupUI();
//     void updateCalendar();

//     Calender* m_calendar;
//     AuditoriumBookingManager m_bookingManager;
//     std::vector<QPushButton*> m_dayButtons;
//     QLabel* m_monthLabel;
//     QPushButton* m_leftBtn;
//     QPushButton* m_rightBtn;
//     int m_currentMonth;
//     int m_currentYear;
// };

// #endif // CALENDARUI_H

#ifndef CALENDARUI_H
#define CALENDARUI_H

#include <QWidget>
#include <QPushButton>
#include <vector>
#include "calendar.h"
#include "auditoriumbookingmanager.h"

class CalendarUI : public QWidget
{
    Q_OBJECT

public:
    CalendarUI(Calender* calendar, QWidget* parent = nullptr);

private slots:
    void goPreviousMonth();
    void goNextMonth();
    void handleDateClick();
    void handleAuditoriumSelection();

private:
    void setupUI();
    void updateCalendar();
    void showAuditoriumButtonsForDate(int day, QPushButton* dayButton);

    Calender* m_calendar;
    AuditoriumBookingManager m_bookingManager;
    vector<QPushButton*> m_dayButtons;
    vector<QPushButton*> m_auditoriumButtons;

    QPushButton* m_leftBtn;
    QPushButton* m_rightBtn;
    QPushButton* m_monthYearBtn;

    int m_currentMonth;
    int m_currentYear;
    int m_selectedDay;
};

#endif // CALENDARUI_H
