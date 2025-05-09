#include "CalendarWidget.h"

CalendarWidget::CalendarWidget(Calender *cal, QWidget *parent)
    : QWidget{parent},
    m_calendar(cal)
{
    int x = 0;
    int y = 50;
    int startDay = m_calendar->getYear(2025)->getMonth(5)->getWeekDay(2025, 5);
    int weekCount = startDay;
    QPushButton *sun = new QPushButton("Sun", this);
    sun->setGeometry(0,0, 50, 50);
    QPushButton *mon = new QPushButton("Mon", this);
    mon->setGeometry(50,0, 50, 50);
    QPushButton *tue = new QPushButton("Tue", this);
    tue->setGeometry(100,0, 50, 50);
    QPushButton *wed = new QPushButton("Wed", this);
    wed->setGeometry(150,0, 50, 50);
    QPushButton *thu = new QPushButton("Thu", this);
    thu->setGeometry(200,0, 50, 50);
    QPushButton *fri = new QPushButton("Fri", this);
    fri->setGeometry(250,0, 50, 50);
    QPushButton *sat = new QPushButton("Sat", this);
    sat->setGeometry(300,0, 50, 50);

    x = startDay * 50;

    foreach (Day* day, m_calendar->getYear(2025)->getMonth(5)->getDays()) {

        Date d(day->getDay(), 5, 2025);
        int bookcount = m_calendar->bookingManager()->getBookingCount(d);
        QString str = QString::number(day->getDay());
        if(bookcount > 0){
            str += "(" + QString::number(bookcount) + ")";
        }

        QPushButton *pb = new QPushButton(str, this);
        m_buttons.push_back(pb);
        pb->setGeometry(x, y, 50, 50);
        x += 50;
        ++weekCount;
        if(weekCount % 7 == 0){
            y += 50;
            x = 0;
        }
    }

}
