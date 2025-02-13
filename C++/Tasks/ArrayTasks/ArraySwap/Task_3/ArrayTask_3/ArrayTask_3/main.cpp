#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter Size" << endl;
    cin>>size;
    int array[size];
    cout<<"Enter "<<size<<" Array elements"<<endl;
    for(int i = 0;i <size;i++)
    {
        cin>>array[i];
    }
    for(int i = 0;i <size;i++)
    {
        if(array[i] == array[i + 1])
        {

        }
        else
        {
            cout<<array[i]<<endl;
        }
    }
    return 0;
}
