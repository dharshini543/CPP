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

void Library::displayStudentList(list<Student *> &studentList)
{
    for(auto student:studentList)
    {
        cout<<student->getName()<<" "<<student->getID()<<" "<<student->getdepartment()<<endl;
    }
}

Book* Library::searchBookByID(int bookID)
{
    for(auto Book:m_bookList)
    {
        if(Book->getID() == bookID)
        {
            return Book;
        }
    }
    return NULL;
}


