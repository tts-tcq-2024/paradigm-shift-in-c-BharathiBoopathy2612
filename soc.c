#include "soc.h"
#include <stdio.h>

// Function to check if state of charge is within range
int isSocOk(float soc) {
    if (soc < 20 || soc > 80) {
        printf("State of Charge out of range!\n");
        return 0;
    }
    return 1;
}
