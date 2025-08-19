#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>
#include <QString>
using namespace std;

class Contact : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged FINAL)
    Q_PROPERTY(QString phoneNum READ getPhoneNum WRITE setPhoneNum NOTIFY phoneNumChanged FINAL)
    Q_PROPERTY(QString url READ getUrl WRITE setUrl NOTIFY urlChanged FINAL)

public:
    Contact(QString name, QString phoneNum, QString url);

    QString getName() const;
    void setName(const QString &newName);

    QString getPhoneNum() const;
    void setPhoneNum(const QString &newPhoneNum);

    QString getUrl() const;
    void setUrl(const QString &newUrl);

signals:
    void nameChanged();
    void phoneNumChanged();

    void urlChanged();

private:
    QString m_name;
    QString m_phoneNum;
    QString m_url;
};

#endif // CONTACT_H
