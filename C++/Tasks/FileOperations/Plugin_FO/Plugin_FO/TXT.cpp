#include "TXT.h"
#include<iostream>
#include<fstream>
#include"Student.h"
#include<sstream>
istream& operator >>(istream& inf, list<Student> stu)
{
    string name;
    int age;
    int USN;
    int Mobile;
    while(getline(inf,name,','))
    {
        //stringstream inf((line);

        getline(inf,name,',');
        inf>>age;
        inf.ignore();
        inf>>USN;
        inf.ignore();
        inf>>Mobile;
    }
}

TXT::TXT()
{

}

void TXT::writeData(list<Student> student)
{
    cout<<"Writing data to TXT file"<<endl;
    ofstream outf("student.txt",ios::app);
    for(auto i = student.begin(); i != student.end();i++)
    {
        outf<<i->getName()<<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobile()<<endl;
    }
}

list<Student> TXT::readData()
{
    cout<<"Reading data from TXT file"<<endl;
    ifstream inf("student.txt");
    list<Student> Studentlist;
    //inf >> Studentlist;
    cout << "Student "  << ": " << Studentlist.begin()->getName()<< ", " <<Studentlist.begin()->getAge() << ", "
         <<Studentlist.begin()->getUSN()<< ", " << Studentlist.begin()->getMobile() << endl;
    /*for(auto i = Studentlist.begin(); i != Studentlist.end();i++)
    {
        inf>>Studentlist;
    }*/
    for (auto i = Studentlist.begin(); i != Studentlist.end(); i++)
    {
        inf >> Studentlist;
        cout  << ": " << Studentlist.begin()->getName()<< ", " <<Studentlist.begin()->getAge() << ", "
             <<Studentlist.begin()->getUSN()<< ", " << Studentlist.begin()->getMobile() << endl;
    }


    return Studentlist;
}
TXT::~TXT()
{

}

