// battery_parameters.c
#include <stdio.h>
#include "battery_parameters.h"

// Generic function to check if a parameter is within acceptable range and provide warnings
static int isParameterOk(float value, float lowerLimit, float upperLimit, float warningTolerance, const char* parameterName) {
  if (value < lowerLimit) {
    printf("%s out of range! Too low!\n", parameterName);
    return 0;
  }
  if (value > upperLimit) {
    printf("%s out of range! Too high!\n", parameterName);
    return 0;
  }
  if (value <= lowerLimit + warningTolerance) {
    printf("Warning: Approaching low %s limit!\n", parameterName);
  }
  if (value >= upperLimit - warningTolerance) {
    printf("Warning: Approaching high %s limit!\n", parameterName);
  }
  return 1;
}

// Wrapper functions for specific parameter checks
int isTemperatureOk(float temperature) {
  return isParameterOk(temperature, TEMPERATURE_LOWER_LIMIT, TEMPERATURE_UPPER_LIMIT, TEMPERATURE_WARNING_TOLERANCE, "Temperature");
}

int isSocOk(float soc) {
  return isParameterOk(soc, SOC_LOWER_LIMIT, SOC_UPPER_LIMIT, SOC_WARNING_TOLERANCE, "State of Charge");
}

int isChargeRateOk(float chargeRate) {
  return isParameterOk(chargeRate, 0, CHARGE_RATE_UPPER_LIMIT, CHARGE_RATE_WARNING_TOLERANCE, "Charge Rate");
}

// Function to check if the battery is overall OK by checking all parameters
int batteryIsOk(float temperature, float soc, float chargeRate) {
  return isTemperatureOk(temperature) && isSocOk(soc) && isChargeRateOk(chargeRate);
}
