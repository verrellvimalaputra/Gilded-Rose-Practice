#include "SystemBattery.h"
#include "BatteryApp.h"
#include "BatteryLogger.h"

int main() {
    auto *systemBattery = new SystemBattery;

    Observer *batteryApp = new BatteryApp(*systemBattery, "Battery App");
    Observer *batteryLogger = new BatteryLogger(*systemBattery, "Battery Logger");
    //systemBattery->attach(batteryApp);
    //systemBattery->attach(batteryLogger);

    systemBattery->setBatteryLevel(87);

    systemBattery->setBatteryLevel(85);

    delete batteryApp;
    delete batteryLogger;
    delete systemBattery;


    return 0;
}
