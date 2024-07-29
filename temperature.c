#include "temperature.h"
#include <stdio.h>

// Function to check if temperature is within range
int isTemperatureOk(float temperature) {
    if (temperature < 0 || temperature > 45) {
        printf("Temperature out of range!\n");
        return 0;
    }
    return 1;
}
