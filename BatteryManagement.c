#include "BatteryManagement.h"
#include "temperature.h"
#include "soc.h"
#include "charge_rate.h"

// Function to check if battery parameters are within range
int batteryIsOk(float temperature, float soc, float chargeRate) {
    return isTemperatureOk(temperature) && isSocOk(soc) && isChargeRateOk(chargeRate);
}
