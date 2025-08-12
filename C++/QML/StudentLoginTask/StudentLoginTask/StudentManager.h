#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include "Student.h"
#include<QString>
#include<QList>

class StudentManager
{
public:
    StudentManager();
    ~StudentManager();

    Q_INVOKABLE bool addStudent(Student &stu);
    Q_INVOKABLE bool validateStudentLogin(const QString &username,const QString &password);

private:
    QList<Student*> m_students;
};

#endif // STUDENTMANAGER_H
