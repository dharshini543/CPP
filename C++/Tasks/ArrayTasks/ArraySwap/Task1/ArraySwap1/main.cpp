#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin>>size;
    int array[size];
    cout << "Enter Array Elements" << endl;
    for(int i = 0;i < size;i++)
    {
        cin>>array[i];
    }
    for(int i = 0;i < size;i++)
    {
        if(i%2 != 0 && (i+2)< size)
        {
            int temp = array[i];
            array[i] = array[i + 2];
            array[i + 2] = temp;
        }
    }
    cout<<endl;
    for(int i = 0;i < size;i++)
    {
        cout<<array[i]<< endl;
    }
    return 0;
}


