#ifndef SIGNUPHANDLER_H
#define SIGNUPHANDLER_H

#include "StudentManager.h"
#include <QObject>

class SignUpHandler : public QObject
{
    Q_OBJECT

public:
    explicit SignUpHandler(StudentManager* manager, QObject *parent = nullptr);
    Q_INVOKABLE bool handleSignup(const QString &name,
                                  const QString &phone,
                                  const QString &email,
                                  const QString &fatherName,
                                  const QString &userName,
                                  const QString &password,
                                  const QString& confirmPassword);


private:
    StudentManager *m_manager;
};


#endif // SIGNUPHANDLER_H
