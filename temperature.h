#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#define TEMPERATURE_LOWER_LIMIT 0
#define TEMPERATURE_UPPER_LIMIT 45
#define TEMPERATURE_WARNING_TOLERANCE 2.25

int isTemperatureOk(float temperature);

#endif 
