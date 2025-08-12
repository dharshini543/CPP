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

QString Student::getPhoneNum() const
{
    return m_phone;
}

QString Student::getEmailID() const
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





