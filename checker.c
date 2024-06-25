int batteryIsOk(float temperature, float soc, float chargeRate) {
    int Temp1 = (temperature >= 0 && temperature <= 45);
    int Soc1 = (soc >= 20 && soc <= 80);
    int Charge1 = (chargeRate <= 0.8);

    if (!Temp1) {
        printf("Temperature out of range!\n");
    }
    if (!Soc1) {
        printf("State of Charge out of range!\n");
    }
    if (!Charge1) {
        printf("Charge Rate out of range!\n");
    }

    return Temp1 && Soc1 && Charge1;
}

int main() {
  assert(batteryIsOk(25,70,0.7));
  assert(!batteryIsOk(50, 85, 0));
return 0;
}
