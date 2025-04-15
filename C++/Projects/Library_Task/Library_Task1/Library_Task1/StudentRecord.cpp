#include"StudentRecord.h"
#include<iostream>

StudentRecord::StudentRecord(Student &student)
{
    cout<<"StudentRecord Constructor"<<endl;
    m_studentList.push_back(new Student(student.getName(),student.getdepartment(), student.getID()));
}

StudentRecord::~StudentRecord()
{
    cout<<"StudentRecord Destructor"<<endl;
}

void StudentRecord::display()
{
    for(auto student: m_studentList)
    {
        cout<<student->getName()<<" "<<student->getID()<<" "<<student->getdepartment()<<endl;
    }
}

