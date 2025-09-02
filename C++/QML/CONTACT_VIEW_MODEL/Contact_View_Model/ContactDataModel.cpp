#include "ContactDataModel.h"
#include<QDebug>

ContactDataModel::~ContactDataModel()
{
    qDebug()<<Q_FUNC_INFO;
}

void ContactDataModel::insertContactData(Contact *contact)
{
    m_contactsList.push_back(contact);
}

Contact* ContactDataModel::getContactData(int index)
{
    return m_contactsList.at(index);
}

ContactDataModel::ContactDataModel(QObject *parent)
    :QAbstractListModel(parent)
{
    qDebug()<<Q_FUNC_INFO;

}

int ContactDataModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_contactsList.size();
}

QVariant ContactDataModel::data(const QModelIndex &index, int role) const
{
    const Contact* contact = m_contactsList.at(index.row());
    switch(role)
    {
    case CONTACT_NAME:
        return contact->getContactName();
    case CONTACT_NUMBER:
        return contact->getContactNumber();
    case CONTACT_IMAGE:
        return contact->getContactImage();
    case CONTACT_CALLTIME:
        return contact->getCallTime();
    case CONTACT_RECENTMESSAE:
        return contact->getRecentMessage();
    case CONTACT_ISINCOMING:
        return contact->getIsIncoming();
    case CONTACT_ISOUTGOING:
        return contact->getIsOutgoing();
    default:
        return QVariant();
    }
    return QVariant();
}

QHash<int, QByteArray> ContactDataModel::roleNames() const
{
    QHash<int, QByteArray> l_roleNames;
    l_roleNames.insert(CONTACT_NAME, "CONTACTNAME");
    l_roleNames.insert(CONTACT_NUMBER, "CONTACTNUMBER");
    l_roleNames.insert(CONTACT_IMAGE, "CONTACTIMAGE");
    l_roleNames.insert(CONTACT_CALLTIME, "CONTACTCALLTIME");
    l_roleNames.insert(CONTACT_RECENTMESSAE, "CONTACTRECENTMESSAGE");
    l_roleNames.insert(CONTACT_ISINCOMING, "CONTACTISINCOMING");
    l_roleNames.insert(CONTACT_ISOUTGOING, "CONTACTISOUTGOING");

    return l_roleNames;
}




