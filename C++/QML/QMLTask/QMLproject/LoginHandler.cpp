#include "LoginHandler.h"
#include <qdebug.h>

LoginHandler::LoginHandler(QObject *parent)
    : QObject{parent}
{
    connect(this,&LoginHandler::UserNameChanged,this,&LoginHandler::onuserNameChanged);
    connect(this,&LoginHandler::PasswordChanged,this,&LoginHandler::onPasswordChanged);
}

QString LoginHandler::getUsername() const
{
    return m_username;
}

void LoginHandler::setUsername(const QString &newUsername)
{
    if (m_username == newUsername)
        return;
    m_username = newUsername;
    emit UserNameChanged();
}

QString LoginHandler::getPassword() const
{
    return m_password;
}

void LoginHandler::setPassword(const QString &newPassword)
{
    if (m_password == newPassword)
        return;
    m_password = newPassword;
    emit PasswordChanged();
}

void LoginHandler::onuserNameChanged()
{
    qDebug()<<Q_FUNC_INFO<<"USERNAME :"<<m_username;
}

void LoginHandler::onPasswordChanged()
{
    qDebug()<<Q_FUNC_INFO<<"PASSWORD :"<<m_password;
}
