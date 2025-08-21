#ifndef PHONEMODEL_H
#define PHONEMODEL_H
#include"PhoneBook.h"

class PhoneModel:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<PhoneBook *> phoneBookList READ getPhoneBookList WRITE setPhoneBookList NOTIFY phoneBookListChanged FINAL)

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
};

#endif // PHONEMODEL_H
