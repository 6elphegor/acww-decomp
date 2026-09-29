#include "types.h"

extern "C" {
void *__cxa_vec_ctor(void *p, u32 n, u32 sz, void *ctor, void *dtor);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor);

}

// 16 x u16 bit matrix
class Unk_02052978 {
public:
    u16 unk_00[16];
    Unk_02052978();
    ~Unk_02052978();
    void func_02052978(u32 x, u32 y, u32 set);
    BOOL func_020529a4(u32 x, u32 y);
    void func_020529bc();
};

// small 4-slot table
struct Unk_0205276c_Slot {
    u8 lo : 4;
    u8 hi : 4;
};

class Unk_0205276c {
public:
    Unk_0205276c_Slot unk_00[4];
    u8 unk_04[1];
    u8 unk_05[2];
    Unk_0205276c();
    ~Unk_0205276c();
    BOOL func_0205276c(u32 x, u32 y, u32 val);
    BOOL func_02052860(u32 x, u32 y);
    s32 func_020528dc(u32 x, u32 y);
    void func_02052934();
};

class Unk_02052620 {
public:
    Unk_02052978 unk_00[2];
    Unk_0205276c unk_40;
    Unk_02052620();
    ~Unk_02052620();
    BOOL func_02052620(u32 a, u32 b);
    BOOL func_0205262c(u32 a, u32 b, u32 c);
    s32 func_0205263c(u32 a, u32 b);
    void func_020526c4(u32 x, u32 y, u32 idx, u8 v);
    BOOL func_020526e0(u32 x, u32 y, u32 idx);
    void func_020526ec();
};

extern "C" {
extern u8 data_020d0c08;
extern Unk_02052620 data_021c50e4[8];
extern Unk_02052620 data_021c4f34[6];
extern Unk_02052620 data_021c4e9c;
Unk_02052620 *func_020525a8(u32 v);
BOOL func_02052660(u32 v);
BOOL func_02052648(u32 idx);
void func_0205267c();
}

BOOL Unk_02052620::func_02052620(u32 a, u32 b) { return unk_40.func_02052860(a, b); }
BOOL Unk_02052620::func_0205262c(u32 a, u32 b, u32 c) { return unk_40.func_0205276c(a, b, c); }
s32 Unk_02052620::func_0205263c(u32 a, u32 b) { return unk_40.func_020528dc(a, b); }

extern "C" BOOL func_02052648(u32 idx) { return func_02052660((u8)(data_020d0c08 + idx)); }

