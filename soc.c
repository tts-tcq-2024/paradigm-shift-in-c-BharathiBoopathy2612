#include "soc.h"
#include "parameters.h"

int isSocOk(float soc) {
  if (!isWithinRange(soc, SOC_LOWER_LIMIT, SOC_UPPER_LIMIT, "State of Charge")) {
    return 0;
  }
  return isApproachingLimit(soc, SOC_LOWER_LIMIT, SOC_UPPER_LIMIT, SOC_WARNING_TOLERANCE, "State of Charge");
}
