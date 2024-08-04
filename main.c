#include <assert.h>
#include <stdio.h>
#include "temperature.h"
#include "soc.h"
#include "charge_rate.h"

int main() {
  assert(isTemperatureOk(25)); 
  assert(!isTemperatureOk(50)); 

  assert(isSocOk(70));
  assert(!isSocOk(85)); 

  assert(isChargeRateOk(0.7)); 
  assert(!isChargeRateOk(0.9)); 

  printf("All tests passed!\n");
  return 0;
}
