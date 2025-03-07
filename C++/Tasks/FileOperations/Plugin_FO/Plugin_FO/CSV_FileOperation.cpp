#include "CSV_FileOperation.h"
#include<iostream>
#include<fstream>
#include"Student.h"

CSV_FileOperation::CSV_FileOperation()
{

}

void CSV_FileOperation::writeData(list<Student>& student)
{
    cout<<"Writing data to CSV file"<<endl;
    ofstream file("students.csv");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Age           "<<"USN          "<<"Mobile"<<endl;
    for(auto i = student.begin(); i != student.end();i++)
    {
        file<<i->getName()<<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobile()<<endl;
    }
    cout<<"Data written to CSV file"<<endl<<endl;
    file.close();
}

list<Student> CSV_FileOperation::readData()
{
    cout<<"Reading data from CSV file"<<endl;

    list<Student> students;
    ifstream file("students.csv");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return students;
    }

    string line, name;
    int age, usn, mobile;

    getline(file, line);
    while (getline(file, name, ',') && file >> age && file.ignore() && file >> usn && file.ignore() && file >> mobile)
    {
        students.push_back(Student(name, age, usn, mobile));
    }
    file.close();
    cout<<"Data read from CSV file"<<endl<<endl;

    return students;
}
CSV_FileOperation::~CSV_FileOperation()
{

}

