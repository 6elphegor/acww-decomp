#include "types.h"

extern "C" {
void func_02116048(void *src, void *dst, u32 size);
void func_0209d124(void *p, u32 n);
u32 func_0209ceac(u32 a, u32 b, u32 c);
}

extern "C" void func_02039c04() {}

extern "C" void func_02039c00() {}

extern "C" void func_02039bec(u16 *p) {
    for (s32 i = 0; i < 15; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void func_02039b6c(u16 *arr, void *src, s32 n) {
    if (n != 0) {
        if (n >= 4) {
            func_02039bec(arr);
        } else {
            u32 b[2];
            b[0] = 0;
            b[1] = 0;
            func_02116048(src, b, 8);
            func_0209d124(b, 6);
            switch (func_0209ceac(((u8 *)b)[5], ((u8 *)b)[4], ((u8 *)b)[3])) {
            case 0:
                break;
            case 1:
            case 4:
                func_02039bec(arr);
                break;
            case 2:
            case 5:
                if (n >= 2) {
                    func_02039bec(arr);
                }
                break;
            case 3:
            case 6:
                if (n >= 3) {
                    func_02039bec(arr);
                }
                break;
            }
        }
    }
}
