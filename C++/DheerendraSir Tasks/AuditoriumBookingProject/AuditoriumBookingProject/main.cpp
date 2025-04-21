#include "AuditoriumBookingManager.h"
#include "Calender.h"
#include"Date.h"
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
    Calender calender;
    int year = 2025;
    int month = 4;
    calender.printMonthCalender(year, month);
    calender.printTodayDate();

    AuditoriumBookingManager auditoriumManager;
    int input,  auditoriumID;
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
            cin >> date;
            cout<<"Enter Auditorium ID to Book"<<endl;
            cin >>auditoriumID;
            auditoriumManager.bookAuditorium(auditoriumID, date);
            break;

        case Display:
            cout<<"Enter Date to display Auditoriums"<<endl;
            cin >> date;
            auditoriumManager.showAvailableAuditoriums(date);
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
