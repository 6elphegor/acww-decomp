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
extern u8 data_ov123_022954a8[];
extern u8 data_ov123_02295460[];
extern u8 data_ov123_0229543c[];
extern u8 data_ov123_02295484[];
extern u8 data_ov123_02295418[];
extern u8 data_ov123_022953f4[];
s32 func_0200402c(s32 a);
s32 func_0200140c();
s32 func_0200142c();
s32 func_020013cc(s32 a);
s32 func_0200151c(s32 a);
s32 func_0200152c(s32 a);
s32 func_02001710(s32 a, s32 b);
s32 func_02001608(s32 a, s32 b, s32 c, s32 d);
s32 func_02003f4c(s32 a);
s32 func_02003ff4(s32 a, s32 b);
s32 func_0200212c(s32 a);
s32 func_020020b8(s32 a);
s32 func_020013b4(s32 a, s32 b, s32 c);
s32 func_02003b6c(s32 a);
s32 func_02115e78(void *a, void *b, u32 n);
s32 func_020b87d0(void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

class Unk_0206fca8 {
public:
    ~Unk_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    /* 0x0c */ u8 unk_0c[0x3f];
};


// +0x1a0 sub-object (0x64 bytes; vtable 0x02204614 per D1 func_ov002_02202640)
class Unk_ov002_02204614 : public Unk_020e100c {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();

    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);

    u8 unk_4b[0x64 - 0x4b];
};

// +0x5004 sub-object (D1 func_ov002_02203968)
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();

    void func_ov002_0220301c();
    void func_ov002_02203044();

    u8 unk_00[0x10];
};

class Unk_ov123_Elem38 {
public:
    u8 unk_00[0x38];
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


// Vtable 0x022959c4
class Unk_ov123_022959c4 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov123_022959c4();

    void func_ov123_02291ff0(u32 mask);
    void func_ov123_02292000(u32 mask);
    BOOL func_ov123_02292010(u32 mask);
    void func_ov123_02292024();
    void func_ov123_02292044();
    void func_ov123_0229209c();
    void func_ov123_02292238();
    BOOL func_ov123_02292280();
    void func_ov123_022922f0();
    void func_ov123_02292314();
    void func_ov123_02292340();
    BOOL func_ov123_02292370(s32 unused, s32 flag);
    BOOL func_ov123_0229249c(void *pad);
    void func_ov123_022925c4();
    void func_ov123_02292660();
    void func_ov123_02292680();
    void func_ov123_022926a0();
    void func_ov123_022926c0();
    u32 func_ov123_022926e4();
    u32 func_ov123_022926f4();
    void func_ov123_02292704();
    u8 *func_ov123_0229275c();
    void func_ov123_02292784();
    void func_ov123_022927e8();
    void func_ov123_02292844();
    void func_ov123_02292864();

    // out-of-range callees (declarations only)
    void func_ov123_02292880();
    void func_ov123_02292d20();
    void func_ov123_022937e0();
    void func_ov123_02293840();
    void func_ov123_02293b0c(u8 v);
    u32 func_ov123_02293838(u32 v);
    u32 func_ov123_02293964();
    BOOL func_ov123_0229353c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
    void func_ov123_02294000();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6[2];
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
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
    /* 0xb6 */ u8 unk_b6[2];
    /* 0xb8 */ Unk_0206fca8 unk_b8[1];
    /* 0xf8 */ Unk_ov123_Elem38 unk_f8[3];
    /* 0x1a0 */ Unk_ov002_02204614 unk_1a0;
    /* 0x204 */ u8 unk_204[0xa04 - 0x204];
    /* 0xa04 */ u8 unk_a04[0x200];
    /* 0xc04 */ u8 unk_c04[0x200];
    /* 0xe04 */ u8 unk_e04[0x5004 - 0xe04];
    /* 0x5004 */ Unk_ov002_022046cc unk_5004;
};

// ---------------------------------------------------------------------------------------------

Unk_ov123_022959c4::~Unk_ov123_022959c4() {}

void Unk_ov123_022959c4::func_ov123_02292024() {
    func_0200140c();
    unk_5004.func_ov002_0220301c();
    func_0200151c(2);
}

void Unk_ov123_022959c4::func_ov123_02292044() {
    if (func_ov123_02292010(0x20)) {
        func_ov123_022922f0();
        func_ov123_02292000(0x20000);
    }
    func_0200142c();
    func_020013cc(-6);
    unk_5004.func_ov002_02203044();
    func_02001710(0x1f, 0);
    func_0200152c(2);
    func_02001608(0x40, 0x18, 0xc0, 0x98);
}

