#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
extern u8 data_ov122_0229a008[];
extern u16 data_ov122_0229a010[];
void func_0200402c(u32 v);
s32 func_020512e0(void *p, s32 n);
void func_02050e90(void *p, void *q, u32 n);
void func_020a78a4(void *p);
void func_020a7aa0(void *p, void *q, s32 a, s32 b);
s32 func_020b30bc(void *p);
void func_020a77f8(void *p, void *q);
void func_0209750c();
void func_02098750();
void *func_02097e00();
void func_02065470(void *a, void *b);
s32 func_0206cf34(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_0220298c(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202a18(void *p, s32 a, s32 b, u32 c);
void func_ov002_02202d00(void *p, u32 v);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_022020cc(void *p, u32 a, u32 b);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 v);
void func_ov002_022030ac(void *p, u32 v);
void func_ov002_02202e54(void *p);
BOOL func_ov002_02202f18(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov095_022924f0(void *s);
s32 func_ov095_02292580(void *s);
s32 func_ov095_02292544(void *s);
s32 func_ov095_02295194(void *s);
}

class Unk_ov122_sub_02065a1c {
public:
    ~Unk_ov122_sub_02065a1c();
    u32 unk_00[0x210 / 4];
};

class Unk_ov122_sub_022046b0 {
public:
    ~Unk_ov122_sub_022046b0();
    u32 unk_00[0x48 / 4];
};

class Unk_ov122_sub_020ddefc {
public:
    ~Unk_ov122_sub_020ddefc();
    u32 unk_00[0x94 / 4];
};

class Unk_ov122_sub_020dd468 {
public:
    ~Unk_ov122_sub_020dd468();
    u32 unk_00[0x138 / 4];
};

class Unk_ov122_sub_02204558 {
public:
    ~Unk_ov122_sub_02204558();
    u32 unk_00[0x2f4 / 4];
};

class Unk_ov122_sub_022046cc {
public:
    ~Unk_ov122_sub_022046cc();
    u32 unk_00[0x164 / 4];
};

class Unk_ov122_sub_0206fca8 {
public:
    ~Unk_ov122_sub_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov122_sub_022043e8 {
public:
    ~Unk_ov122_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov122_sub_02202640 {
public:
    virtual ~Unk_ov122_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

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

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

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

// Vtable 0x0229a1b8
class Unk_ov122_0229a1b8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov122_0229a1b8();

    void func_ov122_02296968(u32 mask);
    void func_ov122_02296978(u32 mask);
    BOOL func_ov122_02296988(u32 mask);
    void func_ov122_0229699c();
    void func_ov122_022969d4(u8 *src, u32 n);
    void func_ov122_02296a28();
    void func_ov122_02296a48();
    void func_ov122_02296a7c(u32 a);
    void func_ov122_02296aa4();
    void func_ov122_02296af0();
    void func_ov122_02296b10();
    void func_ov122_02296b34();
    void func_ov122_02296b54();
    void func_ov122_02296bbc(s32 a, s32 b);
    void func_ov122_02296bf0();
    void func_ov122_02296c70();
    void func_ov122_02296c94();
    void func_ov122_02296ce8(u32 i);
    void func_ov122_02296d28();
    void func_ov122_02296d34();
    void func_ov122_02296d68();
    BOOL func_ov122_02296de4();
    void func_ov122_02296df4(s32 v);
    void func_ov122_02296e08(s32 v);
    void func_ov122_02296e28();
    void func_ov122_02296e80();
    BOOL func_ov122_02296ee0();
    void func_ov122_02296f30(u32 v);
    u8 func_ov122_02296f40();
    u32 func_ov122_02296f68();
    u8 *func_ov122_02296f98();
    u8 *func_ov122_02296fd4();
    BOOL func_ov122_02297020(void *pad, s32 flag);

    // out-of-range callees (declarations only)
    u8 func_ov122_02297630(u32 *p);
    u8 func_ov122_022976c8(s32 i, u32 *p);
    u8 func_ov122_022977bc(u32 v, u8 *mode);

    /* 0x91 */ u8 unk_91[0x9c - 0x91];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u8 unk_a4[4];
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad[2];
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[3];
    /* 0xbc */ u8 *unk_bc;
    /* 0xc0 */ u8 unk_c0[0x23fc - 0xc0];
    /* 0x23fc */ Unk_ov122_sub_0206fca8 unk_23fc[2];
    /* 0x247c */ u8 unk_247c[0x3c7c - 0x247c];
    /* 0x3c7c */ Unk_ov122_sub_02065a1c unk_3c7c;
    /* 0x3e8c */ Unk_ov122_sub_022046b0 unk_3e8c;
    /* 0x3ed4 */ Unk_ov122_sub_02202640 unk_3ed4;
    /* 0x3f38 */ Unk_ov122_sub_020ddefc unk_3f38;
    /* 0x3fcc */ Unk_ov122_sub_020dd468 unk_3fcc;
    /* 0x4104 */ Unk_ov122_sub_02204558 unk_4104;
    /* 0x43f8 */ Unk_ov122_sub_022046cc unk_43f8;
    /* 0x455c */ Unk_ov122_sub_022043e8 unk_455c;
};

// ---------------------------------------------------------------------------------------------

Unk_ov122_0229a1b8::~Unk_ov122_0229a1b8() {}

void Unk_ov122_0229a1b8::func_ov122_02296968(u32 mask) { unk_a8 = unk_a8 & ~mask; }

void Unk_ov122_0229a1b8::func_ov122_02296978(u32 mask) { unk_a8 = unk_a8 | mask; }

BOOL Unk_ov122_0229a1b8::func_ov122_02296988(u32 mask) {
    if (unk_a8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov122_0229a1b8::func_ov122_0229699c() {
    func_ov122_022969d4(unk_bc + 0x34, 0x18);
    func_ov122_022969d4(unk_bc + 0xcc, 0x20);
    func_ov122_022969d4(unk_bc + 0x4c, 0x80);
}

void Unk_ov122_0229a1b8::func_ov122_022969d4(u8 *src, u32 n) {
    func_020a78a4(&unk_3fcc);
    func_020a7aa0(&unk_3f38, &unk_3fcc, 0, 0);
    if (func_020b30bc(&unk_3f38)) {
        func_020a77f8(&unk_3fcc, &unk_3f38);
        func_02050e90(&unk_3fcc, src, n);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02296a28() {
    func_0209750c();
    func_02098750();
    func_02065470(func_02097e00(), unk_bc);
}

void Unk_ov122_0229a1b8::func_ov122_02296a48() {
    func_0200402c(0x28);
    unk_b6 = 0xf;
    func_ov002_02202064(&unk_4104, 1);
    func_ov002_02200a58(0x18);
    func_ov122_02296c70();
}

void Unk_ov122_0229a1b8::func_ov122_02296a7c(u32 a) {
    func_ov002_022020cc(&unk_4104, unk_b7, a);
    func_ov002_02200a58(0x16);
}

void Unk_ov122_0229a1b8::func_ov122_02296aa4() {
    s32 a = func_ov002_022014a4(&unk_4104);
    s32 b = func_ov002_02201498(&unk_4104, unk_b6);
    func_ov002_02202a18(&unk_3ed4, a, b, 2);
    unk_b4 = 0x14;
    func_ov002_02200a58(7);
}

void Unk_ov122_0229a1b8::func_ov122_02296af0() {
    func_ov002_02202a78(&unk_3ed4);
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_02296b10() {
    func_ov095_02295194(unk_c0);
    func_ov002_02202af0(&unk_3ed4);
    func_ov002_02200a58(0xa);
}

void Unk_ov122_0229a1b8::func_ov122_02296b34() {
    func_ov002_02202b68(&unk_3ed4);
    func_ov002_02200a58(8);
}

void Unk_ov122_0229a1b8::func_ov122_02296b54() {
    if (func_ov122_02296988(0x100)) {
        func_ov002_02202a40(&unk_3ed4, unk_9c, unk_a0 - unk_b3);
    } else {
        s32 a = func_ov095_02292580(unk_c0);
        s32 b = func_ov095_02292544(unk_c0);
        func_ov002_02202a40(&unk_3ed4, a, b);
    }
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_02296bbc(s32 a, s32 b) {
    func_ov002_0220298c(&unk_3ed4, a, b, 3, 2);
    unk_b4 = unk_8d;
    func_ov002_02200a58(7);
}

void Unk_ov122_0229a1b8::func_ov122_02296bf0() {
    if (func_ov122_02296988(0x100)) {
        func_ov002_0220298c(&unk_3ed4, unk_9c, unk_a0 - unk_b3, 3, 2);
        unk_b4 = 0xc;
    } else {
        s32 a = func_ov095_02292580(unk_c0);
        s32 b = func_ov095_02292544(unk_c0);
        func_ov002_0220298c(&unk_3ed4, a, b, 3, 2);
        unk_b4 = 6;
    }
    func_ov002_02200a58(7);
}

void Unk_ov122_0229a1b8::func_ov122_02296c70() {
    func_ov002_02202d00(&unk_3ed4, 0);
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_02296c94() {
    func_ov122_02296968(0x100);
    func_ov095_022924f0(unk_c0);
    s32 a = func_ov095_02292580(unk_c0);
    s32 b = func_ov095_02292544(unk_c0);
    func_ov002_02202a40(&unk_3ed4, a, b);
    func_ov002_02202d00(&unk_3ed4, 1);
    func_ov122_02296af0();
}

void Unk_ov122_0229a1b8::func_ov122_02296ce8(u32 i) {
    func_ov002_022030ac(&unk_43f8, data_ov122_0229a008[i]);
    unk_b8 = i;
    func_ov002_02200a58(0x19);
    func_0200402c(data_ov122_0229a010[i]);
}

void Unk_ov122_0229a1b8::func_ov122_02296d28() { func_0200402c(0x34); }

void Unk_ov122_0229a1b8::func_ov122_02296d34() {
    s32 v = unk_a0 - unk_b3;
    if (v < 0x18) {
        func_ov122_02296df4(unk_b3 - (0x18 - v));
    } else if (v > 0x30) {
        func_ov122_02296df4(unk_b3 + (v - 0x30));
    }
}

void Unk_ov122_0229a1b8::func_ov122_02296d68() {
    u32 b3 = unk_b3;
    u32 b2 = unk_b2;
    if (b2 == b3) {
        func_ov122_02296968(0x800);
    } else if (b2 < b3) {
        *(volatile u8 *)&unk_b2 = *(volatile u8 *)&unk_b2 + 8;
        u32 t3 = *(volatile u8 *)&unk_b3;
        if (*(volatile u8 *)&unk_b2 > t3) {
            unk_b2 = t3;
        }
    } else if (b2 < 8) {
        unk_b2 = b3;
    } else {
        *(volatile u8 *)&unk_b2 = *(volatile u8 *)&unk_b2 - 8;
        u32 t3 = *(volatile u8 *)&unk_b3;
        if (*(volatile u8 *)&unk_b2 < t3) {
            unk_b2 = t3;
        }
    }
}

BOOL Unk_ov122_0229a1b8::func_ov122_02296de4() { return func_ov122_02296988(0x800); }

void Unk_ov122_0229a1b8::func_ov122_02296df4(s32 v) {
    unk_b3 = v;
    func_ov122_02296978(0x800);
}

void Unk_ov122_0229a1b8::func_ov122_02296e08(s32 v) {
    unk_b2 = v;
    unk_b3 = unk_b2;
    func_ov122_02296978(0x800);
}

void Unk_ov122_0229a1b8::func_ov122_02296e28() {
    s32 n;
    s32 old = unk_b2;
    n = old;
    u32 k = data_021f47d8[0];
    if (k & 0x40) {
        n = old - 4;
    } else if (k & 0x80) {
        n = old + 4;
    }
    if (n < 0) {
        n = 0;
    }
    if (n > 0x58) {
        n = 0x58;
    }
    if (n != old) {
        func_ov002_02202e54(&unk_3e8c);
    }
    func_ov122_02296e08(n);
}

void Unk_ov122_0229a1b8::func_ov122_02296e80() {
    s32 n = unk_b1 + (((s32)(data_021ef5ec - unk_b0) >> 1) << 2);
    if (n < 0) {
        n = 0;
    }
    if (n > 0x58) {
        n = 0x58;
    }
    func_ov122_02296e08(n);
    s32 d = unk_af - n;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(&unk_3e8c);
        unk_af = n;
    }
}

BOOL Unk_ov122_0229a1b8::func_ov122_02296ee0() {
    if (func_ov002_02202f18(&unk_3e8c, data_021ef5f0, data_021ef5ec)) {
        unk_b0 = data_021ef5ec;
        unk_b1 = unk_b2;
        unk_af = unk_b2;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov122_0229a1b8::func_ov122_02296f30(u32 v) {
    unk_ac = v;
    unk_ab = 0x10;
}

u8 Unk_ov122_0229a1b8::func_ov122_02296f40() {
    if (unk_aa == 1) {
        return unk_ac + unk_bc[0xec];
    }
    return unk_ac;
}

u32 Unk_ov122_0229a1b8::func_ov122_02296f68() {
    switch (unk_aa) {
    case 0:
    case 1:
        return 0x18;
    case 2:
        return 0x80;
    case 3:
        return 0x20;
    default:
        return 0;
    }
}

u8 *Unk_ov122_0229a1b8::func_ov122_02296f98() {
    switch (unk_aa) {
    case 0:
    case 1:
        return unk_bc + 0x34;
    case 2:
        return unk_bc + 0x4c;
    case 3:
        return unk_bc + 0xcc;
    default:
        return 0;
    }
}

u8 *Unk_ov122_0229a1b8::func_ov122_02296fd4() {
    switch (unk_aa) {
    case 0:
        return unk_bc + 0x34;
    case 1:
        return unk_bc + 0x34 + unk_bc[0xec];
    case 2:
        return unk_bc + 0x4c;
    case 3:
        return unk_bc + 0xcc;
    default:
        return 0;
    }
}

BOOL Unk_ov122_0229a1b8::func_ov122_02297020(void *pad, s32 flag) {
    if (pad == 0) {
        return FALSE;
    }
    u8 mode = unk_aa;
    u8 idx = unk_ac;
    s32 cnt = func_0206cf34(&unk_3c7c);
    s32 lim;
    s32 sel;
    s32 n;
    u32 saved;
    switch (mode) {
    case 0:
    case 1:
        sel = -1;
        lim = sel;
        if (func_ov002_0220127c(pad)) {
            sel = 0;
        }
        break;
    case 2:
        sel = (unk_a0 - 0x40) >> 4;
        lim = sel;
        if (func_ov002_0220128c(pad)) {
            sel = sel - 1;
        } else if (func_ov002_0220127c(pad)) {
            sel = sel + 1;
            if (sel > cnt) {
                sel = 4;
            }
        }
        break;
    case 3:
        sel = 4;
        lim = sel;
        if (func_ov002_0220128c(pad)) {
            sel = sel - 1;
        }
        break;
    default:
        sel = 0;
        lim = sel;
        break;
    }
    saved = unk_9c;
    if (func_ov122_02296988(0x10)) {
        if (sel == -1) {
            sel = 0;
        }
    }
    if (sel != lim) {
        if (sel == -1) {
            idx = func_ov122_022977bc(saved, &mode);
        } else if (sel >= 4) {
            mode = 3;
            idx = func_ov122_02297630(&saved);
        } else {
            mode = 2;
            idx = func_ov122_022976c8(sel, &saved);
        }
    }
    if (func_ov002_0220126c(pad)) {
        if (idx != 0) {
            idx = idx - 1;
        } else if (mode == 1) {
            idx = unk_bc[0xec];
            mode = 0;
        }
    } else if (func_ov002_0220125c(pad)) {
        switch (mode) {
        case 0:
            n = unk_bc[0xec];
            break;
        case 1:
            n = func_020512e0(unk_bc + 0x34, 0x18) - unk_bc[0xec];
            break;
        case 2:
            n = func_020512e0(unk_bc + 0x4c, 0x80);
            break;
        case 3:
            n = func_020512e0(unk_bc + 0xcc, 0x20);
            break;
        }
        if (idx + 1 <= n) {
            idx = idx + 1;
        } else if (mode == 0) {
            idx = 0;
            mode = 1;
        }
    }
    if (mode != unk_aa && flag == 0) {
        return FALSE;
    }
    if (mode == unk_aa && idx == unk_ac) {
        return FALSE;
    }
    unk_aa = mode;
    func_ov122_02296978(0x1000);
    func_ov122_02296f30(idx);
    return TRUE;
}
