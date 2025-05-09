#ifndef CALENDARWIDGET_H
#define CALENDARWIDGET_H

#include <QWidget>
#include <QPushButton>

#include "Calender.h"

class CalendarWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CalendarWidget(Calender *cal, QWidget *parent = nullptr);

signals:

private:
    Calender *m_calendar;
    vector<QPushButton *> m_buttons;
};

#endif // CALENDARWIDGET_H
