#include "charge_rate.h"
#include "parameters.h"

int isChargeRateOk(float chargeRate) {
  if (!isWithinRange(chargeRate, 0, CHARGE_RATE_UPPER_LIMIT, "Charge Rate")) {
    return 0;
  }
  return isApproachingLimit(chargeRate, 0, CHARGE_RATE_UPPER_LIMIT, CHARGE_RATE_WARNING_TOLERANCE, "Charge Rate");
}
