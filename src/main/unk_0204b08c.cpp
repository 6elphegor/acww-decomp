#include "types.h"

struct Unk_0204b37c_Elem {
    u16 v;
    Unk_0204b37c_Elem();
    Unk_0204b37c_Elem(u32 x);
    ~Unk_0204b37c_Elem();
};

struct Unk_0204b598_Elem {
    u16 v;
    Unk_0204b598_Elem() {}
    ~Unk_0204b598_Elem();
};

extern "C" {
BOOL func_0204a860(u16 *p);
BOOL func_0204a8c0(u16 *p);
BOOL func_0204aa84(u16 *p, u32 lo, u32 hi);
s32 func_0204aa24(u16 *p);
void func_0204a9c4(u16 *p, u32 v);
void func_0204ad94(u16 *p, u32 v);
u32 func_0206177c();
u32 func_02061788();
BOOL func_02061bf0(u16 *p);
s32 func_02061914(u16 *p);
s32 func_0206198c(u16 *p);
BOOL func_02061a58(u16 *p);
BOOL func_02052d2c(u16 *p);
BOOL func_02052d8c(u16 *p);
u32 func_02060c70(u32 x);
s32 func_0204f34c(s32 x);
void func_02061478(void *p, u32 x);
s32 func_0204be70(void *p);

BOOL func_0204b08c(u16 *p);
u16 func_0204b0e0(u32 x);
BOOL func_0204b0f8(u16 *p);
u16 func_0204b10c(u32 x);
s32 func_0204b124(u16 *p);
BOOL func_0204b14c(u16 *p);
u16 func_0204b160(u32 x);
s32 func_0204b178(u16 *p);
BOOL func_0204b1a0(u16 *p);
u16 func_0204b1b4(u32 x);
u16 func_0204b1cc(u32 x);
BOOL func_0204b1e4(u16 *p);
BOOL func_0204b20c(u16 *p);
void func_0204b220(u16 *p, s32 y);
u16 func_0204b248(s32 a, s32 b);
s32 func_0204b25c(u16 *p);
s32 func_0204b274(u16 *p);
BOOL func_0204b288(u16 *p);
BOOL func_0204b2ac(u16 *p);
BOOL func_0204b2cc(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b2f0(u16 *p);
BOOL func_0204b300(u16 *p);
u16 func_0204b318(u32 a, s32 b);
s32 func_0204b338(u16 *p);
s32 func_0204b354(u16 *p);
BOOL func_0204b37c(u16 *p);
u16 func_0204b3c8(u32 x);
s32 func_0204b3e0(u16 *p);
BOOL func_0204b408(u16 *p);
BOOL func_0204b430(u16 *p);
s32 func_0204b458(u16 *p);
BOOL func_0204b480(u16 *p);
void func_0204b4a8(u16 *out, u32 n);
void func_0204b510(u16 *dst, u16 *src);
u16 func_0204b518(u32 x);
void func_0204b530(u16 *out, u32 n);
s32 func_0204b598(u16 *p);
s32 func_0204b5ec(u16 *p);
void func_0204b640(u16 *out, u32 a, u32 b);
u16 func_0204b65c(u32 a, u32 b);
u16 func_0204b670(u32 x);
s32 func_0204b688(u16 *p);
s32 func_0204b6a8(u16 *p);
BOOL func_0204b6d0(u16 *p);
s32 func_0204b6f8(u16 *p);
s32 func_0204b718(s32 a, BOOL up, s32 *out);
u16 func_0204b808(u32 x);
BOOL func_0204b820(u16 *p);
BOOL func_0204b858(u32 x);
BOOL func_0204b8ac(u32 x);
u16 func_0204b900(u16 *p);
s32 func_0204b928(u16 *p);
BOOL func_0204b950(u16 *p);
s32 func_0204b978(u16 *p);
s32 func_0204b998(u16 *p);
BOOL func_0204b9c0(u16 *p);

BOOL func_0204b08c(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x26: case 0x2f: case 0x37: case 0x3f: case 0x47: case 0x4f: case 0x57: case 0x5d: case 0xc8:
        r = TRUE;
    }
    return r;
}
u16 func_0204b0e0(u32 x) { return x < 0x7 ? x + 0x5014 : 0x5014; }
BOOL func_0204b0f8(u16 *p) { return func_0204aa84(p, 0x5014, 0x501a); }
u16 func_0204b10c(u32 x) { return x < 0x3 ? x + 0xb001 : 0xb001; }
s32 func_0204b124(u16 *p) { if (func_0204b14c(p)) return func_0204aa24(p) - 0xb001; return -1; }
BOOL func_0204b14c(u16 *p) { return func_0204aa84(p, 0xb001, 0xb003); }
u16 func_0204b160(u32 x) { return x < 0x4 ? x + 0x500d : 0x500d; }
s32 func_0204b178(u16 *p) { if (func_0204b1a0(p)) return func_0204aa24(p) - 0x500d; return -1; }
BOOL func_0204b1a0(u16 *p) { return func_0204aa84(p, 0x500d, 0x5010); }
u16 func_0204b1b4(u32 x) { return x < 0x8 ? x + 0x5001 : 0x5001; }
u16 func_0204b1cc(u32 x) { return x < 0x22 ? x + 0x5000 : 0x5000; }
BOOL func_0204b1e4(u16 *p) { if (func_0204aa24(p) == 0xf030 || func_0204b20c(p)) return TRUE; return FALSE; }
BOOL func_0204b20c(u16 *p) { return func_0204aa84(p, 0x5000, 0x5021); }
void func_0204b220(u16 *p, s32 y) {
    if (func_0204b2d4(p)) *p = func_0204b248(func_0204b25c(p), y);
}
u16 func_0204b248(s32 a, s32 b) { return 0x3000 + a * 4 + b; }
s32 func_0204b25c(u16 *p) { return (func_0204aa24(p) - 0x3000) >> 2; }
s32 func_0204b274(u16 *p) { return func_0204aa24(p) & 3; }
BOOL func_0204b288(u16 *p) { if (func_0204b2ac(p) || func_0204b2d4(p)) return TRUE; return FALSE; }
BOOL func_0204b2ac(u16 *p) { if (func_0204aa24(p) == 0xf031) return TRUE; return FALSE; }
BOOL func_0204b2cc(u16 *p) { return func_0204b2d4(p); }
BOOL func_0204b2d4(u16 *p) { switch (func_0204b2f0(p)) { case 3: case 4: return TRUE; } return FALSE; }
s32 func_0204b2f0(u16 *p) { return (*p & 0xf000) >> 12; }
BOOL func_0204b300(u16 *p) { if (func_0204b2f0(p) == 1) return TRUE; return FALSE; }
u16 func_0204b318(u32 a, s32 b) {
    u32 base;
    if (a < 0x40) base = 0x1000 + a * 4;
    else base = 0x1000;
    return ((b - 1) & 3) + base;
}
s32 func_0204b338(u16 *p) { return ((func_0204aa24(p) - 0x1000) & 3) + 1; }
s32 func_0204b354(u16 *p) {
    if (func_0204a860(p)) return (func_0204aa24(p) - 0x1000) >> 2;
    return -1;
}
BOOL func_0204b37c(u16 *p) {
    if (func_0204b408(p)) {
        s32 t = func_0204b3e0(p);
        if (t != 0x1e) {
            Unk_0204b37c_Elem e(func_0204b3c8(t));
            if (func_0204b430(&e.v)) return FALSE;
            return TRUE;
        }
    }
    return FALSE;
}
u16 func_0204b3c8(u32 x) { if (x < 0x21) return x + 0x1408; return 0x1408; }
s32 func_0204b3e0(u16 *p) { if (func_0204b408(p)) return func_0204aa24(p) - 0x1471; return -1; }
static inline BOOL Unk_0204b408_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
BOOL func_0204b408(u16 *p) { if (Unk_0204b408_R(p, 0x1471, 0x1491)) return TRUE; return FALSE; }
BOOL func_0204b430(u16 *p) {
    if (func_0204b480(p) && func_0204b458(p) != 0x1e) return func_02061bf0(p);
    return FALSE;
}
s32 func_0204b458(u16 *p) { if (func_0204b480(p)) return func_0204aa24(p) - 0x1408; return -1; }
BOOL func_0204b480(u16 *p) { if (Unk_0204b408_R(p, 0x1408, 0x1428)) return TRUE; return FALSE; }
void func_0204b4a8(u16 *out, u32 n) {
    u32 count, i;
    if (n >= func_0206177c()) n = 0;
    count = 0;
    for (i = 0; i < 0x21; i++) {
        Unk_0204b37c_Elem e(func_0204b518(i));
        if (func_0204b37c(&e.v)) {
            if (n == count) {
                func_0204b510(out, &e.v);
                return;
            }
            count++;
        }
    }
    func_0204a9c4(out, func_0204b518(0));
}
void func_0204b510(u16 *dst, u16 *src) { *dst = *src; }
u16 func_0204b518(u32 x) { if (x < 0x21) return x + 0x1471; return 0x1471; }
void func_0204b530(u16 *out, u32 n) {
    u32 count, i;
    if (n >= func_02061788()) n = 0;
    count = 0;
    for (i = 0; i < 0x21; i++) {
        Unk_0204b37c_Elem e(func_0204b3c8(i));
        if (func_0204b430(&e.v)) {
            if (n == count) {
                func_0204b510(out, &e.v);
                return;
            }
            count++;
        }
    }
    func_0204a9c4(out, func_0204b3c8(0));
}
s32 func_0204b598(u16 *p) {
    if (func_0204b37c(p)) {
        u32 i;
        for (i = 0; i < func_0206177c(); i++) {
            Unk_0204b598_Elem e;
            func_0204b4a8(&e.v, i);
            s32 c = func_0204aa24(p);
            if (c == func_0204aa24(&e.v)) return i;
        }
    }
    return -1;
}
s32 func_0204b5ec(u16 *p) {
    if (func_0204b430(p)) {
        u32 i;
        for (i = 0; i < func_02061788(); i++) {
            Unk_0204b598_Elem e;
            func_0204b530(&e.v, i);
            s32 c = func_0204aa24(p);
            if (c == func_0204aa24(&e.v)) return i;
        }
    }
    return -1;
}
void func_0204b640(u16 *out, u32 a, u32 b) { func_0204a9c4(out, func_0204b65c(a, b)); }
u16 func_0204b65c(u32 a, u32 b) { u32 x = (a & 3) * 8; return func_0204b670(x + (b & 7)); }
u16 func_0204b670(u32 x) { if (x < 0x20) return x + 0x1188; return 0x1188; }
s32 func_0204b688(u16 *p) {
    s32 t = func_0204b6a8(p);
    s32 r = -1;
    if (t != r) t &= 7;
    else t = r;
    return t;
}
s32 func_0204b6a8(u16 *p) { if (func_0204b6d0(p)) return func_0204aa24(p) - 0x1188; return -1; }
BOOL func_0204b6d0(u16 *p) { if (Unk_0204b408_R(p, 0x1188, 0x11a7)) return TRUE; return FALSE; }
s32 func_0204b6f8(u16 *p) {
    s32 t = func_0204b6a8(p);
    s32 r = -1;
    if (t != r) r = (t >> 3) & 3;
    return r;
}
s32 func_0204b718(s32 a, BOOL up, s32 *out) {
    Unk_0204b37c_Elem e;
    u32 i;
    if (out) *out = 0;
    if (up) {
        func_0204ad94(&e.v, 0x14fd);
        if (func_0204be70(&e) < a) return 0xfff1;
        for (i = 0; i < 0x6c; i++) {
            func_0204ad94(&e.v, func_0204b808(i));
            s32 v = func_0204be70(&e);
            if (v >= a) {
                if (out) *out = v - a;
                return func_0204aa24(&e.v);
            }
        }
    } else {
        func_0204ad94(&e.v, 0x1492);
        if (func_0204be70(&e) > a) return 0xfff1;
        for (i = 0x6c; i != 0; i--) {
            func_0204ad94(&e.v, func_0204b808(i - 1));
            s32 v = func_0204be70(&e);
            if (a >= v) {
                if (out) *out = a - v;
                return func_0204aa24(&e.v);
            }
        }
    }
    return 0xfff1;
}
u16 func_0204b808(u32 x) { if (x < 0x6c) return x + 0x1492; return 0x1492; }
BOOL func_0204b820(u16 *p) {
    if (func_0204a8c0(p)) {
        Unk_0204b37c_Elem e(func_0204aa24(p));
        return func_02061914(&e.v);
    }
    return FALSE;
}
BOOL func_0204b858(u32 x) {
    Unk_0204b598_Elem e;
    func_02061478(&e, x);
    if (func_0204b2f0(&e.v) == 1) return func_0206198c(&e.v);
    if (func_0204b2d4(&e.v)) return func_02052d2c(&e.v);
    return TRUE;
}
BOOL func_0204b8ac(u32 x) {
    Unk_0204b598_Elem e;
    func_02061478(&e, x);
    if (func_0204b2f0(&e.v) == 1) return func_02061a58(&e.v);
    if (func_0204b2d4(&e.v)) return func_02052d8c(&e.v);
    return FALSE;
}
u16 func_0204b900(u16 *p) {
    if (func_0204b950(p)) return func_02060c70((u8)func_0204b928(p));
    return 0;
}
s32 func_0204b928(u16 *p) { if (func_0204b950(p)) return func_0204aa24(p) - 0x12b0; return -1; }
BOOL func_0204b950(u16 *p) { if (Unk_0204b408_R(p, 0x12b0, 0x12e7)) return TRUE; return FALSE; }
s32 func_0204b978(u16 *p) {
    if (func_0204b9c0(p)) return func_0204f34c(func_0204b998(p));
    return 10;
}
s32 func_0204b998(u16 *p) { if (func_0204b9c0(p)) return func_0204aa24(p) - 0x12e8; return -1; }
}
