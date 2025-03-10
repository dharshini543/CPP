#include <iostream>
#include <list>
#include"WiFi.h"
#include "CSV_FileOperation.h"
using namespace std;

int main()
{
    list<WiFi> wifi;
    CSV_FileOperation csv;
    string name;
    int signalstrength;
    string status;
    string password;
    int count = 1;
    /*while(count <= 10)
    {
    cout<<"Enter WiFi Details"<<endl;
    cout << "Enter Name" << endl;
    cin>>name;
    cout << "Enter Signal strength" << endl;
    cin>>signalstrength;
    cout << "Enter Status" << endl;
    cin>>status;
    cout << "Enter Password" << endl;
    cin>>password;
    wifi.push_back(WiFi(name,signalstrength,status,password));
    count++;

    }*/
    wifi.push_back(WiFi("Dharshini",74,"Saved","789456"));
    wifi.push_back(WiFi("Pallavi",71,"Saved","852164"));
    wifi.push_back(WiFi("pThinks",75,"Connected","123456"));
    wifi.push_back(WiFi("Darshan",72,"Saved","321654"));
    wifi.push_back(WiFi("Prathik",69,"Available","985467"));
    wifi.push_back(WiFi("Likitha",73,"Saved","852164"));
    wifi.push_back(WiFi("Varshini",70,"Available","851642"));
    wifi.push_back(WiFi("Girish",67,"Available","123678"));
    wifi.push_back(WiFi("Dheemanth",68,"Available","751336"));
    wifi.push_back(WiFi("Anurag",76,"Available","546213"));


    csv.initWiFi(wifi);
    csv.display();
    return 0;
}
