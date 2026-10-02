#include "types.h"

// Entry of the const table at 0x020d0604 (8 bytes): name, random range
struct Unk_0209b570_Ent {
    char *unk_00;
    u8 unk_04;
};
// Record (12 bytes): two words, u16 at +8, type byte at +0x0a, bits at +0x0b.
// The constructor/destructor are the unit's own functions 0x0209ada4 / 0x0209ada0 (aliases.txt).
struct Unk_0209ada4 {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;

    Unk_0209ada4();
    ~Unk_0209ada4();
    void func_0209ab8c(u16 *p);
    u16 *func_0209ab94();
    void func_0209ab98(u8 v);
    u32 func_0209abac();
    void func_0209abb4(u8 v);
    u32 func_0209abc4();
    s32 func_0209abcc();
    s32 func_0209ac10();
    s32 func_0209ac48(s32 x);
    u32 func_0209ac64();
    BOOL func_0209ac68(s32 *out);
    s32 func_0209acac();
    BOOL func_0209ace8(s32 *out);
    s32 func_0209ad28();
    void func_0209ad54(u8 a, u16 *p, u8 b);
    BOOL func_0209ad68();
    void func_0209ad80();
    void func_0209ada0();
    void func_0209ada4();
};

// ======== types of unk_02098f90.cpp ========

struct Unk_02098ff4 {
    u16 unk_00;
    u8 unk_02;
};

struct Unk_020030d8_R256 {
    u8 pad[0xc];
};

class Unk_02002fc8 {
public:
    u32 func_020030b4();
};

struct Unk_020994cc_Ent {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a[0xc];
};

struct Unk_020994cc_Date {
    u32 v;
};

class Unk_020994cc {
public:
    u8 unk_00[0xc];
    Unk_020030d8_R256 unk_0c;
    Unk_020994cc_Ent unk_18[5];
    u8 unk_86[4];
    u8 unk_8a[4];
    u8 unk_8e;
    Unk_020994cc_Ent *func_020994cc();
    BOOL func_02099624(Unk_020994cc_Date *d);
    BOOL func_02099668();
    void func_02099678(Unk_020994cc_Ent *e);
    BOOL func_02099690();
    BOOL func_020996b0(Unk_020994cc_Ent *e);
    Unk_020994cc_Ent *func_02099700();
    Unk_020994cc_Ent *func_02099710(u32 i);
    void func_02099724(Unk_020030d8_R256 *a, u8 *b);
    Unk_020030d8_R256 *func_02099788();
    Unk_020994cc *func_020997fc();
    Unk_020994cc *func_02099828();
    void func_0209978c();
    void func_02099790();
    u8 *func_02099864();
};
// ======== types of unk_020998b8.cpp ========

// Record (12 bytes): u16 id, 8 bytes, type byte at +0x0a, key byte at +0x0b
class Unk_02003130 {
public:
    Unk_02003130();
    Unk_02003130(s32 v);
    ~Unk_02003130();

    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

// Slot: Y record, two records, flag byte at +0x24 (0x28 bytes)
class Unk_0209a5dc : public Unk_0209ada4 {
public:
    Unk_0209a5dc();
    ~Unk_0209a5dc();

    /* 0x0c */ Unk_02003130 unk_0c[2];
    /* 0x24 */ u8 unk_24;
};

// Y record with an index byte and a flag byte (0x10 bytes)
class Unk_02099f98 : public Unk_0209ada4 {
public:
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
};

class Unk_02099f5c : public Unk_02003130 {
public:
    Unk_02099f5c();
    ~Unk_02099f5c();

    /* 0x0c */ Unk_0209ada4 unk_0c;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u8 unk_20[8];
};

class Unk_02099e38 {
public:
    Unk_02099e38();
    ~Unk_02099e38();

    /* 0x00 */ Unk_0209a5dc unk_00[2];
    /* 0x50 */ Unk_02003130 unk_50[3];
    /* 0x74 */ u8 unk_74;
    /* 0x78 */ Unk_02099f98 unk_78;
    /* 0x88 */ Unk_02099f5c unk_88;
};
// ======== types of unk_0209a208.cpp ========


struct Unk_0209ab18 {
    u8 unk_00[0xc];
    u8 unk_0c[0x22 - 0xc];
    u8 unk_22;
    u8 pad_23;
    u16 unk_24;
    u8 unk_26;
    u8 unk_27;
    u8 unk_28;
};
// ======== types of unk_0209ab54.cpp ========

struct Unk_0209abac_Bits { u8 lo : 5; u8 hi : 3; };

// ---------------------------------------------------------------- class 2

struct Unk_0209b434 {
    u8 unk_00[8];

    Unk_0209b434();
    ~Unk_0209b434();
    u32 func_0209b434(u32 i);
    void func_0209b450(u8 i, u32 v);
    void func_0209b46c(u8 i, u32 v);
    void func_0209b494(u32 i);
    u8 func_0209b4cc();
    void func_0209b540();
    void func_0209b550();
};

struct Unk_0203442c {
    u16 v;
    Unk_0203442c(u16 x) { v = x; }
    ~Unk_0203442c();
};

struct Unk_0209b2e4_Bits { u8 f : 1; u8 x : 7; };

struct Unk_0209b3bc {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    Unk_0209b434 unk_11;
    Unk_0209b434 unk_19;
    Unk_0209b2e4_Bits unk_21;
    u8 unk_22[2];

    Unk_0209b3bc();
    ~Unk_0209b3bc();
    void func_0209aed4(Unk_0209b3bc *other, s16 *p);
    void func_0209af0c(u8 idx, s32 delta);
    BOOL func_0209af4c(s16 *p);
    void func_0209afa4(s16 *p);
    s32 func_0209b014(s32 x);
    s32 func_0209b044(void *x);
    s32 func_0209b0c4(Unk_0209b3bc *o);
    s32 func_0209b12c();
    s32 func_0209b18c();
    BOOL func_0209b1e4(void *o);
    BOOL func_0209b1f0(void *o, u32 c);
    void func_0209b238();
    void func_0209b294();
    BOOL func_0209b2e4();
    s32 func_0209b328();
    void func_0209b350(u32 v);
    u32 func_0209b354();
    void func_0209b358(s32 a, s32 flag);
    BOOL func_0209b394();
    BOOL func_0209b3a4();
    void func_0209b3bc();
    void func_0209b494(u8 i);
    u32 func_0209b4cc();
};
// ======== types of unk_0209b494.cpp ========

// ======== data ========
extern "C" {
BOOL func_0209a26c(void *p);
BOOL func_0209a288(void *p);
BOOL func_0209a2a4(void *p);
BOOL func_0209a3c8(void *p);
BOOL func_0209a3e4(void *p);
}

typedef BOOL (Unk_0209a5dc::*Unk_0209a4f4_Fn)();

// Entry of the slot-kind table (0x14 bytes): setup handler, second handler (always null), limit byte
struct Unk_0209a4f4_Rec {
    Unk_0209a4f4_Fn unk_00;
    Unk_0209a4f4_Fn unk_08;
    u8 unk_10;
};


// defined here, before func_0209adbc, for the data order
extern void *data_020e2190[2];
extern const u8 data_020d05d4[10];
extern void *data_020e21a0[2];
extern char data_020e21c0[9];
extern char data_020e218c[1];
extern const char data_020d05bc[10];
void *data_020e2190[2] = {(void *)func_0209a3e4, 0};
const u8 data_020d05d4[10] = {0x16, 0x17, 0x0a, 0x0b, 0x0c, 0x0d, 0x0f, 0x10, 0x15, 0x14};
void *data_020e21a0[2] = {(void *)func_0209a288, 0};
char data_020e21c0[9] = "st_sweet";
#pragma explicit_zero_data on
char data_020e218c[1] = {0};
#pragma explicit_zero_data reset
const char data_020d05bc[10] = "re_normal";

// ======== unk_0209b494.cpp ========
namespace n6 {
extern "C" {
s32 func_02063b8c(s32);
void *func_02116048(void *, void *, s32);
void *func_02115fb4(void *, s32, s32);
extern const Unk_0209b570_Ent data_020d0604[];
}

extern "C" {
u8 _ZN12Unk_0209b43413func_0209b434Ej(void *self, u8 i);
void _ZN12Unk_0209b43413func_0209b450Ehj(void *self, u8 i, u32 v);
}

extern "C" void func_0209b540(void *p, void *q);
extern "C" void func_0209b550(void *p);
extern "C" void func_0209b55c();
extern "C" void *func_0209b560(void *p);
extern "C" u32 func_0209b570(u32 *out, s32 idx);

extern "C" u32 func_0209b570(u32 *out, s32 idx)
{
    *out = func_02063b8c(data_020d0604[idx].unk_04);
    return (u32)data_020d0604[idx].unk_00;
}

extern "C" void *func_0209b560(void *p)
{
    func_0209b550(p);
    return p;
}

extern "C" void func_0209b55c() {}

extern "C" void func_0209b550(void *p)
{
    func_02115fb4(p, 0, 8);
}

extern "C" void func_0209b540(void *p, void *q)
{
    func_02116048(q, p, 8);
}

}
u32 Unk_0209b3bc::func_0209b4cc()
{
    using namespace n6;
    u8 res = 8;
    u16 mask = 0;
    s32 max = -1;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        s32 v = ((u8 *)this)[i];
        if (v > max) {
            max = v;
            mask = 1 << i;
            cnt = 1;
        } else if (max == v) {
            mask |= 1 << i;
            cnt++;
        }
    }
    if (cnt > 0) {
        s32 r = func_02063b8c(cnt);
        for (i = 0; i < 8; i++) {
            if (((mask >> i) & 1) != 0) {
                if (r == 0) {
                    res = i;
                    break;
                }
                r--;
            }
        }
    }
    return res;
}


namespace n6 {
}
void Unk_0209b3bc::func_0209b494(u8 i)
{
    using namespace n6;
    _ZN12Unk_0209b43413func_0209b450Ehj(this, i, 0);
    for (s32 j = 0; j < 8; j++) {
        u32 v = _ZN12Unk_0209b43413func_0209b434Ej(this, (u8)j);
        _ZN12Unk_0209b43413func_0209b450Ehj(this, (u8)j, (v << 23) >> 24);
    }
}
namespace n6 {
}

// ======== unk_0209ab54.cpp ========
namespace n5 {
extern "C" {
void _ZN12Unk_020940a0C1Ev(void *p);
void _ZN12Unk_020940a0C1EPv(void *p);
s32 func_0209d498(void *p);
s32 func_0209d258(void *p, s32 x);
s32 func_0209d020(void *p);
s32 func_0209d374(void *p, void *q);
s32 func_0209d3d0(void *p, void *q, s32 m);
s32 func_0209d3a4(void *p, void *q);
s32 func_02063b8c(s32 x);
void func_02116048(void *a, void *b, s32 n);
void func_02115fb4(void *a, s32 v, s32 n);
s32 _s32_div_f(s32 a, s32 b);
s32 func_020b35f8(void *a, void *b, void *c);
void func_02135558(void *obj, void *dtor, void *reg);
extern u32 data_020d05e0[];
extern u32 data_020d05b4[];
extern u8 data_020d0594[];
extern u8 data_020d05ac[];
s32 func_0209abd8(u32 x);
s32 func_0209ac1c(u32 x);
BOOL func_0209ac78(s32 *out, s32 x);
s32 func_0209acb8(u32 x);
BOOL func_0209acdc(u32 x);
BOOL func_0209acf8(s32 *out, s32 x);
s32 func_0209ad34(u32 x);
BOOL func_0209ad48(u32 x);
BOOL func_0209ad74(u32 x);
}


extern "C" BOOL func_0209b3b0(u32 x);
extern "C" s32 func_0209b334(u32 x);

extern "C" void *func_0209ab54(Unk_0209ada4 *self);
extern "C" void *func_0209ab6c(Unk_0209ada4 *self);
extern "C" s32 func_0209abd8(u32 x);
extern "C" s32 func_0209ac1c(u32 x);
extern "C" void func_0209ac44();
extern "C" BOOL func_0209ac78(s32 *out, s32 x);
extern "C" s32 func_0209acb8(u32 x);
extern "C" BOOL func_0209acdc(u32 x);
extern "C" BOOL func_0209acf8(s32 *out, s32 x);
extern "C" s32 func_0209ad34(u32 x);
extern "C" BOOL func_0209ad48(u32 x);
extern "C" BOOL func_0209ad74(u32 x);
extern "C" void func_0209adbc(u16 *out, s32 idx);
extern "C" void *func_0209b00c(void *p);
extern "C" void func_0209b010();
extern "C" s32 func_0209b2f8(u8 *out, s32 x);
extern "C" s32 func_0209b334(u32 x);
extern "C" BOOL func_0209b3b0(u32 x);

}
void Unk_0209b434::func_0209b46c(u8 i, u32 v) {
    using namespace n5;
    if (func_0209b3b0(i)) {
        s32 t = unk_00[i];
        t += v;
        if (t >= 0xff) t = 0xff;
        unk_00[i] = t;
    }
}


