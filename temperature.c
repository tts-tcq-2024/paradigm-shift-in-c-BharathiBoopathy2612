#include "temperature.h"
#include "battery_parameters.h"

int isTemperatureOk(float temperature) {
  if (!isWithinRange(temperature, TEMPERATURE_LOWER_LIMIT, TEMPERATURE_UPPER_LIMIT, "Temperature")) {
    return 0;
  }
  return isApproachingLimit(temperature, TEMPERATURE_LOWER_LIMIT, TEMPERATURE_UPPER_LIMIT, TEMPERATURE_WARNING_TOLERANCE, "Temperature");
}
