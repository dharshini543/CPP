#include "AuditoriumBookingManager.h"
#include "Calendar.h"
#include <iostream>
using namespace std;

enum
{
    Book = 1,
    Display,
    Exit
};

int main()
{
    // Calendar calender;
    // calender.displayCalender();
    // cout<<endl;
    // calender.displayCurrentDate();
    // cout<<endl;

    AuditoriumBookingManager auditoriumManager;
    int input,  auditoriumNumber;
    Date date;
    while(true)
    {
        cout<<"Enter"<<endl<<"1. Book Auditorium"<<endl;
        cout<<"2. Display Available Auditoriums"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>input;
        switch(input)
        {

        case Book:
            cout<<"Enter Date to book Auditorium"<<endl;
            cin >>date;
            auditoriumManager.displayAvailableAuditoriums(date);
            cout<<"Enter Auditorium number to Book"<<endl;
            cin >>auditoriumNumber;
            auditoriumManager.bookAuditorium(date, auditoriumNumber);
            break;

        case Display:
            cout<<"Enter Date to display Auditoriums"<<endl;
            cin >>date;
            auditoriumManager.displayAvailableAuditoriums(date);
            break;

        case Exit:
            cout<<"Exiting............."<<endl;
            return 0;
            break;

        default:
            cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}
