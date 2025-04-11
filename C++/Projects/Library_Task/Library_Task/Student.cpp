#include "Student.h"
#include <iostream>

Student::Student(string studentName, int studentID, string studentDepartment)
{
    cout<<"Student Constructor"<<endl;
    m_studentName = studentName;
    m_studentID = studentID;
    m_studentDepartment = studentDepartment;
    m_studentStatus = studentStatus;
}

Student::~Student()
{
    cout<<"Student Destructor"<<endl;
}

string Student::getStudentName()
{
    return m_studentName;
}

string Student::getStudentDepartment()
{
    return m_studentDepartment;
}

string Student::getStudentStatus()
{
    return m_studentStatus;
}

void Student::setStudentStatus(string studentStatus)
{
    m_studentStatus = studentStatus;
}

int Student::getStudentID()
{
    return m_studentID;
}
