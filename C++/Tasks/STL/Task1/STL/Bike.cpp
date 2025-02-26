#include "Bike.h"

template<typename D,typename I>
Bike<D,I>::Bike()
{
    m_price = 15;
}

template<typename D,typename I>
D Bike<D,I>::sub(D a, I b,D c)
{
    return a - b+c;
}

template<typename D, typename I>
D Bike<D, I>::mul(D a, D b)
{
    return a*b;
}
template class Bike<double,double>;
template class Bike<int,double>;


