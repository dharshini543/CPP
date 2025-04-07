#include "ABC.h"
#include<iostream>
using namespace std;


ABC::ABC(QWidget *parent)
{
    cout<<"ABC Constructor"<<endl;
}

ABC::~ABC()
{
    cout<<"ABC Destructor"<<endl;
}

void ABC::paintEvent(QPaintEvent *event)
{
    cout<<"ABC paintEvent function called"<<endl;
}

