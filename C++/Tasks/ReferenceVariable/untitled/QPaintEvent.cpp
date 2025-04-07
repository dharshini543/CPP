#include "QPaintEvent.h"
#include<iostream>
using namespace std;

QPaintEvent::QPaintEvent()
{
    cout<<"QPaintEvent Constructor called"<<endl;
}

QPaintEvent::~QPaintEvent()
{
    cout<<"QPaintEvent Destructor called"<<endl;
}

void QPaintEvent::paintEvent(QPaintEvent *event)
{
    cout<<"QPaintEvent Function called"<<endl;
}

/*QPaintEngine *QPaintEvent::paintEngine() const
{
    cout<<"Overridden QPaintEngine pure virtual Function called"<<endl;
}*/
