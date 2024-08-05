#include <stdio.h>
#include "battery_parameters.h"
#include "message_translations.h"

int isWithinRange(float value, float lowerLimit, float upperLimit, const char* parameterName) {
    if (value < lowerLimit) {
        printf("%s\n", translateMessage("out of range! Too low!"));
        return 0;
    }
    if (value > upperLimit) {
        printf("%s\n", translateMessage("out of range! Too high!"));
        return 0;
    }
    return 1;
}

int isApproachingLimit(float value, float lowerLimit, float upperLimit, float tolerance, const char* parameterName) {
    if (value <= lowerLimit + tolerance) {
        printf("%s: %s\n", translateMessage("Warning"), translateMessage("Approaching low limit"));
    } else if (value >= upperLimit - tolerance) {
        printf("%s: %s\n", translateMessage("Warning"), translateMessage("Approaching high limit"));
    }
    return 1;
}
