#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;

class Book
{
public:
    Book(string bookName, string authourName, int bookID,string bookStatus);
    ~Book();
    void display();
    int getID();
    string getName();
    string getStatus();
    void setStatus(string bookStatus);

private:
    string m_bookName;
    int  m_bookID;
    string m_authorName;
    string m_bookStatus;

};

#endif // BOOK_H
