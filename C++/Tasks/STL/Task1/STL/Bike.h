#ifndef BIKE_H
#define BIKE_H

template<typename D,typename I>
class Bike
{
    D m_price;
    I m_num;
public:
    Bike();
    D sub(D,I);
    D mul(D,D);
};

#endif // BIKE_H
