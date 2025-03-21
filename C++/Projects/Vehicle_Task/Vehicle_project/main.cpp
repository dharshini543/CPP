#include "LoginManagement.h"
#include "Vehicle_Manager.h"
using namespace std;

int main()
{
    Vehicle_Manager vehicleManager;
    LoginManagement loginManager;
    loginManager.login();
    vehicleManager.main_menu();
}
