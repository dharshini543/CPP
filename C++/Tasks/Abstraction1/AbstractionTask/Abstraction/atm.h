#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM();
    ~ATM();
    virtual void withdraw(double amount)=0;
    virtual void deposit(double amount)=0;
    virtual void checkbalance()=0;
};

#endif
