#ifndef CASH_H
#define CASH_H
#include"PaymentMode.h"

class Cash:public PaymentMode
{
public:
    Cash(string cashID,int transactionID,string paymentStatus);
    ~Cash();

    void setID(string ID);
    void setTransactionID(int transactionID);
    string getID();
    int getTransactionID();
    string getPaymentStatus();
    void setPaymentStatus(string paymentStatus);
};

#endif // CASH_H
