#include "MyRadioButton.h"
#include<iostream>
using namespace std;

MyRadioButton::MyRadioButton()
{
    cout<<"MyRadioButton Constructor"<<endl;
}

MyRadioButton::~MyRadioButton()
{
    cout<<"MyRadioButton destructor"<<endl;
}

// bool MyRadioButton::event(QEvent *event)
// {
//     cout<<"MyRadioButton event function called"<<endl;
//     return QRadioButton::event(event);
// }

// void MyRadioButton::paintEvent(QPaintEvent *event)
// {
//     cout<<"MyRadioButton Paint Event function called"<<endl;
//     QRadioButton::paintEvent(event);
// }
