#include "LoginHandler.h"
#include <QDebug>

LoginHandler::LoginHandler(StudentManager *manager, QObject *parent)
    : QObject(parent), m_manager(manager) {}

bool LoginHandler::handleLogin(const QString &username, const QString &password) {
    if (m_manager->validateLogin(username, password)) {
        qDebug() << "Login successful!";
        return true;
    } else {
        qDebug() << "Invalid credentials!";
        return false;
    }
}
