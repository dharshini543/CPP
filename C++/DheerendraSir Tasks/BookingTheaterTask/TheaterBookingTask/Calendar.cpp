#include "Calendar.h"
#include <iostream>
#include <time.h>


Calendar::Calendar()
{
    cout<<"Calender Constructor"<<endl;
}

Calendar::~Calendar()
{
    cout<<"Calender Destructor"<<endl;
}

void Calendar::display()
{
    for(int i = 0; i < 7; i++)
    {
        cout.width(5);
        cout<<m_daysInWeek[i];
        cout.width(5);
    }
    cout<<endl;
    for(int i = 1; i <= 3; i++ )
    {
        cout.width(5);
        cout<<" ";
        if(m_daysInWeek[i] == "Tue")
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

void Calendar::displayCurrentDate()
{
        time_t t;
        struct tm *today;

        time(&t);
        today = localtime(&t);

        cout<<"Today's Date : "<<today->tm_mday<<"/"<<today->tm_mon + 1<<"/"<<today->tm_year + 1900<<endl;

}


