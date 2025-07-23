#include<QApplication>
#include <QCoreApplication>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton *btn = new QPushButton("Temp");
    qDebug() << "Created button";
    delete btn;  // directly delete it, destructor called immediately
    qDebug() << "Delete button";


    return 0;
}
