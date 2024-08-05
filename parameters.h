#ifndef BATTERY_PARAMETERS_H
#define BATTERY_PARAMETERS_H

#define WARNING_TOLERANCE_PERCENTAGE 0.05

int isWithinRange(float value, float lowerLimit, float upperLimit, const char* parameterName);
int isApproachingLimit(float value, float lowerLimit, float upperLimit, float tolerance, const char* parameterName);

#endif 
