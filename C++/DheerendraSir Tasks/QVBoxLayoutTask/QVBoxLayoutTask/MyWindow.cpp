#include "MyWindow.h"
#include <QPushButton>
#include <QVBoxLayout>

MyWindow::MyWindow(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);

    button1 = new QPushButton("Button 1", this);
    button2 = new QPushButton("Button 2", this);
    button3 = new QPushButton("Button 3", this);

    // Associate buttons with layout (association: layout just manages their position)
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);

    // No need to call setLayout(layout); it's done automatically when layout has parent = this
}

MyWindow::~MyWindow()
{
    // No need to manually delete layout or buttons — Qt handles deletion via QObject parent-child hierarchy
}
