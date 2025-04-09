#include "MyButton.h"
#include <iostream>
using namespace std;

MyButton::MyButton()
{
    cout<<"My Button Constructor"<<endl;
}

MyButton::~MyButton()
{
    cout<<"My Button destructor"<<endl;
}

// bool MyButton::event(QEvent* event)
// {
//     cout<<"My Button event function called"<<endl;
//     return QPushButton::event(event);
// }

// void MyButton::paintEvent(QPaintEvent* event)
// {
//     cout<<"My Button Paint Event function called"<<endl;
//     QPushButton::paintEvent(event);
// }
