#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int n = 0;
  if(temperature < 0 || temperature > 45) {
    n = 1;
  } 
    else if(soc < 20 || soc > 80) {
    n = 2;
    } 
    else if(chargeRate > 0.8) {
     n =3
   }
switch (n) {
  case: 1
   {
      printf("Temperature out of range!\n");
      return 0;
   }
  case: 2
     {
      printf("State of Charge out of range!\n");
      return 0;
     }
    case 3:
      {
      printf("Charge Rate out of range!\n");
      return 0;
     }
  default: 
    {
      return 1;
    }
}
}

int main() {
  assert(batteryIsOk(25,70 ,0.7));
  assert(!batteryIsOk(40, 90 ,80));
  return 0;
}
