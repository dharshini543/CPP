#include "Student.h"
#include <qdebug.h>


Student::Student(const QString &studentName, const QString &phone, const QString &email, const QString &fatherName, const QString &username, const QString &password)
{
    qDebug()<<Q_FUNC_INFO;
    m_studentName = studentName;
    m_phone = phone;
    m_email = email;
    m_fatherName = fatherName;
    m_username = username;
    m_password = password;
}

Student::~Student()
{
    qDebug()<<Q_FUNC_INFO;
}

QString Student::getStudentName() const
{
    return m_studentName;
}

QString Student::getPhone() const
{
    return m_phone;
}

QString Student::getEmail() const
{
    return m_email;
}

QString Student::getFatherName() const
{
    return m_fatherName;
}

QString Student::getUsername() const
{
    return m_username;
}

QString Student::getPassword() const
{
    return m_password;
}

void Student::setStudentName(const QString &newStudentName)
{
    if (m_studentName == newStudentName)
        return;
    m_studentName = newStudentName;
    emit studentNameChanged();
}

void Student::setPhone(const QString &newPhone)
{
    if (m_phone == newPhone)
        return;
    m_phone = newPhone;
    emit phoneChanged();
}

void Student::setEmail(const QString &newEmail)
{
    if (m_email == newEmail)
        return;
    m_email = newEmail;
    emit emailChanged();
}

void Student::setFatherName(const QString &newFatherName)
{
    if (m_fatherName == newFatherName)
        return;
    m_fatherName = newFatherName;
    emit fatherNameChanged();
}

void Student::setUsername(const QString &newUsername)
{
    if (m_username == newUsername)
        return;
    m_username = newUsername;
    emit usernameChanged();
}

void Student::setPassword(const QString &newPassword)
{
    if (m_password == newPassword)
        return;
    m_password = newPassword;
    emit passwordChanged();
}





