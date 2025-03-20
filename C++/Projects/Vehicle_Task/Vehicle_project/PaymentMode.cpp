#include "PaymentMode.h"
#include <iostream>

PaymentMode::PaymentMode()
{
    cout<<"Paymentmode Constructor"<<endl;
}

PaymentMode::PaymentMode(string ID, int transactionID, string paymentStatus)
{
    cout<<"Paymentmode Constructor"<<endl;
    m_ID = ID;
    m_transactionID = transactionID;
    m_paymentStatus = paymentStatus;
}

PaymentMode::~PaymentMode()
{
    cout<<"Paymentmode Destructor"<<endl;
}

void PaymentMode::setID(string ID)
{
    m_ID = ID;
}

void PaymentMode::setTransactionID(int transactionID)
{
    m_transactionID = transactionID;
}

string PaymentMode::getID()
{
    return m_ID;
}

int PaymentMode::getTransactionID()
{
    return m_transactionID;
}

string PaymentMode::getPaymentStatus()
{
    return m_paymentStatus;
}

void PaymentMode::setPaymentStatus(string paymentStatus)
{
    m_paymentStatus = paymentStatus;
}
