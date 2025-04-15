#include "Library.h"
#include <iostream>

Library::Library(Librarian* librarian)
{
    cout<<"Library Constructor"<<endl;
}

Library::~Library()
{
    cout<<"Library Destructor"<<endl;
    for(auto book:m_bookList)
    {
        delete book;
    }
    for(auto student:m_studentRecord)
    {
        delete student;
    }
}

void Library:: studentEntryToBorrowBook(Student& student)
{
    string bookName =  student.getRequestedBook();

    Book* book = m_librarian->searchBookByName(m_bookList, bookName);
    if(book != NULL)
    {
        if(book->getStatus() == "Available")
        {
            m_librarian->issueBook(student, book, m_studentRecord);
            book->setStatus("Issued");
        }
    }
    else
    {
        cout<<"book with "<<bookName<<" is not available"<<endl;
    }
}

void Library::addBook(string bookName, string authourName, int bookID, string bookStatus)
{
    m_bookList.push_back(new Book(bookName, authourName, bookID, bookStatus));
}

void Library::displayBooks()
{
    for(auto Book: m_bookList)
    {
        Book->display();
    }
}

void Library::displayStudentRecord()
{
    for(auto StudentRecord: m_studentRecord)
    {
        StudentRecord->display();
    }
}







