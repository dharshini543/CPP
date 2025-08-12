#include "SignUpHandler.h"
#include <QDebug>
#include <QRegularExpression>

SignupHandler::SignupHandler(StudentManager *manager, QObject *parent)
    : QObject(parent), m_manager(manager) {}

bool SignupHandler::handleSignup(const QString &name,
                                 const QString &phone,
                                 const QString &email,
                                 const QString &fatherName,
                                 const QString &username,
                                 const QString &password) {
    if (name.trimmed().isEmpty() || phone.trimmed().isEmpty() ||
        email.trimmed().isEmpty() || fatherName.trimmed().isEmpty()) {
        qDebug() << "All fields are required!";
        return false;
    }

    QRegularExpression nameRe("^[a-zA-Z\\s]+$");
    if (!nameRe.match(name).hasMatch()) {
        qDebug() << "Name should contain only letters.";
        return false;
    }

    if (phone.length() != 10 || !phone.toLongLong()) {
        qDebug() << "Phone number should be 10 digits.";
        return false;
    }

    Student s(name, phone, email, fatherName, username, password);
    return m_manager->addStudent(s);
}
