#include "types.h"

extern "C" {
extern u8 data_021c4d4c[0xe0];
void func_02115fb4(void *dst, u32 value, u32 size);
void func_02116048(const void *src, void *dst, u32 size);
extern u8 data_020e416c;
extern void *data_021c47c4;
extern u32 data_021c4e38;
extern void *data_020cbb18;
extern u8 data_021c4ee4[];
extern u8 data_021e58a8[];

u32 func_020a69b4(u8 *buf, u32 c);
u8 func_020a7fa8(u8 *buf);
void *func_ov004_02235718();
u8 *_ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(void *p, s32 x, s32 y, s32 z);
void func_ov004_022087a4(void *p);
void *func_0204ebd8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_02052fc4();
s32 func_0204b2d4(void *p);
u32 func_0204b25c(void *p);
s32 func_02072e44(void *p);
s32 func_020729cc(void *p, s32 v);
void func_02052a70(void *p, s32 v);
void func_020728d4(void *p);
void func_02072824(void *p, s32 a, s32 b);
void func_020728a4(void *p, void *data, s32 size);
s32 func_020b50e8();
s32 func_020529e4(void *p, s32 a, s32 b, void *c);
void func_0204ee10(s32 *a, s32 *b, s32 c);
s32 func_020a62a0();
void func_02051ff8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02060244(void *p, s32 a, s32 b);
void *func_0204cbc0(s32 a);
s32 func_0204eb30(void *p, void *b, s32 c, s32 d, s32 e);

u32 func_02051370(u32 c);
u32 func_02051518();
void func_02051524(s32 *p);
void func_020514a4(void *p);
void func_020515e0(s32 a, s32 b, s32 c, s32 d);
void func_0205170c(s32 a, s32 b, s32 c);
void func_020516e4(s32 a, s32 b);

}

extern "C" void func_0205149c(s32 *p) { func_02051524(p); }

extern "C" u32 func_02051494() { return func_02051518(); }

extern "C" void func_0205148c(s32 *p) { func_02051524(p); }

extern "C" u32 func_02051484() { return func_02051518(); }

extern "C" void func_02051478() { func_020514a4(0); }

extern "C" void func_02051470(s32 *p) { func_02051524(p); }

extern "C" u32 func_02051468() { return func_02051518(); }

extern "C" BOOL func_020513b0(s32 x, s32 y) {
    BOOL r;
    if (data_020e416c == 1 ? TRUE : FALSE) {
        void *p = data_021c47c4;
        u8 *q = _ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(func_ov004_02235718(), x, y, 0);
        if (p != NULL && q != NULL) {
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 code;
            void *o = func_0204ebd8(p, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            func_ov004_022087a4(q);
            if (func_02052fc4() == 1 && o != NULL) {
                if (func_0204b2d4(o) != 0) {
                    code = 0xfff1;
                    r = func_0204b25c(o) == func_0204b25c(&code) ? TRUE : FALSE;
                } else {
                    r = *(u16 *)o == 0xfff1 ? TRUE : FALSE;
                }
                if (r) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_0205137c() {
    s32 i;
    u8 buf[12];
    for (i = 0; (u32)i < 0xe0; i++) {
        buf[func_020a69b4(buf, (u8)i)] = 0;
        data_021c4d4c[i] = func_020a7fa8(buf);
    }
}

extern "C" u32 func_02051370(u32 c) {
    return data_021c4d4c[c];
}

extern "C" s32 func_02051348(const u8 *p, s32 n) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        sum += func_02051370(p[i]);
    }
    return sum;
}

extern "C" s32 func_02051320(const u8 *p, s32 n, s32 k) {
    s32 i;
    for (i = 0; i < n; i++) {
        u8 c = p[i];
        if (c == 0) {
            return i;
        }
        if (c == 0x86) {
            return i + k;
        }
    }
    return i;
}

extern "C" s32 func_020512f8(const u8 *str, s32 len) {
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

extern "C" s32 func_020512e0(const u8 *str, s32 len) {
    s32 i;
    for (i = 0; i < len; i++) {
        if (str[i] == 0) {
            return i;
        }
    }
    return i;
}

extern "C" s32 func_02051270(const u8 *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4) {
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

extern "C" void func_02051268(const void *src, void *dst, u32 size) {
    func_02116048(src, dst, size);
}

extern "C" void func_0205125c(void *dst, u32 size) {
    func_02115fb4(dst, 0, size);
}

extern "C" BOOL func_02051218(const u8 *a, const u8 *b, s32 len) {
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

u8 data_021c4d4c[0xe0];
