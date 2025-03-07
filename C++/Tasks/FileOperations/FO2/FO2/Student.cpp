#include "Student.h"
#include <iostream>

istream& operator>>(istream& in, Student& s)
{
    string temp;

    in >> s.m_ID;
    in.ignore();
    getline(in,s.m_name, ',');

    in >> s.m_USN;
    in.ignore();

    in >> s.m_mObileNum;

    return in;
}
Student::Student()
{

}
int Student::getID()
{
    return m_ID;
}
string Student::getName()
{
    return m_name;
}
int Student::getUSN()
{
    return m_USN;
}
int Student::getMobile()
{
    return m_mObileNum;
}
Student Student::readData()
{
    Student stu;
    cout<<"Enter ID : "<<endl;
    cin>>stu.m_ID;
    cout<<"Enter name : "<<endl;
    cin>>stu.m_name;
    cout<<"Enter USN : "<<endl;
    cin>>stu.m_USN;
    cout<<"Enter MobileNum : "<<endl;
    cin>>stu.m_mObileNum;
    return stu;
}



