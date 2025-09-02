#ifndef PHONEMODEL_H
#define PHONEMODEL_H
#include"PhoneBook.h"
#include<QAbstractListModel>

class PhoneModel:public QAbstractListModel
{
    Q_OBJECT
    // Q_PROPERTY(QList<PhoneBook *> phoneBookList READ getPhoneBookList WRITE setPhoneBookList NOTIFY phoneBookListChanged FINAL)

public:
    PhoneModel();
    ~PhoneModel();

    QList<PhoneBook *> getPhoneBookList() const;
    void setPhoneBookList(const QList<PhoneBook *> &newPhoneBookList);

    Q_INVOKABLE void addNumberButtonClicked();
    Q_INVOKABLE int getSize();

signals:
    void phoneBookListChanged();

private:
    PhoneBook* m_phone;
    QList<PhoneBook*> m_phoneBookList;

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const;

    enum Contacts{
        CONTACT_NAME = 1,
        CONTACT_NUM
    };
};

#endif // PHONEMODEL_H
