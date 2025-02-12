#include "bankaccount.h"
#include <iostream>
using namespace std;

bankaccount::bankaccount()
{
    //cout<<"bank account class default constructor called"<<endl;
}

bankaccount::~bankaccount()
{
    //cout<<"bankaccount class destructor called"<<endl;
}

bankaccount::bankaccount(double initialbalance)
{
    balance=initialbalance;
    cout<<"available balance "<<balance<<endl;
}
void bankaccount::deposit(double amount)
{
    balance=balance+amount;
    cout<<"deposited amount "<<amount<<endl;
}

void bankaccount::withdraw(double amount)
{
    if(amount>balance)
    {
        cout<<"insufficient amount not able to draw"<<endl;
    }
    else
    {
        balance=balance-amount;
        cout<<"withdrawed amount "<<amount<<endl;
    }
}
void bankaccount::checkbalance()
{
    cout<<"current balance "<<balance<<endl;
}
