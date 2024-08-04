#ifndef BATTERY_PARAMETERS_H
#define BATTERY_PARAMETERS_H

// Constants defining the normal operating ranges and tolerance for warnings
#define TEMPERATURE_LOWER_LIMIT 0
#define TEMPERATURE_UPPER_LIMIT 45
#define TEMPERATURE_WARNING_TOLERANCE 2.25

#define SOC_LOWER_LIMIT 20
#define SOC_UPPER_LIMIT 80
#define SOC_WARNING_TOLERANCE 4

#define CHARGE_RATE_UPPER_LIMIT 0.8
#define CHARGE_RATE_WARNING_TOLERANCE 0.04


int isTemperatureOk(float temperature);
int isSocOk(float soc);
int isChargeRateOk(float chargeRate);
int batteryIsOk(float temperature, float soc, float chargeRate);

#endif
