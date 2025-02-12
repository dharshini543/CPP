#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter Array Size :" << endl;
    cin>>size;

    int array[size];
    cout << "Enter Array Elements :" << endl;
    for(int i = 0; i < size;i++)
    {
        cin>>array[i];
    }

    int Min = array[0] ,Max = array[0];

    for(int i = 0; i <= (size - 1) ; i++)
    {
        if(array[i] < Min)
        {
            Min = array[i];
        }
    }
    cout<<"Min Value :"<<Min<<endl;

    for(int i = 0; i <= (size - 1) ; i++)
    {
        if(array[i] > Max)
        {
            Max = array[i];

        }
    }
    cout<<"Max Value :"<<Max<<endl;



    return 0;
}
