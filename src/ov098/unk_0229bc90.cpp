#include "types.h"

struct Unk_0229bc90_Pad {
    s32 v[2];
    Unk_0229bc90_Pad() {}
    ~Unk_0229bc90_Pad() {}
};

extern "C" {
void *func_0209750c();
s32 func_02098044(void *, s32);
s32 func_ov094_022923a4(u32);

s32 func_ov098_0229bc90(s32 a, u32 b) {
    Unk_0229bc90_Pad pad;
    if (func_02098044(func_0209750c(), 1) != 0) {
        if ((b >= 0x14fe && b <= 0x1517) || (b >= 0x151d && b <= 0x151e)) {
            return 0;
        }
    }
    return func_ov094_022923a4(b);
}
}
