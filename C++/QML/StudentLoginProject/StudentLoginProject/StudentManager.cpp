#include "StudentManager.h"
#include <QRegularExpression>
#include <QDebug>

bool StudentManager::addStudent(const Student& student)
{
    if (!isNameValid(student.m_studentName)) {
        qDebug() << "Invalid Name!";
        return false;
    }
    if (!isPhoneValid(student.m_phone)) {
        qDebug() << "Invalid Phone Number!";
        return false;
    }
    students.append(student);
    qDebug() << "Student Added:" << student.m_studentName;
    return true;
}

bool StudentManager::isPhoneValid(const QString& phone) {
    return phone.length() == 10 && phone.toLongLong();
}

bool StudentManager::isNameValid(const QString& name) {
    QRegularExpression re("^[a-zA-Z\\s]+$");
    return re.match(name).hasMatch();
}

bool StudentManager::validateLogin(const QString& username, const QString& passwword) {
    for (const auto& s : students)
    {
        if (s.m_username == username && s.m_password == passwword) {
            return true;
        }
    }
    return false;
}
