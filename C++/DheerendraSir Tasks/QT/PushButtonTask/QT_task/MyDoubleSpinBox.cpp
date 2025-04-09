#include "MyDoubleSpinBox.h"
#include <iostream>
using namespace std;

MyDoubleSpinBox::MyDoubleSpinBox()
{
    cout<<"MyDoubleSpinBox Constructor"<<endl;
}

MyDoubleSpinBox::~MyDoubleSpinBox()
{
    cout<<"MyDoubleSpinBox destructor"<<endl;
}

// bool MyDoubleSpinBox::event(QEvent *event)
// {
//     cout<<"MyDoubleSpinBox event function called"<<endl;
//     return QDoubleSpinBox::event(event);
// }

// void MyDoubleSpinBox::paintEvent(QPaintEvent *event)
// {
//     cout<<"MyDoubleSpinBox Paint Event function called"<<endl;
//     QDoubleSpinBox::paintEvent(event);
// }

