#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include "Student.h"
#include<QString>
#include<QList>
#include<QAbstractListModel>

class StudentManager:public QAbstractListModel
{
public:
    StudentManager();
    ~StudentManager();

    Q_INVOKABLE bool addStudent(Student &stu);
    Q_INVOKABLE bool validateStudentLogin(const QString &username,const QString &password);

private:
    QList<Student*> m_students;

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const;

    Q_INVOKABLE void check();

    enum StudentRoles{
        STUDENT_NAME = 1,
        PHONE_NUM,
        EMAIL,
        FATHER_NAME,
        USERNAME,
        PASSWORD

    };
};

#endif // STUDENTMANAGER_H
