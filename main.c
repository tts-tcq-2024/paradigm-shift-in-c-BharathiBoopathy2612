#include <assert.h>
#include <stdio.h>
#include "temperature.h"
#include "soc.h"
#include "charge_rate.h"

int main() {
  assert(isTemperatureOk(25)); // Temperature normal
  assert(!isTemperatureOk(50)); // Temperature too high

  assert(isSocOk(70)); // SoC normal
  assert(!isSocOk(85)); // SoC too high

  assert(isChargeRateOk(0.7)); // Charge rate normal
  assert(!isChargeRateOk(0.9)); // Charge rate too high

  printf("All tests passed!\n");
  return 0;
}
