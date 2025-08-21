#include "PhoneBook.h"
#include <qdebug.h>

PhoneBook::PhoneBook(QString contactName, QString contactNumber)
{
    qDebug()<<Q_FUNC_INFO;
    m_contactName = contactName;
    m_contactNumber = contactNumber;
}

PhoneBook::~PhoneBook()
{
    qDebug()<<Q_FUNC_INFO;
}

QString PhoneBook::getContactName() const
{
    return m_contactName;
}

void PhoneBook::setContactName(const QString &newContactName)
{
    if (m_contactName == newContactName)
        return;
    m_contactName = newContactName;
    emit contactNameChanged();
}

QString PhoneBook::getContactNumber() const
{
    return m_contactNumber;
}

void PhoneBook::setContactNumber(const QString &newContactNumber)
{
    if (m_contactNumber == newContactNumber)
        return;
    m_contactNumber = newContactNumber;
    emit contactNumberChanged();
}
