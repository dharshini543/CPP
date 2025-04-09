#include "MyToolButton.h"
#include<iostream>
using namespace std;

MyToolButton::MyToolButton()
{
    cout<<"MyToolButton Constructor"<<endl;
}

MyToolButton::~MyToolButton()
{
    cout<<"MyToolButton destructor"<<endl;
}

// bool MyToolButton::event(QEvent *event)
// {
//     cout<<"MyToolButton event function called"<<endl;
//     return QToolButton::event(event);
// }

// void MyToolButton::paintEvent(QPaintEvent *event)
// {
//     cout<<"MyToolButton Paint Event function called"<<endl;
//     QToolButton::paintEvent(event);
// }
