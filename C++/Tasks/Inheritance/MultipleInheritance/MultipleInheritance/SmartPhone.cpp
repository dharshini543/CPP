#include "SmartPhone.h"
#include<iostream>
using namespace  std;

SmartPhone::SmartPhone(int s_pixels, string s_songName, string s_phnum):Camera(s_pixels),Music(s_songName),phone(s_phnum)
{
    cout<<"Smart phone constructor called"<<endl;
}
SmartPhone::~SmartPhone()
{
    cout<<"Smart phone Destructor called"<<endl;
}
