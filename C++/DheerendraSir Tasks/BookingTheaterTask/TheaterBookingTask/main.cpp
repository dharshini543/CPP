#include "BookingSystem.h"
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
    Calendar calender;
    calender.display();
    cout<<endl;
    calender.displayCurrentDate();
    cout<<endl;
    BookingSystem bookingManager;
    int date,input;
    string AuditoriumName;
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
            if(date > 30 || date < 1)
            {
                cout<<"Invalid Date"<<endl;
            }
            else
            {
                bookingManager.displayAvailableAuditoriums(date);
                cout<<"Enter Auditorium name to Book"<<endl;
                cin >>AuditoriumName;
                bookingManager.bookAuditorium(date, AuditoriumName);
            }
            break;
        case Display:
            cout<<"Enter Date to display Auditoriums"<<endl;
            cin >>date;
            if(date > 30 || date < 1)
            {
                cout<<"Invalid Date"<<endl;
            }
            else
            {
                bookingManager.displayAvailableAuditoriums(date);
            }
            break;
        case Exit:
            cout<<"Exiting............."<<endl;
            exit(0);
            break;
        default:
            cout<<"Invalid Input"<<endl;
        }
    }


    return 0;
}
