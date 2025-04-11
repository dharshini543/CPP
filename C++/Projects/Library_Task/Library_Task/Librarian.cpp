#include "Librarian.h"
#include <iostream>

Librarian::Librarian()
{
    cout<<"Librarian Constructor"<<endl;

}

Librarian::~Librarian()
{
    cout<<"Librarian Destructor"<<endl;

}

list<Book *> Librarian::isuueBook(list<Book *> bookList)
{
    string bookName;
    int bookCount = 0;
    cout<<"Enter name of the Book to issue"<<endl;
    cin>>bookName;
    for(auto Book:bookList)
    {
        if(Book->getBookName() == bookName && Book->getBookStatus() == "Available")
        {
            Book->setBookStatus("Issued");
            string bookName, studentName, studentDepartment, bookStatus;
            int studentID;
            cout<<"Enter Student Name"<<endl;
            cin>>studentName;
            cout<<"Enter Student ID"<<endl;
            cin>>studentID;
            cout<<"Enter Student Department"<<endl;
            cin>>studentDepartment;
            cout<<"Enter Book Status"<<endl;
            cin>>bookStatus;
            m_studentList.push_back(new Student(studentName,studentID,studentDepartment,bookStatus));
            cout<<Book->getBookName()<<" book is issued to "<<studentName<<endl;
            bookCount++;
        }
    }
    if(bookCount == 0)
    {
        cout<<"Book is not Available"<<endl;
    }
    return bookList;
}

list<Book*> Librarian::addBook(list<Book *> bookList)
{
    string bookName,authourName,bookStatus;
    int bookID;
    cout<<"Enter Book Name"<<endl;
    cin>>bookName;
    cout<<"Enter Book ID"<<endl;
    cin>>bookID;
    cout<<"Enter Authour Name"<<endl;
    cin>>authourName;
    cout<<"Enter BookStatus"<<endl;
    cin>>bookStatus;
    bookList.push_back(new Book(bookName,bookID,authourName,bookStatus));
    return bookList;
}

void Librarian::displayBookList(list<Book*> bookList)
{
    for(auto Book:bookList)
    {
        cout<<Book->getBookName()<<" "<<Book->getBookID()<<" "<<Book->getAuthourName()<<" "<<Book->getBookStatus()<<endl;
    }
}

void Librarian::displayStudentList()
{
    for(auto Student:m_studentList)
    {
        cout<<Student->getStudentName()<<" "<<Student->getStudentID()<<" "<<Student->getStudentDepartment()<<" "<<Student->getStudentStatus()<<endl;
    }
}

