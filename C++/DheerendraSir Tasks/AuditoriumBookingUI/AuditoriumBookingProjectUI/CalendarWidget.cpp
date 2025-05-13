#include "CalendarWidget.h"
#include <ctime>
#include <QString>
//using namespace std;
CalendarWidget::CalendarWidget(QWidget *parent) : QWidget(parent)
{
    setFixedSize(700, 400);
    setWindowTitle("Calendar");

    // time_t t = std::time(nullptr);
    // tm *now = std::localtime(&t);
    // currentYear = now->tm_year + 1900;
    // currentMonth = now->tm_mon + 1;
    // currentDay = now->tm_mday;
    m_calendar = new Calender;
    m_month = new Month;
    currentYear = m_calendar->getCurrentYear();
    currentMonth = m_calendar->getCurrentMonth();
    currentDay = m_calendar->getCurrentDay();
    currentDate = m_calendar->getCurrentDate();

    setupUI();
    renderCalendar();
}

int CalendarWidget::daysInMonth(int year, int month)
{
    static const int monthLengths[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) return 29;
    return monthLengths[month - 1];
}

int CalendarWidget::dayOfWeek(int y, int m, int d)
{
    if (m < 3)
    {
        m += 12;
        y -= 1;
    }
    int h = (d + 13 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    return (h + 6) % 7;
}

void CalendarWidget::setupUI()
{
    int startX = 40;
    int startY = 20;

    QPushButton *leftArrow = new QPushButton("<", this);
    leftArrow->setGeometry(250, startY, 40, 30);
    connect(leftArrow, &QPushButton::clicked, this, [=]()
            {
        currentMonth--;
        if (currentMonth == 0) {
            currentMonth = 12;
            currentYear--;
        }
        renderCalendar();
    });

    QPushButton *rightArrow = new QPushButton(">", this);
    rightArrow->setGeometry(500, startY, 40, 30);
    connect(rightArrow, &QPushButton::clicked, this, [=]() {
        currentMonth++;
        if (currentMonth == 13) {
            currentMonth = 1;
            currentYear++;
        }
        renderCalendar();
    });

    monthTitle = new QPushButton(this);
    monthTitle->setGeometry(300, startY, 180, 30);
    monthTitle->setEnabled(false);

    const char *days[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    for (int i = 0; i < 7; ++i) {
        QPushButton *btn = new QPushButton(days[i], this);
        btn->setGeometry(startX + i * 90, startY + 40, 85, 30);
        btn->setEnabled(false);
    }

    for (int i = 0; i < 42; ++i) {
        dateButtons[i] = new QPushButton(this);
        dateButtons[i]->setGeometry(startX + (i % 7) * 90, startY + 80 + (i / 7) * 40, 85, 30);
        dateButtons[i]->hide();
    }

    dateDisplay = new QPushButton(this);
    dateDisplay->setGeometry(startX, 300, 300, 30);
    dateDisplay->setEnabled(false);

    QPushButton *instructions = new QPushButton("Press < for previous month, > for next month, Enter for Booking Menu.", this);
    instructions->setGeometry(startX, 330, 600, 30);
    instructions->setEnabled(false);
}

void CalendarWidget::renderCalendar() {
    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    QString title = QString("%1 %2").arg(monthNames[currentMonth - 1]).arg(currentYear);
    monthTitle->setText(title);

    QString dateStr = QString("Current Date: %1 %2 %3").arg(currentDay).arg(monthNames[currentMonth - 1]).arg(currentYear);
    dateDisplay->setText(dateStr);

    for (int i = 0; i < 42; ++i)
        dateButtons[i]->hide();

    int startDay = dayOfWeek(currentYear, currentMonth, 1);
    int totalDays = daysInMonth(currentYear, currentMonth);

    for (int d = 1; d <= totalDays; ++d) {
        int index = startDay + d - 1;
        dateButtons[index]->setText(QString::number(d));
        dateButtons[index]->show();
    }
}
