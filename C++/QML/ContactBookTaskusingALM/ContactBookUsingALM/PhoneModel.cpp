#include "PhoneModel.h"
#include "PhoneBook.h"
#include <qdebug.h>

PhoneModel::PhoneModel()
{
    qDebug()<<Q_FUNC_INFO;
    m_phoneBookList.push_back(new PhoneBook("Dharshi", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Varshini", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Likitha", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Pallavi", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("prathik", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("darshan", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("girish", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("dheemanth", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("anurag", "7894561233"));
    qDebug()<<"Size in Constructor:"<<m_phoneBookList.size();

}

PhoneModel::~PhoneModel()
{
    qDebug()<<Q_FUNC_INFO;
}

QList<PhoneBook *> PhoneModel::getPhoneBookList() const
{
    return m_phoneBookList;
}

void PhoneModel::setPhoneBookList(const QList<PhoneBook *> &newPhoneBookList)
{
    if (m_phoneBookList == newPhoneBookList)
        return;
    m_phoneBookList = newPhoneBookList;
    emit phoneBookListChanged();
}

void PhoneModel::addNumberButtonClicked()
{
    emit beginResetModel();
    m_phoneBookList.push_back(new PhoneBook("Vidya", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Varshini", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Likitha", "7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Pallavi", "7894561233"));

    qDebug()<<"Size in addFunction:"<<m_phoneBookList.size();
    emit endResetModel();
    // emit phoneBookListChanged();
}

int PhoneModel::getSize()
{
    return m_phoneBookList.size();
}

int PhoneModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_phoneBookList.size();
}

QVariant PhoneModel::data(const QModelIndex &index, int role) const
{
    const PhoneBook* contact = m_phoneBookList.at(index.row());
    switch(role)
    {
    case CONTACT_NAME:
        return contact->getContactName();
    case CONTACT_NUM:
        return contact->getContactNumber();
    default:
        return QVariant();
    }
    return QVariant();
}

QHash<int, QByteArray> PhoneModel::roleNames() const
{
    QHash<int, QByteArray> l_roleNames;
    l_roleNames.insert(CONTACT_NAME, "CONTACTNAME");
    l_roleNames.insert(CONTACT_NUM, "CONTACTNUM");
    return l_roleNames;
}


