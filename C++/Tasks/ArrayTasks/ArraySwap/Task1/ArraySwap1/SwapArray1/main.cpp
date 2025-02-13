#include <iostream>

using namespace std;

int main()
{
    int array[5];
    cout << "Enter 5 Array Elements" << endl;
    for(int i = 0;i < 5;i++)
    {
        cin>>array[i];
    }
    for(int i = 0;i < 5;i++)
    {
        if(i == 1)
        {
            int temp = array[i];
            array[i] = array[i + 2];
            array[i + 2] = temp;
        }
    }
    cout<<endl;
    for(int i = 0;i < 5;i++)
    {
        cout<<array[i]<< endl;
    }
    return 0;
}
