#include <QApplication>
#include "calendar.h"
#include "CalendarUI.h"
#include"debug.h"

int main(int argc, char *argv[])
{
    Debug::setEnabled(false);
    QApplication app(argc, argv);
    Calender* calendar = new Calender;
    CalendarUI ui(calendar);
    ui.show();
    return app.exec();
}

