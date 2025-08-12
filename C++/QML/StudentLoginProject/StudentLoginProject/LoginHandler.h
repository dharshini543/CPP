#pragma once
#include <QObject>
#include "StudentManager.h"

class LoginHandler : public QObject {
    Q_OBJECT

public:
    explicit LoginHandler(StudentManager *manager, QObject *parent = nullptr);

    Q_INVOKABLE bool handleLogin(const QString &username, const QString &password);

private:
    StudentManager *m_manager;
};
