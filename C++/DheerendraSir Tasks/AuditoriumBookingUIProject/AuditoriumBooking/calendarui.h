#include <QPushButton>
#include <vector>
#include "calendar.h"
#include "month.h"

class CalendarUI : public QWidget
{

public:
    CalendarUI(Calender* calendar, QWidget* parent = nullptr);
    ~CalendarUI();

private:
    Calender* m_calendar;
    Month* m_month;
    AuditoriumBookingManager m_bookingManager;
    vector<QPushButton*> m_dayButtons;
    vector<QPushButton*> m_auditoriumButtons;

    QPushButton* m_leftBtn;
    QPushButton* m_rightBtn;
    QPushButton* m_monthYearBtn;
    QPushButton* m_todayLabel;
    QPushButton* m_selectAuditoriumBtn;


    int m_currentMonth;
    int m_currentYear;
    int m_selectedDay;

    void setupUI();
    void updateCalendar();
    void goPreviousMonth();
    void goNextMonth();
    void handleDateClick(int day);
    void handleAuditoriumSelection(int auditoriumID);
    // void handleDateClick(int index);
    // void handleAuditoriumSelection(int auditoriumID);
    void onSelectAuditoriumClicked();
    void showAuditoriumButtonsForDate(int day /*QPushButton* dayButton*/);
};


