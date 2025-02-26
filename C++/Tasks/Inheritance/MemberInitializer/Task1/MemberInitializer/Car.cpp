#include "Car.h"
#include<iostream>
using namespace std;

Car::Car(int model, int engineType):m_model(model),m_engineType(engineType)
{
    cout<<"Car constructor"<<endl;
}

void Car::display()
{
    cout<<"Model :"<<m_model<<endl;
    cout<<"EngineType :"<<m_engineType<<endl;
}
