// main.c
#include <assert.h>
#include "battery_parameters.h"

int main() {
  assert(batteryIsOk(25, 70, 0.7)); // All parameters are normal
  assert(!batteryIsOk(50, 85, 0));  // Temperature and SoC out of range
  assert(batteryIsOk(2, 22, 0.7));  // All parameters within warning levels
  assert(batteryIsOk(43, 75, 0.76)); // Temperature and SoC approaching high limit
  
  printf("All tests passed!\n");
  return 0;
}
