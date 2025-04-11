#ifndef LIBRARY_H
#define LIBRARY_H
#include<list>
#include "Book.h"
#include "Librarian.h"
using namespace std;

class Library
{
public:
    Library(Librarian* librarian);
    ~Library();
    void addBook(string bookName, string authourName, int bookID, string bookStatus);
    void displayBooks();
    void displayStudentList(list<Student *> &studentList);
    Book* searchBookByID(int bookID);

private:
    Librarian* m_librarian;
    list<Book*> m_bookList;
};

#endif // LIBRARY_H
