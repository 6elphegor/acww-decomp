#include "types.h"

extern "C" {
extern void *data_020cbb18;
extern u8 data_020e416c;
s32 func_02072e44(void *p);
s32 func_020729cc(void *p, s32 v);
void *func_ov004_02235718();
u8 *func_ov004_022355d8(void *p, s32 x, s32 y, s32 z);
s32 func_02051d24(s32 a, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g);
s32 func_02051e00(s32 a, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g);

s32 func_02051c10(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g) {
    void *s = data_020cbb18;
    u8 *p;
    if (func_02072e44(s) == 0 || func_020729cc(s, 0) != 0) {
        return func_02051d24(a, b, c, d, e, f, g);
    }
    if (!(data_020e416c == 1 ? TRUE : FALSE)) {
        return 0;
    }
    p = func_ov004_022355d8(func_ov004_02235718(), a, b, c);
    if (p == NULL) {
        return 0;
    }
    if (g != 0) {
        if (func_02051e00(a, b, c, d, e, f, 0) != 0) {
            p[0x779] = 1;
            return 1;
        }
        return 0;
    }
    return 0;
}
}
