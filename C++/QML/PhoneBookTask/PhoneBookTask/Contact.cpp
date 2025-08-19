#include "Contact.h"

Contact::Contact(QString name, QString phoneNum, QString url)
{
    m_name = name;
    m_phoneNum = phoneNum;
    m_url = url;
}

QString Contact::getName() const
{
    return m_name;
}

void Contact::setName(const QString &newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

QString Contact::getPhoneNum() const
{
    return m_phoneNum;
}

void Contact::setPhoneNum(const QString &newPhoneNum)
{
    if (m_phoneNum == newPhoneNum)
        return;
    m_phoneNum = newPhoneNum;
    emit phoneNumChanged();
}

QString Contact::getUrl() const
{
    return m_url;
}

void Contact::setUrl(const QString &newUrl)
{
    if (m_url == newUrl)
        return;
    m_url = newUrl;
    emit urlChanged();
}
