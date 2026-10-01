#include "types.h"

// TU184: 0x0209c390-0x0209c3e0. Two state bytes in .bss (autoload_3 0x021d726c-0x021d7274).

extern "C" {
extern u8 data_021f47d0;

BOOL func_0209c3e0(u32 idx, u8 v);
}

struct Unk_0209c3cc_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

u8 data_021d726c;
u8 data_021d7270;

extern "C" BOOL func_0209c3cc(Unk_0209c3cc_Nib *p) {
    return func_0209c3e0(p->lo, p->hi);
}

extern "C" void func_0209c390() {
    if (data_021d726c == 0) {
        if (data_021d7270 != 0) {
            if (data_021f47d0 == 0) data_021d7270 = 0;
        } else if (data_021f47d0 != 0) {
            data_021d726c = 1;
            data_021d7270 = 1;
        }
    }
}
