#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;

class Book
{
public:
    Book(string bookName, int bookNum, string authourName, string m_bookStatus);
    ~Book();
    string getBookName();
    int getBookID();
    string getAuthourName();
    string getBookStatus();
    void setBookStatus(string bookStatus);

private:
    string m_bookName;
    string m_authourName;
    int m_bookID;
    string m_bookStatus;

};

#endif // BOOK_H
