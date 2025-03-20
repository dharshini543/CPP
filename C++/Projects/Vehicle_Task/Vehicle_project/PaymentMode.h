#ifndef PAYMENTMODE_H
#define PAYMENTMODE_H

#include <string>
using namespace std;

class PaymentMode
{
public:
    PaymentMode();
    PaymentMode(string ID,int transactionID,string paymentStatus);
    virtual ~PaymentMode();

    virtual void setID(string ID);
    virtual void setTransactionID(int transactionID);
    virtual string getID();
    virtual int getTransactionID();
    virtual string getPaymentStatus();
    virtual void setPaymentStatus(string paymentStatus);

protected:
    string m_ID;
    int m_transactionID;
    string m_paymentStatus;
};

#endif // PAYMENTMODE_H
