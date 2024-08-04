#include <assert.h>
#include "battery_parameters.h"

int main()
{
  assert(batteryIsOk(25, 70, 0.7)); 
  assert(!batteryIsOk(50, 85, 0));  
  assert(batteryIsOk(2, 22, 0.7));  
  assert(batteryIsOk(43, 75, 0.76)); 
  
  printf("All tests passed!\n");
  return 0;
}
