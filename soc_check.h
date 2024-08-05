#ifndef SOC_CHECK_H
#define SOC_CHECK_H

#define SOC_MIN_LIMIT 20
#define SOC_MAX_LIMIT 80
#define SOC_WARNING_TOLERANCE (SOC_MAX_LIMIT * WARNING_TOLERANCE_PERCENTAGE)

int validateSoc(float soc);

#endif
