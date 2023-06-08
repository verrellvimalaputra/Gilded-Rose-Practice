#ifndef _BATTERYLOGGER_H
#define _BATTERYLOGGER_H

#include "Observer.h"
#include "SystemBattery.h"
#include <iostream>
#include <fstream>

class BatteryLogger : public Observer
{
public:
    BatteryLogger(SystemBattery &subject, std::string name);
    void update() override;
    ~BatteryLogger();

private:
    SystemBattery &subject;
    std::string name;

};

#endif //_BATTERYLOGGER_H
