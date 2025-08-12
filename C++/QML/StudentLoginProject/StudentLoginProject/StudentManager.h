#pragma once
#include "Student.h"
#include <QList>

class StudentManager
{

public:
    Q_INVOKABLE bool addStudent(const Student& student);
    Q_INVOKABLE bool validateLogin(const QString& phone, const QString& name);
    QList<Student> students;

private:
    bool isPhoneValid(const QString& phone);
    bool isNameValid(const QString& name);
};