extern "C" BOOL func_02052660(u32 v) {
    Unk_02052620 *p = func_020525a8(v);
    if (p) {
        p->func_020526ec();
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0205267c() {
    for (u32 i = 0; i < 8; i++) data_021c50e4[i].func_020526ec();
    for (u32 i = 0; i < 6; i++) data_021c4f34[i].func_020526ec();
    data_021c4e9c.func_020526ec();
}

void Unk_02052620::func_020526c4(u32 x, u32 y, u32 idx, u8 v) { unk_00[idx].func_02052978(x, y, v); }
BOOL Unk_02052620::func_020526e0(u32 x, u32 y, u32 idx) { return unk_00[idx].func_020529a4(x, y); }

void Unk_02052620::func_020526ec() {
    for (u32 i = 0; i < 2; i++) unk_00[i].func_020529bc();
    unk_40.func_02052934();
}

Unk_02052620::~Unk_02052620() {}
Unk_02052620::Unk_02052620() { func_020526ec(); }

BOOL Unk_0205276c::func_0205276c(u32 x, u32 y, u32 val) {
    if (val >= 16) return FALSE;
    if (func_020528dc(x, y) == -1) {
        for (u32 i = 0; i < 4; i++) {
            if (!((unk_04[i >> 3] >> (i & 7)) & 1)) {
                u32 sh = (i & 1) << 2;
                unk_00[i].lo = (u8)x;
                unk_00[i].hi = (u8)y;
                unk_05[i >> 1] &= ~(0xf << sh);
                unk_05[i >> 1] |= (val <<= sh);
                unk_04[i >> 3] |= 1 << (i & 7);
                return TRUE;
            }
        }
    } else {
        for (u32 i = 0; i < 4; i++) {
            if ((unk_04[i >> 3] >> (i & 7)) & 1) {
                if (x == unk_00[i].lo && y == unk_00[i].hi) {
                    u32 sh = (i & 1) << 2;
                    unk_05[i >> 1] &= ~(0xf << sh);
                    unk_05[i >> 1] |= (val <<= sh);
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_0205276c::func_02052860(u32 x, u32 y) {
    for (u32 i = 0; i < 4; i++) {
        if ((unk_04[i >> 3] >> (i & 7)) & 1) {
            if (x == unk_00[i].lo && y == unk_00[i].hi) {
                unk_00[i].lo = 0;
                unk_00[i].hi = 0;
                unk_04[i >> 3] &= ~(1 << (i & 7));
                unk_05[i >> 1] &= ~(0xf << ((i & 1) << 2));
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 Unk_0205276c::func_020528dc(u32 x, u32 y) {
    for (u32 i = 0; i < 4; i++) {
        if ((unk_04[i >> 3] >> (i & 7)) & 1) {
            if (x == unk_00[i].lo && y == unk_00[i].hi) {
                return (unk_05[i >> 1] >> ((i & 1) << 2)) & 0xf;
            }
        }
    }
    return -1;
}

void Unk_0205276c::func_02052934() {
    for (u32 i = 0; i < 4; i++) {
        unk_00[i].lo = 0;
        unk_00[i].hi = 0;
    }
    unk_04[0] = 0;
    for (u32 j = 0; j < 2; j++) unk_05[j] = 0;
}

Unk_0205276c::~Unk_0205276c() {}
Unk_0205276c::Unk_0205276c() { func_02052934(); }

void Unk_02052978::func_02052978(u32 x, u32 y, u32 set) {
    s32 xx = x & 0xf;
    s32 yy = y & 0xf;
    if (set) unk_00[yy] |= 1 << xx;
    else unk_00[yy] &= ~(1 << xx);
}

BOOL Unk_02052978::func_020529a4(u32 x, u32 y) {
    x &= 0xf; y &= 0xf;
    s32 v = unk_00[y];
    if ((v >> x) & 1) return TRUE;
    return FALSE;
}

void Unk_02052978::func_020529bc() {
    for (u32 i = 0; i < 16; i++) unk_00[i] = 0xffff;
}
Unk_02052978::~Unk_02052978() {}
Unk_02052978::Unk_02052978() { func_020529bc(); }

// ---- entries ----
struct Unk_02052ab4_Vec {
    s32 x, y, z;
};

class Unk_02052aac {
public:
    u8 unk_00;
    s32 unk_04, unk_08, unk_0c;
    u8 unk_10;
    Unk_02052aac();
    ~Unk_02052aac();
    BOOL func_02052aac();
    BOOL func_02052ab4(u32 tag, Unk_02052ab4_Vec *p);
    void func_02052ad0();
};

class Unk_02052a10 {
public:
    Unk_02052aac unk_00[4];
    Unk_02052a10();
    ~Unk_02052a10();
    BOOL func_020529e4(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
    BOOL func_02052a10(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
    BOOL func_02052a70(s32 idx);
    BOOL func_02052a8c(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
};

extern "C" {
long long func_01ffd028(void *a, void *b);
}

BOOL Unk_02052a10::func_020529e4(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (func_02052a10(idx, tag, p)) return func_02052a8c(idx, tag, p);
    return FALSE;
}

BOOL Unk_02052a10::func_02052a10(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (idx < 4) {
        for (u32 i = 0; i < 4; i++) {
            Unk_02052aac *e = &unk_00[i];
            if ((s32)i != idx && e->unk_00 != 0 && tag == e->unk_10) {
                if (func_01ffd028(&e->unk_04, p) < 0x2400) return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02052a10::func_02052a70(s32 idx) {
    if (idx < 4) return unk_00[idx].func_02052aac();
    return FALSE;
}

BOOL Unk_02052a10::func_02052a8c(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (idx < 4) return unk_00[idx].func_02052ab4(tag, p);
    return TRUE;
}

BOOL Unk_02052aac::func_02052aac() {
    unk_00 = 0;
    return TRUE;
}

BOOL Unk_02052aac::func_02052ab4(u32 tag, Unk_02052ab4_Vec *p) {
    unk_00 = 1;
    unk_04 = p->x;
    unk_08 = p->y;
    unk_0c = p->z;
    unk_10 = tag;
    return TRUE;
}

void Unk_02052aac::func_02052ad0() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
}

Unk_02052a10::~Unk_02052a10() {}
Unk_02052aac::~Unk_02052aac() {}
Unk_02052aac::Unk_02052aac() { func_02052ad0(); }

extern "C" void *func_02052714(void *p);
extern "C" void func_02052b10() { __cxa_vec_cleanup(data_021c4f34, 6, 0x48, (void *)func_02052714); }
extern "C" void func_02052b30() { __cxa_vec_cleanup(data_021c50e4, 8, 0x48, (void *)func_02052714); }

// ---- item table lookups ----
struct Unk_02052c88_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07[4];
    u8 unk_0b;
};

extern "C" {
extern u8 data_021c5330[];
s32 func_0204b248(s32 a, s32 b);
s32 func_0204b25c(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_020532d0();
s32 func_020532f0(s32 i);
s32 func_020534a4(s32 i);
void *func_0206d798(void *p);
void *func_0206d794(void *p);
Unk_02052c88_Rec *func_0206d86c(void *p, s32 i);
u8 func_02052c88(s32 i);
BOOL func_02052d4c(s32 i);
BOOL func_02052dac(s32 i);
s32 func_02052c54(u16 *p);
}

static inline BOOL Unk_02052dac_Bit(s32 v, s32 n) {
    if ((v >> n) & 1) return TRUE;
    return FALSE;
}

extern "C" u32 func_02052b50(u32 v) {
    u8 cnt = 0;
    volatile u16 tmp[1];
    for (u32 i = 0, z = 0; i < 0x6e9; i++) {
        tmp[0] = func_0204b248(i, z);
        if (v == func_020532f0(i)) cnt++;
    }
    return cnt;
}

extern "C" u8 func_02052c88(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d798(data_021c5330), i);
    if (r) return r->unk_00;
    return 0;
}

extern "C" s8 func_02052cbc(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d794(data_021c5330), i);
    u8 v;
    if (r) v = r->unk_06;
    else v = 0;
    return (s8)v;
}

extern "C" u32 func_02052cf4(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d794(data_021c5330), i);
    u32 v;
    if (r) v = r->unk_05;
    else v = 0;
    return v << 12;
}

extern "C" BOOL func_02052d2c(u16 *p) {
    if (func_0204b2d4(p)) return func_02052d4c(func_0204b25c(p));
    return FALSE;
}

extern "C" BOOL func_02052d4c(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d798(data_021c5330), i);
    if (r) {
        if (r->unk_02 & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02052d8c(u16 *p) {
    if (func_0204b2d4(p)) return func_02052dac(func_0204b25c(p));
    return FALSE;
}

extern "C" BOOL func_02052dac(s32 i) {
    s32 j = i >= 0x6e9 ? 0x6e8 : i;
    BOOL f;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d798(data_021c5330), j);
    if (r) {
        f = Unk_02052dac_Bit(r->unk_01, 7);
    } else {
        f = FALSE;
    }
    s32 t = func_020534a4(i);
    if (t != 0x23 && t != 0x24 && t != 0x25) return f;
    return FALSE;
}

extern "C" BOOL func_02052e0c(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d798(data_021c5330), i);
    if (r) {
        { s32 v = r->unk_01; if ((v >> 6) & 1) return TRUE; }
        return FALSE;
    }
    return FALSE;
}

extern "C" u8 *func_02052e4c(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d794(data_021c5330), i);
    if (r) return &r->unk_0b;
    return 0;
}

extern "C" s32 func_02052e80(s32 i) {
    s32 j = i >= 0x6e9 ? 0x6e8 : i;
    BOOL f;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d798(data_021c5330), j);
    if (r) {
        f = Unk_02052dac_Bit(r->unk_01, 4);
    } else {
        f = FALSE;
    }
    if (f) return 1;
    if (i >= 0x6e9) i = 0x6e8;
    r = func_0206d86c(func_0206d798(data_021c5330), i);
    if (r) {
        f = Unk_02052dac_Bit(r->unk_01, 5);
    } else {
        f = FALSE;
    }
    if (f) return 2;
    return 0;
}

extern "C" BOOL func_02052f04(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = func_0206d86c(func_0206d798(data_021c5330), i);
    if (r) {
        { s32 v = r->unk_01; if ((v >> 3) & 1) return TRUE; }
        return FALSE;
    }
    return FALSE;
}

extern "C" u32 func_02052b90(u16 *p) {
    s32 t = func_020532d0();
    u32 cnt = 0;
    s32 i = 0;
    BOOL z0 = FALSE, z8 = FALSE, zc = FALSE;
    u16 e;
    for (; (u32)i < 0x6e9; i++) {
        BOOL m;
        e = func_0204b248(i, z0);
        if (func_0204b2d4(&e)) {
            s32 a = func_0204b25c(&e);
            if (a == func_0204b25c(p)) m = TRUE;
            else m = z8;
        } else {
            if (e == *p) m = TRUE;
            else m = zc;
        }
        if (m) return (u8)cnt;
        if (t == func_020532f0(i)) cnt++;
    }
    return 0;
}

static inline BOOL Unk_02052c54_Range(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
    return r;
}

extern "C" s32 func_02052c54(u16 *p) {
    if (Unk_02052c54_Range(p)) return func_02052c88(func_0204b25c(p));
    return 0;
}

extern "C" u32 func_02052c18(u32 v) {
    u32 cnt = 0;
    u32 i = 0;
    u16 tmp;
    for (; i < 0x34; i++) {
        tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (v == func_02052c54(&tmp)) cnt++;
    }
    return cnt;
}
