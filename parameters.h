// parameters.h
#ifndef PARAMETERS_H
#define PARAMETERS_H

// Generic constants and helper function declarations
#define GENERIC_WARNING(message) printf("Warning: %s\n", message)

// Function declarations for generic parameter checking
int isWithinRange(float value, float lowerLimit, float upperLimit, const char* parameterName);
int isApproachingLimit(float value, float lowerLimit, float upperLimit, float tolerance, const char* parameterName);

#endif // PARAMETERS_H