namespace n5 {
}
void Unk_0209b434::func_0209b450(u8 i, u32 v) {
    using namespace n5;
    if (func_0209b3b0(i)) unk_00[i] = v;
}


namespace n5 {
}
u32 Unk_0209b434::func_0209b434(u32 i) {
    using namespace n5;
    u32 r = 0;
    if (func_0209b3b0(i)) r = unk_00[i];
    return r;
}


namespace n5 {
}
Unk_0209b3bc::Unk_0209b3bc() : unk_00(0), unk_04(0), unk_08(0), unk_0c(0) {
    using namespace n5; func_0209b3bc(); }


namespace n5 {
}
Unk_0209b3bc::~Unk_0209b3bc() {
    using namespace n5;}


namespace n5 {
}
void Unk_0209b3bc::func_0209b3bc() {
    using namespace n5;
    func_02115fb4(this, 0, 0x24);
    unk_10 = 7;
    unk_11.func_0209b550();
    unk_19.func_0209b550();
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
}


namespace n5 {
extern "C" BOOL func_0209b3b0(u32 x) {
    if (x < 8) return TRUE;
    return FALSE;
}

}
BOOL Unk_0209b3bc::func_0209b3a4() {
    using namespace n5; return func_0209b3b0(unk_10); }


namespace n5 {
}
BOOL Unk_0209b3bc::func_0209b394() {
    using namespace n5;
    if (unk_10 < 0xc) return TRUE;
    return FALSE;
}


namespace n5 {
}
void Unk_0209b3bc::func_0209b358(s32 a, s32 flag) {
    using namespace n5;
    unk_11.func_0209b540();
    unk_10 = unk_11.func_0209b4cc();
    if (flag != 0) {
        unk_11.func_0209b494(unk_10);
    }
    func_0209d498(this);
    func_0209d498((u8 *)this + 8);
}


namespace n5 {
}
u32 Unk_0209b3bc::func_0209b354() {
    using namespace n5; return unk_10; }


namespace n5 {
}
void Unk_0209b3bc::func_0209b350(u32 v) {
    using namespace n5; unk_10 = v; }


namespace n5 {
extern "C" s32 func_0209b334(u32 x) {
    s32 r = 3;
    if (x < 5) {
        r = 0;
    } else if (x < 8) {
        r = 1;
    } else if (x < 0xc) {
        r = 2;
    }
    return r;
}

}
s32 Unk_0209b3bc::func_0209b328() {
    using namespace n5; return func_0209b334(unk_10); }


namespace n5 {
extern "C" s32 func_0209b2f8(u8 *out, s32 x) {
    *out = func_0209b334(x);
    if (*out < 3) return x - data_020d0594[*out];
    return -1;
}

}
BOOL Unk_0209b3bc::func_0209b2e4() {
    using namespace n5;
    if (unk_21.f) return TRUE;
    return FALSE;
}


namespace n5 {
}
void Unk_0209b3bc::func_0209b294() {
    using namespace n5;
    if (func_0209b354() == 2) {
        unk_21.f = 1;
    } else {
        unk_21.f = 0;
    }
    func_0209b350(8);
    func_0209d498(this);
    func_02116048(this, (u8 *)this + 8, 8);
}


namespace n5 {
}
void Unk_0209b3bc::func_0209b238() {
    using namespace n5;
    if (func_0209b354() == 2 || func_0209b2e4()) {
        unk_21.f = 1;
    } else {
        unk_21.f = 0;
    }
    func_0209b350(0xb);
    func_0209d498(this);
    func_02116048(this, (u8 *)this + 8, 8);
}


namespace n5 {
}
BOOL Unk_0209b3bc::func_0209b1f0(void *o, u32 c) {
    using namespace n5;
    if (func_0209d020(this) == 0 && func_0209b3a4()) {
        s32 t = func_0209d374(this, o);
        if (t < 0) t = -t;
        if ((u32)_s32_div_f(t, 0x5a0) >= c) return TRUE;
        return FALSE;
    }
    return FALSE;
}


namespace n5 {
}
BOOL Unk_0209b3bc::func_0209b1e4(void *o) {
    using namespace n5; return func_0209b1f0(o, 7); }


