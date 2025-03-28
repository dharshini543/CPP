#ifndef CASH_H
#define CASH_H
#include"PaymentMode.h"

class Cash:public PaymentMode
{
public:
    Cash(string cashID, int transactionID, string paymentStatus);
    Cash(const Cash &cash);
    ~Cash();

    Cash operator = (Cash& cash);

    string getID();
    void setID(string ID);

    int getTransactionID();
    void setTransactionID(int transactionID);

    string getPaymentStatus();
    void setPaymentStatus(string paymentStatus);
};

#endif // CASH_H
