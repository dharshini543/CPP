// #include <QApplication>
// #include "calendar.h"
// #include "CalendarUI.h"
// #include"debug.h"

// int main(int argc, char *argv[])
// {
//     Debug::setEnabled(false);
//     QApplication app(argc, argv);
//     Calender* calendar = new Calender;
//     CalendarUI ui(calendar);
//     ui.show();
//     return app.exec();
// }

// #include <QApplication>
// #include "CalendarWidget.h"

// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);
//     CalendarWidget w;
//     w.show();
//     return app.exec();
// }

#include "CalendarWidget.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <ctime>


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CalendarWidget window;
    window.show();
    return app.exec();
}

