#include "QWidget.h"
#include<iostream>
using namespace std;

QWidget::QWidget()
{
    cout<<"QWidget Constructor called"<<endl;
}

QWidget::~QWidget()
{
    cout<<"QWidget Destructor called"<<endl;
}

void QWidget::paintEvent(QPaintEvent *event)
{
    cout<<"QWidget paint event function called"<<endl;
}

