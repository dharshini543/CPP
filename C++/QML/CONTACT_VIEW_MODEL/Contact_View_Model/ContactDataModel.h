#ifndef CONTACTDATAMODEL_H
#define CONTACTDATAMODEL_H
#include "Contact.h"
#include<QAbstractListModel>

class ContactDataModel : public QAbstractListModel
{
    Q_OBJECT

private:
    QList<Contact*> m_contactsList;

protected:
    virtual void createContactData() = 0;
    void insertContactData(Contact* contact);
    Contact* getContactData(int index);

public:
    explicit ContactDataModel(QObject* parent = nullptr);
    ~ContactDataModel();

    // QAbstractItemModel interface
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

    enum Contacts{
        CONTACT_NAME = 1,
        CONTACT_NUMBER,
        CONTACT_IMAGE,
        CONTACT_CALLTIME,
        CONTACT_RECENTMESSAE,
        CONTACT_ISINCOMING,
        CONTACT_ISOUTGOING
    };
};

#endif // CONTACTDATAMODEL_H
