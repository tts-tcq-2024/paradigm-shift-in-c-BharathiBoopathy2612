#ifndef PARAMETERS_H
#define PARAMETERS_H


#define GENERIC_WARNING(message) printf("Warning: %s\n", message)


int isWithinRange(float value, float lowerLimit, float upperLimit, const char* parameterName);
int isApproachingLimit(float value, float lowerLimit, float upperLimit, float tolerance, const char* parameterName);

#endif 
