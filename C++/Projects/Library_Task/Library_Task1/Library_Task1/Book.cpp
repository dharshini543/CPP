#include "Book.h"
#include <iostream>

Book::Book(string bookName, string authourName, int bookID, string bookStatus)
{
    cout<<"Book Constructor"<<endl;
    m_bookName = bookName;
    m_authorName = authourName;
    m_bookID = bookID;
    m_bookStatus = bookStatus;
}

Book::~Book()
{
    cout<<"Book Destructor"<<endl;
}

void Book::display()
{
    cout<<m_bookName<<" "<<m_authorName<<" "<<m_bookID<<" "<<m_bookStatus<<endl;
}

int Book::getID()
{
    return m_bookID;
}

string Book::getName()
{
    return m_bookName;
}

string Book::getStatus()
{
    return m_bookStatus;
}

void Book::setStatus(string bookStatus)
{
    m_bookStatus = bookStatus;
}
