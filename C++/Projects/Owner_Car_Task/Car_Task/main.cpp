#include "Owner.h"

using namespace std;

int main()
{
    Owner owner("Dharshini");
    Driver* driver = new Driver("XYZ");
    owner.assignDriver(driver);
    delete driver;
    return 0;
}
