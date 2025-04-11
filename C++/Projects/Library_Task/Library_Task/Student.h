#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class Student
{
public:
    Student(string studentName, int studentID, string studentDepartment);
    ~Student();
    string getStudentName();
    string getStudentDepartment();
    int getStudentID();

private:
    string m_studentName;
    int m_studentID;
    string m_studentDepartment;
};

#endif // STUDENT_H
