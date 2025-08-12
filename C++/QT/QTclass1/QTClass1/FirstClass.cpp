#include "FirstClass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{

}

FirstClass::~FirstClass()
{

}

std::string FirstClass::getApplicationName() const
{
    return m_applicationName1;
}

void FirstClass::setApplicationName(const std::string &newApplicationName)
{
    m_applicationName1 = newApplicationName;
    emit applicationNameChanged(m_applicationName1);
}
