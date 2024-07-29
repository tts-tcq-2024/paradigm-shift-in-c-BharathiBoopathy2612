#include "BatteryMangement.h"
#include <assert.h>

// Test cases for batteryIsOk function
void testBatteryIsOk() {
    assert(batteryIsOk(25, 70, 0.7) == 1);    // All parameters in range
    assert(batteryIsOk(50, 85, 0) == 0);      // All parameters out of range
}

int main() {
    testBatteryIsOk();
    printf("All battery tests passed.\n");
    return 0;
}
