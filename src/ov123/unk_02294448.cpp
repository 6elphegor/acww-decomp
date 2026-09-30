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
extern u8 data_021f4770;
extern u8 data_021f4774;
extern void *data_021f482c;
extern u8 data_ov123_02295bbc[];
extern u8 data_ov123_02295bd0[];
extern u8 data_ov123_02295be4[];
extern u8 data_ov123_02295bf8[];
extern u8 data_ov123_02295c0c[];
extern u8 data_ov123_02295c1c[];
extern u8 data_ov123_02295c2c[];
extern u8 data_ov123_02295c3c[];
extern u8 data_ov123_02295c50[];
s32 func_020026c4(void *, void *, u32, u32, u32, u32);
s32 func_0200261c(void *, void *, u32, u32, u32, u32);
BOOL func_020641b4(void *a, void *b, s32 c);
BOOL func_020024f0(void *p, u32 a, u32 b, u32 c);
void func_02002654(void *a, void *b, s32 c);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020021fc(s32 a, s32 b, s32 c);
void func_020021a0(s32 a);
void func_020013a4();
void func_02003ff4(s32 a, s32 b);
void func_02004008(s32 a);
void func_02003f5c(s32 a);
void func_02094960();
void func_02094d3c();
s32 func_02094fb4();
void func_0206ecf8(s32 a);
s32 func_0206ed50();
s32 func_020ed174(void *a);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
s32 func_0200140c();
s32 func_0200142c();
s32 func_020013cc(s32 a);
s32 func_0200151c(s32 a);
s32 func_0200152c(s32 a);
s32 func_02001710(s32 a, s32 b);
s32 func_02001608(s32 a, s32 b, s32 c, s32 d);
s32 func_02003f4c(s32 a);
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
    BOOL func_ov002_02203110(s32 a);
    void func_ov002_02203458(s32 a);
    void func_ov002_02203650();
    void func_ov002_02203698();
    void func_ov002_02203900();

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

    BOOL func_ov002_022009d4();
    u32 func_ov002_022009c8();
    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    BOOL func_ov002_02200a14(s32 a);
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
    BOOL func_ov123_02292370(u32 a, s32 flag);
    BOOL func_ov123_0229249c(u32 pad);
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
    void func_ov123_02294074();
    void func_ov123_02293f70();
    void func_ov123_02293f3c();
    void func_ov123_02293fc4();
    void func_ov123_02294020();
    void func_ov123_02293fa4();
    void func_ov123_02293b48();
    void func_ov123_02292c70();
    void func_ov123_02292ba4();
    void func_ov123_02292bb0();
    void func_ov123_02292be0();
    void func_ov123_02292c34(u32 v);
    void func_ov123_02292cfc();
    void func_ov123_02292df4();
    void func_ov123_02292e78();

    // this group
    void func_ov123_02294448();
    void func_ov123_02294518();
    void func_ov123_02294614();
    void func_ov123_022946c4();
    void func_ov123_02294740();
    void func_ov123_022947a0();
    void func_ov123_02294804();
    void func_ov123_022948a8();
    void func_ov123_022948f4();
    void func_ov123_02294908();
    void func_ov123_0229492c();
    void func_ov123_02294934();
    void func_ov123_02294950();
    void func_ov123_02294984();
    void func_ov123_022949e8();
    void func_ov123_02294a20();
    void func_ov123_02294a64();
    void func_ov123_02294abc();
    void func_ov123_02294b18();
    void func_ov123_02294b5c();
    void func_ov123_02294bec();
    void func_ov123_02294c80();
    void func_ov123_02294cb0();
    void func_ov123_02294d00();
    void func_ov123_02294d40();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
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

