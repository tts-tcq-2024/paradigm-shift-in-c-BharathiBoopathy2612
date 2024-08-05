#ifndef CHARGE_RATE_CHECK_H
#define CHARGE_RATE_CHECK_H

#define CHARGE_RATE_MAX_LIMIT 0.8
#define CHARGE_RATE_WARNING_TOLERANCE (CHARGE_RATE_MAX_LIMIT * WARNING_TOLERANCE_PERCENTAGE)

int validateChargeRate(float chargeRate);

#endif 