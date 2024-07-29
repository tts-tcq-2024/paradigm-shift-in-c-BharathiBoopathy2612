#include "temperature.h"
#include <assert.h>

// Test cases for isTemperatureOk function
void testIsTemperatureOk() {
    assert(isTemperatureOk(25) == 1);     // In range
    assert(isTemperatureOk(-5) == 0);     // Below range
    assert(isTemperatureOk(50) == 0);     // Above range
}

int main() {
    testIsTemperatureOk();
    printf("All temperature tests passed.\n");
    return 0;
}
