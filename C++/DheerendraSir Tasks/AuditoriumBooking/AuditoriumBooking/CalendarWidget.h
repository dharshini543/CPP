#ifndef CALENDARWIDGET_H
#define CALENDARWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <vector>
#include "Calender.h"

class CalendarWidget : public QWidget
{
    Q_OBJECT

public:
    CalendarWidget(QWidget *parent = nullptr);

private slots:
    void handleDayClick();

private:
    std::vector<QPushButton*> dayButtons;
    Calender* calender;
    AuditoriumBookingManager* manager;

    int currentYear;
    int currentMonth;

    void setupUI();
    void renderMonth();
    void updateButton(int index, int dayNumber, int bookingCount);
};

#endif // CALENDARWIDGET_H

