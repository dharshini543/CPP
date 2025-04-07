#include "QPushButton.h"
#include <iostream>
using namespace std;

QPushButton::QPushButton(QAbstractButton* parent):QAbstractButton(parent)
{
    cout<<"QPush Button Constructor"<<endl;
}

QPushButton::~QPushButton()
{
    cout<<"QPush Button Destructor"<<endl;
}
