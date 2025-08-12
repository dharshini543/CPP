#include "qboxlayout.h"
#include "qpushbutton.h"
#include "qwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QVBoxLayout *layout = new QVBoxLayout();

    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);

    QWidget *window = new QWidget;

    window->setLayout(layout);

    window->show();

    return app.exec();


}
