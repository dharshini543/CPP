#include <QPushButton>
#include <vector>
#include "calendar.h"

class CalendarUI : public QWidget
{
    Q_OBJECT

public:
    CalendarUI(Calender* calendar, QWidget* parent = nullptr);
    ~CalendarUI();

private:
    Calender* m_calendar;
    Month* m_month;
    vector<QPushButton*> m_dayButtons;

    QPushButton* m_leftBtn;
    QPushButton* m_rightBtn;
    QPushButton* m_monthYearBtn;
    QPushButton* m_todayLabel;

    int m_currentMonth;
    int m_currentYear;

    void setupUI();
    void updateCalendar();
    void goPreviousMonth();
    void goNextMonth();
};


