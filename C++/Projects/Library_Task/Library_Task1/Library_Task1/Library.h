#ifndef LIBRARY_H
#define LIBRARY_H
#include<list>
#include "Book.h"
#include "Librarian.h"
//#include "StudentRecord.h"
using namespace std;

class Library
{
public:
    Library(Librarian* librarian);
    ~Library();
    void studentEntryToBorrowBook(Student& student);
    void addBook(string bookName, string authourName, int bookID, string bookStatus);
    void displayBooks();
    void displayStudentRecord();

private:
    Librarian* m_librarian;
    list<Book*> m_bookList;
    list<StudentRecord*> m_studentRecord;
};

#endif // LIBRARY_H
