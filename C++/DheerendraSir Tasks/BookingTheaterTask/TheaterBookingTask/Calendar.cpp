// #include "Calendar.h"
// #include <iostream>
// #include <time.h>

// Calendar::Calendar()
// {
//     cout<<"Calender Constructor"<<endl<<endl;
//     m_month = "APRIL";
//     m_year = 2025;
// }

// Calendar::~Calendar()
// {
//     cout<<"Calender Destructor"<<endl;
// }

// void Calendar::displayCalender()
// {
//     cout.width(15);
//     cout<<m_month<<" "<<m_year<<endl;
//     for(int i = 0; i < 7; i++)
//     {
//         cout.width(5);
//         cout<<m_daysInWeek[i];
//         cout.width(5);
//     }
//     cout<<endl;
//     for(int i = 1; i <= 3; i++ )
//     {
//         cout.width(5);
//         cout<<" ";
//         if(m_daysInWeek[i] == "Tue")
//         {
//             for(m_date = 1; m_date <= 30;m_date++)
//             {
//                 cout.width(5);
//                 cout<<m_date;
//                 cout.width(5);
//                 if(m_date == 5 || m_date == 12 || m_date == 19 || m_date == 26 || m_date == 30)
//                 {
//                     cout<<endl;
//                 }

//             }
//         }
//     }

// }

// void Calendar::displayCurrentDate()
// {
//     time_t t;
//     struct tm* today;

//     time(&t);
//     today = localtime(&t);

//     cout<<"Today's Date : "<<today->tm_mday<<"/0"<<today->tm_mon + 1<<"/"<<today->tm_year + 1900<<endl;

// }


