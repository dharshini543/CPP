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
    calender.navigate();

    AuditoriumBookingManager auditoriumManager;
    auditoriumManager.addAuditorium();
    int input,  auditoriumID;
    Date date;

    while(true)
    {
        cout<<endl<<"Enter"<<endl<<"1. Book Auditorium"<<endl;
        cout<<"2. Display Available Auditoriums"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>input;

        switch(input)
        {
        case Book:
            while(true)
            {
                cout<<"Enter Date to book Auditorium"<<endl;
                cin >> date;
                Date currentDate = date.getCurrentDate();
                if (date < currentDate)
                {
                    cout << "Warning: Cannot book an auditorium for a past date ("
                         << date.getDay() << "-" << date.getMonth() << "-" << date.getYear() << ").\n";
                    continue;
                }
                else
                {
                    cout<<"Enter Auditorium ID to Book"<<endl;
                    cin >>auditoriumID;
                    auditoriumManager.bookAuditorium(auditoriumID, date);
                    break;
                }
            }
            break;

        case Display:
            cout<<"Enter Date to display Auditoriums"<<endl;
            cin >> date;
            auditoriumManager.showAvailableAuditoriums(date);
            break;

        case Exit:
            cout<<"Exiting............."<<endl<<endl;
            return 0;

        default:
            cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}
