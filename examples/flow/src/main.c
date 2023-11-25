#include "reg51.h"
#include "stdint.h"
#include "intrins.h"
#include "absacc.h"

uint8_t dir = 1;

bool is_neg = true;

void ex0_isr() __interrupt(IE0_VECTOR) {
    dir = dir != 1 ? 1 : -1;
}

void ex1_isr() __interrupt(IE1_VECTOR) {
    is_neg = !is_neg;
}

void delay(uint16_t n) {
    while (n--) {
        _nop_();
    }
}

int main() {
    EX0 = EX1 = 1;
    IT0 = IT1 = 1;
    EA = 1;
    for (int i = 0; i < 8; ++i) {
        XBYTE[i] = 1 << i;
    }
    uint8_t i = 0;
    while (1) {
        P2 = is_neg ? ~XBYTE[i] : XBYTE[i];
        i = (8 + i + dir) % 8;
        delay(60000 / 10);
    }
}
