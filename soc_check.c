#include "soc_check.h"
#include "battery_parameters.h"
#include "message_translations.h"

int validateSoc(float soc) {
    if (!checkValueInRange(soc, SOC_MIN_LIMIT, SOC_MAX_LIMIT, translateMessage("State of Charge"))) {
        return 0;
    }
    return checkWarningLevel(soc, SOC_MIN_LIMIT, SOC_MAX_LIMIT, SOC_WARNING_TOLERANCE, translateMessage("State of Charge"));
}
