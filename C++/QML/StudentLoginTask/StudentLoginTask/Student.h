#ifndef STUDENT_H
#define STUDENT_H
#include<QString>
#include <qobject.h>

class Student:public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(QString studentName READ getStudentName WRITE setStudentName NOTIFY studentNameChanged FINAL)
    Q_PROPERTY(QString phone READ getPhone WRITE setPhone NOTIFY phoneChanged FINAL)
    Q_PROPERTY(QString email READ getEmail WRITE setEmail NOTIFY emailChanged FINAL)
    Q_PROPERTY(QString fatherName READ getFatherName WRITE setFatherName NOTIFY fatherNameChanged FINAL)
    Q_PROPERTY(QString username READ getUsername WRITE setUsername NOTIFY usernameChanged FINAL)
    Q_PROPERTY(QString password READ getPassword WRITE setPassword NOTIFY passwordChanged FINAL)

    Student(const QString& studentName, const QString& phone, const QString& email, const QString& fatherName, const QString& username, const QString& password);
    ~Student();

    QString getStudentName() const;
    QString getPhone() const;
    QString getEmail() const;
    QString getFatherName() const;
    QString getUsername() const;
    QString getPassword() const;


    void setStudentName(const QString &newStudentName);

    void setPhone(const QString &newPhone);

    void setEmail(const QString &newEmail);

    void setFatherName(const QString &newFatherName);

    void setUsername(const QString &newUsername);

    void setPassword(const QString &newPassword);

signals:
    void studentNameChanged();

    void phoneChanged();

    void emailChanged();

    void fatherNameChanged();

    void usernameChanged();

    void passwordChanged();

private:
    QString m_studentName;
    QString m_phone;
    QString m_email;
    QString m_fatherName;
    QString m_username;
    QString m_password;

};

#endif // STUDENT_H
