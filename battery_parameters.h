#include <stdio.h>
#include "parameters.h"

// Check if a value is within the specified range
int isWithinRange(float value, float lowerLimit, float upperLimit, const char* parameterName) {
  if (value < lowerLimit) {
    printf("%s out of range! Too low!\n", parameterName);
    return 0;
  }
  if (value > upperLimit) {
    printf("%s out of range! Too high!\n", parameterName);
    return 0;
  }
  return 1;
}

// Check if a value is approaching a limit within a specified tolerance
int isApproachingLimit(float value, float lowerLimit, float upperLimit, float tolerance, const char* parameterName) {
  if (value <= lowerLimit + tolerance) {
    GENERIC_WARNING("Approaching low limit");
  } else if (value >= upperLimit - tolerance) {
    GENERIC_WARNING("Approaching high limit");
  }
  return 1;
}
