#include "StudentManager.h"
#include <qdebug.h>
#include <qregularexpression.h>

StudentManager::StudentManager()
{
    qDebug()<<Q_FUNC_INFO;
}

StudentManager::~StudentManager()
{
    qDebug()<<Q_FUNC_INFO;
}

bool StudentManager::addStudent(Student &stu)
{
    m_students.push_back(new Student(stu.getStudentName(),stu.getPhoneNum(),stu.getEmailID(),stu.getFatherName(),stu.getUsername(),stu.getPassword()));
    return true;
}

bool StudentManager::validateStudentLogin(const QString& username,const QString &password)
{
    QRegularExpression nameRegex("^[A-Za-z ]+$");
    QRegularExpression passwordRegex("^[A-Za-z0-9]+$");

    if (!nameRegex.match(username).hasMatch()) {
        qWarning() << "Invalid username";
        return false;
    }
    if (!passwordRegex.match(password).hasMatch()) {
        qWarning() << "Invalid password";
        return false;
    }

    for(auto students : m_students)
    {
        if(students->getUsername() == username && students->getPassword() == password)
        {
            return true;
        }
    }
    return false;
}
