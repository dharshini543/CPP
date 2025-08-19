#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H
#include "Contact.h"
#include<QAbstractListModel>

class ContactManager:public QAbstractListModel
{
    Q_OBJECT
private:
    QList<Contact*> m_contacts;

    // QAbstractItemModel interface
public:
    ContactManager();
    Q_INVOKABLE bool addContact(const QString& name, const QString& phoneNum, const QString& url);
    Q_INVOKABLE bool searchContact(QString& name);
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const;

    enum Contacts{
        NAME = 1,
        PHONE_NUM,
        IMAGE
    };
};

#endif // CONTACTMANAGER_H
