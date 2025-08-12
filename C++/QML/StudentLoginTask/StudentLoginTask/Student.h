#ifndef STUDENT_H
#define STUDENT_H
#include<QString>

class Student
{
public:
    Student(const QString& studentName, const QString& phone, const QString& email, const QString& fatherName, const QString& username, const QString& password);
    ~Student();

    QString getStudentName() const;
    QString getPhoneNum() const;
    QString getEmailID() const;
    QString getFatherName() const;
    QString getUsername() const;
    QString getPassword() const;


private:
    QString m_studentName;
    QString m_phone;
    QString m_email;
    QString m_fatherName;
    QString m_username;
    QString m_password;

};

#endif // STUDENT_H
