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
list<Student *> Librarian::issueBook(Student &student, Book *book, list<Student *>& studentlist)
{
    cout<<book->getName()<<" is issued to "<<student.getName()<<endl;
    studentlist.push_back(new Student(student.getName(), student.getdepartment(), student.getID()));
    student.borrowBook(book);
    return studentlist;
}
