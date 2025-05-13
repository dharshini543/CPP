#ifndef CALENDARWIDGET_H
#define CALENDARWIDGET_H

#include <QWidget>
#include <QPushButton>
#include"calendar.h"
class CalendarWidget : public QWidget {
    Q_OBJECT

public:
    CalendarWidget(QWidget *parent = nullptr);

private:
    int currentYear;
    int currentMonth;
    int currentDay;
    string currentDate;
    Calender* m_calendar;
    Month* m_month;
    QPushButton *monthTitle;
    QPushButton *dateDisplay;
    QPushButton *dateButtons[42];

    int daysInMonth(int year, int month);
    int dayOfWeek(int year, int month, int day);

    void setupUI();
    void renderCalendar();
};

#endif // CALENDARWIDGET_H
