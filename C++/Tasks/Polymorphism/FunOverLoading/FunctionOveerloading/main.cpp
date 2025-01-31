#include <iostream>

using namespace std;

void capturePhoto()
{
    cout<<"Captured Photo with default settings"<<endl;
}
void capturePhoto(int resolution)
{
    cout<<"Captured Photo at"<<resolution<<"MP"<<endl;
}
void capturePhoto(string filter)
{
    cout<<"Captured Photo with"<<filter<<"filter"<<endl;
}

int area(int length)
{
    return length * length;
}
int area(int length,int width)
{
    return length * width;
}
int area(double radius)
{
    return 3.14 * radius * radius;
}

int perimeter(int length)
{
    return 4 * length;
}
int perimeter(int length,int width)
{
    return 2 *(length + width);
}
int perimeter(double radius)
{
    return 2* 3.14 * radius;
}

void sendMessage(string text)
{
    cout<<"Sent message"<<text<<endl;
}
void sendMessage(string text,string emoji)
{
    cout<<"Sent message"<<text<<" "<<emoji<<endl;
}
int main()
{
    cout<<"Area of Square :"<<area(5)<<endl;
    cout<<"Area of Rectangle :"<<area(5,10)<<endl;
    cout<<"Area of Circle :"<<area(7)<<endl;
    cout<<"Perimeter of Square :"<<perimeter(5)<<endl;
    cout<<"Perimeter of Rectangle :"<<perimeter(5,10)<<endl;
    cout<<"Perimeter of Circle :"<<perimeter(7)<<endl;

    return 0;
}
