#include "charge_rate_check.h"
#include "battery_parameters.h"
#include "message_translations.h"

int validateChargeRate(float chargeRate) {
    if (!checkValueInRange(chargeRate, 0, CHARGE_RATE_MAX_LIMIT, translateMessage("Charge Rate"))) {
        return 0;
    }
    return checkWarningLevel(chargeRate, 0, CHARGE_RATE_MAX_LIMIT, CHARGE_RATE_WARNING_TOLERANCE, translateMessage("Charge Rate"));
}
