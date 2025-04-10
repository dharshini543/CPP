#include <iostream>s

using namespace std;

int main()
{
    int size;
    cout<<"Enter size of Array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter "<<size<<" elements of Array"<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    for(int i = 0; i < size; i++)
    {
        // if(array[i] == 0 && array[size - i] != 0)
        // {
        //     array[(size - i)] = array[i];
        // }
    }
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}
