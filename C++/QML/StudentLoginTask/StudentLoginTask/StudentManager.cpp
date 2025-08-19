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
    m_students.push_back(new Student(stu.getStudentName(),stu.getPhone(),stu.getEmail(),stu.getFatherName(),stu.getUsername(),stu.getPassword()));
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

int StudentManager::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_students.size();
}

QVariant StudentManager::data(const QModelIndex &index, int role) const
{
    const Student* student = m_students.at(index.row());
    switch(role)
    {
    case STUDENT_NAME:
        return student->getStudentName();
    case PHONE_NUM:
        return student->getPhone();
    case EMAIL:
        return student->getEmail();
    case FATHER_NAME:
        return student->getFatherName();
    case USERNAME:
        return student->getUsername();
    case PASSWORD:
        return student->getPassword();
    default:
        return QVariant();
    }
    return QVariant();
}

QHash<int, QByteArray> StudentManager::roleNames() const
{
    QHash<int, QByteArray> l_roleNames;
    l_roleNames.insert(STUDENT_NAME,"studentName");
    l_roleNames.insert(PHONE_NUM,"phoneNum");
    l_roleNames.insert(EMAIL,"emailID");
    l_roleNames.insert(FATHER_NAME,"fatherName");
    l_roleNames.insert(USERNAME,"userName");
    l_roleNames.insert(PASSWORD,"passWord");
    return l_roleNames;

}
