#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov142_02294d18[];
extern u8 data_ov142_02294d20[];
extern u8 data_ov142_02294d28[];
extern u8 data_ov142_02294d30[];
extern u8 data_ov142_02294d38[];
extern u8 data_ov142_02294d58[];
extern u8 data_ov142_02294d78[];
extern u8 data_ov142_02294e08[];
extern u8 data_ov142_02294da8[];
void func_020ed188(void *p);
s32 func_020ed174();
void func_020020b8(u32 x);
void func_ov092_02291c5c();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_020021a0(u32 x);
void func_0206fca8();
void func_0206fcc8();
void func_020b8800(void *p);

void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 rect);
void *func_0209750c();
void func_0209872c(void *p);
void func_02098714(void *p);
BOOL func_02094bb4();
BOOL func_02094b9c();
s32 func_0206ed50();
BOOL func_0206ef00();
void func_020b85f8(void *p);
}


// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    BOOL func_ov002_022008fc(s32 a);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    s32 func_ov002_02200914();
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};




class Unk_ov142_020b8800 {
public:
    Unk_ov142_020b8800() { func_020b8800(this); }
    u32 unk_00[0x24 / 4];
};

class Unk_ov142_0206fcc8 {
public:
    Unk_ov142_0206fcc8();
    ~Unk_ov142_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov142_02202658 {
public:
    Unk_ov142_02202658();
    virtual ~Unk_ov142_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov142_02202f88 {
public:
    Unk_ov142_02202f88();
    virtual ~Unk_ov142_02202f88();
    virtual void vfunc_08();
    u32 unk_04[0x44 / 4];
};

class Unk_ov142_02203994 {
public:
    Unk_ov142_02203994();
    void func_ov002_02203510(s32 a);
    void func_ov002_022032b0(s32 a);
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov142_02294da8;
typedef void (Unk_ov142_02294da8::*Unk_ov142_02294da8_Fn)();

// Vtable 0x02294da8, size 0x2e10
class Unk_ov142_02294da8 : public Unk_ov002_022044e4 {
public:
    Unk_ov142_02294da8() : unk_e8(), unk_14c(), unk_194(), unk_2f8(), unk_678() {}
    virtual ~Unk_ov142_02294da8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups
    void func_ov142_02292018(u32 m);
    BOOL func_ov142_02292028(u32 m);
    void func_ov142_02292478();
    void func_ov142_02293098();
    void func_ov142_02293540(s32 a);
    void func_ov142_022935bc();
    void func_ov142_02293618(s32 a, s32 b, s32 c, u32 d, s32 e);
    void func_ov142_02293b78();
    void func_ov142_02293bd4();
    void func_ov142_022941c4();
    void func_ov142_02294234();
    void func_ov142_022942e8();
    void func_ov142_02294334();
    void func_ov142_0229435c();
    void func_ov142_022943b8();
    void func_ov142_022943c0();
    void func_ov142_022943d8();
    void func_ov142_02294424();
    // state-table targets (0x8d), other groups
    void func_ov142_022940c0();
    void func_ov142_0229408c();
    void func_ov142_02294058();
    void func_ov142_02294030();
    void func_ov142_02293fa8();
    void func_ov142_02293f5c();
    void func_ov142_02293f1c();
    void func_ov142_02293ee8();
    void func_ov142_02293ec0();
    void func_ov142_02293e8c();
    void func_ov142_02293e68();
    void func_ov142_02293dfc();
    void func_ov142_02293d54();
    void func_ov142_02293c50();
    // this group
    void func_ov142_022944c8();
    void func_ov142_02294514();
    void func_ov142_02294544();
    void func_ov142_02294584();
    void func_ov142_022945b4();
    void func_ov142_022945f4();
    void func_ov142_02294624();
    void func_ov142_0229465c();
    void func_ov142_022946bc();
    void func_ov142_02294750();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ u32 unk_98;
    /* 0x009c */ u32 unk_9c;
    /* 0x00a0 */ u8 unk_a0[0x14];
    /* 0x00b4 */ s16 unk_b4;
    /* 0x00b6 */ u16 unk_b6;
    /* 0x00b8 */ s16 unk_b8;
    /* 0x00ba */ u8 unk_ba[2];
    /* 0x00bc */ u8 unk_bc;
    /* 0x00bd */ u8 unk_bd;
    /* 0x00be */ u8 unk_be;
    /* 0x00bf */ u8 unk_bf;
    /* 0x00c0 */ u8 unk_c0[0x28];
    /* 0x00e8 */ Unk_ov142_02202658 unk_e8;
    /* 0x014c */ Unk_ov142_02202f88 unk_14c;
    /* 0x0194 */ Unk_ov142_02203994 unk_194;
    /* 0x02f8 */ Unk_ov142_0206fcc8 unk_2f8[14];
    /* 0x0678 */ Unk_ov142_020b8800 unk_678[4];
    /* 0x0708 */ u8 unk_708[0x2e10 - 0x708];
};

// ---- 0x022944c8 ----
void Unk_ov142_02294da8::func_ov142_022944c8() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0x20 - unk_9c);
    unk_94 = func_ov002_02200920();
    unk_98 = unk_94;
    func_ov142_02292478();
}

void Unk_ov142_02294da8::func_ov142_02294514() {
    if (func_ov002_02200908(-1)) {
        func_ov142_02293bd4();
        func_ov002_02200a60(2);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov142_02294da8::func_ov142_02294544() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(7);
        func_ov002_02200874(0, 0);
        unk_194.func_ov002_02203510(0x65);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov142_02294da8::func_ov142_02294584() {
    if (func_ov002_02200908(-1)) {
        func_ov142_02293b78();
        func_ov002_02200a60(2);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov142_02294da8::func_ov142_022945b4() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(5);
        func_ov002_02200874(0, 0);
        unk_194.func_ov002_022032b0(0x22);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov142_02294da8::func_ov142_022945f4() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov142_022944c8();
    }
}

void Unk_ov142_02294da8::func_ov142_02294624() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x18);
    func_ov142_022944c8();
    func_ov002_02200a50(3);
}

void Unk_ov142_02294da8::func_ov142_0229465c() {
    if (!func_ov142_02292028(1)) {
        func_ov142_02292018(1);
        func_ov142_02293618(0xb8, 0x16d, 4, 0xf, 0);
        func_ov142_022935bc();
    }
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov142_02293bd4();
    }
    func_ov142_022944c8();
}

