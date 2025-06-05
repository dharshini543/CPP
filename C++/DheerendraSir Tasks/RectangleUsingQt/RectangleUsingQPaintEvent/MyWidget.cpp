#include "MyWidget.h"
#include <QPainter>
#include<iostream>
using namespace std;

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    cout<<"My Widget Constructor"<<endl;
}

MyWidget::~MyWidget()
{
    cout<<"My Widget Destructor"<<endl;
}

void MyWidget::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.drawRect(50, 50, 100, 60);
}
