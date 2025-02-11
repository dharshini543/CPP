using namespace std;
#include "bike.h"
#include "Car.h"
//#include "Vehicle.h"

int main()
{
    Vehicle *ptr;

    Bike b;
    ptr=&b;
    ptr->fuelfun("petrol");

    car c;
    ptr=&c;
    ptr->fuelfun("Diesel");

    /*Vehicle v;
    Bike b1;
    car c1;
    v.fuelfun("petrol");
    b1.fuelfun("petrol");
    c1.car::fuelfun("diesel");*/

    return 0;
}
