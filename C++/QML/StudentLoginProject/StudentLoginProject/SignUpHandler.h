#pragma once
#include <QObject>
#include "StudentManager.h"

class SignupHandler : public QObject {
    Q_OBJECT

public:
    explicit SignupHandler(StudentManager *manager, QObject *parent = nullptr);

    Q_INVOKABLE bool handleSignup(const QString &name,
                                  const QString &phone,
                                  const QString &email,
                                  const QString &fatherName,
                                  const QString &userName,
                                  const QString &password);

private:
    StudentManager *m_manager;
};
