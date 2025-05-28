#include "String.h"
#include<cstring>

String::String()
{
    cout<<"Constructor"<<endl;
}

String::String(const char* string)
{
    cout<<" Parameterized Constructor"<<endl;

    m_size =strlen(string);
    m_buffer = new char[m_size +1];
    memcpy(m_buffer,string,m_size);
    m_buffer[m_size] = 0;// adding null terminator
}

// String::String(const String &other)
// {
//     cout<<"Copy Constructor"<<endl;
//     m_buffer = other.m_buffer;
//     m_size = other.m_size;
// }


String::String(const String &other) :m_size(other.m_size)
{
    cout<<"Copy Constructor"<<endl;
    m_buffer = new char[m_size+1];
    memcpy(m_buffer,other.m_buffer,m_size+1);
}
// String::String(const String &other)
// {
//     memcpy(this,&other,sizeof(String))
// }


String::~String()
{
    cout<<"Destructor"<<endl;
    delete[]m_buffer;
}

char &String::operator[](unsigned int index)
{
    return m_buffer[index];

}

ostream& operator<<(ostream& stream,const String& string)
{
    stream << string.m_buffer;
    return stream;
}
