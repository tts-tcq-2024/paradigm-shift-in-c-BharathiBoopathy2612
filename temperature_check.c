#include "temperature_check.h"
#include "battery_parameters.h"
#include "message_translations.h"

int validateTemperature(float temperature) {
    if (!checkValueInRange(temperature, TEMP_MIN_LIMIT, TEMP_MAX_LIMIT, translateMessage("Temperature"))) {
        return 0;
    }
    return checkWarningLevel(temperature, TEMP_MIN_LIMIT, TEMP_MAX_LIMIT, TEMP_WARNING_TOLERANCE, translateMessage("Temperature"));
}
