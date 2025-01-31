#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
    int * m_age;
    int * m_phonenum ;
    Student(int age,int phno);
    void printMe();
};

#endif // STUDENT_H
