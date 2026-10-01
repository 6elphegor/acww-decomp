#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020dd458 {
public:
    Unk_020dd458();
    virtual ~Unk_020dd458();

    u8 func_02065578();
    u32 func_02065588(u32 v, u32 w);
    void func_02065b28();
    void func_02065e70(Unk_020dd458 *src);

    /* 0x04 */ u8 unk_04[0xec];
    /* 0xf0 */ u16 unk_f0;
    /* 0xf2 */ u16 pad_f2;
};

// Array of ten elements, indexed table getter at 0x02097020.
class Unk_02097020 {
public:
    Unk_02097020();
    ~Unk_02097020();
    Unk_020dd458 *func_02097020(s32 i);
    void func_02096fd4();
    BOOL func_02096fa0(u32 mask);
    void func_02096fb8(u32 mask);
    u8 *func_02096fc8();

    /* 0x000 */ Unk_020dd458 unk_00[10];
    /* 0x988 */ u8 unk_988;
    /* 0x989 */ u8 unk_989;
    /* 0x98a */ u8 unk_98a;
    /* 0x98b */ u8 unk_98b;
    /* 0x98c */ u16 unk_98c;
    /* 0x98e */ u16 pad_98e;
};

class Unk_020970b8 {
public:
    Unk_020970b8();
    ~Unk_020970b8();
    Unk_020dd458 *func_020970b8(s32 i);
    void func_02097078(u32 v);
    u32 func_02097084();
    void func_02097090();

    /* 0x000 */ Unk_020dd458 unk_00[10];
    /* 0x988 */ u16 unk_988;
    /* 0x98a */ u16 pad_98a;
};

class Unk_02096d10 {
public:
    void func_02096d10(u32 v);
    u8 func_02096d1c();
    BOOL func_02096d28(s32 i);
    void func_02096d4c(s32 i);
    void func_02096d6c(s32 i);
    BOOL func_02096d8c(u32 mask);
    void func_02096d9c(u32 mask);
    void func_02096da4(s32 *v);
    BOOL func_02096dbc(s32 *v);
    void func_02096e00();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04[15];
    /* 0x13 */ u8 pad_13;
};

class Unk_02096e28 : public Unk_020dd458 {
public:
    void func_02096e28();
    u8 *func_02096e50();

    /* 0xf4 */ u8 unk_f4;
    /* 0xf5 */ u8 unk_f5;
    /* 0xf6 */ u8 unk_f6;
    /* 0xf7 */ u8 unk_f7;
};

class Unk_02096e78 : public Unk_020dd458 {
public:
    s32 func_02096e78();
    void func_02096ed4();
    BOOL func_02096ee8(s32 i);
    void func_02096f10(s32 i);
    void func_02096f30();

    /* 0xf4 */ u8 unk_f4[5];
};

class Unk_02096f68 {
public:
    void func_02096f68();
    Unk_020dd458 *func_02096f88(s32 i);

    /* 0x000 */ Unk_020dd458 unk_00[75];
};

// Vtable at 0x020e1db0.
class Unk_020e1db0 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    void func_02096c58(u32 mask);
    void func_02096c68(u32 mask);
    BOOL func_02096c78(u32 mask);
    void func_02096c8c();

    /* 0x50 */ u16 unk_50;
    /* 0x52 */ u16 pad_52;
};

extern "C" {
void func_020966f8(void *);
s32 func_020b50f4(void);
s32 func_02063b8c(s32);
void func_02065c94(void *);
void _ZN12Unk_020dd458D1Ev(void *);
void _ZN12Unk_020dd458C1Ev(void *);
}

Unk_020970b8::Unk_020970b8() {}

Unk_020970b8::~Unk_020970b8() {}

Unk_020dd458 *Unk_020970b8::func_020970b8(s32 i) {
    if (i >= 0 && i < 10) {
        return &unk_00[i];
    }
    return NULL;
}

void Unk_020970b8::func_02097090() {
    s32 i;
    for (i = 0; i < 10; i++) {
        func_02065c94(&unk_00[i]);
    }
    unk_988 = 0;
}

u32 Unk_020970b8::func_02097084() {
    return unk_988;
}

void Unk_020970b8::func_02097078(u32 v) {
    unk_988 = v;
}

Unk_02097020::Unk_02097020() {}

Unk_02097020::~Unk_02097020() {}

Unk_020dd458 *Unk_02097020::func_02097020(s32 i) {
    if (i >= 0 && i < 10) {
        return &unk_00[i];
    }
    return NULL;
}

void Unk_02097020::func_02096fd4() {
    s32 i;
    for (i = 0; i < 10; i++) {
        func_02065c94(&unk_00[i]);
    }
    unk_98c = 0;
    unk_988 = 1;
    unk_989 = 1;
    unk_98a = 0;
    unk_98b = 0;
}

u8 *Unk_02097020::func_02096fc8() {
    return &unk_988;
}

void Unk_02097020::func_02096fb8(u32 mask) {
    unk_98c = unk_98c | mask;
}

BOOL Unk_02097020::func_02096fa0(u32 mask) {
    if (unk_98c & mask) {
        return TRUE;
    }
    return FALSE;
}

Unk_020dd458 *Unk_02096f68::func_02096f88(s32 i) {
    if (i >= 0 && i < 3) {
        return &unk_00[i * 25];
    }
    return NULL;
}

