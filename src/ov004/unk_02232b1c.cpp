#include "types.h"
#include "Unk_020d8c7c.h"

// ---- library sub-object with two inline vtable stores (0x0213b91c, 0x0213b954)
class Unk_0213b91c {
public:
    Unk_0213b91c() {}
    virtual void vfunc_00();
    u8 unk_04[0xc];
};

class Unk_0213b954 : public Unk_0213b91c {
public:
    Unk_0213b954() {}
    virtual void vfunc_00();
};

extern "C" {
typedef void *(*Unk_ov004_02232fac_Fn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, Unk_ov004_02232fac_Fn, Unk_ov004_02232fac_Fn);
void *__cxa_vec_cleanup(void *, s32, s32, Unk_ov004_02232fac_Fn);
void *func_02000c98(void *);
void *func_02000c8c(void *);
void func_ov004_02232608(void *);
void func_ov004_022325f0(void *);
void func_02054514(void *);
void func_020544d8(void *);
void func_0209c370(u16 *);
void func_0209c364(u16 *);
void func_0209c140(void *);
void func_0209c128(void *);
void func_0209c0c8(void *);
}

// ---- actor entity base (vtable 0x0224e774)
class Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e774();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual ~Unk_ov004_0224e774();

    /* 0x004 */ u8 f_04[0x54 - 4];
    /* 0x054 */ s32 f_54[4];
    /* 0x064 */ u8 f_64[0x154 - 0x64];
    /* 0x154 */ u8 pad_154[8];
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ s32 unk_160;
    /* 0x164 */ u8 pad_164[2];
    /* 0x166 */ u16 unk_166;
    /* 0x168 */ u8 f_168[0x1c4 - 0x168];
    /* 0x1c4 */ u16 unk_1c4;
    /* 0x1c6 */ u8 unk_1c6;
    /* 0x1c7 */ u8 unk_1c7;
    /* 0x1c8 */ u8 pad_1c8[2];
    /* 0x1ca */ u8 unk_1ca;
    /* 0x1cb */ u8 pad_1cb;
    /* 0x1cc */ s32 unk_1cc;
    /* 0x1d0 */ u8 f_1d0[0x18];
    /* 0x1e8 */ u8 pad_1e8[6];
    /* 0x1ee */ u8 unk_1ee;
    /* 0x1ef */ u8 unk_1ef;
    /* 0x1f0 */ u8 pad_1f0;
    /* 0x1f1 */ u8 unk_1f1;
    /* 0x1f2 */ u8 pad_1f2[0x1fc - 0x1f2];
};

class Unk_ov004_0224e864 : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e864();
    virtual ~Unk_ov004_0224e864();

    /* 0x1fc */ u8 unk_1fc;
    /* 0x1fd */ u8 pad_1fd;
    /* 0x1fe */ u8 unk_1fe;
    /* 0x1ff */ u8 pad_1ff;
    /* 0x200 */ u16 unk_200;
    /* 0x202 */ u8 pad_202[0x20c - 0x202];
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ u8 pad_210[0x21c - 0x210];
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u8 pad_222[2];
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[2];
    /* 0x22e */ u8 unk_22e;
    /* 0x22f */ u8 pad_22f[0x238 - 0x22f];
    /* 0x238 */ u8 unk_238;
    /* 0x239 */ u8 pad_239[0x254 - 0x239];
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 pad_257[0x278 - 0x257];
    /* 0x278 */ s32 unk_278;
    /* 0x27c */ s32 unk_27c;
    /* 0x280 */ u8 pad_280[4];
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
};

class Unk_ov004_0224e804 : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e804();
    virtual ~Unk_ov004_0224e804();

    /* 0x1fc */ u8 pad_1fc[0x20e - 0x1fc];
    /* 0x20e */ u8 unk_20e;
    /* 0x20f */ u8 pad_20f;
};

class Unk_ov004_0224e834 : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e834();
    virtual ~Unk_ov004_0224e834();

    /* 0x1fc */ Unk_0213b954 unk_1fc;
    /* 0x20c */ u8 pad_20c[0x211 - 0x20c];
    /* 0x211 */ u8 unk_211;
    /* 0x212 */ u8 pad_212[2];
};

class Unk_ov004_0224e72c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e72c();
    virtual ~Unk_ov004_0224e72c();
};

