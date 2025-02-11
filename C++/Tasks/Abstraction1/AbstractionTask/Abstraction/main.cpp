#include<iostream>
using namespace std;
#include "atm.h"
#include "bankaccount.h"

int main()
{
    /*ATM *ptr;
    bankaccount b(1000.00);
    ptr=&b;*/

    ATM *ptr= new bankaccount(1000.00);
    ptr->deposit(500);
    ptr->withdraw(300);
    ptr->checkbalance();

    //delete ptr;

    return 0;
}
