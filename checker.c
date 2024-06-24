#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return 0;
  } else if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
    return 0;
  } else if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    return 0;
  }
}

int main() {
  assert(!batteryIsOk(50,20 ,80));
  assert(!batteryIsOk(40, 90 ,80));
  assert(!batteryIsOk(40, 90 ,0.8));
  return 0;
}