namespace n5 {
}
s32 Unk_0209b3bc::func_0209b18c() {
    using namespace n5;
    if (func_0209b3b0(unk_10)) {
        u32 i = unk_11.func_0209b4cc();
        if (func_0209b3b0(i)) {
            if (unk_11.func_0209b434(i) == 0xff) {
                if (unk_10 == i) {
                    unk_11.func_0209b494(unk_10);
                    return unk_10;
                } else {
                    func_0209b294();
                    return 8;
                }
            }
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 Unk_0209b3bc::func_0209b12c() {
    using namespace n5;
    if (unk_10 == 8) {
        u32 i = unk_11.func_0209b4cc();
        if (func_0209b3b0(i)) {
            func_0209b350(i);
            unk_11.func_0209b494(i);
            unk_21.f = 0;
            func_0209d498(this);
            func_02116048(this, (u8 *)this + 8, 8);
            return i;
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 Unk_0209b3bc::func_0209b0c4(Unk_0209b3bc *o) {
    using namespace n5;
    if (unk_10 == 0xb && *((u8 *)o + 3) != *((u8 *)this + 3)) {
        u32 i = unk_11.func_0209b4cc();
        if (func_0209b3b0(i)) {
            func_0209b350(i);
            unk_11.func_0209b494(i);
            unk_21.f = 0;
            func_0209d498(this);
            func_02116048(this, (u8 *)this + 8, 8);
            return i;
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 Unk_0209b3bc::func_0209b044(void *x) {
    using namespace n5;
    if (unk_10 == 0xa) {
        if (x == 0 || (func_0209d3d0(x, this, 0x3f) == 1 && func_0209d3a4(this, x) >= 1)) {
            u32 i = unk_11.func_0209b4cc();
            if (func_0209b3b0(i)) {
                func_0209b350(i);
                unk_11.func_0209b494(i);
                unk_21.f = 0;
                func_0209d498(this);
                func_02116048(this, (u8 *)this + 8, 8);
                return i;
            }
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 Unk_0209b3bc::func_0209b014(s32 x) {
    using namespace n5;
    if (!func_0209b3b0(x)) x = 7;
    u8 buf = x;
    return func_020b35f8(this, &buf, (void *)"st_boom");
}


namespace n5 {
extern "C" void func_0209b010() {}

extern "C" void *func_0209b00c(void *p) { return (u8 *)p + 8; }

}
void Unk_0209b3bc::func_0209afa4(s16 *p) {
    using namespace n5;
    const u8 *w = data_020d05ac;
    s32 i;
    for (i = 0; i < 8; p++, w++, i++) {
        s32 v = unk_19.func_0209b434((u8)i);
        s32 wt = *w;
        if (wt != 0 && v != 0) {
            s32 m = *p * wt;
            unk_11.func_0209b46c((u8)i, (u8)((v * m) >> 12));
        }
    }
    unk_19.func_0209b550();
}


namespace n5 {
}
BOOL Unk_0209b3bc::func_0209af4c(s16 *p) {
    using namespace n5;
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        if (unk_11.func_0209b434((u8)i) < 0xff) {
            s32 t = func_02063b8c(10);
            if (t > 0) {
                unk_11.func_0209b46c((u8)i, (u8)((*p * t) >> 12));
            }
            r = TRUE;
        }
    }
    return r;
}


namespace n5 {
}
void Unk_0209b3bc::func_0209af0c(u8 idx, s32 delta) {
    using namespace n5;
    if (func_0209b3b0(idx)) {
        s32 t = delta + unk_19.func_0209b434(idx);
        if (t < 0) {
            t = 0;
        } else if (t > 10) {
            t = 10;
        }
        unk_19.func_0209b450(idx, (u8)t);
    }
}


namespace n5 {
}
void Unk_0209b3bc::func_0209aed4(Unk_0209b3bc *other, s16 *p) {
    using namespace n5;
    u8 i = other->unk_11.func_0209b4cc();
    if (func_0209b3b0(i)) {
        unk_11.func_0209b46c(i, (u8)((p[i] * 10) >> 12));
    }
}


namespace n5 {
extern "C" void func_0209adbc(u16 *out, s32 idx) {
    static Unk_0203442c tbl[8] = {
        Unk_0203442c(0x1376), Unk_0203442c(0x1374), Unk_0203442c(0x1369), Unk_0203442c(0xfff1),
        Unk_0203442c(0xfff1), Unk_0203442c(0x1378), Unk_0203442c(0xfff1), Unk_0203442c(0xfff1)};
    if (func_0209b3b0(idx)) {
        *out = tbl[idx].v;
    } else {
        *out = 0xfff1;
    }
}

}
void Unk_0209ada4::func_0209ada4() {
    using namespace n5;
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0xfff1;
    unk_0a = 0x16;
    unk_08 = 0xfff1;
}


namespace n5 {
}
void Unk_0209ada4::func_0209ada0() {
    using namespace n5;}


namespace n5 {
}
void Unk_0209ada4::func_0209ad80() {
    using namespace n5;
    unk_0a = 0x16;
    unk_08 = 0xfff1;
    unk_0b = unk_0b & ~0x1f;
    unk_0b = unk_0b & ~0xe0;
}


namespace n5 {
extern "C" BOOL func_0209ad74(u32 x) {
    if (x < 0x16) return TRUE;
    return FALSE;
}

}
BOOL Unk_0209ada4::func_0209ad68() {
    using namespace n5; return func_0209ad74(unk_0a); }


namespace n5 {
}
void Unk_0209ada4::func_0209ad54(u8 a, u16 *p, u8 b) {
    using namespace n5;
    unk_0a = a;
    unk_08 = *p;
    unk_0b = (unk_0b & ~0x1f) | (b & 0x1f);
}


namespace n5 {
extern "C" BOOL func_0209ad48(u32 x) {
    if (x < 2) return TRUE;
    return FALSE;
}

extern "C" s32 func_0209ad34(u32 x) {
    s32 r = 2;
    if (x < 5) {
        r = 0;
    } else if (x < 0x16) {
        r = 1;
    }
    return r;
}

}
s32 Unk_0209ada4::func_0209ad28() {
    using namespace n5; return func_0209ad34(unk_0a); }


namespace n5 {
extern "C" BOOL func_0209acf8(s32 *out, s32 x) {
    s32 k = func_0209ad34(x);
    if (func_0209ad48(k)) {
        *out = x - data_020d05b4[k];
        return TRUE;
    }
    return FALSE;
}

}
BOOL Unk_0209ada4::func_0209ace8(s32 *out) {
    using namespace n5; return func_0209acf8(out, unk_0a); }


namespace n5 {
extern "C" BOOL func_0209acdc(u32 x) {
    if (x < 4) return TRUE;
    return FALSE;
}

extern "C" s32 func_0209acb8(u32 x) {
    s32 r = 4;
    if (x < 0xa) {
        r = 0;
    } else if (x < 0x14) {
        r = 1;
    } else if (x < 0x15) {
        r = 2;
    } else if (x < 0x16) {
        r = 3;
    }
    return r;
}

}
s32 Unk_0209ada4::func_0209acac() {
    using namespace n5; return func_0209acb8(unk_0a); }


namespace n5 {
extern "C" BOOL func_0209ac78(s32 *out, s32 x) {
    s32 k = func_0209acb8(x);
    BOOL r = FALSE;
    if (func_0209acdc(k)) {
        *out = x - data_020d05e0[k];
        r = TRUE;
    }
    return r;
}

}
BOOL Unk_0209ada4::func_0209ac68(s32 *out) {
    using namespace n5; return func_0209ac78(out, unk_0a); }


namespace n5 {
}
u32 Unk_0209ada4::func_0209ac64() {
    using namespace n5; return unk_0a; }


namespace n5 {
}
s32 Unk_0209ada4::func_0209ac48(s32 x) {
    using namespace n5;
    func_0209d498(this);
    return func_0209d258(this, x);
}


namespace n5 {
extern "C" void func_0209ac44() {}

extern "C" s32 func_0209ac1c(u32 x) {
    s32 r = 2;
    if (func_0209acb8(x) == 1) {
        if (x < 0x13) {
            r = 0;
        } else if (x < 0x14) {
            r = 1;
        }
    }
    return r;
}

}
s32 Unk_0209ada4::func_0209ac10() {
    using namespace n5; return func_0209ac1c(unk_0a); }


namespace n5 {
extern "C" s32 func_0209abd8(u32 x) {
    s32 r = 4;
    if (func_0209acb8(x) == 1) {
        if (x < 0x13) {
            if (x < 0xb) {
                r = 0;
            } else {
                r = 1;
            }
        } else if (x < 0x14) {
            r = 2;
        } else if (x < 0x15) {
            r = 3;
        }
    }
    return r;
}

}
s32 Unk_0209ada4::func_0209abcc() {
    using namespace n5; return func_0209abd8(unk_0a); }


namespace n5 {
}
u32 Unk_0209ada4::func_0209abc4() {
    using namespace n5; return ((Unk_0209abac_Bits *)&unk_0b)->lo; }


namespace n5 {
}
void Unk_0209ada4::func_0209abb4(u8 v) {
    using namespace n5; unk_0b = (unk_0b & ~0x1f) | (v & 0x1f); }


namespace n5 {
}
u32 Unk_0209ada4::func_0209abac() {
    using namespace n5; return ((Unk_0209abac_Bits *)&unk_0b)->hi; }


namespace n5 {
}
void Unk_0209ada4::func_0209ab98(u8 v) {
    using namespace n5; unk_0b = (unk_0b & ~0xe0) | ((v & 7) << 5); }


namespace n5 {
}
u16 *Unk_0209ada4::func_0209ab94() {
    using namespace n5; return &unk_08; }


namespace n5 {
}
void Unk_0209ada4::func_0209ab8c(u16 *p) {
    using namespace n5; unk_08 = *p; }


namespace n5 {
extern "C" void *func_0209ab6c(Unk_0209ada4 *self) {
    self->func_0209ada4();
    _ZN12Unk_020940a0C1EPv((u8 *)self + 0xc);
    *(u16 *)((u8 *)self + 0x24) = 0xfff1;
    return self;
}

extern "C" void *func_0209ab54(Unk_0209ada4 *self) {
    _ZN12Unk_020940a0C1Ev((u8 *)self + 0xc);
    self->func_0209ada0();
    return self;
}

}

// ======== unk_0209a208.cpp ========
namespace n4 {
struct Unk_0209a4f4_Ent;
struct Unk_0209a5dc;
struct Unk_0209a4f4_Ent;

typedef void (*Unk_0209a5b8_Fn)(void *);extern "C" {
void *_ZN12Unk_0209ada413func_0209ad80Ev(void *p);
void _ZN12Unk_0209ada413func_0209ada0Ev(void *p);
void *_ZN12Unk_0209ada413func_0209ada4Ev(void *p);
s32 _ZN12Unk_0209ada413func_0209ab8cEPt(void *p, u16 *v);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *p);
s32 _ZN12Unk_0209ada413func_0209ac68EPi(void *p, s32 *out);
s32 func_0209ac78(s32 *out, s32 kind);
s32 func_0209acb8(s32 kind);
s32 func_0209acf8(u32 *out, s32 x);
s32 _ZN12Unk_0209ada413func_0209ad28Ev(void *p);
s32 func_0209ad34(s32 x);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *p);
s32 _ZN12Unk_0209ada413func_0209ad54EhPth(void *p, s32 a, u16 *b, s32 c);
u32 _ZN12Unk_0209ada413func_0209abc4Ev(void *p);
void _ZN12Unk_0209ada413func_0209abb4Eh(void *p, s32 v);
s32 _ZN12Unk_0209ada413func_0209ab98Eh(void *p, s32 v);
s32 func_0209ac44(void *p);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(void *p);
s32 _ZN12Unk_0209b3bc13func_0209b358Eii(void *p);
s32 _ZN12Unk_0209b3bc13func_0209b3bcEv(void *p);
s32 _ZN12Unk_0209b3bcD1Ev(void *p);
s32 _ZN12Unk_0209b3bcC1Ev(void *p);
s32 func_0209ab54(void *p);
s32 func_0209ab6c(void *p);
s32 func_0209b334(void *p);
s32 func_0209b570(u32 *a, s32 i);
s32 func_0209d498(s32 x);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *p);
void func_020030d8(void *p, s32 v);
void func_020030e8(void *p);
void func_02003100(void *p);
void func_02003130(void *p);
void _ZN12Unk_02002fc813func_02002fc8Ej(void *a, void *b);
s32 _ZN12Unk_02002fc813func_0200301cEPvjj(void *a, void *b, s32 c, const void *d);
void func_0203ce4c(s32 a, void *b);
void _ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
void _ZN12Unk_020940a013func_02094294Ev(void *p);
void _ZN12Unk_020940a013func_020942b8EPv(void *p, s32 v);
void _ZN12Unk_020e2a48C1Ev(void *p);
void _ZN12Unk_020e2a48D1Ev(void *p);
void _ZN12Unk_020e2a7813func_020a7c3cEv(void *p);
s32 func_020b35ac(void *a, u8 *b, s32 c);
s32 func_02063b8c(s32 n);
void _ZN12Unk_0206338013func_0206338cEii(void *p, s32 a, s32 b);
void func_02063388(void *p);
void func_02062f94(void *out, void *x, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020657a0(void *a, u8 *b, u8 *c, u8 *d, u8 *e, void *f, const void *g, void *h, void *i, s32 j);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
s32 func_02052c54(u16 *p);
s32 func_0204b2d4(void *p);
void *func_0204b25c(void *p);
s32 func_0205304c(void *p);
s32 func_02053358(void *p);
s32 func_02053324(void *p);
s32 func_020530f0(void *p);
s32 func_020531d4(void *p);
s32 func_020532d0(void *p);
void func_02115fb4(void *p, u32 v, u32 n);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)(void *));
void __cxa_vec_ctor(void *p, u32 n, u32 sz, void (*c)(void *), void (*d)(void *));
extern void *data_020cbb18;
extern u8 data_020d05a4[];
extern u8 data_020d05d4[];
extern u32 data_020d05f0[];
extern u8 data_020d05bc[];
extern u8 data_020e218c[];
}


extern "C" Unk_0209a4f4_Ent data_020e21fc[];extern "C" {
u8 func_0209a230(void *unused, s32 v);
u8 func_0209a208(void *unused, s32 v);
void *func_0209a940(void *p);
u8 func_0209a938(void *p);
void func_0209a930(void *p, u8 v);
u8 func_0209a6dc(void *p);
BOOL func_0209a670(void *p);
u16 *func_0209a8e8(Unk_0209ab18 *p);
void *func_0209a92c(Unk_0209ab18 *p);
s32 func_0209a8f4(s32 x);
void func_0209a8c8(Unk_0209ab18 *p, u32 v);
s32 func_0209aaa0(void *p);
void func_0209aae4(Unk_0209ab18 *p, s32 a, u16 *b);
void func_0209ab08(void *p, s32 a, u16 *b);
void func_0209ab18(void *p);
void func_0209a894(Unk_0209ab18 *p);
}


namespace Unk_0209a944 {
extern "C" s32 func_0209a930(void *p, u8 v);
}


struct Unk_0209a4f4_Ent;

struct Unk_0209a5dc {
    u8 unk_00[0xc];
    u8 unk_0c[2][0xc];
    u8 unk_24;
};

struct Unk_0209a4f4_Ent {
    BOOL (Unk_0209a5dc::*unk_00)();
    u32 unk_08[2];
    u8 unk_10;
};
extern "C" u8 func_0209a208(void *unused, s32 v);
extern "C" u8 func_0209a230(void *unused, s32 v);
extern "C" void func_0209a254(u8 *p);
extern "C" BOOL func_0209a26c(void *p);
extern "C" BOOL func_0209a288(void *p);
extern "C" BOOL func_0209a2a4(void *p);
extern "C" void func_0209a2c0(Unk_0209a5dc *self, void *arg);
extern "C" BOOL func_0209a3c8(void *p);
extern "C" BOOL func_0209a3e4(void *p);
extern "C" u8 *func_0209a420(u8 *p);
extern "C" void func_0209a424(u8 *p, u32 v);
extern "C" s32 func_0209a42c(void *self);
extern "C" s32 func_0209a444(void *self, s32 kind);
extern "C" BOOL func_0209a49c(s32 a, void *b);
extern "C" u8 *func_0209a4e4(Unk_0209a5dc *p, s32 i);
extern "C" void func_0209a4f0(void);
extern "C" BOOL func_0209a4f4(Unk_0209a5dc *self, s32 kind, s32 r6, s32 r3);
extern "C" void func_0209a588(Unk_0209a5dc *self);
extern "C" Unk_0209a5dc *func_0209a5b8(Unk_0209a5dc *self);
extern "C" Unk_0209a5dc *func_0209a5dc(Unk_0209a5dc *self);
extern "C" u8 *func_0209a60c(u8 *p);
extern "C" void *func_0209a610(void *p);
extern "C" s32 func_0209a614(void *p);
extern "C" void func_0209a628(u8 *p);
extern "C" u8 *func_0209a640(u8 *p);
extern "C" u8 *func_0209a658(u8 *p);
extern "C" BOOL func_0209a670(void *self);
extern "C" u8 func_0209a6c0(Unk_0209ab18 *p, s32 n);
extern "C" u8 func_0209a6dc(void *p);
extern "C" s32 func_0209a6e4(void *self, u32 kind, s32 val);
extern "C" void func_0209a774(u16 *out, s32 a, s32 b);
extern "C" u8 func_0209a7d0(u16 *p, s32 n);
extern "C" s32 func_0209a874(u32 v);
extern "C" void func_0209a894(Unk_0209ab18 *p);
extern "C" BOOL func_0209a89c(Unk_0209ab18 *p, u32 i);
extern "C" void func_0209a8b4(Unk_0209ab18 *p, s32 i);
extern "C" void func_0209a8c8(Unk_0209ab18 *p, u32 v);
extern "C" u8 func_0209a8e0(Unk_0209ab18 *p);
extern "C" u16 *func_0209a8e8(Unk_0209ab18 *p);
extern "C" s32 func_0209a8ec(void *p);
extern "C" s32 func_0209a8f4(s32 x);
extern "C" void *func_0209a92c(Unk_0209ab18 *p);
extern "C" void func_0209a930(void *p, u8 v);
extern "C" u8 func_0209a938(void *p);
extern "C" void *func_0209a940(void *p);
extern "C" void func_0209a944(Unk_0209ab18 *self);
extern "C" void func_0209a9bc(void *p);
extern "C" void func_0209a9f0(Unk_0209ab18 *self, s32 a1, u16 *p, void *obj, u8 flag);
extern "C" s32 func_0209aaa0(void *pp);
extern "C" void func_0209aae4(Unk_0209ab18 *self, s32 a, u16 *b);
extern "C" void func_0209ab08(void *p, s32 a, u16 *b);
extern "C" void func_0209ab18(void *pp);

extern "C" void func_0209ab18(void *pp) {
    Unk_0209ab18 *self = (Unk_0209ab18 *)pp;
    _ZN12Unk_0209ada413func_0209ad80Ev(self);
    _ZN12Unk_020940a013func_02094294Ev(self->unk_0c);
    self->unk_22 = 7;
    self->unk_24 = 0xfff1;
    self->unk_26 = 0;
    self->unk_27 = 0x18;
    self->unk_28 = 0;
}

extern "C" void func_0209ab08(void *p, s32 a, u16 *b) {
    _ZN12Unk_0209ada413func_0209ad54EhPth(p, a, b, 0);
}

extern "C" void func_0209aae4(Unk_0209ab18 *self, s32 a, u16 *b) {
    func_0209ab18(self);
    func_0209ab08(self, a, b);
    self->unk_22 = 0;
}

extern "C" s32 func_0209aaa0(void *pp) {
    Unk_0209ab18 *self = (Unk_0209ab18 *)pp;
    u16 v;
    _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a940(self), 0);
    v = 0xfff1;
    _ZN12Unk_0209ada413func_0209ab8cEPt(func_0209a940(self), &v);
    _ZN12Unk_020940a013func_02094294Ev(func_0209a92c(self));
    *func_0209a8e8(self) = 0xfff1;
}

extern "C" void func_0209a9f0(Unk_0209ab18 *self, s32 a1, u16 *p, void *obj, u8 flag) {
    if (flag) {
        func_0209aae4(self, a1, p);
    } else {
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a940(self), 0);
        _ZN12Unk_0209ada413func_0209ab8cEPt(func_0209a940(self), p);
        if (_ZN12Unk_0209ada413func_0209ac64Ev(func_0209a940(self)) == 2) {
            if (func_0209a938(self) == 2) {
                BOOL r = FALSE;
                if (*p >= 0x450c && *p <= 0x45db) {
                    r = TRUE;
                }
                if (r) {
                    func_0209a8c8(self, (u8)func_02052c54(p));
                }
            }
        }
    }
    if (obj) {
        _ZN12Unk_020940a013func_020942b8EPv(func_0209a92c(self), (s32)obj);
        func_0209d498(func_0209ac44(func_0209a940(self)));
        _ZN12Unk_0209ada413func_0209ab98Eh(func_0209a940(self), 0);
    } else {
        _ZN12Unk_020940a013func_02094294Ev(func_0209a92c(self));
    }
}

extern "C" void func_0209a9bc(void *p) {
    void *o = func_0209a940(p);
    if (_ZN12Unk_0209ada413func_0209ad68Ev(o)) {
        if (_ZN12Unk_0209ada413func_0209ad28Ev(o) == 0) {
            if (_ZN12Unk_0209ada413func_0209abc4Ev(o) == 1) {
                _ZN12Unk_0209ada413func_0209abb4Eh(o, 2);
            }
        }
    }
}

extern "C" void func_0209a944(Unk_0209ab18 *self) {
    void *o = func_0209a940(self);
    s32 t;
    s32 a;
    s32 ok;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(o)) {
        if (_ZN12Unk_0209ada413func_0209ad28Ev(o) == 0) {
            t = func_0209a8f4(_ZN12Unk_0209ada413func_0209ac64Ev(o));
            a = func_0209a938(self);
            if (a < t - 1) {
                if (_ZN12Unk_0209ada413func_0209ac64Ev(o) == 4) {
                    ok = func_0209a670(self);
                } else {
                    ok = 1;
                }
                func_0209aaa0(self);
                if (ok ? TRUE : FALSE) {
                    Unk_0209a944::func_0209a930(self, a + 1);
                }
            }
        }
    }
}

extern "C" void *func_0209a940(void *p) {
    return p;
}

extern "C" u8 func_0209a938(void *p) {
    return ((u8 *)p)[0x22];
}

extern "C" void func_0209a930(void *p, u8 v) {
    ((u8 *)p)[0x22] = v;
}

extern "C" void *func_0209a92c(Unk_0209ab18 *p) {
    return p->unk_0c;
}

extern "C" s32 func_0209a8f4(s32 x) {
    u32 idx;
    if (func_0209ad34(x) == 0) {
        idx = 0;
        if (func_0209acf8(&idx, x)) {
            return data_020d05f0[idx];
        }
    }
    return 0;
}

extern "C" s32 func_0209a8ec(void *p) {
    return func_0209ac44(p);
}

extern "C" u16 *func_0209a8e8(Unk_0209ab18 *p) {
    return &p->unk_24;
}

extern "C" u8 func_0209a8e0(Unk_0209ab18 *p) {
    return p->unk_27;
}

extern "C" void func_0209a8c8(Unk_0209ab18 *p, u32 v) {
    func_0209a894(p);
    p->unk_27 = v;
}

extern "C" void func_0209a8b4(Unk_0209ab18 *p, s32 i) {
    p->unk_28 |= (1 << i);
}

extern "C" BOOL func_0209a89c(Unk_0209ab18 *p, u32 i) {
    if (i < 3) {
        if ((p->unk_28 >> i) & 1) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0209a894(Unk_0209ab18 *p) {
    p->unk_28 = 0;
}

extern "C" s32 func_0209a874(u32 v) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (v == data_020d05d4[i]) {
            return i;
        }
    }
    return -1;
}

extern "C" u8 func_0209a7d0(u16 *p, s32 n) {
    u8 f[10];
    s32 cnt = 10;
    s32 i;
    s32 j;
    s32 k;
    func_02115fb4(f, 0, cnt);
    for (i = 0; i < n; i++, p++) {
        BOOL in = FALSE;
        if (*p >= 0x450c && *p <= 0x45db) {
            in = TRUE;
        }
        if (in) {
            for (j = 0; j < 10; j++) {
                if (data_020d05d4[j] == func_02052c54(p)) {
                    if (f[j] == 0) {
                        f[j] = 1;
                        cnt--;
                        break;
                    }
                }
            }
        }
    }
    k = func_02063b8c(cnt);
    j = 0;
    while (k >= 0) {
        if (f[j] == 0) {
            if (k == 0) break;
            k--;
            j++;
        } else {
            j++;
        }
    }
    return data_020d05d4[j];
}

extern "C" void func_0209a774(u16 *out, s32 a, s32 b) {
    u16 tmp;
    u32 i;
    *out = 0xfff1;
    tmp = 0xfff1;
    for (i = 0; i < 0x34; i++) {
        tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (a == func_02052c54(&tmp)) {
            u32 k = i + b;
            *out = k < 0x34 ? 0x450c + k * 4 : 0x450c;
            break;
        }
    }
}

extern "C" s32 func_0209a6e4(void *self, u32 kind, s32 val) {
    s32 r = 0;
    if (func_0204b2d4(self)) {
        {
            switch (kind) {
            case 0:
                if (val == func_0205304c(self)) r = 2;
                break;
            case 1:
                self = func_0204b25c(self);
                if (val == func_02053358(self)) r = 1;
                if (val == func_02053324(self)) r++;
                break;
            case 2:
                if (val == func_020530f0(self)) r = 2;
                break;
            case 3:
                if (val == func_020531d4(self)) r = 2;
                break;
            case 4:
                if (val == func_020532d0(self)) r = 2;
                break;
            }
        }
    }
    return r;
}

extern "C" u8 func_0209a6dc(void *p) {
    return ((u8 *)p)[0x26];
}

extern "C" u8 func_0209a6c0(Unk_0209ab18 *p, s32 n) {
    s32 t = p->unk_26 + n;
    if (t > 14) {
        t = 14;
    }
    p->unk_26 = t;
    return p->unk_26;
}

extern "C" BOOL func_0209a670(void *self) {
    void *o = func_0209a940(self);
    s32 t;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(o)) {
        if (_ZN12Unk_0209ada413func_0209ac64Ev(o) == 4) {
            t = func_0209a938(self);
            if (t < 6) {
                if (func_0209a6dc(self) >= data_020d05a4[t]) {
                    return TRUE;
                }
                return FALSE;
            }
        }
    }
    return FALSE;
}

extern "C" u8 *func_0209a658(u8 *p) {
    _ZN12Unk_0209b3bcC1Ev(p);
    func_0209ab6c(p + 0x24);
    return p;
}

extern "C" u8 *func_0209a640(u8 *p) {
    func_0209ab54(p + 0x24);
    _ZN12Unk_0209b3bcD1Ev(p);
    return p;
}

extern "C" void func_0209a628(u8 *p) {
    _ZN12Unk_0209b3bc13func_0209b3bcEv(p);
    func_0209ab18(p + 0x24);
}

extern "C" s32 func_0209a614(void *p) {
    _ZN12Unk_0209b3bc13func_0209b358Eii(p);
    return _ZN12Unk_0209b3bc13func_0209b354Ev(p);
}

extern "C" void *func_0209a610(void *p) {
    return p;
}

extern "C" u8 *func_0209a60c(u8 *p) {
    return p + 0x24;
}

extern "C" Unk_0209a5dc *func_0209a5dc(Unk_0209a5dc *self) {
    _ZN12Unk_0209ada413func_0209ada4Ev(self);
    __cxa_vec_ctor(self->unk_0c, 2, 0xc, func_02003130, func_02003100);
    return self;
}

extern "C" Unk_0209a5dc *func_0209a5b8(Unk_0209a5dc *self) {
    __cxa_vec_cleanup(self->unk_0c, 2, 0xc, func_02003100);
    _ZN12Unk_0209ada413func_0209ada0Ev(self);
    return self;
}

extern "C" void func_0209a588(Unk_0209a5dc *self) {
    s32 i;
    _ZN12Unk_0209ada413func_0209ad80Ev(self);
    for (i = 0; i < 2; i++) {
        func_020030e8(self->unk_0c[i]);
    }
    self->unk_24 = 0;
}

extern "C" BOOL func_0209a4f4(Unk_0209a5dc *self, s32 kind, s32 r6, s32 r3) {
    BOOL r = FALSE;
    s32 idx = 0;
    u16 v;
    if (func_0209acb8(kind) == 1) {
        if (func_0209ac78(&idx, kind)) {
            v = 0xfff1;
            _ZN12Unk_0209ada413func_0209ad54EhPth(self, kind, &v, r);
            {
                Unk_0209a4f4_Ent *e = &data_020e21fc[idx];
                if (e->unk_00) {
                    (self->*(e->unk_00))();
                }
            }
            if (r6) {
                func_020030d8(self->unk_0c[0], r6);
            }
            if (r3) {
                func_020030d8(self->unk_0c[1], r3);
            }
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_0209a4f0(void) {
}

extern "C" u8 *func_0209a4e4(Unk_0209a5dc *p, s32 i) {
    return p->unk_0c[i];
}

extern "C" BOOL func_0209a49c(s32 a, void *b) {
    s32 t;
    BOOL r;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        return FALSE;
    }
    t = func_0209b334(b);
    r = FALSE;
    switch (a) {
    case 10:
        if (t == 1) r = TRUE;
        break;
    case 19:
        if (t == 1) r = TRUE;
        break;
    }
    return r;
}

extern "C" s32 func_0209a444(void *self, s32 kind) {
    BOOL r = FALSE;
    s32 idx;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(self)) {
        if (func_0209acb8(kind) == 1) {
            if (kind == _ZN12Unk_0209ada413func_0209ac64Ev(self)) {
                if (_ZN12Unk_0209ada413func_0209ac68EPi(self, &idx)) {
                    if (_ZN12Unk_0209ada413func_0209abc4Ev(self) > data_020e21fc[idx].unk_10) {
                        r = TRUE;
                    }
                }
            }
        }
    }
    return r;
}

extern "C" s32 func_0209a42c(void *self) {
    return func_0209a444(self, _ZN12Unk_0209ada413func_0209ac64Ev(self));
}

extern "C" void func_0209a424(u8 *p, u32 v) {
    p[0x24] = v;
}

extern "C" u8 *func_0209a420(u8 *p) {
    return p + 0x24;
}

extern "C" BOOL func_0209a3e4(void *p) {
    u32 x[2];
    u16 out;
    _ZN12Unk_0206338013func_0206338cEii(x, 2, 0);
    func_02062f94(&out, x, 0, 0, 1, 1, 0);
    func_02063388(x);
    _ZN12Unk_0209ada413func_0209ab8cEPt(p, &out);
    return TRUE;
}

extern "C" BOOL func_0209a3c8(void *p) {
    u16 v = 0x1565;
    _ZN12Unk_0209ada413func_0209ab8cEPt(p, &v);
    return TRUE;
}

extern "C" void func_0209a2c0(Unk_0209a5dc *self, void *arg) {
    u8 b[5];
    u32 cnt;
    u8 buf[0x1e];
    u32 X[7];
    u32 Y[13];
    s32 i;
    s32 r;
    if (_ZN12Unk_02002fc813func_020030b4Ev(self->unk_0c[0]) && _ZN12Unk_02002fc813func_020030b4Ev(self->unk_0c[1])) {
        _ZN12Unk_020e1c64C1Ev(X);
        _ZN12Unk_020e2a48C1Ev(Y);
        cnt = 0;
        _ZN12Unk_02002fc813func_02002fc8Ej(self->unk_0c[1], X);
        func_0203ce4c(0, X);
        _ZN12Unk_020e2a7813func_020a7c3cEv(X);
        _ZN12Unk_02002fc813func_02002fc8Ej(self->unk_0c[0], X);
        func_0203ce4c(1, X);
        for (i = 0; i < 6; i++) {
            r = func_0209b570(&cnt, i);
            _ZN12Unk_020e2a7813func_020a7c3cEv(Y);
            b[0] = cnt;
            func_020b35ac(Y, b, r);
            func_0203ce4c(i + 2, Y);
        }
        _ZN12Unk_02002fc813func_0200301cEPvjj(self->unk_0c[0], buf, 0x1e, data_020d05bc);
        b[1] = func_02063b8c(10);
        b[2] = func_02063b8c(10);
        b[3] = func_02063b8c(10);
        b[4] = func_02063b8c(10);
        func_020657a0(arg, &b[1], &b[2], &b[3], &b[4], buf, data_020e218c, self->unk_0c[0], self->unk_0c[1], 1);
        _ZN12Unk_020e2a48D1Ev(Y);
        _ZN12Unk_020e1c64D1Ev(X);
    }
}

extern "C" BOOL func_0209a2a4(void *p) {
    u16 v = 0x1563;
    _ZN12Unk_0209ada413func_0209ab8cEPt(p, &v);
    return TRUE;
}

extern "C" BOOL func_0209a288(void *p) {
    u16 v = 0x1561;
    _ZN12Unk_0209ada413func_0209ab8cEPt(p, &v);
    return TRUE;
}

extern "C" BOOL func_0209a26c(void *p) {
    u16 v = 0x1564;
    _ZN12Unk_0209ada413func_0209ab8cEPt(p, &v);
    return TRUE;
}

extern "C" void func_0209a254(u8 *p) {
    _ZN12Unk_0209ada413func_0209ad80Ev(p);
    p[0xc] = 5;
    p[0xd] = 0;
}

extern "C" u8 func_0209a230(void *unused, s32 v) {
    u8 n = 0;
    s32 i = 0;
    for (; i < 5; i++) {
        if ((v >> i) & 1) {
            n = n + 1;
        }
    }
    return n;
}

extern "C" u8 func_0209a208(void *unused, s32 v) {
    u8 n = func_0209a230(unused, v);
    if ((v >> 2) & 1) {
        if ((v >> 3) & 1) {
            n = n - 1;
        }
    }
    return n;
}

}

// ======== unk_020998b8.cpp ========
namespace n3 {
extern "C" {
extern u8 data_021dfd8c[];
extern u16 data_020d05c8[];
extern u16 data_020d059c[];
extern u8 data_021ed104[];
Unk_0209a5dc *func_02099db4(Unk_02099e38 *m, s32 i);
BOOL func_02099c1c(Unk_02099e38 *m);
void func_02099c48(Unk_02099e38 *m);
void func_02099bd8(Unk_02099e38 *m);
void func_02099f1c(Unk_02099f5c *x);
void func_02099ab4(void *p);
void func_0209a178(Unk_02099f98 *z, s32 i);
s32 func_0209a19c(Unk_02099f98 *z, s32 mask);
s32 func_0209a208(Unk_02099f98 *z, s32 v);
s32 func_0209a230(Unk_02099f98 *z, u32 mask);
void func_0209a254(Unk_02099f98 *z);
s32 func_0209a588(Unk_0209a5dc *e);
Unk_0209ada4 *func_0209a4f0(Unk_0209a5dc *e);
Unk_02003130 *func_0209a4e4(Unk_0209a5dc *e, s32 i);
void func_0209a4f4(Unk_0209a5dc *e, s32 a, s32 b, void *c);
void *func_0209a108(Unk_02099f98 *z);
void *func_0209a0dc(Unk_02099f98 *z, s32 v);
void _ZN12Unk_0209ada413func_0209ab8cEPt(Unk_02099f98 *z, u16 *v);
u16 *_ZN12Unk_0209ada413func_0209ab94Ev(Unk_0209ada4 *y);
void _ZN12Unk_0209ada413func_0209abb4Eh(Unk_0209ada4 *y, s32 v);
u32 _ZN12Unk_0209ada413func_0209abc4Ev(Unk_0209ada4 *y);
u32 _ZN12Unk_0209ada413func_0209abccEv(Unk_0209ada4 *y);
void _ZN12Unk_0209ada413func_0209ac48Ei(Unk_0209ada4 *y, s32 v);
u32 _ZN12Unk_0209ada413func_0209ac64Ev(Unk_0209ada4 *y);
void _ZN12Unk_0209ada413func_0209ad54EhPth(Unk_0209ada4 *y, s32 t, u16 *v, s32 k);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(Unk_0209ada4 *y);
void _ZN12Unk_0209ada413func_0209ad80Ev(Unk_0209ada4 *y);
s32 _ZN12Unk_02002fc813func_020030b4Ev(Unk_02003130 *r);
void func_020030d8(Unk_02003130 *r, Unk_02003130 *o);
void func_020030e8(Unk_02003130 *r);
Unk_02003130 *_ZN12Unk_0208086013func_020805c4Ev(void *p);
void *func_0207bc44(void *g, Unk_02003130 **a, s32 n);
s32 _ZN12Unk_0206555413func_02065578Ev(void *p);
s32 func_0206561c(void *p);
s32 func_0209750c();
void *_ZN12Unk_0209865c13func_0209865cEv(void *p);
void func_02133ef8(void *p, s32 n);
s32 func_02128930(void *a, void *b, u32 n);
void func_02116048(void *src, void *dst, u32 n);
void func_02115fb4(void *p, u32 v, u32 n);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
u32 func_02063b8c(u32 n);
s32 func_020814ec(void *p, u16 *v);
u32 _ZN12Unk_02002fc813func_02002fc8Ej(Unk_02003130 *r, u32 a);
s32 _ZN12Unk_0209865c13func_0209888cEv(s32 v);
s32 _ZN12Unk_0206395413func_02094058Ev(s32 v);
s32 func_020ac7a8();
s32 func_020ae940(void *p);
}


extern "C" BOOL func_02099868(Unk_02099e38 *m, Unk_02003130 *r);
extern "C" void func_020998b8(Unk_02099e38 *m);
extern "C" void func_020998d8(Unk_02099e38 *m);
extern "C" void func_02099910(Unk_02099e38 *m);
extern "C" void func_0209992c(Unk_02099e38 *m);
extern "C" void func_02099948(Unk_02099e38 *m);
extern "C" BOOL func_020999c0(Unk_02099e38 *m, void *p);
extern "C" void func_02099a98();
extern "C" void func_02099ab4(void *p);
extern "C" void func_02099ae4(Unk_02099e38 *m);
extern "C" void func_02099b4c(Unk_02099e38 *m);
extern "C" void func_02099b90(Unk_02099e38 *m);
extern "C" void func_02099bac(Unk_02099e38 *m);
extern "C" BOOL func_02099bc8(Unk_02099e38 *m);
extern "C" void func_02099bd8(Unk_02099e38 *m);
extern "C" void func_02099be0(Unk_02099e38 *m);
extern "C" void func_02099be8(Unk_02099e38 *m);
extern "C" BOOL func_02099c1c(Unk_02099e38 *m);
extern "C" void func_02099c48(Unk_02099e38 *m);
extern "C" void *func_02099c68(Unk_02099e38 *m, s32 a, u16 *p);
extern "C" Unk_0209a5dc *func_02099d44(Unk_0209a5dc *arr, Unk_02003130 *p, s32 idx);
extern "C" Unk_0209a5dc *func_02099db4(Unk_02099e38 *m, s32 i);
extern "C" void func_02099dc8(Unk_02099e38 *m);
extern "C" void func_02099e88(Unk_02099f5c *x, Unk_02003130 *r, void *src);
extern "C" BOOL func_02099ed4(Unk_02099f5c *x, Unk_02003130 *p);
extern "C" void func_02099f1c(Unk_02099f5c *x);
extern "C" BOOL func_02099f98(Unk_02099f98 *z, u16 *p);
extern "C" BOOL func_0209a05c(Unk_02099f98 *z);
extern "C" void *func_0209a0dc(Unk_02099f98 *z, s32 v);
extern "C" void *func_0209a108(Unk_02099f98 *z);
extern "C" void func_0209a10c(Unk_02099f98 *z);
extern "C" void func_0209a178(Unk_02099f98 *z, s32 i);
extern "C" s32 func_0209a19c(Unk_02099f98 *z, s32 m);

extern "C" s32 func_0209a19c(Unk_02099f98 *z, s32 m) {
    if (func_020ac7a8() == 0) {
        m = (u8)(m & ~3);
    } else if (func_020ae940(data_021ed104)) {
        m = (u8)(m & ~1);
    }
    s32 n = func_0209a230(z, m);
    if (n > 0) {
        s32 r = func_02063b8c(n);
        for (s32 i = 0; i < 5; i++) {
            if ((m >> i) & 1) {
                if (r == 0) {
                    return i;
                }
                r--;
            }
        }
    }
    return -1;
}

extern "C" void func_0209a178(Unk_02099f98 *z, s32 i) {
    if ((u32)(i - 2) <= 1) {
        z->unk_0d &= ~4;
        z->unk_0d &= ~8;
    } else {
        z->unk_0d &= ~(1 << i);
    }
}

extern "C" void func_0209a10c(Unk_02099f98 *z) {
    u32 r = func_02063b8c(10) & 1;
    func_0209a254(z);
    u16 v = data_020d059c[r];
    _ZN12Unk_0209ada413func_0209ad54EhPth(z, 0x14, &v, 0);
    for (s32 i = 0; i < 5; i++) {
        z->unk_0d |= 1 << i;
    }
    r = func_0209a19c(z, z->unk_0d);
    if (r < 5) {
        func_0209a178(z, r);
        z->unk_0c = r;
    }
}

extern "C" void *func_0209a108(Unk_02099f98 *z) {
    return z;
}

extern "C" void *func_0209a0dc(Unk_02099f98 *z, s32 v) {
    if (z->unk_0c < 5) {
        u16 t = data_020d05c8[z->unk_0c];
        return (void *)func_020814ec((void *)v, &t);
    }
    return 0;
}

extern "C" BOOL func_0209a05c(Unk_02099f98 *z) {
    if (z->unk_0d) {
        u32 r = func_0209a19c(z, z->unk_0d);
        if (r < 5) {
            func_0209a178(z, r);
            z->unk_0c = r;
            _ZN12Unk_0209ada413func_0209abb4Eh(z, 0);
            u16 v = data_020d059c[func_02063b8c(10) & 1];
            _ZN12Unk_0209ada413func_0209ab8cEPt(z, &v);
            r = func_0209a208(z, z->unk_0d);
            if ((r == 2 && (func_02063b8c(10) & 1)) || r == 1) {
                z->unk_0d = 0;
            }
            return TRUE;
        } else {
            z->unk_0d = 0;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02099f98(Unk_02099f98 *z, u16 *p) {
    if (z->unk_0c < 5 && func_0209750c() && !_ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c()))) {
        if (((s32)(*p & 0xf000) >> 12) == 0xd && _ZN12Unk_0209ada413func_0209ad68Ev(z) && _ZN12Unk_0209ada413func_0209abc4Ev(z) == 0) {
            BOOL in = FALSE;
            if (*p >= 0xd019 && *p <= 0xd01c) {
                in = TRUE;
            }
            if (in) {
                if (z->unk_0c == 0) {
                    return TRUE;
                }
            } else {
                u16 v = data_020d05c8[z->unk_0c];
                BOOL same;
                if (func_0204b2d4(p)) {
                    u16 t = v;
                    if (func_0204b25c(p) == func_0204b25c(&t)) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                } else {
                    if (*p == v) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                }
                if (same) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

}
Unk_02099f5c::Unk_02099f5c() : unk_18(0), unk_1c(0) {
    using namespace n3;
    func_020030e8(this);
    _ZN12Unk_0209ada413func_0209ad80Ev(&unk_0c);
    unk_18 = 0;
    unk_1c = 0;
    func_02115fb4(unk_20, 0, 1);
}


namespace n3 {
}
Unk_02099f5c::~Unk_02099f5c() {
    using namespace n3;}


namespace n3 {
extern "C" void func_02099f1c(Unk_02099f5c *x) {
    _ZN12Unk_0209ada413func_0209ad80Ev(&x->unk_0c);
    func_020030e8(x);
    x->unk_18 = 0;
    x->unk_1c = 0;
    func_02115fb4(x->unk_20, 0, 1);
}

extern "C" BOOL func_02099ed4(Unk_02099f5c *x, Unk_02003130 *p) {
    if (_ZN12Unk_0209ada413func_0209ad68Ev(&x->unk_0c) && _ZN12Unk_02002fc813func_020030b4Ev(p) && p->unk_00 == x->unk_00 &&
        func_02128930(p->unk_02, x->unk_02, 8) == 0 && p->unk_0b == x->unk_0b) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02099e88(Unk_02099f5c *x, Unk_02003130 *r, void *src) {
    func_02099f1c(x);
    u16 v = 0xfff1;
    _ZN12Unk_0209ada413func_0209ad54EhPth(&x->unk_0c, 0x15, &v, 0);
    _ZN12Unk_0209ada413func_0209ac48Ei(&x->unk_0c, 0);
    func_020030d8(x, r);
    func_02116048(src, &x->unk_18, 8);
}

}
Unk_02099e38::Unk_02099e38() {
    using namespace n3;}


namespace n3 {
}
Unk_02099e38::~Unk_02099e38() {
    using namespace n3;}


namespace n3 {
extern "C" void func_02099dc8(Unk_02099e38 *m) {
    for (s32 i = 0; i < 2; i++) {
        func_0209a588(&m->unk_00[i]);
    }
    func_02099c48(m);
    func_0209a254(&m->unk_78);
    func_02099f1c(&m->unk_88);
}

extern "C" Unk_0209a5dc *func_02099db4(Unk_02099e38 *m, s32 i) {
    Unk_0209a5dc *r = 0;
    if (i >= 0 && i < 2) {
        r = &m->unk_00[i];
    }
    return r;
}

extern "C" Unk_0209a5dc *func_02099d44(Unk_0209a5dc *arr, Unk_02003130 *p, s32 idx) {
    Unk_0209a5dc *ret = 0;
    if (_ZN12Unk_02002fc813func_020030b4Ev(p)) {
        s32 i;
        for (i = 0; i < 2; i++) {
            Unk_0209a5dc *e = &arr[i];
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a4f0(e))) {
                Unk_02003130 *q = func_0209a4e4(e, idx);
                if (q->unk_00 == p->unk_00 && func_02128930(q->unk_02, p->unk_02, 8) == 0 && q->unk_0b == p->unk_0b) {
                    ret = e;
                    break;
                }
            }
        }
    }
    return ret;
}

extern "C" void *func_02099c68(Unk_02099e38 *m, s32 a, u16 *p) {
    void *ret = 0;
    BOOL in = FALSE;
    if (*p >= 0x155f && *p <= 0x1560) {
        in = TRUE;
    }
    if (in) {
        if (_ZN12Unk_0209ada413func_0209ad68Ev((Unk_0209ada4 *)func_0209a108(&m->unk_78))) {
            ret = func_0209a0dc(&m->unk_78, a);
            goto end;
        }
    }
    {
        s32 k = 0;
        BOOL in2 = FALSE;
        if (*p >= 0x1561 && *p <= 0x1564) {
            in2 = TRUE;
        }
        if (in2) {
            k = 0;
        }
        Unk_0209a5dc *e = func_02099db4(m, k);
        if (e) {
            Unk_0209ada4 *y = func_0209a4f0(e);
            if (_ZN12Unk_0209ada413func_0209ad68Ev(y)) {
                u16 *q = _ZN12Unk_0209ada413func_0209ab94Ev(y);
                BOOL same;
                if (func_0204b2d4(q)) {
                    if (func_0204b25c(q) == func_0204b25c(p)) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                } else {
                    if (*q == *p) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                }
                if (same) {
                    ret = (void *)_ZN12Unk_02002fc813func_02002fc8Ej(func_0209a4e4(e, 1), a);
                }
            }
        }
    }
end:
    return ret;
}

extern "C" void func_02099c48(Unk_02099e38 *m) {
    for (s32 i = 0; i < 3; i++) {
        func_020030e8(&m->unk_50[i]);
    }
}

extern "C" BOOL func_02099c1c(Unk_02099e38 *m) {
    Unk_0209ada4 *y = func_0209a4f0(func_02099db4(m, 0));
    if (_ZN12Unk_0209ada413func_0209ad68Ev(y) && _ZN12Unk_0209ada413func_0209abccEv(y) == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02099be8(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    func_0209a588(e);
    func_0209a4f4(e, 0xb, 0, 0);
    func_02099c48(m);
    func_02099bd8(m);
}

extern "C" void func_02099be0(Unk_02099e38 *m) {
    m->unk_74 = 1;
}

extern "C" void func_02099bd8(Unk_02099e38 *m) {
    m->unk_74 = 0;
}

extern "C" BOOL func_02099bc8(Unk_02099e38 *m) {
    if (m->unk_74 == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02099bac(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0xc, 0, 0);
}

extern "C" void func_02099b90(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0xd, 0, 0);
}

extern "C" void func_02099b4c(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    void *t = func_0207bc44(data_021dfd8c, 0, 0);
    func_0209a4f4(e, 0xe, 0, _ZN12Unk_0208086013func_020805c4Ev(t));
    func_020030d8(&m->unk_50[0], _ZN12Unk_0208086013func_020805c4Ev(t));
}

extern "C" void func_02099ae4(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    func_0209a4f0(e);
    Unk_02003130 *a[1];
    func_02133ef8(a, 4);
    s32 n = 0;
    if (_ZN12Unk_02002fc813func_020030b4Ev(&m->unk_50[0])) {
        a[0] = &m->unk_50[0];
        n = 1;
    }
    void *t = func_0207bc44(data_021dfd8c, a, n);
    func_0209a4f4(e, 0xf, 0, _ZN12Unk_0208086013func_020805c4Ev(t));
    func_020030d8(&m->unk_50[1], _ZN12Unk_0208086013func_020805c4Ev(t));
}

extern "C" void func_02099ab4(void *p) {
    Unk_0209ada4 *y = func_0209a4f0(func_02099db4((Unk_02099e38 *)p, 0));
    if (_ZN12Unk_0209ada413func_0209ac64Ev(y) == 0xf) {
        if (_ZN12Unk_0209ada413func_0209abc4Ev(y) == 0) {
            _ZN12Unk_0209ada413func_0209abb4Eh(y, 1);
        }
    }
}

extern "C" void func_02099a98() {
    void *r = (void *)func_0209750c();
    if (r) {
        func_02099ab4(_ZN12Unk_0209865c13func_0209865cEv(r));
    }
}

extern "C" BOOL func_020999c0(Unk_02099e38 *m, void *p) {
    if (p && _ZN12Unk_0206555413func_02065578Ev(p)) {
        Unk_0209a5dc *e = func_02099db4(m, 0);
        Unk_0209ada4 *y = func_0209a4f0(e);
        if (_ZN12Unk_0209ada413func_0209ac64Ev(y) == 0xf) {
            s32 v = func_0206561c(p);
            if (v) {
                Unk_02003130 tmp(v);
                if (_ZN12Unk_02002fc813func_020030b4Ev(&tmp)) {
                    Unk_02003130 *q = func_0209a4e4(e, 1);
                    if (q->unk_00 == tmp.unk_00 && func_02128930(q->unk_02, tmp.unk_02, 8) == 0 && q->unk_0b == tmp.unk_0b) {
                        if (_ZN12Unk_0209ada413func_0209abc4Ev(y) < 2) {
                            _ZN12Unk_0209ada413func_0209abb4Eh(y, 2);
                            return TRUE;
                        }
                        goto out;
                    }
                }
                if (_ZN12Unk_0209ada413func_0209abc4Ev(y) == 0) {
                    _ZN12Unk_0209ada413func_0209abb4Eh(y, 1);
                    return TRUE;
                }
            out:;
            } else {
                if (_ZN12Unk_0209ada413func_0209abc4Ev(y) == 0) {
                    _ZN12Unk_0209ada413func_0209abb4Eh(y, 1);
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_02099948(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    Unk_02003130 *a[2];
    func_02133ef8(a, 8);
    s32 n = 0, i = n;
    for (; i < 2; i++) {
        Unk_02003130 *r = &m->unk_50[i];
        if (_ZN12Unk_02002fc813func_020030b4Ev(r)) {
            a[n] = r;
            n++;
        }
    }
    void *t = func_0207bc44(data_021dfd8c, a, n);
    func_0209a4f4(e, 0x10, 0, _ZN12Unk_0208086013func_020805c4Ev(t));
    func_020030d8(&m->unk_50[2], _ZN12Unk_0208086013func_020805c4Ev(t));
}

extern "C" void func_0209992c(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0x11, 0, &m->unk_50[1]);
}

extern "C" void func_02099910(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0x12, 0, 0);
}

extern "C" void func_020998d8(Unk_02099e38 *m) {
    Unk_0209ada4 *r = func_0209a4f0(func_02099db4(m, 0));
    if (_ZN12Unk_0209ada413func_0209ad68Ev(r)) {
        if (_ZN12Unk_0209ada413func_0209ac64Ev(r) == 0x12) {
            if (_ZN12Unk_0209ada413func_0209abc4Ev(r) == 0) {
                _ZN12Unk_0209ada413func_0209abb4Eh(r, 1);
            }
        }
    }
}

extern "C" void func_020998b8(Unk_02099e38 *m) {
    if (func_02099c1c(m)) {
        func_0209a588(func_02099db4(m, 0));
    }
}

extern "C" BOOL func_02099868(Unk_02099e38 *m, Unk_02003130 *r) {
    if (_ZN12Unk_02002fc813func_020030b4Ev(r) && func_02099c1c(m) && r->unk_00 == m->unk_50[1].unk_00 &&
        func_02128930(r->unk_02, m->unk_50[1].unk_02, 8) == 0 && r->unk_0b == m->unk_50[1].unk_0b) {
        return TRUE;
    }
    return FALSE;
}

}

// ======== unk_02098f90.cpp ========
namespace n2 {
extern "C" {
void *func_0209750c();
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
s32 _ZN12Unk_02097d1c13func_02097edcEv(void *);
s32 _ZN12Unk_02097d1c13func_02097e0cEv(void *);
s32 _ZN12Unk_02097d1c13func_02097e34Ev(void *);
BOOL _ZN12Unk_02097d1c13func_02097e98Ei(void *, s32);
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *, s32);
BOOL func_02097f94(s32);
void _ZN12Unk_02097d1c13func_02097f30EPtij(void *, u16 *, s32, s32);
s32 func_0204bb18(u16 *);
void func_02061478(u16 *, u16 *);
void func_0203c42c(void *, u16 *, s32, s32);
void *_ZN12Unk_0209865c13func_020986c8Ev(void *);
void _ZN12Unk_0206338013func_0206338cEii(void *, u32, u32);
void func_02063388(void *);
void func_02062f94(u16 *, void *, u32, u32, u32, u32, u32);
s32 func_01ffcb0c(s32, s32);
s32 func_01ffc4c8(s32);
void *func_02115fb4(void *, s32, u32);
s32 func_02128930(void *, void *, u32);
s32 func_02116048(void *, void *, u32);
s32 func_02063b8c(u32);
BOOL _ZN12Unk_020940a013func_02094218Ev(void *);
BOOL _ZN12Unk_020940a013func_020941e8EPS_(void *, void *);
void _ZN12Unk_020940a013func_02094294Ev(void *);
s32 _ZN12Unk_020940a013func_020942b8EPv(void *, void *);
void *_ZN12Unk_020940a0C1Ev(void *);
void *_ZN12Unk_020940a0C1EPv(void *);
s32 func_0209cd00(void *, void *);
s32 func_0209cf88(void *);
void func_020030d8(void *, void *);
void func_020030e8(void *);
void *func_02003100(void *);
void *func_02003130(void *);
void _ZN12Unk_0209ada413func_0209ad54EhPth(void *, u32, u16 *, u32);
void _ZN12Unk_0209ada413func_0209ad80Ev(void *);
void *_ZN12Unk_0209ada413func_0209ada0Ev(void *);
void *_ZN12Unk_0209ada413func_0209ada4Ev(void *);
void *__cxa_vec_ctor(void *, s32, s32, void *(*)(void *), void *(*)(void *));
void __cxa_vec_cleanup(void *, s32, s32, void *(*)(void *));
s32 func_020994ac(u32, u8 *, s32);
extern u8 data_020d0598[];
extern u8 data_020d05a0[];
}


static inline BOOL Unk_02099124_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}extern "C" {
void func_02098ff4(Unk_02098ff4 *p);
s32 func_02098ffc();
s32 func_0209909c(u16 *a, s32 b, s32 c);
s32 func_02099160(u16 *a, s32 b);
u16 func_020991b0();
void func_02099318(s32 *a, s32 *m);
}


extern "C" s32 func_02098f90(Unk_02098ff4 *self, s32 v);
extern "C" void func_02098ff4(Unk_02098ff4 *p);
extern "C" s32 func_02098ffc();
extern "C" BOOL func_02099014(u16 *a, s32 b);
extern "C" u16 func_02099048(s32 i);
extern "C" void func_02099064(s32 c);
extern "C" s32 func_0209909c(u16 *a, s32 b, s32 c);
extern "C" BOOL func_02099124(u16 *a);
extern "C" s32 func_02099160(u16 *a, s32 b);
extern "C" u16 func_020991b0();
extern "C" s32 func_020991e4();
extern "C" s32 func_020991fc();
extern "C" void func_02099214();
extern "C" void func_02099218(s32 *a, s32 *b, s32 *out);
extern "C" void func_02099300(s32 *a, s32 *b);
extern "C" void func_02099318(s32 *a, s32 *m);
extern "C" void func_020993dc(s32 *q);
extern "C" s32 func_0209948c(u32 v);
extern "C" s32 func_0209949c(u32 v);
extern "C" s32 func_020994ac(u32 v, u8 *tbl, s32 n);

}
u8 *Unk_020994cc::func_02099864() {
    using namespace n2;
    return (u8 *)this + 0x78;
}


namespace n2 {
}
Unk_020994cc *Unk_020994cc::func_02099828() {
    using namespace n2;
    _ZN12Unk_0209ada413func_0209ada4Ev(this);
    func_02003130(&unk_0c);
    __cxa_vec_ctor(unk_18, 5, 0x16, _ZN12Unk_020940a0C1EPv, _ZN12Unk_020940a0C1Ev);
    func_02099790();
    return this;
}


namespace n2 {
}
Unk_020994cc *Unk_020994cc::func_020997fc() {
    using namespace n2;
    __cxa_vec_cleanup(unk_18, 5, 0x16, _ZN12Unk_020940a0C1Ev);
    func_02003100(&unk_0c);
    _ZN12Unk_0209ada413func_0209ada0Ev(this);
    return this;
}


namespace n2 {
}
void Unk_020994cc::func_02099790() {
    using namespace n2;
    s32 i;
    _ZN12Unk_0209ada413func_0209ad80Ev(this);
    func_020030e8(&unk_0c);
    for (i = 0; i < 5; i++) _ZN12Unk_020940a013func_02094294Ev(&unk_18[i]);
    unk_86[0] = 1;
    unk_86[1] = 1;
    unk_86[2] = 0;
    unk_86[3] = 0;
    unk_8a[0] = 1;
    unk_8a[1] = 1;
    unk_8a[2] = 0;
    unk_8a[3] = 0;
    unk_8e = 5;
}


namespace n2 {
}
void Unk_020994cc::func_0209978c() {
    using namespace n2;
}


namespace n2 {
}
Unk_020030d8_R256 *Unk_020994cc::func_02099788() {
    using namespace n2;
    return &unk_0c;
}


namespace n2 {
}
void Unk_020994cc::func_02099724(Unk_020030d8_R256 *a, u8 *b) {
    using namespace n2;
    u16 v;
    func_02099790();
    func_020030d8(&unk_0c, a);
    v = 0x155e;
    _ZN12Unk_0209ada413func_0209ad54EhPth(this, 9, &v, 0);
    func_02116048(b, unk_86, 4);
    func_02116048(b, unk_8a, 4);
    unk_8a[3] = 1;
    unk_8e = func_02063b8c(2) + 1;
}


namespace n2 {
}
Unk_020994cc_Ent *Unk_020994cc::func_02099710(u32 i) {
    using namespace n2;
    if (i < 5) return &unk_18[i];
    return NULL;
}


namespace n2 {
}
Unk_020994cc_Ent *Unk_020994cc::func_02099700() {
    using namespace n2;
    return func_02099710(unk_8e);
}


namespace n2 {
}
BOOL Unk_020994cc::func_020996b0(Unk_020994cc_Ent *e) {
    using namespace n2;
    if (_ZN12Unk_020940a013func_02094218Ev(e)) {
        Unk_020994cc_Ent *p = unk_18;
        s32 i;
        for (i = 0; i < 5; i++) {
            if (e->unk_00 == p->unk_00 && func_02128930(e->unk_02, p->unk_02, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(e, p)) return TRUE;
        }
    }
    return FALSE;
}


namespace n2 {
}
BOOL Unk_020994cc::func_02099690() {
    using namespace n2;
    Unk_020994cc_Ent *p = func_02099700();
    if (p && _ZN12Unk_020940a013func_02094218Ev(p)) return TRUE;
    return FALSE;
}


namespace n2 {
}
void Unk_020994cc::func_02099678(Unk_020994cc_Ent *e) {
    using namespace n2;
    Unk_020994cc_Ent *p = func_02099700();
    if (p) _ZN12Unk_020940a013func_020942b8EPv(p, e);
}


namespace n2 {
}
BOOL Unk_020994cc::func_02099668() {
    using namespace n2;
    if (unk_8e == 5) return TRUE;
    return FALSE;
}


namespace n2 {
}
BOOL Unk_020994cc::func_02099624(Unk_020994cc_Date *d) {
    using namespace n2;
    Unk_020994cc_Date local;
    if (d == NULL) {
        func_0209cf88(&local);
        d = &local;
    }
    if (func_02099668()) {
        s32 r = func_0209cd00(d, unk_8a);
        if (r >= 0 && r < 3) return TRUE;
        return FALSE;
    }
    return FALSE;
}


namespace n2 {
}
Unk_020994cc_Ent *Unk_020994cc::func_020994cc() {
    using namespace n2;
    u8 counts[5];
    s32 mask;
    s32 i, j, k;
    s32 grp, f1, f2;
    Unk_020994cc_Ent *pi, *e;
    u8 *cnt;
    s32 off;
    if (!func_02099668()) goto ret0;
    mask = 0;
    func_02115fb4(counts, 0, 5);
    for (i = 0; i < 5; i++) {
        if ((mask >> i) & 1) continue;
        e = unk_18 + i;
        if (!_ZN12Unk_020940a013func_02094218Ev(e)) continue;
        grp = 0;
        mask |= 1 << i;
        mask = (u8)mask;
        cnt = &counts[i];
        counts[i] = 1;
        j = i + 1;
        pi = (Unk_020994cc_Ent *)((u8 *)this + i * 0x16);
        for (; j < 5; j++) {
            f1 = 0;
            f2 = 0;
            off = j;
            off = off * 0x16;
            if (*(u16 *)((u8 *)pi + 0x18) == *(u16 *)((u8 *)this + off + 0x18)) {
                if (func_02128930(e->unk_02, ((Unk_020994cc_Ent *)((u8 *)unk_18 + off))->unk_02, 8) == 0) f2 = 1;
            }
            if (f2 && _ZN12Unk_020940a013func_020941e8EPS_(e, (Unk_020994cc_Ent *)((u8 *)unk_18 + off))) f1 = 1;
            if (f1) {
                grp |= 1 << j;
                grp = (u8)grp;
                mask |= 1 << j;
                mask = (u8)mask;
                (*cnt)++;
            }
        }
        if (grp) {
            for (k = i + 1; k < 5; k++) {
                if ((grp >> k) & 1) counts[k] = *cnt;
            }
        }
    }
    if (mask) {
        u8 *cp = counts;
        s32 maxc = 0;
        s32 best = -1;
        for (i = 0; i < 5; cp++, i++) {
            s32 c = *cp;
            if (c > maxc) {
                maxc = c;
                best = i;
            } else if (c != 0) {
                if (c == maxc) best = i;
            }
        }
        if ((u32)best < 5) return &unk_18[best];
    }
ret0:
    return NULL;
}


namespace n2 {
extern "C" s32 func_020994ac(u32 v, u8 *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (v >= *tbl) return i;
        tbl++;
    }
    return n;
}

extern "C" s32 func_0209949c(u32 v) {
    return func_020994ac(v, data_020d05a0, 4);
}

extern "C" s32 func_0209948c(u32 v) {
    return func_020994ac(v, data_020d0598, 4);
}

#pragma thumb off
extern "C" void func_020993dc(s32 *q) {
    s64 sum = (s64)q[0] * q[0];
    sum += (s64)q[1] * q[1];
    sum += (s64)q[2] * q[2];
    sum += (s64)q[3] * q[3];
    s32 len = func_01ffc4c8((s32)(sum >> 12));
    q[0] = (s32)(((s64)len * q[0] + 0x800) >> 12);
    q[1] = (s32)(((s64)len * q[1] + 0x800) >> 12);
    q[2] = (s32)(((s64)len * q[2] + 0x800) >> 12);
    q[3] = (s32)(((s64)len * q[3] + 0x800) >> 12);
}
#pragma thumb reset

extern "C" void func_02099318(s32 *a, s32 *m) {
    s32 xx = func_01ffcb0c(a[0], a[0]);
    s32 xy = func_01ffcb0c(a[0], a[1]);
    s32 xz = func_01ffcb0c(a[0], a[2]);
    s32 zz = func_01ffcb0c(a[2], a[2]);
    s32 zy = func_01ffcb0c(a[2], a[1]);
    s32 yy = func_01ffcb0c(a[1], a[1]);
    s32 wx = func_01ffcb0c(a[3], a[0]);
    s32 wy = func_01ffcb0c(a[3], a[1]);
    s32 wz = func_01ffcb0c(a[3], a[2]);
    m[0] = 0x1000 - 2 * (yy + zz);
    m[1] = 2 * (xy + wz);
    m[2] = 2 * (xz - wy);
    m[3] = 2 * (xy - wz);
    m[4] = 0x1000 - 2 * (xx + zz);
    m[5] = 2 * (zy + wx);
    m[6] = 2 * (wy + xz);
    m[7] = 2 * (zy - wx);
    m[8] = 0x1000 - 2 * (xx + yy);
}

extern "C" void func_02099300(s32 *a, s32 *b) {
    func_02099318(a, b);
    b[9] = 0;
    b[10] = 0;
    b[11] = 0;
}

extern "C" void func_02099218(s32 *a, s32 *b, s32 *out) {
    s32 o0, o1, o2, o3;
    o3 = func_01ffcb0c(a[3], b[3]) - func_01ffcb0c(a[0], b[0]) - func_01ffcb0c(a[1], b[1]) - func_01ffcb0c(a[2], b[2]);
    o0 = func_01ffcb0c(a[1], b[2]) + (func_01ffcb0c(a[3], b[0]) + func_01ffcb0c(a[0], b[3])) - func_01ffcb0c(a[2], b[1]);
    o1 = func_01ffcb0c(a[2], b[0]) + (func_01ffcb0c(a[3], b[1]) + func_01ffcb0c(a[1], b[3])) - func_01ffcb0c(a[0], b[2]);
    o2 = func_01ffcb0c(a[0], b[1]) + (func_01ffcb0c(a[3], b[2]) + func_01ffcb0c(a[2], b[3])) - func_01ffcb0c(a[1], b[0]);
    out[0] = o0;
    out[1] = o1;
    out[2] = o2;
    out[3] = o3;
}

extern "C" void func_02099214() {
}

extern "C" s32 func_020991fc() {
    return _ZN12Unk_02097d1c13func_02097e34Ev(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()));
}

extern "C" s32 func_020991e4() {
    return _ZN12Unk_02097d1c13func_02097e0cEv(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()));
}

extern "C" u16 func_020991b0() {
    u16 out[2];
    u8 obj[0xc];
    _ZN12Unk_0206338013func_0206338cEii(obj, 0, 3);
    func_02062f94(out, obj, 0, 0, 1, 1, 0);
    func_02063388(obj);
    return out[0];
}

extern "C" s32 func_02099160(u16 *a, s32 b) {
    u16 v[2];
    BOOL r = FALSE;
    v[0] = 0xfff1;
    if (*a == 0x156b) {
        v[0] = func_020991b0();
        r = TRUE;
    } else {
        func_02061478(&v[1], a);
        v[0] = v[1];
    }
    func_0209909c(v, r, b);
}

extern "C" BOOL func_02099124(u16 *a) {
    s32 r = func_02098ffc();
    if (r == -1) return FALSE;
    if (*a == 0xfff1) return TRUE;
    if (*a >= 0xa7 && *a <= 0xc6) return TRUE;
    func_02099160(a, r);
    return TRUE;
}

extern "C" s32 func_0209909c(u16 *a, s32 b, s32 c) {
    void *r6 = func_0209750c();
    if (func_02097f94(c)) {
        if (*a != 0xfff1 && b == 0) {
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r6), a, 0, 1);
        }
        if (b == 0) {
            if (Unk_02099124_R(a, 0x151f, 0x151f)) {
                u16 t = 0x1033;
                func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r6), &t, 0, 1);
            }
        }
        _ZN12Unk_02097d1c13func_02097f30EPtij(_ZN12Unk_0209865c13func_02098750Ev(r6), a, c, b);
    }
}

extern "C" void func_02099064(s32 c) {
    void *r4 = func_0209750c();
    if (func_02097f94(c)) {
        u16 t = 0xfff1;
        _ZN12Unk_02097d1c13func_02097f30EPtij(_ZN12Unk_0209865c13func_02098750Ev(r4), &t, c, 0);
    }
}

extern "C" u16 func_02099048(s32 i) {
    return *_ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()), i);
}

extern "C" BOOL func_02099014(u16 *a, s32 b) {
    u16 t;
    s32 r = func_02098ffc();
    if (r != -1) {
        func_02061478(&t, a);
        func_0209909c(&t, b, r);
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_02098ffc() {
    return _ZN12Unk_02097d1c13func_02097edcEv(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()));
}

extern "C" void func_02098ff4(Unk_02098ff4 *p) {
    p->unk_02 = 0;
    p->unk_00 = 0;
}

extern "C" s32 func_02098f90(Unk_02098ff4 *self, s32 v) {
    void *r7 = func_0209750c();
    s32 i;
    func_02098ff4(self);
    u16 *tbl = _ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(r7), 0);
    for (i = 0; i < 15; i++) {
        if (_ZN12Unk_02097d1c13func_02097e98Ei(_ZN12Unk_0209865c13func_02098750Ev(r7), i)) {
            if (v == func_0204bb18(tbl + i)) {
                self->unk_00 |= (1 << i);
                self->unk_02++;
            }
        }
    }
    return self->unk_02;
}

}

// ======== unk_0209865c.cpp (0x02098e90..0x02098f90) ========
class Unk_0209865c {
public:
    void *func_0209865c();
    void *func_02098750();
};
namespace n1 {
struct Unk_02098f30_Out {
    u16 flags;
    u8 count;
};
extern "C" {
Unk_0209865c *func_0209750c();
s32 func_02099c68(void *, void *, void *);
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *, u32);
s32 _ZN12Unk_02097d1c13func_02097e98Ei(void *, s32);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
void func_02098ff4(void *);
}

extern "C" s32 func_02098f30(Unk_02098f30_Out *out, s32 (*fn)(u16 *)) {
    Unk_0209865c *o = func_0209750c();
    func_02098ff4(out);
    u16 *p = _ZN12Unk_02097d1c13func_02097f6cEi(o->func_02098750(), 0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (_ZN12Unk_02097d1c13func_02097e98Ei(o->func_02098750(), i)) {
            if (fn(p + i)) {
                out->flags |= 1 << i;
                out->count++;
            }
        }
    }
    return out->count;
}

extern "C" s32 func_02098eb0(u16 *a) {
    Unk_0209865c *o = func_0209750c();
    u16 *p = _ZN12Unk_02097d1c13func_02097f6cEi(o->func_02098750(), 0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (_ZN12Unk_02097d1c13func_02097e98Ei(o->func_02098750(), i)) {
            s32 off = i << 1;
            u16 *e = (u16 *)((u32)p + off);
            BOOL r;
            if (func_0204b2d4(e)) {
                r = (func_0204b25c(e) == func_0204b25c(a)) ? TRUE : FALSE;
            } else {
                u32 x = *(u16 *)((u8 *)p + off);
                u32 y = *a;
                r = (x == y) ? TRUE : FALSE;
            }
            if (r) return i;
        }
    }
    return -1;
}

extern "C" s32 func_02098e90(void *a, void *b) {
    Unk_0209865c *o = func_0209750c();
    func_02099c68(o->func_0209865c(), a, b);
}
}

// ======== data (rest; this order gives the original layout) ========
extern const u32 data_020d05f0[5];
extern void *data_020e21b8[2];
extern const u32 data_020d05b4[2];
extern char data_020e21f0[10];
extern char data_020e21d8[9];
extern const u32 data_020d05e0[4];
extern char data_020e21e4[10];
extern const u8 data_020d05ac[8];
extern char data_020e21b0[8];
extern const u16 data_020d059c[2];
extern void *data_020e21a8[2];
extern const u16 data_020d05c8[5];
extern char data_020e21cc[9];
extern const u8 data_020d0594[3];
extern const Unk_0209b570_Ent data_020d0604[6];
extern const u8 data_020d05a4[6];
extern const u8 data_020d05a0[4];
extern void *data_020e2198[2];
extern const u8 data_020d0598[4];
extern Unk_0209a4f4_Rec data_020e21fc[10];
const u32 data_020d05f0[5] = {5, 5, 5, 7, 7};
void *data_020e21b8[2] = {(void *)func_0209a26c, 0};
const u32 data_020d05b4[2] = {0, 5};
char data_020e21f0[10] = "st_object";
char data_020e21d8[9] = "st_drink";
const u32 data_020d05e0[4] = {0, 10, 0x14, 0x15};
char data_020e21e4[10] = "st_sports";
const u8 data_020d05ac[8] = {3, 3, 5, 5, 3, 3, 2, 1};
char data_020e21b0[8] = "st_food";
const u16 data_020d059c[2] = {0x155f, 0x1560};
void *data_020e21a8[2] = {(void *)func_0209a3c8, 0};
const u16 data_020d05c8[5] = {0xd019, 0xd004, 0xd006, 0xd007, 0xd00c};
char data_020e21cc[9] = "st_music";
const u8 data_020d0594[3] = {0, 5, 8};
const Unk_0209b570_Ent data_020d0604[6] = {
    {data_020e21cc, 0x20}, {data_020e21e4, 0x20}, {data_020e21c0, 0x24},
    {data_020e21d8, 0x18}, {data_020e21f0, 0x28}, {data_020e21b0, 0x20},
};
const u8 data_020d05a4[6] = {2, 4, 6, 8, 10, 13};
const u8 data_020d05a0[4] = {0x0f, 0x0a, 6, 3};
void *data_020e2198[2] = {(void *)func_0209a2a4, 0};
const u8 data_020d0598[4] = {0x11, 0x0b, 6, 3};
Unk_0209a4f4_Rec data_020e21fc[10] = {
    {*(Unk_0209a4f4_Fn *)data_020e2190, 0, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 0},
    {*(Unk_0209a4f4_Fn *)data_020e2198, 0, 0},
    {0, 0, 1},
    {*(Unk_0209a4f4_Fn *)data_020e21a0, 0, 0},
    {*(Unk_0209a4f4_Fn *)data_020e21b8, 0, 0},
    {0, 0, 0},
    {*(Unk_0209a4f4_Fn *)data_020e21a8, 0, 0},
};
