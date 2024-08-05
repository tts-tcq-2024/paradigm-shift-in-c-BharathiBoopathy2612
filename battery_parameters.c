#include <stdio.h>
#include "battery_parameters.h"
#include "message_translations.h"

int checkValueInRange(float value, float minLimit, float maxLimit, const char* paramName) {
    if (value < minLimit) {
        printf("%s %s\n", paramName, translateMessage("is out of range! Too low!"));
        return 0;
    }
    if (value > maxLimit) {
        printf("%s %s\n", paramName, translateMessage("is out of range! Too high!"));
        return 0;
    }
    return 1;
}

int checkWarningLevel(float value, float minLimit, float maxLimit, float tolerance, const char* paramName) {
    if (value <= minLimit + tolerance) {
        printf("%s: %s %s\n", translateMessage("Warning"), paramName, translateMessage("is approaching the low limit!"));
    } else if (value >= maxLimit - tolerance) {
        printf("%s: %s %s\n", translateMessage("Warning"), paramName, translateMessage("is approaching the high limit!"));
    }
    return 1;
}
