#pragma once
#include <QString>

class Student {
public:
    QString m_studentName;
    QString m_phone;
    QString m_email;
    QString m_fatherName;
    QString m_username;
    QString m_password;

    Student(const QString& studentName, const QString& phone, const QString& email, const QString& fatherName, const QString& username, const QString& password);
};
