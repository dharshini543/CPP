#include "AuditoriumBookingManager.h"
#include "Calender.h"
#include"Date.h"
#include <iostream>
#include"Debug.h"
using namespace std;
enum
{
    Book = 1,
    Display,
    Exit
};

int main()
{
    Debug::setEnabled(false);
    AuditoriumBookingManager auditoriumManager;
    auditoriumManager.addAuditorium();
    Calender calender;
    calender.setBookingManager(&auditoriumManager);
    calender.navigate();

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
                    int availableCount = auditoriumManager.getAvailableCount(date);
                    if(availableCount != 0)
                    {
                    cout<<"Enter Auditorium ID to Book"<<endl;
                    cin >>auditoriumID;
                    bool isTrue;
                    isTrue = auditoriumManager.bookAuditorium(auditoriumID, date);
                    if(isTrue)
                    {
                        calender.printSpecificMonth(date.getYear(), date.getMonth());
                    }

                    break;
                    }
                    else
                    {
                        cout<<"No auditoriums are avaiable to book on "<<date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<<endl;
                        break;
                    }
                }
            }
            break;

        case Display:
        {
            cout<<"Enter Date to display Auditoriums"<<endl;
            cin >> date;
            Date currentDate = date.getCurrentDate();
            if (date < currentDate)
            {
                cout << "Warning: Cannot display available auditoriums for  past date ("
                     << date.getDay() << "-" << date.getMonth() << "-" << date.getYear() << ").\n";
                continue;
            }
            else
            {
                int availableCount = auditoriumManager.getAvailableCount(date);
                if(availableCount != 0)
                {
                auditoriumManager.showAvailableAuditoriums(date);
                }
                else
                {
                    cout<<"No auditoriums are avaiable to display on "<<date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<<endl;
                }
                break;
            }
            break;
        }

        case Exit:
            cout<<"Exiting............."<<endl<<endl;
            return 0;

        default:
            cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}
