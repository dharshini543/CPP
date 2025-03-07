#include "TXT_FileOperation.h"
#include<iostream>
#include<fstream>
#include"Student.h"

TXT_FileOperation::TXT_FileOperation()
{

}

void TXT_FileOperation::writeData(list<Student>& student)
{
    cout<<"Writing data to TXT file"<<endl;
    ofstream file("students.txt");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    for(auto i = student.begin(); i != student.end();i++)
    {
        file<<i->getName()<<" "<<i->getAge()<<" "<<i->getUSN()<<" "<<i->getMobile()<<endl;
    }
    cout<<"Data written to TXT file"<<endl<<endl;
    file.close();
}

list<Student> TXT_FileOperation::readData()
{
    cout<<"Reading data from TXT file"<<endl;

    list<Student> students;
    ifstream file("students.txt");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return students;
    }

    string  name;
    int age, usn, mobile;

    while (getline(file, name, ' ') && file >> age && file.ignore() && file >> usn && file.ignore() && file >> mobile)
    {
        students.push_back(Student(name, age, usn, mobile));
    }
    file.close();
    cout<<"Data read from TXT file"<<endl<<endl;

    return students;
}

TXT_FileOperation::~TXT_FileOperation()
{

}

