#ifndef TEMPERATURE_CHECK_H
#define TEMPERATURE_CHECK_H

#define TEMP_MIN_LIMIT 0
#define TEMP_MAX_LIMIT 45
#define TEMP_WARNING_TOLERANCE (TEMP_MAX_LIMIT * WARNING_TOLERANCE_PERCENTAGE)

int validateTemperature(float temperature);

#endif 
