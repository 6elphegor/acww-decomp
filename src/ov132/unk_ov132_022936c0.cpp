#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern s32 data_ov132_02294304[];
extern s32 data_ov132_02294310[];
extern u8 data_ov132_022943f0[];
extern u8 data_ov132_02294404[];
s32 func_0200402c(s32 a);
s32 func_020015b8(s32 a);
s32 func_02002398(s32 a, s32 b);
s32 func_0200226c(s32 a, s32 b, s32 c, s32 d);
s32 func_020021a0(s32 a);
s32 func_020020b8(s32 a);
s32 func_020024f0(void *a, s32 b, s32 c, s32 d);
s32 func_020641b4(void *a, void *b, s32 c);
s32 func_0206ee80(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0206ecf8(s32 a);
BOOL func_0206ef0c();
s32 func_0209750c();
s32 func_02098750(s32 a);
s32 func_02098320(s32 a);
s32 func_02097ce4(s32 a, s32 b, s32 c);
s32 func_02097414(s32 a);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_020b87d0(void *a);
s32 func_0208d63c(void *a);
s32 func_0208d644(void *a);
BOOL func_0208d534(void *a);
BOOL func_0208d4fc(void *a);
s32 func_ov130_0229304c(s32 a);
void *func_020ed174();
s32 func_ov092_02291ce4(void *a, s32 b, s32 c);
}

class Unk_0206fca8 {
public:
    ~Unk_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206f9fc(s32 v);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();
    u8 unk_00[0x40];
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

// +0x94 sub-object (0x64 bytes; vtable 0x02204614)
class Unk_ov002_02204614 : public Unk_020e100c {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();

    void func_ov002_02202a78();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    void func_ov002_02202a40(s32 a, s32 b);
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);

    u8 unk_4b[0x64 - 0x4b];
};

// +0xf8 sub-object (vtable 0x022046cc, 0x164 bytes)
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    virtual ~Unk_ov002_022046cc();

    void func_ov002_02203510(s32 v);
    void func_ov002_02203900();
    void func_ov002_02203920();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 idx);

    u8 unk_04[0x164 - 4];
};

// +0x324 holder object
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();

    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);

    u32 unk_00[0x108 / 4];
};

// Vtable 0x022044e4 (scene base; see src/ov002/unk_ov002_02200680.cpp)
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
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    void func_ov002_02200980();
    BOOL func_ov002_022009b0();
    BOOL func_ov002_022009bc();
    u32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
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

// Vtable 0x02294390
class Unk_ov132_02294390 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov132_02294390();

    void func_ov132_02293760(u32 mask);
    BOOL func_ov132_02293770(u32 mask);
    u8 *func_ov132_02293788();
    void func_ov132_022937b8();
    void func_ov132_022937e4();
    void func_ov132_022937fc();
    void func_ov132_02293818(s32 a, s32 b);
    void func_ov132_0229384c();
    void func_ov132_02293890();
    s32 func_ov132_022938ac();
    s32 func_ov132_022938d8();
    void func_ov132_02293904();
    void func_ov132_02293954(u8 v);
    void func_ov132_02293988();
    void func_ov132_022939f8();
    void func_ov132_02293a68();
    void func_ov132_02293ad0();
    void func_ov132_02293b04();
    void func_ov132_02293b24();
    void func_ov132_02293b40();
    void func_ov132_02293b58();
    void func_ov132_02293b84();
    void func_ov132_02293bb0();
    void func_ov132_02293c14();
    void func_ov132_02293c3c();
    void func_ov132_02293c7c();
    void func_ov132_02293ca4();
    void func_ov132_02293d40();
    void func_ov132_02293dcc();
    void func_ov132_02293dd8();
    void func_ov132_02293ec0();
    void func_ov132_02293ef8();
    void func_ov132_02293efc();
    void func_ov132_02293f14();
    void func_ov132_02293f1c();
    void func_ov132_02293f34();
    void func_ov132_02293f64();
    void func_ov132_02293f78();
    void func_ov132_02293f98();
    void func_ov132_02293fc8();

    // out-of-range callee (declaration only)
    void func_ov132_022940c0();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov002_02204614 unk_94;
    /* 0x0f8 */ Unk_ov002_022046cc unk_f8;
    /* 0x25c */ Unk_020e0488 unk_25c[2];
    /* 0x2dc */ u32 unk_2dc[0x24 / 4];
    /* 0x300 */ u32 unk_300[0x24 / 4];
    /* 0x324 */ Unk_ov002_022040ec unk_324;
    /* 0x42c */ u8 unk_42c[0x800];
    /* 0xc2c */ u8 unk_c2c[0x800];
    /* 0x142c */ u16 unk_142c;
    /* 0x142e */ u8 unk_142e;
    /* 0x142f */ u8 unk_142f;
    /* 0x1430 */ u8 unk_1430;
    /* 0x1431 */ u8 unk_1431;
    /* 0x1432 */ u8 unk_1432;
};

