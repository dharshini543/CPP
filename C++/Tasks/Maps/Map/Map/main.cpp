#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string,string> India;
    India.insert({"Karnataka","Bengaluru"});
    India["Delhi"] = "NewDelhi";
    //India.emplace("Karnataka","Bengaluru");
    India.emplace("Tamilnadu","Chennai");
    India.emplace("AndraPradesh","Amarvati");
    India.emplace("Telangana","Hyderabad");
    India.emplace("Punjab","Chandigarh");

    cout<<"State     "<<"       Capital"<<endl;
    for(auto i = India.begin(); i != India.end(); i++)
    {
        cout<<i->first<<"       "<<i->second<<endl;
    }
    string state;
    cout<<"Enter state name"<<endl;
    cin>>state;
    if(India.find(state) != India.end())
    {
    cout<<"Capital of "<<state<<" is : "<<India.at(state)<<endl;
    }
    for(auto i = India.begin(); i != India.end(); i++)
    {
        cout<<i->first<<"       "<<i->second<<endl;
    }

    return 0;
}
