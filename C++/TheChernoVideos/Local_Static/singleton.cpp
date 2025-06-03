#include "singleton.h"
#include <iostream>
using namespace std;

SingleTon::SingleTon()
{

}

SingleTon &SingleTon::get()
{
    static SingleTon m_instance;
    return m_instance;
}

void SingleTon::hello()
{
    cout<<"fun hello"<<endl;
}

//SingleTon* SingleTon::m_instance = nullptr;
