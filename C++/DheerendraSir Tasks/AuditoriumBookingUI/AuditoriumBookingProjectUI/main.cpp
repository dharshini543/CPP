// #include <QApplication>
// #include "calendar.h"
// #include "CalendarUI.h"

// int main(int argc, char *argv[])
// {
//     QApplication app(argc, argv);
//     Calender* calendar = new Calender;
//     CalendarUI ui(calendar);
//     ui.show();
//     return app.exec();
// }
#include<iostream>
using namespace std;

class Calculator
{
private:
    int m_a , m_b;
public:
    Calculator(){}
    Calculator(int a,int b){m_a = a;m_b = b;}
    Calculator operator +(Calculator& cal)
    {
        Calculator c;
        c.m_a = this->m_a + cal.m_a;
        c.m_b = this->m_b + cal.m_b;
        return c;
    }
    friend ostream& operator <<(ostream& out,Calculator& cal)
    {
        out<<cal.m_a<<endl<<cal.m_b<<endl;
        return out;
    }
    void display()
    {
        cout<<m_a<<" "<<m_b<<endl;
    }

};


int main()
{
    Calculator c1(2,1),c2(5,6);
    Calculator c3;
    c3 = c1+c2;
    //c1.operator +(c2);
    //c3.display();
    cout<<c3;
    operator <<(cout,c3);
}
