#include <stdio.h>

void testIsTemperatureOk();
void testIsSocOk();
void testIsChargeRateOk();
void testBatteryIsOk();

int main() {
    testIsTemperatureOk();
    testIsSocOk();
    testIsChargeRateOk();
    testBatteryIsOk();

    printf("All tests passed.\n");
    return 0;
}
