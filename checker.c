#include <stdio.h>
#include <stdbool.h>

bool isTemperatureOk(float temperature) {
    return (temperature >= 0 && temperature <= 45);
}

bool isSocOk(float soc) {
    return (soc >= 20 && soc <= 80);
}

bool isChargeRateOk(float chargeRate) {
    return (chargeRate <= 0.8);
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
    return isTemperatureOk(temperature) && isSocOk(soc) && isChargeRateOk(chargeRate);
}

int main() {
    // Example usage
    float temperature = 25.0;
    float soc = 70.0;
    float chargeRate = 0.5;
    
    if (batteryIsOk(temperature, soc, chargeRate)) {
        // Battery is OK
    } else {
        // Battery is NOT OK
    }

    return 0;
}
