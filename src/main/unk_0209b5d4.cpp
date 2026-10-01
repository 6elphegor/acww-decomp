#include "types.h"

// TU179: 0x0209b5d4-0x0209b63c. Fills the inner 4x4 cells of the 6x6 grid from a cached record and remembers the
// record number in .bss (autoload_3 0x021d7128).

class Unk_0209c060 {
public:
    s32 unk_00;
    s32 unk_04;
    Unk_0209c060();
    ~Unk_0209c060();
};

extern "C" {
s32 func_02063b8c(s32);
BOOL _ZN12Unk_0209c04013func_0209c040Ei(Unk_0209c060 *, s32);
void *_ZN12Unk_0206d8b813func_0206d86cEj(void *, s32);
}

class Unk_0209b5d4 {
public:
    Unk_0209c060 cells[36];
    u32 unk_120[8];

    void func_0209b5d4(s32 seed);
    Unk_0209c060 *func_0209bc54(s32 x, s32 y);
};

s32 data_021d7128;

void Unk_0209b5d4::func_0209b5d4(s32 seed) {
    u8 *p;
    u32 y, x;
    s32 v;
    if (seed < 0) {
        v = func_02063b8c(0x20c);
    } else {
        v = (u32)seed % 0x20c;
    }
    data_021d7128 = v;
    p = (u8 *)_ZN12Unk_0206d8b813func_0206d86cEj(unk_120, v);
    if (p) {
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                _ZN12Unk_0209c04013func_0209c040Ei(func_0209bc54(x, y), *p++);
            }
        }
    }
}
