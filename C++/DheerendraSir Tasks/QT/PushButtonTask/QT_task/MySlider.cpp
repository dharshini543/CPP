#include "MySlider.h"
#include <iostream>
using namespace std;

MySlider::MySlider()
{
    cout<<"My Slider Constructor"<<endl;
}
MySlider::~MySlider()
{
    cout<<"My Slider destructor"<<endl;
}

bool MySlider::event(QEvent *event)
{
    cout<<"My Slider event function called"<<endl;
    return QWidget::event(event);
}

void MySlider::paintEvent(QPaintEvent *event)
{
    cout<<"My Slider Paint Event function called"<<endl;
    QWidget::paintEvent(event);
}
