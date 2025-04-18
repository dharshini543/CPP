#ifndef BOOKINGDETAILS_H
#define BOOKINGDETAILS_H
#include<string>
using namespace std;

class BookingDetails
{
public:
    BookingDetails(string name, int date);
    ~BookingDetails();
    string getName();
    int getDate();

private:
    string m_auditoriumName;
    int m_date;
};

#endif // BOOKINGDETAILS_H