void Unk_02096f68::func_02096f68() {
    s32 i;
    for (i = 0; i < 75; i++) {
        func_02065c94(&unk_00[i]);
    }
}

extern "C" Unk_020dd458 *func_02096f58(Unk_020dd458 *p) {
    _ZN12Unk_020dd458C1Ev(p);
    return p;
}

extern "C" Unk_020dd458 *func_02096f48(Unk_020dd458 *p) {
    _ZN12Unk_020dd458D1Ev(p);
    return p;
}

extern "C" void func_02096f44() {}

void Unk_02096e78::func_02096f30() {
    func_02065c94(this);
    func_02096ed4();
}

void Unk_02096e78::func_02096f10(s32 i) {
    u8 *p = unk_f4;
    s32 k = i >> 3;
    p[k] |= (1 << (i & 7));
}

BOOL Unk_02096e78::func_02096ee8(s32 i) {
    BOOL r = TRUE;
    if (((r << (i & 7)) & unk_f4[i >> 3]) == 0) {
        r = FALSE;
    }
    return r;
}

void Unk_02096e78::func_02096ed4() {
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_f4[i] = 0;
    }
}

s32 Unk_02096e78::func_02096e78() {
    s32 i;
    s32 cnt = 0;
    i = cnt;
    for (; i < 0x28; i++) {
        if (func_02096ee8(i) == 0) {
            cnt++;
        }
    }
    if (cnt == 0) {
        func_02096ed4();
        cnt = 0x28;
    }
    s32 r = func_02063b8c(cnt);
    for (cnt = 0; cnt < 0x28; cnt++) {
        if (func_02096ee8(cnt) == 0) {
            if (r > 0) {
                r--;
            } else {
                return cnt;
            }
        }
    }
    return 0;
}

extern "C" Unk_020dd458 *func_02096e68(Unk_020dd458 *p) {
    _ZN12Unk_020dd458C1Ev(p);
    return p;
}

extern "C" Unk_020dd458 *func_02096e58(Unk_020dd458 *p) {
    _ZN12Unk_020dd458D1Ev(p);
    return p;
}

extern "C" void func_02096e54() {}

u8 *Unk_02096e28::func_02096e50() {
    return &unk_f4;
}

void Unk_02096e28::func_02096e28() {
    func_02065c94(this);
    unk_f4 = 1;
    unk_f5 = 1;
    unk_f6 = 0;
    unk_f7 = 0;
}

extern "C" void func_02096e24() {}

extern "C" void func_02096e20() {}

void Unk_02096d10::func_02096e00() {
    s32 i;
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
    for (i = 0; i < 15; i++) {
        unk_04[i] = 0;
    }
    unk_03 = 100;
}

BOOL Unk_02096d10::func_02096dbc(s32 *v) {
    if (func_02096d8c(0x80)) {
        if (unk_02 == v[0] && unk_01 == v[1] && unk_00 == v[2]) {
            return TRUE;
        }
        return FALSE;
    }
    func_02096da4(v);
    return TRUE;
}

void Unk_02096d10::func_02096da4(s32 *v) {
    unk_02 = v[0];
    unk_01 = v[1];
    unk_00 = v[2];
    func_02096d9c(0x80);
}

void Unk_02096d10::func_02096d9c(u32 mask) {
    unk_03 = unk_03 | mask;
}

BOOL Unk_02096d10::func_02096d8c(u32 mask) {
    if (unk_03 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02096d10::func_02096d6c(s32 i) {
    u8 *p = unk_04;
    s32 k = i >> 3;
    p[k] |= (1 << (i & 7));
}

void Unk_02096d10::func_02096d4c(s32 i) {
    u8 *p = unk_04;
    s32 k = i >> 3;
    p[k] &= ~(1 << (i & 7));
}

BOOL Unk_02096d10::func_02096d28(s32 i) {
    BOOL r = TRUE;
    if (((r << (i & 7)) & unk_04[i >> 3]) == 0) {
        r = FALSE;
    }
    return r;
}

u8 Unk_02096d10::func_02096d1c() {
    return unk_03 & 0x7f;
}

void Unk_02096d10::func_02096d10(u32 v) {
    unk_03 = v | (unk_03 & 0x80);
}

extern "C" Unk_020e1db0 *func_02096ce4() {
    return new Unk_020e1db0();
}

BOOL Unk_020e1db0::vfunc_00() {
    unk_50 = 0;
    func_02096c68(1);
    return TRUE;
}

BOOL Unk_020e1db0::vfunc_18() {
    if (func_02096c78(1)) {
        if (func_020b50f4()) {
            func_02096c8c();
        }
        func_02096c58(1);
    }
    return TRUE;
}

BOOL Unk_020e1db0::vfunc_24() {
    return TRUE;
}

BOOL Unk_020e1db0::vfunc_0c() {
    return TRUE;
}

void Unk_020e1db0::func_02096c8c() {
    func_020966f8(this);
}

BOOL Unk_020e1db0::func_02096c78(u32 mask) {
    if (unk_50 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e1db0::func_02096c68(u32 mask) {
    unk_50 = unk_50 | mask;
}

void Unk_020e1db0::func_02096c58(u32 mask) {
    unk_50 = unk_50 & ~mask;
}

