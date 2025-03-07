#include "StudentManager.h"
#include "CSV_FileOperation.h"
#include "File_operations.h"
#include "TXT_FileOperation.h"
#include<iostream>

StudentManager::StudentManager()
{

}

void StudentManager::initStudent(list<Student> student)
{
    m_student = student;
    this->userInput();
}

void StudentManager::userInput()
{
    int choice;
    cout << "Enter"<<endl<<"1.TXT"<<endl<<"2.CSV"<<endl;
    cin>>choice;
    switch(choice)
    {
    case txt_file:
    {
        m_fp = new TXT_FileOperation;
        m_fp->writeData(m_student);
        m_student = m_fp->readData();
        cout << "Student list Updated in StudentManger" << endl<<endl;
        this->display();
        delete m_fp;

    }
    break;
    case csv_file:
    {
        m_fp = new CSV_FileOperation;
        m_fp->writeData(m_student);
        m_student = m_fp->readData();
        cout << "Student list Updated in StudentManger" << endl<<endl;
        this->display();
        delete m_fp;

    }
    break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }
}

void StudentManager::display()
{
    cout<<"Displaying updated Student list"<<endl;
    for(auto i = m_student.begin();i != m_student.end();i++)
    {
        cout<<i->getName()<<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobile()<<endl;
    }
}

StudentManager::~StudentManager()
{

}

