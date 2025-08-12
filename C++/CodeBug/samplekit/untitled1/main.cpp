#include "mainwindow.h"
#include<QPushButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget wid;
    QPushButton button(&wid);
    w.show();
    return a.exec();
}
