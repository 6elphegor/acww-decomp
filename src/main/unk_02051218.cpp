#include "types.h"

extern "C" {
void func_02115fb4(void *dst, u32 value, u32 size);
void func_02116048(const void *src, void *dst, u32 size);
s32 func_02051320(const u8 *str, s32 len, s32 arg2);
u8 func_02051370(u32 c);
s32 func_020512f8(const u8 *str, s32 len);
}

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

extern "C" {

s32 func_020512f8(const u8 *str, s32 len) {
    s32 i;
    s32 last = 0;
    for (i = 0; i < len; i++) {
        u8 c = str[i];
        if (c == 0) {
            return last;
        }
        if (c != 0x85) {
            last = i + 1;
        }
    }
    return last;
}

s32 func_020512e0(const u8 *str, s32 len) {
    s32 i;
    for (i = 0; i < len; i++) {
        if (str[i] == 0) {
            return i;
        }
    }
    return i;
}

s32 func_02051270(const u8 *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4) {
    s32 width = 0;
    s32 i;
    s32 n = func_02051320(str, maxLen, arg4);
    for (i = 0; i < n; i++) {
        width += func_02051370(str[i]);
        if (width > maxWidth) {
            *outLen = i;
            return 1;
        }
    }
    *outLen = n;
    if (n == maxLen) {
        if (str[n - 1] == 0x86) {
            return 3;
        }
        return 2;
    }
    if (n == 0) {
        return 0;
    }
    if (str[n - 1] == 0x86) {
        return 3;
    }
    return 0;
}

void func_02051268(const void *src, void *dst, u32 size) {
    func_02116048(src, dst, size);
}

void func_0205125c(void *dst, u32 size) {
    func_02115fb4(dst, 0, size);
}

BOOL func_02051218(const u8 *a, const u8 *b, s32 len) {
    s32 n = func_020512f8(a, len);
    s32 i;
    if (n != func_020512f8(b, len)) {
        return FALSE;
    }
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return FALSE;
        }
    }
    return TRUE;
}

}