static inline BOOL Unk_ov123_022946c4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov123_022959c4::func_ov123_02294448() {
    if (func_ov002_022009d4()) {
        func_ov123_02294074();
    } else {
        func_ov123_02292370(func_ov002_022009c8(), 0);
        u32 t = data_021f47d8[1];
        if (t & 1) {
            func_ov123_02292df4();
        } else if (t & 2) {
            func_ov123_02292000(0x800);
            func_ov123_02292cfc();
            func_ov002_02200a58(7);
        } else if (t & 0x800) {
            func_0200402c(0x864);
            unk_ac = 0;
            unk_aa = unk_ab;
            func_ov123_02294000();
        } else if (!func_ov123_02292280()) {
            u32 k = data_021f47d8[1];
            if (k & 0x400) {
                func_ov123_02292340();
            } else if (k & 8) {
                func_ov123_022926c0();
                func_ov123_02293f70();
            }
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294518() {
    if (func_ov002_022009d4()) {
        func_ov123_02294074();
    } else {
        if (func_ov123_0229249c(func_ov002_022009c8())) {
            if (unk_ac == 0) {
                unk_ab = unk_aa;
            }
            func_ov123_022925c4();
        } else {
            u32 t = data_021f47d8[1];
            if (t & 1) {
                func_ov123_02292680();
            } else if (t & 0x800) {
                func_0200402c(0x864);
                if (unk_ac == 0) {
                    unk_ac = 1;
                    unk_aa = unk_a2 + 0xd;
                } else {
                    unk_ac = 2;
                }
                func_ov123_02294000();
            } else if (!func_ov123_02292280()) {
                u32 k = data_021f47d8[1];
                if (k & 0x400) {
                    func_ov123_02292340();
                } else if (k & 2) {
                    func_ov123_022926c0();
                    func_ov123_02293f3c();
                } else if (k & 8) {
                    func_ov123_022926c0();
                    func_ov123_02293f70();
                }
            }
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294614() {
    if (data_021f4770 == 0) {
        if (func_ov123_02292010(0x80000)) {
            func_ov123_02291ff0(0x80000);
            func_02003ff4(0x862, 1);
        }
        func_ov123_02292864();
    } else {
        func_ov123_02291ff0(0x100000);
        func_ov123_0229209c();
        unk_b4 = data_021ef5f0;
        unk_b5 = data_021ef5ec;
        if (func_ov123_02292010(0x100000)) {
            if (!func_ov123_02292010(0x80000)) {
                func_ov123_02292000(0x80000);
                func_02004008(0x862);
            }
        } else if (func_ov123_02292010(0x80000)) {
            func_ov123_02291ff0(0x80000);
            func_02003ff4(0x862, 1);
        }
    }
}

void Unk_ov123_022959c4::func_ov123_022946c4() {
    if (func_ov002_02200a14(1)) {
        func_ov123_02293fc4();
    } else if (Unk_ov123_022946c4_Both()) {
        if (unk_5004.func_ov002_02203110(3)) {
            unk_a5 = 0x1f;
            func_ov123_02293840();
        } else if (unk_5004.func_ov002_02203110(4)) {
            unk_a5 = 0x20;
            func_ov123_02293840();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294740() {
    if (func_ov002_02200a14(1)) {
        func_ov123_02294020();
    } else if (Unk_ov123_022946c4_Both()) {
        u32 r = func_ov123_02293964();
        if (r == 0x21) {
            func_ov123_02292e78();
        } else if (r != 0x22) {
            unk_a5 = r;
            func_ov123_02293840();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_022947a0() {
    void *p = data_021f482c;
    func_020026c4(data_ov123_02295bbc, p, 8, 4, 4, 0xc);
    func_0200261c(data_ov123_02295bd0, p, 8, 0xc0, 0xc0, 0x12f);
    func_0200261c(data_ov123_02295be4, p, 8, 0x130, 0x130, 0x19f);
}

void Unk_ov123_022959c4::func_ov123_02294804() {
    void *p = data_021f482c;
    func_020026c4(data_ov123_02295bf8, p, 6, 4, 4, 0xe);
    func_020641b4(data_ov123_02295c0c, (u8 *)this + 0x204, 0x800);
    func_020024f0((u8 *)this + 0x204, 6, 0x800, 0);
    func_02002654(data_ov123_02295c1c, p, 4);
    func_02002654(data_ov123_02295c2c, p, 3);
    func_0200261c(data_ov123_02295c3c, p, 6, 0x120, 0x120, 0x1ff);
    func_0200261c(data_ov123_02295c50, p, 6, 0x10, 0x10, 0x1f);
}

void Unk_ov123_022959c4::func_ov123_022948a8() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov123_022959c4::func_ov123_0229492c() {
    func_ov123_022948f4();
}

void Unk_ov123_022959c4::func_ov123_022948f4() {
    func_ov123_02293b48();
    func_ov123_02292c70();
}

void Unk_ov123_022959c4::func_ov123_02294908() {
    unk_5004.func_ov002_02203900();
    func_ov123_02292ba4();
    func_ov123_02292bb0();
}

void Unk_ov123_022959c4::func_ov123_02294934() {
    func_ov123_02294908();
    Unk_ov002_02204614 *p = &unk_1a0;
    p->vfunc_0c();
}

void Unk_ov123_022959c4::func_ov123_02294950() {
    unk_5004.func_ov002_02203900();
    func_ov123_02292ba4();
    func_ov123_02292844();
    func_02094960();
    if (func_0206ed50() == 3) {
        func_02003f5c(0);
    }
}

void Unk_ov123_022959c4::func_ov123_02294984() {
    func_ov123_02293b0c(1);
    unk_9c = 0;
    unk_a6[0] = 0x22;
    func_ov123_02292be0();
    unk_aa = 0;
    unk_ab = 0;
    unk_ac = 0;
    func_ov123_02292880();
    unk_af = 0x10;
    unk_b0 = 0x10;
    func_0206ecf8(0);
    func_02094d3c();
    unk_98 = 0;
    unk_b3 = 0;
}

void Unk_ov123_022959c4::func_ov123_022949e8() {
    func_020021fc(6, 0, -unk_98);
    func_020021fc(4, 0, -unk_98);
    func_020021fc(3, 0, -unk_98);
}

void Unk_ov123_022959c4::func_ov123_02294a20() {
    func_ov002_02200840(6, 0, unk_98);
    func_ov002_02200840(4, 0, unk_98);
    func_ov002_02200840(3, 0, unk_98);
    unk_94 = func_ov002_02200920();
}

void Unk_ov123_022959c4::func_ov123_02294a64() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov123_02294000();
        unk_98 = 0;
    } else if (unk_98 >= 2) {
        unk_98 = unk_98 - 2;
    } else {
        unk_98 = 0;
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294abc() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        unk_5004.func_ov002_02203650();
        func_ov002_02200a50(0xb);
    }
    if (unk_98 >= 2) {
        unk_98 = unk_98 - 2;
    } else {
        unk_98 = 0;
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294b18() {
    func_ov123_02292024();
    if (func_ov123_02292010(0x20000)) {
        func_ov123_02291ff0(0x20000);
        func_ov123_02292314();
    }
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(0xa);
    unk_98 = 0x10;
}

void Unk_ov123_022959c4::func_ov123_02294b5c() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov123_02293fa4();
        if (func_ov123_02292010(0x400)) {
            func_ov123_02292044();
            unk_98 = 0x10;
            func_ov123_02291ff0(0x400);
        }
    } else if (func_ov123_02292010(0x400)) {
        if (unk_98 < 0x10) {
            unk_98 = unk_98 + 2;
        } else {
            func_ov123_02292044();
            unk_98 = 0x10;
            func_ov123_02291ff0(0x400);
        }
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294bec() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        if (func_ov123_02292010(8)) {
            unk_5004.func_ov002_02203458(0x87);
        } else {
            unk_5004.func_ov002_02203458(0x22);
        }
        func_ov002_02200a50(8);
    }
    if (func_ov123_02292010(0x400)) {
        if (unk_98 < 0x10) {
            unk_98 = unk_98 + 2;
        } else {
            func_ov123_02292044();
            unk_98 = 0x10;
            func_ov123_02291ff0(0x400);
        }
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294c80() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(7);
    unk_98 = 0;
    func_ov123_02292000(0x400);
}

void Unk_ov123_022959c4::func_ov123_02294cb0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_020021a0(3);
        func_ov002_02200a60(5);
        func_020013a4();
        func_ov123_02291ff0(1);
        unk_5004.func_ov002_02203698();
    } else {
        func_ov123_02294a20();
    }
}

void Unk_ov123_022959c4::func_ov123_02294d00() {
    func_ov123_02292024();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_022008c4(0xb, 0, 0, 0x30);
    func_ov123_02294a20();
    func_ov002_02200a50(5);
}

void Unk_ov123_022959c4::func_ov123_02294d40() {
    if (func_02094fb4() == 0) {
        func_ov002_02200a50(4);
    }
}
