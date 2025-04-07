#include "MyCheckBox.h"
#include<iostream>
using namespace std;

MyCheckBox::MyCheckBox()
{
    cout<<"MyCheckBox Constructor"<<endl;
}
MyCheckBox::~MyCheckBox()
{
    cout<<"MyCheckBox destructor"<<endl;
}

bool MyCheckBox::event(QEvent *event)
{
    cout<<"MyCheckBox event function called"<<endl;
    return QWidget::event(event);
}

void MyCheckBox::paintEvent(QPaintEvent *event)
{
    cout<<"My Button Paint Event function called"<<endl;
    QWidget::paintEvent(event);
}