class Unk_ov004_0224e744 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e744();
    virtual ~Unk_ov004_0224e744();
};

class Unk_ov004_0224e7d4 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e7d4();
    virtual ~Unk_ov004_0224e7d4();
};

Unk_ov004_0224e804::~Unk_ov004_0224e804() {}

Unk_ov004_0224e804::Unk_ov004_0224e804() {
    unk_20e = 0;
}

Unk_ov004_0224e834::~Unk_ov004_0224e834() {}

Unk_ov004_0224e834::Unk_ov004_0224e834() {
    unk_211 = 2;
}

Unk_ov004_0224e72c::~Unk_ov004_0224e72c() {}

Unk_ov004_0224e72c::Unk_ov004_0224e72c() {
    unk_255 = 0;
    unk_256 = 0;
}

Unk_ov004_0224e744::~Unk_ov004_0224e744() {}

Unk_ov004_0224e744::Unk_ov004_0224e744() {
    unk_238 = 0;
}

Unk_ov004_0224e7d4::~Unk_ov004_0224e7d4() {}

Unk_ov004_0224e7d4::Unk_ov004_0224e7d4() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0x41;
    unk_278 = 0x14;
    unk_27c = 0xccd;
    unk_284 = 0;
}

Unk_ov004_0224e864::~Unk_ov004_0224e864() {}

Unk_ov004_0224e864::Unk_ov004_0224e864() {
    unk_1ee = 2;
    unk_1fe = 2;
    unk_200 = 3;
    unk_1fc = 0;
    unk_21c = 0;
    unk_220 = 0;
    unk_1ca = 0;
    unk_224 = 0x28;
    unk_22e = 0;
    unk_1cc = 0x3000;
    unk_228 = 0x1000;
    unk_1ef = 0;
    unk_254 = 0;
}

Unk_ov004_0224e774::~Unk_ov004_0224e774() {
    __cxa_vec_cleanup(f_1d0, 2, 0xc, func_02000c8c);
    func_0209c128(f_168);
    func_0209c364(&unk_166);
    func_020544d8(f_64);
    func_ov004_022325f0(f_04);
}

Unk_ov004_0224e774::Unk_ov004_0224e774() {
    func_ov004_02232608(f_04);
    func_02054514(f_64);
    func_0209c370(&unk_166);
    func_0209c140(f_168);
    __cxa_vec_ctor(f_1d0, 2, 0xc, func_02000c98, func_02000c8c);
    unk_15c = -1;
    unk_160 = 0;
    func_0209c0c8(f_168);
    unk_1c6 = 0;
    unk_1c7 = 1;
    unk_1f1 = 0;
    unk_1c4 = 0;
    for (s32 i = 0; i < 4; i++) f_54[i] = 0;
}

// ---- 0x810-byte manager object (vtable 0x0224e87c)
class Unk_ov004_0224e87c : public Unk_020d8c7c {
public:
    Unk_ov004_0224e87c();
    u8 unk_50[0x810 - 0x50];
};

// ---- record slot owner (used by the free functions below)
struct Unk_ov004_022333f8_Rec {
    u8 unk_00[0xa8];
};

struct Unk_ov004_022333f8_Owner {
    /* 0x000 */ s16 unk_00;
    /* 0x002 */ u8 pad_02[2];
    /* 0x004 */ Unk_ov004_022333f8_Rec unk_04[2];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ void *unk_158;
    /* 0x15c */ void *unk_15c;
};

