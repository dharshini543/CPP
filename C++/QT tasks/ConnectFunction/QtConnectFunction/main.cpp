#include "BatteryManager.h"
#include"SoundManager.h"
#include<QApplication>
#include <QObject>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SoundManager manager;
    BatteryManager battery;
    QObject::connect(&battery, &BatteryManager::batteryLow, &manager, &SoundManager::announce);

    battery.batteryCapacityVariation();

    return app.exec();
}
