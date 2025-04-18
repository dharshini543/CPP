#include "Student.h"
#include <iostream>

Student::Student(string studentName, string studentDepartment, int studentID)
{
    cout<<"Student Constructor"<<endl;
    m_studentName = studentName;
    m_studentDepartment = studentDepartment;
    m_studentID = studentID;
}

Student::~Student()
{
    cout<<"Student Destructor"<<endl;
}

void Student::borrowBook(Book* book)
{
    cout<<book->getName()<<" book is borrowed by "<<this->getName()<<endl;
    m_borrowedBooks.push_back(book);
}

void Student::displayBorrowedBooks()
{
    for(auto book:m_borrowedBooks)
    {
        book->display();
    }
}

string Student::getName()
{
    return m_studentName;
}

string Student::getdepartment()
{
    return m_studentDepartment;
}

int Student::getID()
{
    return m_studentID;
}

string Student::getRequestedBook()
{
    string bookName;
    cout<<"Enter book name"<<endl;
    cin>>bookName;
    return bookName;
}
