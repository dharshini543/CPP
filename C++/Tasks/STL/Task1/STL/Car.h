#ifndef CAR_H
#define CAR_H

class Car
{
public:
    Car();
    template<typename T>
    T add(T,T,T);
    template<typename T>
    T add(T,T);
    template<typename T>
    T add(T);
    template<typename I,typename F>
    F add(I,F);
};

#endif // CAR_H
