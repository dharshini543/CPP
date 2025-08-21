#include "ContactManager.h"
#include <qdebug.h>
#include <qregularexpression.h>

QList<Contact *> ContactManager::getContacts() const
{
    return m_contacts;
}

void ContactManager::setContacts(const QList<Contact *> &newContacts)
{
    if (m_contacts == newContacts)
        return;
    m_contacts = newContacts;
    emit contactsChanged();
}

ContactManager::ContactManager()
{
    qDebug()<<Q_FUNC_INFO;
}

bool ContactManager::addContact(const QString& name, const QString& phoneNum, const QString& url)
{
    QRegularExpression nameRegex("^[A-Za-z ]+$");
    QRegularExpression phoneRegex("^\\d{10}$");
    if (!nameRegex.match(name).hasMatch()) {
        qWarning() << "Invalid name";
        return false;
    }

    if (!phoneRegex.match(phoneNum).hasMatch()) {
        qWarning() << "Invalid phone number";
        return false;
    }
    m_contacts.push_back(new Contact(name, phoneNum, url));
    return true;
}

bool ContactManager::deleteContact(const QString &name, const QString &phoneNum, const QString &url)
{
    for(auto i = m_contacts.begin();i != m_contacts.end();i++)
    {
        if((*i)->getName() == name && (*i)->getPhoneNum() == phoneNum && (*i)->getUrl() == url)
            {
                m_contacts.erase(i);
                return true;
            }
    }
    return false;
}

bool ContactManager::editContact(const QString &name, const QString &editedName, const QString &phoneNum, const QString &editedPhoneNum)
{
    for(auto contacts : m_contacts)
    {
        if(contacts->getName() == name && contacts->getPhoneNum() == phoneNum)
        {
            contacts->setName(editedName);
            contacts->setPhoneNum(editedPhoneNum);
            return true;
        }
    }
    return false;
}

bool ContactManager::searchContact(QString &name)
{
    for(auto contacts : m_contacts)
    {
        if(contacts->getName() == name)
        {
            return true;
        }
    }
    return false;

}


int ContactManager::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_contacts.size();
}

QVariant ContactManager::data(const QModelIndex &index, int role) const
{
    const Contact* contact = m_contacts.at(index.row());
    switch(role)
    {
    case NAME:
        return contact->getName();
    case PHONE_NUM:
        return contact->getPhoneNum();
    case IMAGE:
        return contact->getUrl();
    default:
        return QVariant();
    }
    return QVariant();
}

QHash<int, QByteArray> ContactManager::roleNames() const
{
    QHash<int, QByteArray> l_roleNames;
    l_roleNames.insert(NAME,"CONTACTNAME");
    l_roleNames.insert(PHONE_NUM,"PHONENUM");
    l_roleNames.insert(IMAGE,"ImageURL");
    return l_roleNames;

}

