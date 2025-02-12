#include <iostream>

using namespace std;

int main()
{
    int num, result = 0;
    int Max = 0;
    int Min = 9;
    cout << "Enter Number :" << endl;
    cin>>num;
    while(num != 0)
    {
    int lastDigit = num % 10;
    if(lastDigit > Max)
    {
        Max = lastDigit;
    }

    if(lastDigit < Min)
    {
        Min = lastDigit;
    }

    result = lastDigit + (result * 10);
    num = num / 10;
    }
    cout << "Reverse Number :" <<result<<endl;
    cout << "Max Value :" <<Max<<endl;
    cout << "Min Value :" <<Min<<endl;

    return 0;
}
