#include <iostream>

using namespace std;
void fun(){
    int arr[5]={10,10,20,30,20};
    for(int i = 0;i <5;i++)
    {int c=0;
        for(int j = 0;j<5;j++)
        {
            if(arr[i]==arr[j])
                c++;
        }
        if(c==1)
            std::cout<<"unique value= "<<arr[i];
        }
}

int main()
{
    fun();
    int size;
    cout << "Enter Size" << endl;
    cin>>size;

    int count[size];
    for(int i = 0;i <size;i++)
    {
        count[i] = 0;
    }
    int array[size];
    cout<<"Enter "<<size<<" Array elements"<<endl;
    for(int i = 0;i <size;i++)
    {
        cin>>array[i];
    }
    cout<<endl;

    for(int i = 0;i <size;i++)
    {
        for(int j = 0;j<size;j++)
        {
            if(array[i] == array[j])
            {
                ++count[i];
            }
        }
    }
    cout<<"Non repititive elements in array"<<endl;
    for(int i = 0;i <size;i++)
    {
        if(count[i] == 1)
        {
        cout<<array[i]<<endl;
        }
    }
    return 0;
}
