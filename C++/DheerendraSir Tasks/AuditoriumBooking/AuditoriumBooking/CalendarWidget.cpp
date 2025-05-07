#include "CalendarWidget.h"
#include <QString>
#include <QMessageBox>
#include <iostream>

CalendarWidget::CalendarWidget(QWidget *parent)
    : QWidget(parent), currentYear(2025), currentMonth(5)
{
    cout<<"Calender widget Construcctor"<<endl;
    this->setFixedSize(800, 600);

    manager = new AuditoriumBookingManager();
    calender = new Calender();
    calender->setBookingManager(manager);
    calender->addYear(currentYear);

    setupUI();
    renderMonth();
}

void CalendarWidget::setupUI()
{
    int x0 = 40, y0 = 40;
    int size = 60, padding = 10;
    int cols = 7;

    for (int i = 0; i < 42; ++i)
    {
        QPushButton* btn = new QPushButton(this);
        btn->setGeometry(x0 + (i % cols) * (size + padding),
                         y0 + (i / cols) * (size + padding),
                         size, size);
        connect(btn, &QPushButton::clicked, this, &CalendarWidget::handleDayClick);
        dayButtons.push_back(btn);
    }
}

void CalendarWidget::renderMonth()
{
    Year* y = calender->getYear(currentYear);
    if (!y) {
        calender->addYear(currentYear);
        y = calender->getYear(currentYear);
    }

    Month* m = y->getMonth(currentMonth);
    if (!m) {
        y->addMonth(currentMonth);
        m = y->getMonth(currentMonth);
    }

    for (int i = 0; i < dayButtons.size(); ++i)
        dayButtons[i]->setVisible(false);

    for (size_t i = 0; i < m->getDays().size(); ++i) // You'll need to add getDays() to Month
    {
        Day* day = m->getDays()[i];  // Add getter
        Date d(day->getDay(), currentMonth, currentYear);
        int count = manager->getBookingCount(d);
        updateButton(i, day->getDay(), count);
    }
}

void CalendarWidget::updateButton(int index, int dayNumber, int bookingCount)
{
    if (index >= dayButtons.size()) return;

    QPushButton* btn = dayButtons[index];
    btn->setText(QString::number(dayNumber) + "\n(" + QString::number(bookingCount) + ")");
    btn->setVisible(true);
}

void CalendarWidget::handleDayClick()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (!btn || btn->text().isEmpty()) return;

    QString text = btn->text().split("\n").first();
    int day = text.toInt();
    Date d(day, currentMonth, currentYear);

    bool success = manager->bookAuditorium(day, d); // Assuming a default auditorium ID
    QString msg = success ? "Booked!" : "Already fully booked!";
    QMessageBox::information(this, "Booking Result", msg);

    renderMonth(); // Refresh after booking
}
