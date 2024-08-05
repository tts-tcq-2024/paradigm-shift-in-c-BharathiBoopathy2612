#include <assert.h>
#include <stdio.h>
#include "temperature_check.h"
#include "soc_check.h"
#include "charge_rate_check.h"
#include "language_settings.h"

int main() {
    // Set language to English
    currentLanguage = ENGLISH;

    assert(isTemperatureOk(25)); 
    assert(!isTemperatureOk(50)); 

    assert(isSocOk(70));
    assert(!isSocOk(85)); 

    assert(isChargeRateOk(0.7)); 
    assert(!isChargeRateOk(0.9)); 

    printf("All tests passed!\n");

    // Set language to German and run tests again
    currentLanguage = GERMAN;

    assert(isTemperatureOk(25)); 
    assert(!isTemperatureOk(50)); 

    assert(isSocOk(70));
    assert(!isSocOk(85)); 

    assert(isChargeRateOk(0.7)); 
    assert(!isChargeRateOk(0.9)); 

    printf("All tests passed in German!\n");

    return 0;
}
