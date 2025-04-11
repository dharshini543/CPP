#include "Transactions.h"
#include <iostream>

Transactions::Transactions()
{

}

void Transactions::issueBook(Book* book)
{
    book->setBookStatus("Issued");
    string studentName, studentDepartment, bookStatus;
    int studentID;
    cout<<"Enter Student Name"<<endl;
    cin>>studentName;
    cout<<"Enter Student ID"<<endl;
    cin>>studentID;
    cout<<"Enter Student Department"<<endl;
    cin>>studentDepartment;
    cout<<"Enter Book Status"<<endl;
    cin>>bookStatus;
    m_studentList.push_back(new Student(studentName,studentID,studentDepartment));
    cout<<book->getBookName()<<" book is issued to "<<studentName<<endl;
}
