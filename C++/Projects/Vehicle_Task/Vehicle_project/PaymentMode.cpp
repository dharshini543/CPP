#include "PaymentMode.h"
#include <iostream>

PaymentMode::PaymentMode()
{
    cout<<"Paymentmode Constructor"<<endl;
}

PaymentMode::PaymentMode(string ID, int transactionID, string paymentStatus)
{
    cout<<"Paymentmode Constructor"<<endl;
    m_paymentID = ID;
    m_transactionID = transactionID;
    m_paymentStatus = paymentStatus;
}

PaymentMode::PaymentMode(const PaymentMode &payment)
{
    cout<< "PaymentMode Copy constructor called"<<endl;
    m_paymentID = payment.m_paymentID;
    m_transactionID = payment.m_transactionID;
    m_paymentStatus = payment.m_paymentStatus;

}

PaymentMode::~PaymentMode()
{
    cout<<"Paymentmode Destructor"<<endl;
}

PaymentMode PaymentMode::operator =(PaymentMode &payment)
{
    cout<< "PaymentMode assignment operator"<<endl;
    return payment;
}

void PaymentMode::setID(string paymentID)
{
    m_paymentID = paymentID;
}

void PaymentMode::setTransactionID(int transactionID)
{
    m_transactionID = transactionID;
}

string PaymentMode::getID()
{
    return m_paymentID;
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
