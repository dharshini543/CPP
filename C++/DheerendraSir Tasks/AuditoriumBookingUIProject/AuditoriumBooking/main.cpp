#include <QApplication>
#include "calendar.h"
#include "calendarui.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Calender* calendar = new Calender;
    CalendarUI ui(calendar);
    ui.show();
    return app.exec();
}