void Unk_ov142_02294da8::func_ov142_022946bc() {
    func_ov142_022942e8();
    func_ov142_02294234();
    func_ov142_02293540(0);
    func_ov142_022941c4();
    func_ov002_022008e0(0xa, 4, 0, 0x18);
    func_020020b8(6);
    func_020020b8(4);
    func_ov142_022944c8();
    unk_194.func_ov002_02203510(0x65);
    func_ov002_02200a50(1);
}

BOOL Unk_ov142_02294da8::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov142_02294da8::vfunc_58() { return TRUE; }

BOOL Unk_ov142_02294da8::vfunc_54() { return TRUE; }

BOOL Unk_ov142_02294da8::vfunc_50() {
    func_ov142_022943c0();
    func_ov142_02294750();
    func_ov142_022943b8();
    return TRUE;
}

void Unk_ov142_02294da8::func_ov142_02294750() {
    static Unk_ov142_02294da8_Fn tbl[14] = {
        &Unk_ov142_02294da8::func_ov142_022940c0,
        &Unk_ov142_02294da8::func_ov142_0229408c,
        &Unk_ov142_02294da8::func_ov142_02294058,
        &Unk_ov142_02294da8::func_ov142_02294030,
        &Unk_ov142_02294da8::func_ov142_02293fa8,
        &Unk_ov142_02294da8::func_ov142_02293f5c,
        &Unk_ov142_02294da8::func_ov142_02293f1c,
        &Unk_ov142_02294da8::func_ov142_02293ee8,
        &Unk_ov142_02294da8::func_ov142_02293ec0,
        &Unk_ov142_02294da8::func_ov142_02293e8c,
        &Unk_ov142_02294da8::func_ov142_02293e68,
        &Unk_ov142_02294da8::func_ov142_02293dfc,
        &Unk_ov142_02294da8::func_ov142_02293d54,
        &Unk_ov142_02294da8::func_ov142_02293c50};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov142_02294da8::vfunc_4c() {
    static Unk_ov142_02294da8_Fn tbl[8] = {
        &Unk_ov142_02294da8::func_ov142_022946bc,
        &Unk_ov142_02294da8::func_ov142_0229465c,
        &Unk_ov142_02294da8::func_ov142_02294624,
        &Unk_ov142_02294da8::func_ov142_022945f4,
        &Unk_ov142_02294da8::func_ov142_022945b4,
        &Unk_ov142_02294da8::func_ov142_02294584,
        &Unk_ov142_02294da8::func_ov142_02294544,
        &Unk_ov142_02294da8::func_ov142_02294514};
    func_ov142_0229435c();
    (this->*tbl[unk_8c])();
    func_ov142_02294334();
    return TRUE;
}

BOOL Unk_ov142_02294da8::vfunc_24() {
    s32 y;
    s32 t;
    s32 d;
    s32 i;
    s32 j;
    s32 x;
    s32 pal;
    if (func_0206ef00()) {
        unk_e8.func_ov002_02202844();
    }
    if (!func_ov142_02292028(1)) {
        return FALSE;
    }
    unk_194.func_ov002_022036a4(unk_98);
    y = unk_94 + 0x60;
    if (!func_ov142_02292028(0x100)) {
        Unk_ov142_02202f88 *p = &unk_14c;
        p->vfunc_08();
        t = func_ov142_02292028(0x800) ? 9 : 8;
        x = y;
        if (func_ov142_02292028(0x2000)) x = y + 2;
        func_02088730(1, data_ov142_02294d18, 0x80, x, t, 1, 0);
        t = func_ov142_02292028(0x400) ? 9 : 8;
        x = y;
        if (func_ov142_02292028(0x1000)) x = y + 2;
        func_02088730(1, data_ov142_02294d28, 0x80, x, t, 1, 0);
        func_02088730(1, data_ov142_02294d20, 0x80, y, -1, 1, 0);
        func_02088730(1, data_ov142_02294d30, 0x80, y, -1, 1, 0);
    }
    x = 0x10;
    for (i = 0; i < 9; i++, x -= 2) {
        if (i == unk_bd) {
            pal = 6;
        } else {
            pal = 7;
        }
        func_02088730(1, data_ov142_02294e08 + x * 8, 0x80, y, pal, 1, 0);
        func_02088730(1, data_ov142_02294e08 + (x + 1) * 8, 0x80, y, pal, 1, 0);
    }
    func_02087e70(1, data_ov142_02294d38, 0x80, y, unk_bf, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    x = y - (unk_9c & 0xf);
    func_ov142_02293098();
    d = -1;
    if (unk_bc == unk_be) {
        d = unk_b8 - unk_b4;
        if (d < 0 || d >= 9) {
            d = -1;
        }
    }
    i = unk_b4;
    for (j = 0; j < 9; i++, x += 0x10, j++) {
        if (i >= 0 && d == j) {
            func_02087e70(1, data_ov142_02294d78, 0x80, x, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, data_ov142_02294d58, 0x80, x, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov142_02294da8::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov142_022943d8();
    return TRUE;
}

BOOL Unk_ov142_02294da8::vfunc_00() {
    func_ov142_02294424();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov142_02294da8 *func_ov142_02294bc8() { return new Unk_ov142_02294da8(); }

Unk_ov142_02294da8::~Unk_ov142_02294da8() {}
