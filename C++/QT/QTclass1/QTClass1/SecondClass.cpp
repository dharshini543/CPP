#include "SecondClass.h"
#include<QDebug>
#include"FirstClass.h"

SecondClass::SecondClass(QObject *parent)
    : QObject{parent}
{
    connect(&m_firstClass, &FirstClass::applicationNameChanged, this, &SecondClass::onApplicationNameChanged);
    m_firstClass.setApplicationName("Application");
}

SecondClass::~SecondClass()
{

}

void SecondClass::onApplicationNameChanged(std::string applicationName)
{
    qDebug()<<"onApplicationNameChanged Function"<<applicationName;
}
