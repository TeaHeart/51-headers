#include "reg51.h"
#include "stdint.h"
#include "intrins.h"

void delay(uint16_t n) {
    while (n--) {
        _nop_();
    }
}

int main() {
    while (1) {
        P2_0 = !P2_0;
        delay(60000);
    }
}
