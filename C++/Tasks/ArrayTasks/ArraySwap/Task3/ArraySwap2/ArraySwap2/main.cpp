#include <iostream>

using namespace std;

int main()
{
    int array[6];
    cout << "Enter 6 Elements" << endl;
    for(int i = 0;i < 6;i++)
    {
        cin>>array[i];
    }
    for(int i = 0;i < 6;i++)
    {
        if(i == 1)
        {
            int temp =array[i];
            array[i] = array[i + 2];
            array[i + 2] = temp;
        }
        if(i == 3)
        {
            int temp =array[i];
            array[i] = array[i + 2];
            array[i + 2] = temp;
        }
    }
    cout<<endl;
    for(int i = 0;i < 6;i++)
    {
        cout<<array[i]<< endl;
    }

    return 0;
}

