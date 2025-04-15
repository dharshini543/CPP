#include "Librarian.h"
#include <iostream>

Librarian::Librarian(string name, int ID)
{
    cout<<"Librarian Constructor"<<endl;
    m_name = name;
    m_ID = ID;
}

Librarian::~Librarian()
{
    cout<<"Librarian Destructor"<<endl;
}

void Librarian::issueBook(Student& student, Book* book, list<StudentRecord*>& studentRecord)
{
    cout<<book->getName()<<" book is issued to "<<student.getName()<<endl;
    this->addStudentDetails(student,studentRecord);
    student.borrowBook(book);
}

void Librarian::addStudentDetails(Student &student, list<StudentRecord*>& studentRecord)
{
    studentRecord.push_back(new StudentRecord(student));
}

Book* Librarian::searchBookByName(list<Book*>& bookList, string bookName)
{
    for(auto Book:bookList)
    {
        if(Book->getName() == bookName)
        {
            return Book;
        }
    }
    return NULL;
}
