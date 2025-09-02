#include "Contact.h"
#include <qdebug.h>

Contact::Contact(QString contactName, QString contactNumber, QString contactImage)
{
    qDebug()<<Q_FUNC_INFO;
    m_contactName = contactName;
    m_contactNumber = contactNumber;
    m_contactImage = contactImage;
}
Contact::Contact(QString contactName, QString contactNumber, QString contactImage, QString callTime, bool isIncoming, bool isOutgoing)
{
    qDebug()<<Q_FUNC_INFO;
    m_contactName = contactName;
    m_contactNumber = contactNumber;
    m_contactImage = contactImage;
    m_callTime = callTime;
    m_isIncoming = isIncoming;
    m_isOutgoing = isOutgoing;
}

Contact::Contact(QString contactName, QString contactNumber, QString contactImage, QString callTime, QString recentMessage)
{
    qDebug()<<Q_FUNC_INFO;
    m_contactName = contactName;
    m_contactNumber = contactNumber;
    m_contactImage = contactImage;
    m_callTime = callTime;
    m_recentMessage = recentMessage;
}

Contact::~Contact()
{
    qDebug()<<Q_FUNC_INFO;
}

QString Contact::getContactName() const
{
    return m_contactName;
}

void Contact::setContactName(const QString &newContactName)
{
    if (m_contactName == newContactName)
        return;
    m_contactName = newContactName;
    emit contactNameChanged();
}

QString Contact::getContactNumber() const
{
    return m_contactNumber;
}

void Contact::setContactNumber(const QString &newContactNumber)
{
    if (m_contactNumber == newContactNumber)
        return;
    m_contactNumber = newContactNumber;
    emit contactNumberChanged();
}

QString Contact::getContactImage() const
{
    return m_contactImage;
}

void Contact::setContactImage(const QString &newContactImage)
{
    if (m_contactImage == newContactImage)
        return;
    m_contactImage = newContactImage;
    emit contactImageChanged();
}

QString Contact::getCallTime() const
{
    return m_callTime;
}

void Contact::setCallTime(const QString &newCallTime)
{
    if (m_callTime == newCallTime)
        return;
    m_callTime = newCallTime;
    emit callTimeChanged();
}

bool Contact::getIsIncoming() const
{
    return m_isIncoming;
}

void Contact::setIsIncoming(bool newIsIncoming)
{
    if (m_isIncoming == newIsIncoming)
        return;
    m_isIncoming = newIsIncoming;
    emit isIncomingChanged();
}

bool Contact::getIsOutgoing() const
{
    return m_isOutgoing;
}

void Contact::setIsOutgoing(bool newIsOutgoing)
{
    if (m_isOutgoing == newIsOutgoing)
        return;
    m_isOutgoing = newIsOutgoing;
    emit isOutgoingChanged();
}

QString Contact::getRecentMessage() const
{
    return m_recentMessage;
}

void Contact::setRecentMessage(const QString &newRecentMessage)
{
    if (m_recentMessage == newRecentMessage)
        return;
    m_recentMessage = newRecentMessage;
    emit recentMessageChanged();
}



