#ifndef UPI_H
#define UPI_H

#include "PaymentMode.h"

class UPI:public PaymentMode
{
public:
    UPI(string upiID,int transactionID, string paymentStatus);
    ~UPI();

    void setID(string ID);
    void setTransactionID(int transactionID);
    string getID();
    int getTransactionID();
    string getPaymentStatus();
    void setPaymentStatus(string paymentStatus);
};

#endif // UPI_H
