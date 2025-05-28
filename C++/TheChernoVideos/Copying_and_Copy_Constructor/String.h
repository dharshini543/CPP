#ifndef STRING_H
#define STRING_H
#include <iostream>
using namespace std;

class String
{
public:
    String();
    String(const char* string);
    String(const String& other);
    ~String();
    char& operator[](unsigned int index);

    friend ostream& operator<< (ostream& stream,const String& string);
private:
    char* m_buffer;
    unsigned int m_size;
};

#endif // STRING_H
