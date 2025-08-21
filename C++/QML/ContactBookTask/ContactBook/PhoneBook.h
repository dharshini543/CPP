#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include<QString>
#include <qobject.h>

class PhoneBook:public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString contactName READ getContactName WRITE setContactName NOTIFY contactNameChanged FINAL)
    Q_PROPERTY(QString contactNumber READ getContactNumber WRITE setContactNumber NOTIFY contactNumberChanged FINAL)

public:
    PhoneBook(QString contactName, QString contactNumber);
    ~PhoneBook();

    QString getContactName() const;
    void setContactName(const QString &newContactName);

    QString getContactNumber() const;
    void setContactNumber(const QString &newContactNumber);

signals:
    void contactNameChanged();
    void contactNumberChanged();

private:
    QString m_contactName;
    QString m_contactNumber;


};

#endif // PHONEBOOK_H
