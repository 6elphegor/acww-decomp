#include "types.h"

extern "C" {
BOOL func_02061cbc(u16 *p);
BOOL func_0204b430(u16 *p);
BOOL func_0204b37c(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void *func_0206d798(void *);
void *func_0206d79c(void *);
u8 *func_0206d86c(void *, u32);
extern u32 data_021c7ca4, data_021c7cac, data_021c7ca0, data_021c7c9c, data_021c7ca8;
extern u16 data_021c7c98;
extern u32 data_020dd060[];
extern u16 data_020cb5c4[];
extern u8 data_021c7d1c[];
extern u8 data_021c7cc8[];
}

static inline BOOL Unk_02061478_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 v = *p;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}
static inline BOOL Unk_02061478_V(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}
static inline s32 Unk_02061478_I(u16 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) return (s32)(v - lo) >> 2;
    return -1;
}
static inline u16 Unk_02061478_M(s32 i, u32 n, u32 base) {
    if ((u32)i < n) return i + base;
    return base;
}

static inline BOOL Unk_02061794_Eq(s32 a, s32 b) {
    BOOL r = FALSE;
    if (a == b) r = TRUE;
    return r;
}

extern "C" {
void func_02061478(u16 *out, u16 *in) {
    u32 o; s32 k; u16 t[2];
    if (Unk_02061478_R(in, 0x3984, 0x3d83)) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x3984, 0x3d83), 0x100, 0x11a8);
    } else if (*in >= 0x42a4 && *in <= 0x4383) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x42a4, 0x4383), 0x38, 0x12b0);
    } else if (*in >= 0x4384 && *in <= 0x4463) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x4384, 0x4463), 0x38, 0x12e8);
    } else if (*in >= 0x3e24 && *in <= 0x3ea3) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x3e24, 0x3ea3), 0x20, 0x1380);
    } else if (*in >= 0x3fa4 && *in <= 0x40a3) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x3fa4, 0x40a3), 0x40, 0x13c8);
    } else if (*in >= 0x40a4 && *in <= 0x4123) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x40a4, 0x4123), 0x20, 0x13a8);
    } else if (*in >= 0x4124 && *in <= 0x4223) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x4124, 0x4223), 0x40, 0x1431);
    } else if (*in >= 0x44e8 && *in <= 0x450b) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x44e8, 0x450b), 9, 0x1554);
    } else {
        k = -1;
        if (*in >= 0x4464 && *in <= 0x44e7) k = Unk_02061478_I(*in, 0x4464, 0x44e7);
        if (Unk_02061478_V(*in, 0, 0x20)) k = *in;
        if (k != -1) {
            t[0] = Unk_02061478_M(k, 0x21, 0x1408);
            if (func_0204b430(&t[0])) {
                *out = t[0];
            } else {
                t[1] = Unk_02061478_M(k, 0x21, 0x1471);
                if (func_0204b37c(&t[1])) *out = t[1];
                else *out = 0x137c;
            }
        } else if ((*in >= 0xd4 && *in <= 0xda) || (*in >= 0xdb && *in <= 0xe1)) {
            if (*in >= 0xd4 && *in <= 0xda) o = *in - 0xd4;
            else o = *in - 0xdb;
            *out = Unk_02061478_M(o, 7, 0x153b);
        } else {
            *out = *in;
        }
    }
}

u32 func_02061764() { return data_021c7ca4; }
u32 func_02061770() { return data_021c7cac; }
u32 func_0206177c() { return data_021c7ca0; }
u32 func_02061788() { return data_021c7c9c; }

s32 func_02061794(u16 *p) {
    if (data_021c7ca8) {
        s32 cnt = 0;
        u16 i;
        BOOL a = FALSE, b = FALSE;
        for (i = data_021c7c98; i < 0x156e; i++) {
            u16 buf;
            buf = i;
            if (func_02061cbc(&buf)) {
                BOOL f;
                if (func_0204b2d4(&buf)) {
                    s32 x = func_0204b25c(&buf);
                    if (x == func_0204b25c(p)) f = TRUE;
                    else f = a;
                } else {
                    if (buf == *p) f = TRUE;
                    else f = b;
                }
                if (f) return cnt;
                cnt++;
            }
        }
    }
    return -1;
}

void func_02061820(u16 *out, s32 idx) {
    if (data_021c7ca8) {
        s32 cnt = 0;
        u16 i;
        for (i = data_021c7c98; i < 0x156e; i++) {
            u16 buf;
            buf = i;
            if (func_02061cbc(&buf)) {
                if (cnt == idx) {
                    *out = buf;
                    return;
                }
                cnt++;
            }
        }
    }
    *out = data_021c7c98;
}

u32 func_0206187c() { return data_021c7ca8; }

u32 func_02061888(s32 a, s32 b) {
    if (a < 0x49) {
        u32 c = b == 0 ? 1 : 0;
        return *(u32 *)((u8 *)data_020dd060 + a * 8 + (u8)c * 4);
    }
    return func_02061888(0, b);
}

u32 func_020618b8(s32 i) {
    if (i < 0x2e) return data_020cb5c4[i];
    return 0;
}

u32 func_020618cc(s32 i) {
    if (i < 0x4a) {
        u8 *r = func_0206d86c(data_021c7d1c, i);
        if (r) return (u32)r + 1;
    }
    return 0;
}

u32 func_020618f0(s32 i) {
    if (i < 0x4a) {
        u8 *r = func_0206d86c(data_021c7d1c, i);
        if (r) return *r;
    }
    return 3;
}

u32 func_02061914(u16 *p) {
    u32 i = *p & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = func_0206d86c(func_0206d798(data_021c7cc8), i);
    if (r) return r[0];
    return 0;
}

u32 func_02061950(u16 *p) {
    u32 i = *p & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = func_0206d86c(func_0206d798(data_021c7cc8), i);
    if (r) return r[1];
    return 0;
}

static inline BOOL Unk_0206198c_Tail(u32 v, u32 sh) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = func_0206d86c(func_0206d79c(data_021c7cc8), i);
    if (r) return (r[9] >> sh) & 1 ? TRUE : FALSE;
    return FALSE;
}

BOOL func_0206198c(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 4);
    }
    return Unk_0206198c_Tail(v, 4);
}

BOOL func_02061a58(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 3);
    }
    return Unk_0206198c_Tail(v, 3);
}

BOOL func_02061b24(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 2);
    }
    return Unk_0206198c_Tail(v, 2);
}

BOOL func_02061bf0(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 1);
    }
    return Unk_0206198c_Tail(v, 1);
}

BOOL func_02061cbc(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 0);
    }
    return Unk_0206198c_Tail(v, 0);
}
}
