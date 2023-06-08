#include "BatteryLogger.h"

BatteryLogger::BatteryLogger(SystemBattery& subject, std::string name)
        : Observer(), subject(subject), name(std::move(name)) {

}

void BatteryLogger::update()
{
    int newValue = this->subject.getData();
    std::cout << "This is " << name << "! Received value " << newValue << "\n";
}
BatteryLogger::~BatteryLogger() {
    this->subject.detach(this);
}