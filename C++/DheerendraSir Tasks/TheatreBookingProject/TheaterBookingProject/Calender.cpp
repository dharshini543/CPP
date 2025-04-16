#include "Calender.h"
#include<iostream>
Calender::Calender()
{
    cout<<"Calender Constructor"<<endl;
}

Calender::~Calender()
{
    cout<<"Calender Destructor"<<endl;
}

void Calender::display()
{
    for(int i = 0; i < 7; i++)
    {
        cout.width(5);
        cout<<m_weekdays[i];
        cout.width(5);
    }
    cout<<endl;
    for(int i = 1; i <= 7; i++ )
    {
        cout.width(5);
        cout<<" ";
        if(m_weekdays[i] == "Tue")
        {
            for(int j = 1; j <= 30;j++)
            {
                cout.width(5);
                cout<<j;
                cout.width(5);
                if(j == 5 || j == 12 || j == 19 || j == 26 || j == 30)
                {
                    cout<<endl;
                }
            }
        }
    }
}

void Calender::displayCurrentDate()
{

}
