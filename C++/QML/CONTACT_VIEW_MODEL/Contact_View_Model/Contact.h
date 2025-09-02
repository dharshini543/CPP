#ifndef CONTACT_H
#define CONTACT_H

#include <QString>
#include <qobject.h>

class Contact : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString contactName READ getContactName WRITE setContactName NOTIFY contactNameChanged FINAL)
    Q_PROPERTY(QString contactNumber READ getContactNumber WRITE setContactNumber NOTIFY contactNumberChanged FINAL)
    Q_PROPERTY(QString contactImage READ getContactImage WRITE setContactImage NOTIFY contactImageChanged FINAL)
    Q_PROPERTY(QString callTime READ getCallTime WRITE setCallTime NOTIFY callTimeChanged FINAL)
    Q_PROPERTY(QString recentMessage READ getRecentMessage WRITE setRecentMessage NOTIFY recentMessageChanged FINAL)
    Q_PROPERTY(bool isIncoming READ getIsIncoming WRITE setIsIncoming NOTIFY isIncomingChanged FINAL)
    Q_PROPERTY(bool isOutgoing READ getIsOutgoing WRITE setIsOutgoing NOTIFY isOutgoingChanged FINAL)

public:
    Contact(QString contactName, QString contactNumber, QString contactImage);
    Contact(QString contactName, QString contactNumber, QString contactImage, QString callTime, bool isIncoming, bool isOutgoing);
    Contact(QString contactName, QString contactNumber, QString contactImage, QString callTime, QString recentMessage);

    ~Contact();

    QString getContactName() const;
    void setContactName(const QString &newContactName);

    QString getContactNumber() const;
    void setContactNumber(const QString &newContactNumber);

    QString getContactImage() const;
    void setContactImage(const QString &newContactImage);

    QString getCallTime() const;
    void setCallTime(const QString &newCallTime);

    QString getRecentMessage() const;
    void setRecentMessage(const QString &newRecentMessage);

    bool getIsIncoming() const;
    void setIsIncoming(bool newIsIncoming);

    bool getIsOutgoing() const;
    void setIsOutgoing(bool newIsOutgoing);

signals:
    void contactNameChanged();

    void contactNumberChanged();

    void contactImageChanged();

    void callTimeChanged();

    void recentMessageChanged();

    void isIncomingChanged();

    void isOutgoingChanged();


private:
    QString m_contactName;
    QString m_contactNumber;
    QString m_contactImage;
    QString m_callTime;
    QString m_recentMessage;
    bool m_isIncoming;
    bool m_isOutgoing;
};

#endif // CONTACT_H
