#include "Book.h"
#include <iostream>

Book::Book(string bookName, int bookNum, string authourName, string bookStatus)
{
    cout<<"Book Constructor"<<endl;
    m_bookName = bookName;
    m_bookID = bookNum;
    m_authourName = authourName;
    m_bookStatus = bookStatus;
}

Book::~Book()
{
    cout<<"Book Destructor"<<endl;
}

string Book::getBookName()
{
    return m_bookName;
}

int Book::getBookID()
{
    return m_bookID;
}
string Book::getAuthourName()
{
    return m_authourName;
}
string Book::getBookStatus()
{
    return m_bookStatus;
}

void Book::setBookStatus(string bookStatus)
{
    m_bookStatus = bookStatus;
}
