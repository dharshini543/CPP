#include "ABC.h"
#include <iostream>
using namespace std;

ABC::ABC(QWidget *parent)
    : QWidget(parent)
{
    cout<<"ABC Constructor"<<endl;
}

ABC::~ABC()
{
    cout<<"ABC Destructor"<<endl;
}

void ABC::paintEvent(QPaintEvent *event)
{
    cout<<"ABC paintEvent Function called"<<endl;
    QWidget::paintEvent(event);
}
