#include "phone.h"
#include <iostream>
using namespace std;
phone::phone(string phnum):m_phnum(phnum)
{
    //m_phnum =phnum;
    cout<<"phone constructor called"<<endl;
}
phone::~phone()
{
    cout<<"phone Destructor called"<<endl;
}
void phone::makeAcall()
{
    cout<<"Make a call"<<endl;
}
void phone::display()
{
    cout<<"Phone display"<<endl;
    cout<<"PhoneNum :"<<m_phnum<<endl;

}