void Unk_ov123_022959c4::func_ov123_0229209c() {
    u32 old_a8 = unk_a8;
    u32 old_a9 = unk_a9;
    func_ov123_022937e0();
    if (func_ov123_02292010(0x1000)) {
        if (unk_a4 <= 2) {
            s32 cx = data_021ef5f0;
            s32 cy = data_021ef5ec;
            s32 bx = unk_b4;
            if (cx != bx || cy != unk_b5) {
                s32 d = bx - cx;
                if (d < 0) {
                    d = -d;
                }
                s32 by = unk_b5;
                if (by > cy) {
                    d = d + (by - cy);
                } else {
                    d = d - (by - cy);
                }
                func_02003f4c(d);
                func_ov123_02292000(0x100000);
            }
            if (unk_a8 != old_a8 || unk_a9 != old_a9) {
                if (func_ov123_0229353c(unk_a8, unk_a9, old_a8, old_a9, unk_a2, unk_a4)) {
                    func_0200402c(0x861);
                }
                func_ov123_02292000(0x40);
            }
        }
    }
    u32 r = func_ov123_02293964();
    if ((u8)(r + 0xdf) <= 1) {
        unk_b2 = 0x22;
    } else if (func_ov123_02292010(0x2000)) {
        if (r != unk_b2) {
            func_ov123_02291ff0(0x2000);
            unk_b1 = 0;
        }
    } else if (r == unk_b2) {
        unk_b1 = unk_b1 + 1;
        if (unk_b1 >= 0x14) {
            if (func_ov123_02292010(0x80000)) {
                func_ov123_02291ff0(0x80000);
                func_ov123_02291ff0(0x100000);
                func_02003ff4(0x862, 1);
            }
            unk_a5 = unk_b2;
            func_ov123_02293840();
            func_ov123_02292880();
            func_ov123_02291ff0(0x1000);
            func_ov123_02292000(0x2000);
        }
    } else {
        unk_b2 = r;
        unk_b1 = 0;
    }
}

void Unk_ov123_022959c4::func_ov123_02292238() {
    unk_b1 = 0;
    unk_b2 = 0x22;
    func_ov002_02200a58(2);
    func_ov123_02291ff0(0x2000);
    unk_b4 = data_021ef5f0;
    unk_b5 = data_021ef5ec;
}

