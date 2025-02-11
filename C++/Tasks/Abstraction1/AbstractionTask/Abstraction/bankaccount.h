#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include "atm.h"

class bankaccount:public ATM
{
private:
    double balance;
public:
    bankaccount();
    ~bankaccount();
    bankaccount(double initialbalance);
    void withdraw(double amount);
    void deposit(double amount);
    void checkbalance();
};

#endif
