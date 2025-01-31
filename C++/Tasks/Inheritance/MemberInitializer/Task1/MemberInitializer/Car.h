#ifndef CAR_H
#define CAR_H

class Car
{
    int m_model;
    int m_engineType;
public:
    Car(int model, int engineType);
    void display();
    ~Car();
};

#endif // CAR_H
