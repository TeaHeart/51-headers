#ifndef INTRINS_H
#define INTRINS_H

inline void _nop_() {
    __asm nop __endasm;
}

#define BIT_OF(type) (sizeof(type) * 8)

inline unsigned char _crol_(unsigned char value, unsigned char count) {
    count %= BIT_OF(unsigned char);
    return value << count | value >> (BIT_OF(unsigned char) - count);
}

inline unsigned int _irol_(unsigned int value, unsigned char count) {
    count %= BIT_OF(unsigned int);
    return value << count | value >> (BIT_OF(unsigned char) - count);
}

inline unsigned long _lrol_(unsigned long value, unsigned char count) {
    count %= BIT_OF(unsigned long);
    return value << count | value >> (BIT_OF(unsigned long) - count);
}

inline unsigned char _cror_(unsigned char value, unsigned char count) {
    count %= BIT_OF(unsigned char);
    return value << (BIT_OF(unsigned char) - count) | value >> count;
}

inline unsigned int _iror_(unsigned int value, unsigned char count) {
    count %= BIT_OF(unsigned int);
    return value << (BIT_OF(unsigned int) - count) | value >> count;
}

inline unsigned long _lror_(unsigned long value, unsigned char count) {
    count %= BIT_OF(unsigned long);
    return value << (BIT_OF(unsigned long) - count) | value >> count;
}

#undef BIT_OF

#endif //INTRINS_H