BOOL Unk_ov123_022959c4::func_ov123_02292280() {
    u32 t = data_021f47d8[1];
    if (t & 0x200) {
        u32 v = unk_a2;
        if (v > 1) {
            func_ov123_02293b0c(v - 1);
        } else {
            func_ov123_02293b0c(0xf);
        }
        return TRUE;
    }
    if (t & 0x100) {
        u32 v = unk_a2;
        if (v < 0xf) {
            func_ov123_02293b0c(v + 1);
        } else {
            func_ov123_02293b0c(1);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov123_022959c4::func_ov123_022922f0() {
    if (func_ov123_02292010(0x20)) {
        func_ov123_02291ff0(0x20);
        func_0200212c(3);
    }
}

void Unk_ov123_022959c4::func_ov123_02292314() {
    if (!func_ov123_02292010(0x20)) {
        func_ov123_02292000(0x20);
        func_020020b8(3);
        func_020013b4(1, 8, 12);
    }
}

void Unk_ov123_022959c4::func_ov123_02292340() {
    if (func_ov123_02292010(0x20)) {
        func_ov123_022922f0();
        func_0200402c(0x42);
    } else {
        func_ov123_02292314();
        func_0200402c(0x41);
    }
}

BOOL Unk_ov123_022959c4::func_ov123_02292370(s32 unused, s32 flag) {
    u32 cx = unk_af;
    u32 cy = unk_b0;
    u32 t0 = data_021f47d8[0];
    if (t0 & 0x20) {
        if (data_021f47d8[1] & 0x20) {
            unk_b3 = 4;
        }
        if (cx != 0) {
            cx = (u8)(cx - 1);
        }
    } else if (t0 & 0x10) {
        if (data_021f47d8[1] & 0x10) {
            unk_b3 = 4;
        }
        if (cx < 0x1f) {
            cx = (u8)(cx + 1);
        }
    }
    u32 t1 = *(volatile u16 *)&data_021f47d8[0];
    if (t1 & 0x40) {
        if (data_021f47d8[1] & 0x40) {
            unk_b3 = 4;
        }
        if (cy != 0) {
            cy = (u8)(cy - 1);
        }
    } else if (t1 & 0x80) {
        if (data_021f47d8[1] & 0x80) {
            unk_b3 = 4;
        }
        if (cy < 0x1f) {
            cy = (u8)(cy + 1);
        }
    }
    if (unk_af != cx || unk_b0 != cy) {
        u32 b3 = unk_b3;
        if (b3 == 0) {
        } else if (b3 == 4) {
            unk_b3 = *(volatile u8 *)&unk_b3 - 1;
        } else {
            unk_b3 = *(volatile u8 *)&unk_b3 - 1;
            return FALSE;
        }
        unk_af = cx;
        unk_b0 = cy;
        if (flag == 0) {
            func_0200402c(0x865);
        }
        func_02003b6c((u8)func_ov123_02293838(cx));
        return TRUE;
    }
    unk_b3 = 0;
    return FALSE;
}

BOOL Unk_ov123_022959c4::func_ov123_0229249c(void *pad) {
    if (pad == NULL) {
        return FALSE;
    }
    u32 old = unk_aa;
    if (func_ov002_0220128c(pad)) {
        if (unk_aa != 0x1d) {
            if (unk_aa == 0x1e) {
                if (unk_ac == 0) {
                    unk_aa = 5;
                } else {
                    unk_aa = 0x16;
                }
                return TRUE;
            }
        } else {
            if (unk_ac == 0) {
                unk_aa = 5;
            } else {
                unk_aa = 0x1c;
            }
            return TRUE;
        }
    }
    if (func_ov002_0220126c(pad)) {
        unk_aa = data_ov123_022954a8[unk_aa];
    } else if (func_ov002_0220125c(pad)) {
        unk_aa = data_ov123_02295460[unk_aa];
    }
    if (old == unk_aa || unk_aa <= 0xb) {
        if (func_ov002_0220128c(pad)) {
            unk_aa = data_ov123_0229543c[unk_aa];
        } else if (func_ov002_0220127c(pad)) {
            unk_aa = data_ov123_02295484[unk_aa];
        }
    }
    u32 now = unk_aa;
    if (old != now) {
        if (now >= 0xe && now <= 0x1c && old >= 0xe && old <= 0x1c) {
            func_ov123_02292000(0x200);
            func_0200402c(0x869);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov123_022959c4::func_ov123_022925c4() {
    if ((u8)(unk_aa + 0xe3) <= 1) {
        unk_1a0.func_ov002_02202ca0();
    } else {
        unk_1a0.func_ov002_02202c40();
    }
    if (func_ov123_02292010(0x200)) {
        s32 a = func_ov123_022926f4();
        s32 b = func_ov123_022926e4();
        unk_1a0.func_ov002_02202a40(a, b);
        func_ov123_02291ff0(0x200);
    } else {
        s32 a = func_ov123_022926f4();
        s32 b = func_ov123_022926e4();
        unk_1a0.func_ov002_022029e8(a, b, 3, 1);
        unk_a0 = unk_8d;
        func_ov002_02200a58(9);
    }
}

void Unk_ov123_022959c4::func_ov123_02292660() {
    unk_1a0.func_ov002_02202af0();
    func_ov002_02200a58(0xb);
}

void Unk_ov123_022959c4::func_ov123_02292680() {
    unk_1a0.func_ov002_02202b68();
    func_ov002_02200a58(0xa);
}

void Unk_ov123_022959c4::func_ov123_022926c0() {
    unk_1a0.func_ov002_02202d00(0);
    unk_1a0.vfunc_0c();
}

void Unk_ov123_022959c4::func_ov123_02292704() {
    s32 a = func_ov123_022926f4();
    s32 b = func_ov123_022926e4();
    unk_1a0.func_ov002_02202a40(a, b);
    if ((u8)(unk_aa + 0xe3) <= 1) {
        unk_1a0.func_ov002_02202d00(7);
    } else {
        unk_1a0.func_ov002_02202d00(1);
    }
    func_ov123_022926a0();
}

u8 *Unk_ov123_022959c4::func_ov123_0229275c() {
    if (func_ov123_02292010(0x80)) {
        return unk_a04;
    }
    return unk_c04;
}

void Unk_ov123_022959c4::func_ov123_02292784() {
    if (func_ov123_02292010(0x80)) {
        func_ov123_02291ff0(0x80);
    } else {
        func_ov123_02292000(0x80);
    }
    if (func_ov123_02292010(0x4000)) {
        func_0200402c(0x86c);
        func_ov123_02291ff0(0x4000);
    } else {
        func_0200402c(0x86b);
        func_ov123_02292000(0x4000);
    }
    func_ov123_02292000(0x40);
}

void Unk_ov123_022959c4::func_ov123_022927e8() {
    func_ov123_02291ff0(0x4000);
    if (func_ov123_02292010(0x80)) {
        func_02115e78(unk_a04, unk_c04, 0x200);
        func_ov123_02291ff0(0x80);
    } else {
        func_02115e78(unk_c04, unk_a04, 0x200);
        func_ov123_02292000(0x80);
    }
}

void Unk_ov123_022959c4::func_ov123_02292844() {
    s32 i;
    for (i = 0; i < 3; i++) {
        func_020b87d0(&unk_f8[i]);
    }
}

void Unk_ov123_022959c4::func_ov123_02292864() {
    func_ov123_02292d20();
    func_ov123_02292880();
    func_ov123_02294000();
}

// small helpers last so they are not inlined into callers

void Unk_ov123_022959c4::func_ov123_022926a0() {
    unk_1a0.func_ov002_02202a78();
    unk_1a0.vfunc_0c();
}

u32 Unk_ov123_022959c4::func_ov123_022926e4() { return data_ov123_02295418[unk_aa]; }

u32 Unk_ov123_022959c4::func_ov123_022926f4() { return data_ov123_022953f4[unk_aa]; }

void Unk_ov123_022959c4::func_ov123_02291ff0(u32 mask) { unk_9c = unk_9c & ~mask; }

void Unk_ov123_022959c4::func_ov123_02292000(u32 mask) { unk_9c = unk_9c | mask; }

BOOL Unk_ov123_022959c4::func_ov123_02292010(u32 mask) {
    if (unk_9c & mask) {
        return TRUE;
    }
    return FALSE;
}
