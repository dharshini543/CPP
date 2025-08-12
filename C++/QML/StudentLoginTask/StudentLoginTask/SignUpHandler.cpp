#include "SignUpHandler.h"
#include <qdebug.h>
#include <qregularexpression.h>

SignUpHandler::SignUpHandler(StudentManager *manager, QObject *parent)
    : QObject{parent}
{
    m_manager = manager;
}

bool SignUpHandler::handleSignup(const QString &name, const QString &phone, const QString &email, const QString &fatherName, const QString &userName, const QString &password, const QString& confirmPassword)
{
    QRegularExpression nameRegex("^[A-Za-z ]+$");
    QRegularExpression phoneRegex("^\\d{10}$");
    QRegularExpression emailRegex("^[\\w.-]+@[\\w.-]+\\.[A-Za-z]{2,}$");
    QRegularExpression passwordRegex("^[A-Za-z0-9]+$");

    if (!nameRegex.match(name).hasMatch()) {
        qWarning() << "Invalid name";
        return false;
    }

    if (!phoneRegex.match(phone).hasMatch()) {
        qWarning() << "Invalid phone number";
        return false;
    }

    if (!emailRegex.match(email).hasMatch()) {
        qWarning() << "Invalid email";
        return false;
    }

    if (!nameRegex.match(fatherName).hasMatch()) {
        qWarning() << "Invalid father's name";
        return false;
    }

    if (!nameRegex.match(userName).hasMatch()) {
        qWarning() << "Invalid username";
        return false;
    }

    if (!passwordRegex.match(password).hasMatch()) {
        qWarning() << "Invalid password";
        return false;
    }
    if(password != confirmPassword)
    {
        qWarning() << "Invalid password";
        return false;
    }
    Student student(name, phone, email, fatherName, userName, password);
    return m_manager->addStudent(student);
}

