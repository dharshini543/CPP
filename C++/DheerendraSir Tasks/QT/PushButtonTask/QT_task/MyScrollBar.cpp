#include "MyScrollBar.h"
#include <iostream>
using namespace std;

MyScrollBar::MyScrollBar()
{
    cout<<"MyScrollBar Constructor"<<endl;
}

MyScrollBar::~MyScrollBar()
{
    cout<<"MyScrollBar destructor"<<endl;
}

// bool MyScrollBar::event(QEvent *event)
// {
//     cout<<"MyScrollBar event function called"<<endl;
//     return QScrollBar::event(event);
// }

// void MyScrollBar::paintEvent(QPaintEvent *event)
// {
//     cout<<"MyScrollBar Paint Event function called"<<endl;
//     QScrollBar::paintEvent(event);
// }
