#include "MySpinBox.h"
#include <iostream>
using namespace std;

MySpinBox::MySpinBox()
{
    cout<<"MySpinBox Constructor"<<endl;
}
MySpinBox::~MySpinBox()
{
    cout<<"MySpinBox destructor"<<endl;
}

bool MySpinBox::event(QEvent *event)
{
    cout<<"MySpinBox event function called"<<endl;
    return QWidget::event(event);
}

void MySpinBox::paintEvent(QPaintEvent *event)
{
    cout<<"My Slider Paint Event function called"<<endl;
    QWidget::paintEvent(event);
}

