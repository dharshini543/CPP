#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Librarian.h"
#include <list>
class Library
{
public:
    Library();
    ~Library();
    void select();

private:
    Librarian m_librarian;
    list<Book*> m_bookList;
};

#endif // LIBRARY_H
