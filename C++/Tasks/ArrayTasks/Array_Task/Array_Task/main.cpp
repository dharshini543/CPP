#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, original, count = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    for (int temp = number; temp > 0; temp = temp/10)
    {
        count++;
    }
    cout<<"Count :"<<count<<endl;
    for (int temp = number; temp > 0; temp = temp/10)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, count);
    }
    cout<<"Sum :"<<sum<<endl;

    if (sum == original)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    return 0;
}

