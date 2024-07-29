#include "soc.h"
#include <assert.h>

// Test cases for isSocOk function
void testIsSocOk() {
    assert(isSocOk(50) == 1);     // In range
    assert(isSocOk(10) == 0);     // Below range
    assert(isSocOk(90) == 0);     // Above range
}

