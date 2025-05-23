#include "UPI.h"
#include <iostream>

UPI::UPI(string upiID, int transactionID, string paymentStatus)
{
    cout<<"UPI Constructor"<<endl;
    m_paymentID = upiID;
    m_transactionID = transactionID;
    m_paymentStatus = paymentStatus;
}

UPI::UPI(const UPI &upi)
{
    cout<< "UPI Copy constructor called"<<endl;
    m_paymentID = upi.m_paymentID;
    m_transactionID = upi.m_transactionID;
    m_paymentStatus = upi.m_paymentStatus;

}

UPI::~UPI()
{
    cout<<"UPI Destructor"<<endl;

}

UPI UPI::operator =(UPI &upi)
{
    cout<< "UPI assignment operator"<<endl;
    return upi;
}
void UPI::setID(string ID)
{
    m_paymentID = ID;
}

void UPI::setTransactionID(int transactionID)
{
    m_transactionID = transactionID;
}

string UPI::getID()
{
    return m_paymentID;
}

int UPI::getTransactionID()
{
    return m_transactionID;
}

string UPI::getPaymentStatus()
{
    return m_paymentStatus;
}

void UPI::setPaymentStatus(string paymentStatus)
{
    m_paymentStatus = paymentStatus;
}
