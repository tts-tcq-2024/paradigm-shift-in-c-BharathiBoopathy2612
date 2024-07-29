#include "charge_rate.h"
#include <assert.h>

// Test cases for isChargeRateOk function
void testIsChargeRateOk() {
    assert(isChargeRateOk(0.5) == 1);     // In range
    assert(isChargeRateOk(0.9) == 0);     // Above range
}

int main() {
    testIsChargeRateOk();

    return 0;
}
