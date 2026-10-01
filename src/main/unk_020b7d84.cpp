#include "types.h"

extern "C" {
void func_020e7fd4(void);
void func_020e814c(void);
s32 func_02003b5c(u32 a);
}

extern "C" {
extern u8 data_021ef5c8, data_021ef5cc, data_021ef5d0;
extern u8 data_021f4770, data_021f4774;
extern u16 data_021f4778, data_021f477c;
}

extern u8 data_021ef5d4, data_021ef5d8, data_021ef5dc, data_021ef5e0, data_021ef5e4, data_021ef5e8;
extern u8 data_021ef5ec, data_021ef5f0, data_021ef5f4, data_021ef5f8, data_021ef5fc;
extern u16 data_021ef600, data_021ef604;

extern "C" void func_020b7eec(void) {
    func_020e814c();
    data_021ef5c8 = 0;
    data_021ef5fc = 0xc8;
    data_021ef5d8 = 0;
    data_021ef5d4 = 0xc8;
}

extern "C" void func_020b7d84(void) {
    data_021ef5e8 = data_021ef5f8;
    data_021ef5e4 = data_021ef5f4;
    data_021ef5e0 = data_021ef5f0;
    data_021ef5dc = data_021ef5ec;
    data_021ef5d8 = data_021ef5c8;
    data_021ef5d4 = data_021ef5fc;
    u8 t = data_021f4770;
    data_021ef5d0 = t;
    data_021ef5cc = data_021f4774 ? 1 : 0;
    data_021ef600 = (u8)data_021f4778;
    data_021ef604 = (u8)data_021f477c;
    if ((s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15) {
        data_021f4774 = t;
        data_021f4770 = 0;
        data_021f4778 = 0;
        data_021f477c = 0;
    } else {
        func_020e7fd4();
    }
    if (data_021f4770 != 0) {
        BOOL p = (data_021f4770 != 0 && data_021f4774 != 0) ? TRUE : FALSE;
        if (p) {
            data_021ef5f8 = data_021f4778;
            data_021ef5f4 = data_021f477c;
            data_021ef5c8 = 0;
        }
        if (data_021ef5c8 < 0xc8) {
            data_021ef5c8++;
        }
        u8 v = data_021f4778;
        data_021ef5f0 = v;
        data_021ef5ec = data_021f477c;
        func_02003b5c(v);
    } else {
        BOOL p = (data_021f4770 == 0 && data_021f4774 != 0) ? TRUE : FALSE;
        if (p) {
            data_021ef5fc = 0;
        }
        if (data_021ef5fc < 0xc8) {
            data_021ef5fc++;
        }
    }
}

// Declarations for data defined further down (definition order sets the data layout)
extern u8 data_021ef5d8;
extern u8 data_021ef5fc;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021ef5e8;
extern u8 data_021ef5e4;
extern u8 data_021ef5e0;
extern u16 data_021ef604;
extern u16 data_021ef600;
extern u8 data_021ef5dc;
extern u8 data_021ef5d4;

u8 data_021ef5d8;

u8 data_021ef5fc;

u8 data_021ef5f8;

u8 data_021ef5f4;

u8 data_021ef5f0;

u8 data_021ef5ec;

u8 data_021ef5e8;

u8 data_021ef5e4;

u8 data_021ef5e0;

u16 data_021ef604;

u16 data_021ef600;

u8 data_021ef5dc;

u8 data_021ef5d4;
