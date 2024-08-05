#ifndef BATTERY_PARAMETERS_H
#define BATTERY_PARAMETERS_H

#define WARNING_TOLERANCE_PERCENTAGE 0.05

int checkValueInRange(float value, float minLimit, float maxLimit, const char* paramName);
int checkWarningLevel(float value, float minLimit, float maxLimit, float tolerance, const char* paramName);

#endif
