#include "Student.h"

Student::Student(const QString &studentName, const QString &phone,
                 const QString &email, const QString &fatherName, const QString &username, const QString &password)
    : m_studentName(studentName), m_phone(phone), m_email(email), m_fatherName(fatherName), m_username(username),m_password(password)
{

}