struct Unk_ov004_02233138_Rec {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov004_02233330_Tbl {
    u8 *unk_00;
    s32 unk_04;
};

struct Unk_ov004_02233330_Time {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
};

struct Unk_ov004_02233244_Src {
    u8 pad_00[0xb];
    u8 unk_0b;
};

struct Unk_ov004_022332b8_Buf {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

typedef Unk_ov004_022333f8_Owner Unk_ov004_022333f8_O;
typedef Unk_ov004_022333f8_Rec Unk_ov004_022333f8_R;

extern "C" {
extern u8 data_ov004_02251f78;
extern Unk_ov004_02233138_Rec data_ov004_0224097c[];
extern Unk_ov004_02233138_Rec data_ov004_022406ac;
extern Unk_ov004_02233330_Tbl data_ov004_022406bc[];
extern Unk_ov004_02233244_Src data_021ed2b0;

void func_ov004_022326fc(void *);
void *func_ov004_02235718();
void *func_ov004_022355b0(void *, s32, s32);
s32 func_ov004_02206f74();
void func_ov004_02209108(void *);
void func_ov004_02209198(void *);
void func_ov004_02209150(void *);
s32 func_ov004_022335a8(Unk_ov004_022333f8_R *);
s32 func_ov004_022335b0(Unk_ov004_022333f8_R *);
s32 func_ov004_022335b8(Unk_ov004_022333f8_R *);
s32 func_ov004_022335d4(Unk_ov004_022333f8_R *);
void func_ov004_022335dc(Unk_ov004_022333f8_R *);
void func_ov004_022335fc(Unk_ov004_022333f8_R *);
void func_ov004_02233644(Unk_ov004_022333f8_R *);
s32 func_ov004_02233660(Unk_ov004_022333f8_R *, s32, s32);
s32 func_ov004_02233c3c();
void func_02003830(void *);
void func_02003840(void *);
void *func_02003878(void *, s32);
void func_020e8c88(void *);
void func_020e885c(void *);
void func_0209d498(void *);
s32 func_0209cc34(void *);
s32 func_0209cef4();
void func_0209cf18(void *);
}

extern "C" void func_ov004_02233058() {
    new Unk_ov004_0224e87c;
}

extern "C" void func_ov004_02233074(s32 a) {
    void *p = func_ov004_022355b0(func_ov004_02235718(), a, 0);
    if (p) {
        if (func_ov004_02206f74()) func_ov004_02209108(p);
    }
}

extern "C" void func_ov004_022330a0(s32 a) {
    void *p = func_ov004_022355b0(func_ov004_02235718(), a, 0);
    if (p) {
        if (func_ov004_02206f74()) func_ov004_02209198(p);
    }
}

extern "C" void func_ov004_022330cc(s32 a) {
    void *p = func_ov004_022355b0(func_ov004_02235718(), a, 0);
    if (p) {
        if (func_ov004_02206f74()) func_ov004_02209150(p);
    }
}

extern "C" Unk_ov004_02233138_Rec *func_ov004_02233138(s32 idx);

extern "C" u16 func_ov004_022330f8(s32 idx) {
    return func_ov004_02233138(idx)->unk_06;
}

extern "C" u16 func_ov004_02233108(s32 idx) {
    return func_ov004_02233138(idx)->unk_04;
}

extern "C" u16 func_ov004_02233118(s32 idx) {
    return func_ov004_02233138(idx)->unk_02;
}

extern "C" u16 func_ov004_02233128(s32 idx) {
    return func_ov004_02233138(idx)->unk_00;
}

extern "C" Unk_ov004_02233138_Rec *func_ov004_02233138(s32 idx) {
    if (idx < 0x6e9) return &data_ov004_0224097c[idx];
    return &data_ov004_022406ac;
}

extern "C" BOOL func_ov004_022333f8(Unk_ov004_022333f8_O *o, s32 a, s32 b);
extern "C" u8 func_ov004_02233330();
extern "C" s32 func_ov004_02233244(void *);
extern "C" s32 func_ov004_022331a0(Unk_ov004_022333f8_O *o);
extern "C" s32 func_ov004_022331b8(Unk_ov004_022333f8_O *o);

extern "C" void func_ov004_022333a8(Unk_ov004_022333f8_O *o) {
    s32 t = func_ov004_02233330();
    if (t == 0xff) {
        s32 u = func_ov004_02233244(o);
        if (u != func_ov004_022331a0(o)) {
            func_ov004_022333f8(o, t, u);
            func_ov004_02233c3c();
        }
    } else {
        if (t != func_ov004_022331b8(o)) {
            func_ov004_022333f8(o, t, 0xff);
            func_ov004_02233c3c();
        }
    }
}

extern "C" s32 func_ov004_02233158(Unk_ov004_022333f8_O *o) {
    return func_ov004_022335a8(&o->unk_04[o->unk_00 & 1]);
}

extern "C" s32 func_ov004_02233170(Unk_ov004_022333f8_O *o) {
    return func_ov004_022335b0(&o->unk_04[o->unk_00 & 1]);
}

extern "C" s32 func_ov004_02233188(Unk_ov004_022333f8_O *o) {
    return (s32)o->unk_15c;
}

extern "C" s32 func_ov004_02233194(Unk_ov004_022333f8_O *o) {
    return o->unk_154;
}

extern "C" s32 func_ov004_022331a0(Unk_ov004_022333f8_O *o) {
    return func_ov004_022335b8(&o->unk_04[o->unk_00 & 1]);
}

extern "C" s32 func_ov004_022331b8(Unk_ov004_022333f8_O *o) {
    return func_ov004_022335d4(&o->unk_04[o->unk_00 & 1]);
}

extern "C" BOOL func_ov004_022331d0(Unk_ov004_022333f8_O *o) {
    BOOL r = FALSE;
    if (o->unk_00 != -1) r = TRUE;
    return r;
}

extern "C" void func_ov004_022331e0(Unk_ov004_022333f8_O *o) {
    o->unk_00 = -1;
    o->unk_154 = 0;
    if (data_ov004_02251f78) {
        if (o->unk_158) {
            if (o->unk_15c) {
                func_02003830(o->unk_15c);
                o->unk_15c = 0;
            }
            func_020e8c88(o->unk_158);
            o->unk_158 = 0;
        }
    }
    func_ov004_022335dc(&o->unk_04[0]);
    func_ov004_022335dc(&o->unk_04[1]);
}

extern "C" s32 func_ov004_022332b8();

extern "C" s32 func_ov004_02233244(void *) {
    s32 t = data_021ed2b0.unk_0b & 0x1f;
    if (t <= 6) return 0;
    if (t <= 9) return 1;
    if (t <= 15) {
        if (func_ov004_022332b8()) return 8;
        return 2;
    }
    if (t <= 18) return 3;
    if (t <= 21) return 4;
    if (t <= 25) return 5;
    if (t <= 28) {
        if (func_ov004_022332b8()) return 9;
        return 6;
    }
    if (func_ov004_022332b8()) return 10;
    return 7;
}

extern "C" s32 func_ov004_022332b8() {
    Unk_ov004_022332b8_Buf l;
    s32 r;
    l.unk_00 = 0;
    l.unk_04 = 0;
    func_0209d498(&l);
    l.unk_08 = 1;
    l.unk_09 = 1;
    l.unk_0a = 0;
    l.unk_0b = 0;
    l.unk_0a = ((u8 *)&l)[5];
    l.unk_09 = ((u8 *)&l)[4];
    l.unk_08 = ((u8 *)&l)[3];
    r = func_0209cc34(&l.unk_08);
    switch (r) {
    case 0:
    case 1:
    case 2:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 func_ov004_02233330() {
    Unk_ov004_02233330_Tbl *t = &data_ov004_022406bc[func_0209cef4()];
    Unk_ov004_02233330_Time l;
    s32 i;
    u16 y;
    func_0209cf18(&l);
    i = t->unk_04 - 1;
    y = l.unk_00;
    for (; i >= 0; i--) {
        u8 *e = t->unk_00 + i * 3;
        l.unk_03 = e[1];
        l.unk_02 = e[2];
        if (y >= *(u16 *)&l.unk_02) return e[0];
    }
    return 0xff;
}

extern "C" void func_ov004_02233380(Unk_ov004_022333f8_O *o) {
    if (func_ov004_022331d0(o)) func_ov004_022335fc(&o->unk_04[o->unk_00 & 1]);
}

extern "C" BOOL func_ov004_022333f8(Unk_ov004_022333f8_O *o, s32 a, s32 b) {
    s8 idx;
    func_ov004_02233644(&o->unk_04[o->unk_00 & 1]);
    idx = (o->unk_00 + 1) & 1;
    if (func_ov004_02233660(&o->unk_04[idx], a, b)) {
        o->unk_00 = idx;
        if (data_ov004_02251f78) {
            if (o->unk_158) {
                if (o->unk_15c) {
                    func_02003830(o->unk_15c);
                    o->unk_15c = 0;
                }
                func_020e885c(o->unk_158);
                o->unk_15c = func_02003878(o->unk_158, a);
                if (o->unk_15c) func_02003840(o->unk_15c);
            }
        }
        return TRUE;
    }
    return FALSE;
}
