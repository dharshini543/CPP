#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
    float m_length;
    void display();
public:
    //int printMe;
    float m_width;
    string m_name;
    Book();
    Book(float m_length,int m_numofPages,float m_width);
protected:
    int m_numOfPages;
    string m_colour;

};

#endif // BOOK_H
