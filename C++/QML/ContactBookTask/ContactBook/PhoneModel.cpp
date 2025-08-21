#include "PhoneModel.h"
#include <qdebug.h>

PhoneModel::PhoneModel()
{
    qDebug()<<Q_FUNC_INFO;
    m_phoneBookList.push_back(new PhoneBook("Dharshi","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Varshini","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Likitha","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Pallavi","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("prathik","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("darshan","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("girish","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("dheemanth","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("anurag","7894561233"));
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
    m_phoneBookList.push_back(new PhoneBook("Dharshi","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Varshini","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Likitha","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("Pallavi","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("prathik","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("darshan","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("girish","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("dheemanth","7894561233"));
    m_phoneBookList.push_back(new PhoneBook("anurag","7894561233"));
    qDebug()<<"Size in addFunction:"<<m_phoneBookList.size();
    phoneBookListChanged();
}

int PhoneModel::getSize()
{
    return m_phoneBookList.size();
}


