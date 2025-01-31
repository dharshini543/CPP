#include "Laptop.h"

using namespace std;

int main()
{
    int num = 10;
    Laptop laptop(num,20,"ASUS","Black");
    Laptop l;
    Laptop l1(50,100);

    /*cout << "length :" << laptop.m_length<<endl;
    cout << "width :" << laptop.m_width<<endl;
    cout << "brand :" << laptop.m_Brand<<endl;
    cout << "colour :" << laptop.m_colour<<endl;

    cout << "length :" << l.m_length<<endl;
    cout << "width :" << l.m_width<<endl;
    cout << "brand :" << l.m_Brand<<endl;
    cout << "colour :" << l.m_colour<<endl;

    cout << "length :" << l1.m_length<<endl;
    cout << "width :" << l1.m_width<<endl;
    cout << "brand :" << l1.m_Brand<<endl;
    cout << "colour :" << l1.m_colour<<endl;*/

    Laptop a;
    a.add(10,20);
    a.add(10.10f,20.10f);
    //a.add(10,20.10f);
    //a.add(10.10,20);
    a.add();
    //a.add(10);
    a.add(20.10,30.10);
    //a.sub();
    a.sub(50.20,20.20);
    a.sub(10,50);
    a.sub(10.10f,20.10f);


    /*a.add(10.10,20.20);
    a.add();*/
    //cout << "length :" << l.m_length<<endl;
    return 0;
}
