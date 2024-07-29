#include "charge_rate.h"
#include <stdio.h>

// Function to check if charge rate is within range
int isChargeRateOk(float chargeRate) {
    if (chargeRate > 0.8) {
        printf("Charge Rate out of range!\n");
        return 0;
    }
    return 1;
}
