#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "Vehicle_Manager.h"
class Main_menu
{
public:
    Main_menu();
    ~Main_menu();
    void initVehicleManager(Vehicle_Manager* vehicleManager);

private:
    Vehicle_Manager* m_vehicleManager;
};

#endif // MAIN_MENU_H
