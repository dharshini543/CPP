#include <iostream>
#include <list>
#include"WiFi.h"
#include "WiFi_Operations.h"
using namespace std;

enum
{
    Display = 1,
    Connect,
    Exit
};

int main()
{
    list<WiFi*> wifi;
    WiFi_Operations operations;
    int choice = 0;

    wifi.push_back(new WiFi("Dharshini",74,"Saved","789456"));
    wifi.push_back(new WiFi("Pallavi",71,"Saved","852164"));
    wifi.push_back(new WiFi("pThinks",75,"Connected","123456"));
    wifi.push_back(new WiFi("Darshan",72,"Saved","321654"));
    wifi.push_back(new WiFi("Prathik",69,"Available","985467"));
    wifi.push_back(new WiFi("Likitha",73,"Saved","852164"));
    wifi.push_back(new WiFi("Varshini",70,"Available","851642"));
    wifi.push_back(new WiFi("Girish",67,"Available","123678"));
    wifi.push_back(new WiFi("Dheemanth",68,"Available","751336"));
    wifi.push_back(new WiFi("Anurag",76,"Available","546213"));


    operations.initWiFi(wifi);
    while(true)
    {
    cout<<"Enter 1. Display"<<endl<<"2. Connect"<<endl<<"3. Exit"<<endl;
    cin>>choice;
    switch(choice)
    {
    case Display:
        operations.display();
        break;
    case Connect:
        operations.connect();
        break;
    case Exit:
        exit(0);
    default:
        cout<<"Invalid input"<<endl;
    }
    }
    return 0;
}