// ---------------------------------------------------------------------------------------------

Unk_ov132_02294390::~Unk_ov132_02294390() {}

void Unk_ov132_02294390::func_ov132_02293760(u32 mask) {
    unk_142c = unk_142c | mask;
}

BOOL Unk_ov132_02294390::func_ov132_02293770(u32 mask) {
    if ((unk_142c & mask) != 0) {
        return TRUE;
    }
    return FALSE;
}

u8 *Unk_ov132_02294390::func_ov132_02293788() {
    u8 *p = &unk_1430;
    if (*p >= 2) {
        return (u8 *)&unk_25c[1];
    }
    *p = *p + 1;
    return (u8 *)&unk_25c[*p - 1];
}

void Unk_ov132_02294390::func_ov132_022937b8() {
    s32 i = 0;
    unk_1430 = i;
    for (; i < 2; i++) {
        unk_25c[i].func_0206fc44();
    }
}

void Unk_ov132_02294390::func_ov132_022937e4() {
    unk_94.func_ov002_02202b68();
    func_ov002_02200a58(3);
}

void Unk_ov132_02294390::func_ov132_022937fc() {
    unk_94.func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov132_02294390::func_ov132_02293818(s32 a, s32 b) {
    unk_94.func_ov002_022029e8(a, b, 3, 1);
    unk_142f = unk_8d;
    func_ov002_02200a58(2);
}

void Unk_ov132_02294390::func_ov132_0229384c() {
    if (unk_142e == 2) {
        unk_94.func_ov002_02202ca0();
    } else {
        unk_94.func_ov002_02202c40();
    }
    s32 a = func_ov132_022938d8();
    s32 b = func_ov132_022938ac();
    func_ov132_02293818(a, b);
}

void Unk_ov132_02294390::func_ov132_02293890() {
    unk_94.func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

s32 Unk_ov132_02294390::func_ov132_022938ac() {
    if (unk_142e == 2) {
        return unk_f8.func_ov002_022030b8(6);
    }
    return data_ov132_02294310[unk_142e];
}

s32 Unk_ov132_02294390::func_ov132_022938d8() {
    if (unk_142e == 2) {
        return unk_f8.func_ov002_022030f4(6);
    }
    return data_ov132_02294304[unk_142e];
}

void Unk_ov132_02294390::func_ov132_02293904() {
    s32 a = func_ov132_022938d8();
    s32 b = func_ov132_022938ac();
    unk_94.func_ov002_02202a40(a, b);
    if (unk_142e == 2) {
        unk_94.func_ov002_02202d00(7);
    } else {
        unk_94.func_ov002_02202d00(1);
    }
    func_ov132_022937fc();
}

void Unk_ov132_02294390::func_ov132_02293954(u8 v) {
    u8 b = v;
    unk_324.func_ov002_02204394(&b, 1, 0);
    func_ov002_02200a58(7);
    func_0208d63c(&unk_94);
}

void Unk_ov132_02294390::func_ov132_02293988() {
    if (func_02097ce4(func_02098750(func_0209750c()), 1, 0) == 0) {
        func_ov132_02293954(0xf);
    } else {
        unk_1431 = 0x36;
        func_0206ee80(unk_42c, 6, 0xc, 0x19, 0xf, 7);
        func_0206ee80(unk_c2c, 6, 0xc, 0x19, 0xf, 7);
        func_ov132_02293a68();
    }
}

void Unk_ov132_02294390::func_ov132_022939f8() {
    if (func_02097414(func_02098320(func_0209750c())) == 0x3b9ac9ff) {
        func_ov132_02293954(0xe);
    } else {
        unk_1431 = 0x35;
        func_0206ee80(unk_42c, 6, 7, 0x19, 0xa, 7);
        func_0206ee80(unk_c2c, 6, 7, 0x19, 0xa, 7);
        func_ov132_02293a68();
    }
}

void Unk_ov132_02294390::func_ov132_02293a68() {
    func_ov002_02200a50(2);
    unk_1432 = 10;
    func_020b86c0(unk_2dc, unk_42c, 6, 0x800, 0);
    func_020b86c0(unk_300, unk_c2c, 4, 0x800, 0);
    func_ov002_02200a58(6);
    func_0200402c(0x29);
}

void Unk_ov132_02294390::func_ov132_02293ad0() {
    unk_1431 = 0x44;
    func_0206ecf8(0);
    unk_f8.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(5);
}

void Unk_ov132_02294390::func_ov132_02293b04() {
    if (func_0206ef0c()) {
        func_ov132_02293b40();
    } else {
        func_ov132_02293b24();
    }
}

void Unk_ov132_02294390::func_ov132_02293b24() {
    func_ov132_02293904();
    func_ov002_02200980();
    func_ov002_02200a58(1);
}

void Unk_ov132_02294390::func_ov132_02293b40() {
    func_ov132_02293890();
    func_ov002_02200a58(0);
}

void Unk_ov132_02294390::func_ov132_02293b58() {
    if (unk_324.func_ov002_02204234(0)) {
        func_ov132_02293b04();
        func_0208d644(&unk_94);
    }
}

void Unk_ov132_02294390::func_ov132_02293b84() {
    u8 n = unk_1432;
    if (n != 0) {
        unk_1432 = n - 1;
    } else {
        func_ov132_02293890();
        func_ov002_02200a60(1);
    }
}

void Unk_ov132_02294390::func_ov132_02293bb0() {
    if (unk_f8.func_ov002_0220308c()) {
        if (func_0208d534(&unk_94)) {
            s32 a = unk_f8.func_ov002_0220306c();
            s32 b = unk_f8.func_ov002_022030f4(-1);
            s32 c = unk_f8.func_ov002_022030b8(-1);
            unk_94.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov132_02293890();
        func_ov002_02200a60(1);
    }
}

void Unk_ov132_02294390::func_ov132_02293c14() {
    if (func_0208d4fc(&unk_94)) {
        func_ov132_022937fc();
        func_ov002_02200a58(unk_142f);
    }
}

void Unk_ov132_02294390::func_ov132_02293c3c() {
    if (func_0208d4fc(&unk_94)) {
        switch (unk_142e) {
        case 2:
            func_ov132_02293ad0();
            break;
        case 0:
            func_ov132_022939f8();
            break;
        case 1:
            func_ov132_02293988();
            break;
        }
    }
}

void Unk_ov132_02294390::func_ov132_02293c7c() {
    if (!unk_94.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_142f);
        func_ov132_022940c0();
    }
}

void Unk_ov132_02294390::func_ov132_02293ca4() {
    if (func_ov002_022009d4()) {
        func_ov132_02293b40();
        return;
    }
    func_ov002_022009c8();
    u8 old = unk_142e;
    if (func_ov002_022009bc()) {
        if (unk_142e != 0) {
            unk_142e = unk_142e - 1;
        }
    } else if (func_ov002_022009b0()) {
        if (unk_142e < 2) {
            unk_142e = unk_142e + 1;
        }
    }
    if (old != unk_142e) {
        func_ov132_0229384c();
        return;
    }
    u32 t = data_021f47d8[1];
    if ((t & 2) != 0) {
        func_ov132_02293890();
        func_ov132_02293ad0();
    } else if ((t & 1) != 0) {
        func_ov132_022937e4();
    }
    return;
}

static inline BOOL Unk_ov132_02293d40_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov132_02294390::func_ov132_02293d40() {
    if (func_ov002_02200a14(1)) {
        func_ov132_02293b24();
        return;
    }
    if (Unk_ov132_02293d40_Both()) {
        if (unk_f8.func_ov002_02203110(6)) {
            func_ov132_02293ad0();
        } else {
            s32 x = data_021ef5f0;
            s32 y = data_021ef5ec;
            if (x >= 0x40 && x < 0xc0) {
                if (y >= 0x38 && y < 0x58) {
                    func_ov132_022939f8();
                } else if (y >= 0x60 && y < 0x80) {
                    func_ov132_02293988();
                }
            }
        }
    }
    return;
}

void Unk_ov132_02294390::func_ov132_02293dcc() {
    unk_f8.func_ov002_02203920();
}

void Unk_ov132_02294390::func_ov132_02293dd8() {
    func_ov130_0229304c(6);
    func_020641b4(data_ov132_022943f0, unk_42c, 0x800);
    func_0206ee80(unk_42c, 6, 7, 0x19, 0xf, 6);
    func_020024f0(unk_42c, 6, 0x800, 0);
    func_020641b4(data_ov132_02294404, unk_c2c, 0x800);
    func_0206ee80(unk_c2c, 6, 7, 0x19, 0xf, 6);
    func_020024f0(unk_c2c, 4, 0x800, 0);
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov132_02293788();
    p->func_0206f9fc(0x5f);
    p->func_0206fb9c(4, 0x114, 0xe, 0xf, 0, 0);
    p->func_0206fab4(1, 0);
    p = (Unk_020e0488 *)func_ov132_02293788();
    p->func_0206f9fc(0x60);
    p->func_0206fb9c(4, 0x130, 0xe, 0xf, 0, 0);
    p->func_0206fab4(1, 0);
}

void Unk_ov132_02294390::func_ov132_02293ec0() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov132_02294390::func_ov132_02293efc() {
    unk_f8.func_ov002_02203900();
    func_ov132_022937b8();
}

void Unk_ov132_02294390::func_ov132_02293f14() {
    func_ov132_02293ef8();
}

void Unk_ov132_02294390::func_ov132_02293f1c() {
    func_ov132_02293efc();
    unk_94.vfunc_0c();
}

void Unk_ov132_02294390::func_ov132_02293f34() {
    unk_f8.func_ov002_02203900();
    func_ov132_022937b8();
    func_020b87d0(unk_2dc);
    func_020b87d0(unk_300);
}

void Unk_ov132_02294390::func_ov132_02293f64() {
    unk_142e = 0;
    unk_142c = 0;
}

void Unk_ov132_02294390::func_ov132_02293f78() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov132_02294390::func_ov132_02293f98() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov132_02293f78();
    }
}

void Unk_ov132_02294390::func_ov132_02293fc8() {
    func_ov092_02291ce4(func_020ed174(), unk_1431, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov132_02293f78();
    func_ov002_02200a50(3);
}

// tiny empty callee, defined last so it is not inlined into the thunk above
void Unk_ov132_02294390::func_ov132_02293ef8() {}
