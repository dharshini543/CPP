#ifndef LOGINHANDLER_H
#define LOGINHANDLER_H

#include <QObject>

class LoginHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString username READ getUsername WRITE setUsername NOTIFY UserNameChanged FINAL)
    Q_PROPERTY(QString password READ getPassword WRITE setPassword NOTIFY PasswordChanged FINAL)


public:
    explicit LoginHandler(QObject *parent = nullptr);

    QString getUsername() const;
    void setUsername(const QString &newUsername);

    QString getPassword() const;
    void setPassword(const QString &newPassword);

public slots:
    void onuserNameChanged();
    void onPasswordChanged();

signals:
    void UserNameChanged();
    void PasswordChanged();

private:
    QString m_username;
    QString m_password;

};

#endif // LOGINHANDLER_H
