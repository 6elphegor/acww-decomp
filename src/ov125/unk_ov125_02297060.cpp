// ov125: scene overlay (class Unk_ov125_02298478, vtable 0x02298478, 0x6bc bytes).
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

struct Unk_ov002_022013ac_Rec;

extern "C" {
extern volatile u16 data_021f47d8[];
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern void *data_021f482c;
void func_ov125_02297d18();
void func_ov125_02297de8();
void func_020ed188(void *p);
void *func_020ed174(void *p);
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_020986d4Ev(void *a);
void *_ZN12Unk_02071c5c13func_02071c68Ej(void *o, u32 i);
void *_ZN12Unk_02071ed013func_02071f5cEP12Unk_020dd30c(void *a, void *b);
void *_ZN12Unk_02071e0413func_02071e58Ev(void *o);
void *_ZN12Unk_02071e0413func_02071e04Ev(void *o);
void *_ZN12Unk_02071ed013func_02072040Ev(void *o);
void func_02001f74(void *a, void *b, u32 c, u32 d, u32 e);
void func_02002438(void *a, u32 b, u32 c, u32 d, u32 e);
void func_02002580(void *a, u32 b, u32 c, u32 d, u32 e);
void func_02115e48(void *a, void *b, u32 n);
void func_020021a0(u32 x);
void func_020020b8(u32 x);
void func_020015b8(u32 x);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 rect);
s32 func_0200402c(s32 a);
void func_0206ed2c(u32 a);
void func_0206ecf8(u32 v);
s32 func_0206ed50();
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_02050ff8(void *p, void *q);

void _ZN12Unk_020dd30cC1Ev(void *p);
void _ZN12Unk_020dd30cD1Ev(void *p);
void _ZN12Unk_020e0d80C1Ev(void *p);
void _ZN12Unk_020e0d80D1Ev(void *p);
void _ZN12Unk_020e0d9813func_02089ad8Eii(void *self, s32 x, s32 y);
void _ZN12Unk_020e0d9813func_02089ac0EP6StrBuf(void *self, void *b);

BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *b, s32 c);
BOOL func_ov002_02201a28(void *p);
u32 func_ov002_02201a70(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02202144(void *p);
void func_ov002_02203920(void *p);

extern const u8 data_ov125_022983c4[9];
extern const u8 data_ov125_022983d0[9];
}

// ---------------------------------------------------------------------------------------------
// Classes of other modules (minimal declarations)

class Unk_020e100c {
public:
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    s32 func_0208d534();
    void func_0208d538(s32 a);
};

class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    void func_ov002_02202844();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a18(s32 a, s32 b, s32 c);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
};

// Same object as Unk_ov002_02202d98 under the name used by its other methods
class Unk_ov002_0220464c : public Unk_020e100c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

// Same object as Unk_ov002_02204558 under the name used by its other methods
class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32 a);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32 a, s32 b);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 a);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};

class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    void func_ov002_02202278(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *c);
    u32 unk_00[0x300 / 4];
};

class Unk_ov002_02204468 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();
    virtual void vfunc_08();
    void func_ov002_022006ac(s32 a);
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    void func_ov002_022006e4(s32 a);
    BOOL func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov002_02202fac {
public:
    u32 unk_00[0x164 / 4];
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 i);
    s32 func_ov002_022030f4(s32 i);
    BOOL func_ov002_02203110(s32 i);
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203510(s32 a);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
};

// ov092 singleton returned by func_020ed174
class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// ov124 library object (menu/han text + sprite), size 0x94
class Unk_ov124_02296840 {
public:
    Unk_ov124_02296840();
    ~Unk_ov124_02296840();
    void func_ov124_02296840();
    void func_ov124_022968a8(s32 x, s32 y);
    void func_ov124_022968ec(s32 v);
    void func_ov124_02296d4c(s32 a, s32 b);
    u32 unk_00[0x94 / 4];
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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
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

class Unk_ov125_02298478;
typedef void (Unk_ov125_02298478::*Unk_ov125_02298478_Fn)();

// Vtable 0x02298478, size 0x6bc (scene overlay on Unk_ov002_022044e4; ov124 library object embedded at +0x94)
class Unk_ov125_02298478 : public Unk_ov002_022044e4 {
public:
    Unk_ov125_02298478() : unk_94(), unk_128(), unk_428(), unk_4e8(), unk_54c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov125_0229710c(u32 mask);
    void func_ov125_0229711c(u32 mask);
    BOOL func_ov125_0229712c(u32 mask);
    BOOL func_ov125_02297144(void *pad);
    BOOL func_ov125_02297228(u32 lo, u32 hi, u32 to);
    BOOL func_ov125_02297250(u32 lo, u32 hi, u32 to);
    BOOL func_ov125_02297278(u32 lo, u32 hi);
    BOOL func_ov125_022972ac(u32 lo, u32 hi);
    void func_ov125_022972e8();
    void func_ov125_02297308();
    void func_ov125_02297354();
    void func_ov125_02297388();
    void func_ov125_022973ec();
    void func_ov125_02297440();
    void func_ov125_022974b8();
    s32 func_ov125_022974dc();
    s32 func_ov125_022974f4();
    void func_ov125_0229753c();
    void func_ov125_02297590();
    void func_ov125_022975e4();
    u32 func_ov125_02297644(u32 i);
    void func_ov125_02297650();
    void func_ov125_022976c4();
    void func_ov125_022976fc();
    u32 func_ov125_02297784();
    s32 func_ov125_02297800(u32 i);
    s32 func_ov125_0229780c(u32 i);
    void func_ov125_02297818();
    void func_ov125_02297858();
    void func_ov125_02297878();
    void func_ov125_022978a4();
    void func_ov125_022978bc();
    void func_ov125_02297920();
    void func_ov125_02297940();
    void func_ov125_02297984();
    void func_ov125_022979c0();
    void func_ov125_022979f0();
    void func_ov125_02297a20();
    void func_ov125_02297a6c();
    void func_ov125_02297aec();
    void func_ov125_02297bd4();
    void func_ov125_02297c74();
    void func_ov125_02297cf4();
    void func_ov125_02297dd8();
    void func_ov125_02297e34();
    void func_ov125_02297e60();
    void func_ov125_02297e80();
    void func_ov125_02297e88();
    void func_ov125_02297ea4();
    void func_ov125_02297ed0();
    void func_ov125_02297f24();
    void func_ov125_02297f54();
    void func_ov125_02297f8c();
    void func_ov125_02297ffc();
    void func_ov125_02298024();
    void func_ov125_02298084();
    void func_ov125_022980d4();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov124_02296840 unk_94;
    /* 0x128 */ Unk_ov002_02204558 unk_128;
    /* 0x428 */ Unk_ov002_02204468 unk_428;
    /* 0x4e8 */ Unk_ov002_02204614 unk_4e8;
    /* 0x54c */ Unk_ov002_022046cc unk_54c;
    /* 0x6b0 */ s32 unk_6b0;
    /* 0x6b4 */ u16 unk_6b4;
    /* 0x6b6 */ u8 unk_6b6;
    /* 0x6b7 */ u8 unk_6b7;
    /* 0x6b8 */ u8 unk_6b8;
    /* 0x6b9 */ u8 unk_6b9;
    /* 0x6ba */ u8 unk_6ba;
    /* 0x6bb */ u8 unk_6bb;
};

extern "C" u16 data_ov125_022983e8[4];
struct Unk_ov125_SceneEntry {
    Unk_ov125_02298478 *(*create)();
    u16 a;
    u16 b;
};
extern "C" Unk_ov125_02298478 *func_ov125_02298364();
extern "C" Unk_ov125_SceneEntry data_ov125_02298448 = {func_ov125_02298364, 0xaa, 0xae};
u16 data_ov125_022983e8[4] = {0x00f0, 0x81f0, 0x40c0, 0xffff};
// Data order: this unit is placed object by object (see object_order.txt).

static inline BOOL Unk_ov125_02297bd4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov125_02298478 *func_ov125_02298364() { return new Unk_ov125_02298478(); }

BOOL Unk_ov125_02298478::vfunc_00() {
    func_ov125_02297ed0();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov125_02298478::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)func_020ed174(this))->func_ov092_02291c5c();
    func_ov125_02297ea4();
    return TRUE;
}

BOOL Unk_ov125_02298478::vfunc_24() {
    s32 r7 = unk_6b0;
    if (!func_ov125_0229712c(1)) {
        return FALSE;
    }
    Unk_ov002_02204468 *p = &unk_428;
    p->vfunc_08();
    if (func_0206ef00()) {
        unk_4e8.func_ov002_02202844();
    }
    unk_54c.func_ov002_022036a4(func_ov002_02200920());
    unk_94.func_ov124_022968a8(0, r7);
    u8 i = 0;
    s32 j = 0;
    s32 z = 0;
    do {
        data_ov125_022983e8[2] = (data_ov125_022983e8[2] & 0xfffffc00) | ((u16)(j * 4 + 0xc0) & 0x3ff);
        s32 y = r7 + func_ov125_02297800(i);
        func_02088730(1, data_ov125_022983e8, func_ov125_0229780c(i), y, j + 5, 2, z);
        i++;
        j++;
    } while (j < 8);
    return TRUE;
}

BOOL Unk_ov125_02298478::vfunc_4c() {
    static Unk_ov125_02298478_Fn tbl[5] = {
        &Unk_ov125_02298478::func_ov125_02298084,
        &Unk_ov125_02298478::func_ov125_02298024,
        &Unk_ov125_02298478::func_ov125_02297ffc,
        &Unk_ov125_02298478::func_ov125_02297f8c,
        &Unk_ov125_02298478::func_ov125_02297f54};
    func_ov125_02297e60();
    (this->*tbl[unk_8c])();
    func_ov125_02297e34();
    return TRUE;
}

void Unk_ov125_02298478::func_ov125_022980d4() {
    static Unk_ov125_02298478_Fn tbl[11] = {
        &Unk_ov125_02298478::func_ov125_02297c74,
        &Unk_ov125_02298478::func_ov125_02297bd4,
        &Unk_ov125_02298478::func_ov125_02297aec,
        &Unk_ov125_02298478::func_ov125_02297a6c,
        &Unk_ov125_02298478::func_ov125_02297a20,
        &Unk_ov125_02298478::func_ov125_022979f0,
        &Unk_ov125_02298478::func_ov125_022979c0,
        &Unk_ov125_02298478::func_ov125_02297984,
        &Unk_ov125_02298478::func_ov125_02297940,
        &Unk_ov125_02298478::func_ov125_02297920,
        &Unk_ov125_02298478::func_ov125_022978bc};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov125_02298478::vfunc_50() {
    func_ov125_02297e88();
    func_ov125_022980d4();
    func_ov125_02297e80();
    return TRUE;
}

BOOL Unk_ov125_02298478::vfunc_54() { return TRUE; }

BOOL Unk_ov125_02298478::vfunc_58() { return TRUE; }

BOOL Unk_ov125_02298478::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov125_02298478::func_ov125_02298084() {
    func_ov125_02297de8();
    func_ov125_02297dd8();
    func_ov002_02200a50(1);
}

void Unk_ov125_02298478::func_ov125_02298024() {
    func_ov002_02202144(&unk_128);
    func_ov125_02297cf4();
    func_ov002_022008e0(0xa, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov125_02297f24();
    unk_54c.func_ov002_02203510(0x65);
    func_ov125_0229711c(1);
    func_ov002_02200a50(2);
}

void Unk_ov125_02298478::func_ov125_02297ffc() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov125_02297858();
    }
    func_ov125_02297f24();
}

void Unk_ov125_02298478::func_ov125_02297f8c() {
    func_ov125_022974b8();
    Unk_ov092_02291ec8 *r4 = (Unk_ov092_02291ec8 *)func_020ed174(this);
    s32 r6 = func_0206ed50();
    if (func_ov125_0229712c(0x10)) {
        r4->func_ov092_02291ce4(0x44, 1);
    } else if (r6 == 4) {
        r4->func_ov092_02291ce4(2, 1);
    } else {
        r4->func_ov092_02291ce4(0x44, 1);
    }
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov125_02297f24();
    func_ov002_02200a50(4);
}

void Unk_ov125_02298478::func_ov125_02297f54() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov125_0229710c(1);
        func_ov002_02200a60(5);
    } else {
        func_ov125_02297f24();
    }
}

void Unk_ov125_02298478::func_ov125_02297f24() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    unk_6b0 = func_ov002_02200920();
}

void Unk_ov125_02298478::func_ov125_02297ed0() {
    unk_6b4 = 0;
    unk_128.func_ov002_02202310(3, 1, 0);
    unk_6b6 = 9;
    unk_6b7 = 9;
    u32 z = 0;
    unk_6b8 = z;
    func_0206ecf8(z);
    unk_428.func_ov002_022006ac(2);
}

void Unk_ov125_02298478::func_ov125_02297ea4() {
    func_ov002_02201b04(&unk_128);
    unk_94.func_ov124_02296840();
    unk_54c.func_ov002_02203900();
}

void Unk_ov125_02298478::func_ov125_02297e88() {
    func_ov125_02297e60();
    Unk_ov002_02204614 *p = &unk_4e8;
    p->vfunc_0c();
}

void Unk_ov125_02298478::func_ov125_02297e80() {
    func_ov125_02297e34();
}

void Unk_ov125_02298478::func_ov125_02297e60() {
    unk_54c.func_ov002_02203900();
    unk_94.func_ov124_02296840();
}

void Unk_ov125_02298478::func_ov125_02297e34() {
    func_ov002_02201b58(&unk_128);
    if (unk_428.func_ov002_0220071c()) {
        func_ov125_022976fc();
    }
}

extern "C" void func_ov125_02297de8() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov125_02298478::func_ov125_02297dd8() {
    unk_94.func_ov124_02296d4c(6, 4);
}

extern "C" void func_ov125_02297d18() {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0x1000);
    void *obj = _ZN12Unk_0209865c13func_020986d4Ev(func_0209750c());
    u8 i = 0;
    do {
        void *t = _ZN12Unk_02071c5c13func_02071c68Ej(obj, i);
        t = _ZN12Unk_02071e0413func_02071e58Ev(t);
        func_02001f74(t, buf, i * 4, 4, 4);
        i++;
    } while (i < 8);
    func_02002438(buf, 8, 0xc0, 0xc0, 0x13f);
    func_020e85fc(heap, buf);
    void *buf2 = func_020e8618(heap, 0x100);
    s32 off = 0;
    u8 k = 0;
    do {
        void *t = _ZN12Unk_02071c5c13func_02071c68Ej(obj, k);
        t = _ZN12Unk_02071e0413func_02071e04Ev(t);
        t = _ZN12Unk_02071ed013func_02072040Ev(t);
        func_02115e48(t, (u8 *)buf2 + off * 2, 0x20);
        off += 0x10;
        k++;
    } while (k < 8);
    func_02002580(buf2, 8, 5, 5, 0xc);
    func_020e85fc(heap, buf2);
}

void Unk_ov125_02298478::func_ov125_02297cf4() {
    func_ov125_02297d18();
    unk_94.func_ov124_022968ec(4);
    func_ov002_02203920(&unk_54c);
}

void Unk_ov125_02298478::func_ov125_02297c74() {
    if (func_ov002_02200a14(1)) {
        func_ov125_02297878();
    } else if (Unk_ov125_02297bd4_Both()) {
        s32 r = func_ov125_02297784();
        if (r == 8) {
            unk_54c.func_ov002_022030ac(9);
            func_ov002_02200a58(10);
        } else if (r != 9) {
            func_ov125_02297650();
            unk_6b7 = r;
            func_ov125_022975e4();
        }
    }
}

void Unk_ov125_02298478::func_ov125_02297bd4() {
    if (func_ov002_02200a14(1)) {
        func_ov125_02297308();
        func_ov002_02200a58(3);
        unk_6b8 = unk_6b7;
    } else if (Unk_ov125_02297bd4_Both()) {
        s32 r = ((Unk_ov002_022013ac *)&unk_128)->func_ov002_022014c0(data_021ef5f0, data_021ef5ec);
        if (r >= 0) {
            func_ov002_02201aa0(&unk_128, r, 1);
            unk_6b9 = func_ov125_02297644(r);
            func_ov002_02200a58(8);
        }
    }
}

void Unk_ov125_02298478::func_ov125_02297aec() {
    if (func_ov002_022009d4()) {
        func_ov125_022978a4();
        unk_428.func_ov002_022006e4(1);
    } else {
        if (func_ov125_02297144((void *)func_ov002_022009c8())) {
            func_ov125_022976c4();
            func_ov125_02297440();
            unk_428.func_ov002_022006e4(0);
        } else {
            u32 t = data_021f47d8[1];
            if (t & 1) {
                if (unk_6b8 == 8) {
                    ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202b68();
                    func_ov002_02200a58(6);
                } else {
                    unk_428.func_ov002_022006e4(1);
                    func_ov125_02297650();
                    unk_6b7 = unk_6b8;
                    func_ov125_022975e4();
                    func_ov125_022974b8();
                }
            } else if (t & 2) {
                func_ov125_022974b8();
                unk_54c.func_ov002_022030ac(9);
                func_ov002_02200a58(10);
                unk_428.func_ov002_022006e4(1);
            } else {
                unk_428.func_ov002_022006c0();
            }
        }
    }
}

void Unk_ov125_02298478::func_ov125_02297a6c() {
    if (func_ov002_022009d4()) {
        func_ov125_022974b8();
        func_ov002_02200a58(1);
    } else {
        if (func_ov002_022019d0(&unk_128, func_ov002_022009c8(), &unk_6ba, 0)) {
            func_ov125_022973ec();
        }
        u32 t = data_021f47d8[1];
        if (t & 1) {
            ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202b68();
            func_ov002_02200a58(4);
        } else if (t & 2) {
            func_ov125_02297388();
        }
    }
}

void Unk_ov125_02298478::func_ov125_02297a20() {
    if (unk_4e8.func_0208d4fc()) {
        func_ov002_02201aa0(&unk_128, unk_6ba, 1);
        unk_6b9 = func_ov125_02297644(unk_6ba);
        func_ov002_02200a58(8);
    }
}

void Unk_ov125_02298478::func_ov125_022979f0() {
    if (unk_4e8.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_6bb);
        func_ov125_022980d4();
    }
}

void Unk_ov125_02298478::func_ov125_022979c0() {
    if (unk_4e8.func_0208d4fc()) {
        unk_54c.func_ov002_022030ac(9);
        func_ov002_02200a58(10);
    }
}

void Unk_ov125_02298478::func_ov125_02297984() {
    if (((Unk_ov002_022013ac *)&unk_128)->func_ov002_022017b4()) {
        if (func_0206ef00()) {
            func_ov125_02297308();
            func_ov002_02200a58(3);
        } else {
            func_ov002_02200a58(1);
        }
    }
}

void Unk_ov125_02298478::func_ov125_02297940() {
    if (func_ov002_02201a28(&unk_128)) {
        func_ov002_02202064(&unk_128, 0);
        if (unk_4e8.func_0208d534()) {
            func_ov125_02297354();
        }
        func_ov002_02200a58(9);
    }
}

void Unk_ov125_02298478::func_ov125_02297920() {
    if (((Unk_ov002_022013ac *)&unk_128)->func_ov002_022017a4()) {
        func_ov125_02297590();
    }
}

void Unk_ov125_02298478::func_ov125_022978bc() {
    if (unk_54c.func_ov002_0220308c()) {
        if (unk_4e8.func_0208d534()) {
            s32 a = unk_54c.func_ov002_0220306c();
            s32 b = unk_54c.func_ov002_022030f4(-1);
            s32 c = unk_54c.func_ov002_022030b8(-1);
            unk_4e8.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov125_02297818();
    }
}

void Unk_ov125_02298478::func_ov125_022978a4() {
    func_ov125_022974b8();
    func_ov002_02200a58(0);
}

void Unk_ov125_02298478::func_ov125_02297878() {
    unk_6b6 = 9;
    func_ov125_0229753c();
    func_ov002_02200980();
    func_ov125_022976c4();
    func_ov002_02200a58(2);
}

void Unk_ov125_02298478::func_ov125_02297858() {
    if (func_0206ef0c()) {
        func_ov125_022978a4();
    } else {
        func_ov125_02297878();
    }
}

void Unk_ov125_02298478::func_ov125_02297818() {
    func_ov125_022974b8();
    unk_428.func_ov002_022006e4(1);
    func_ov125_0229711c(0x10);
    unk_8c = 3;
    func_0206ecf8(0);
    func_ov002_02200a60(1);
    func_0200402c(0x28);
}

s32 Unk_ov125_02298478::func_ov125_0229780c(u32 i) { return data_ov125_022983c4[i]; }

s32 Unk_ov125_02298478::func_ov125_02297800(u32 i) { return data_ov125_022983d0[i] - 0x10; }

u32 Unk_ov125_02298478::func_ov125_02297784() {
    u8 i;
    if (unk_54c.func_ov002_02203110(9)) {
        return 8;
    }
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    s32 xlo = x - 0x10;
    s32 xhi = x + 0x10;
    s32 ylo = y - 0x10;
    s32 yhi = y + 0x10;
    for (i = 0; i < 8; i++) {
        s32 a = func_ov125_0229780c(i);
        if (xlo < a && a < xhi) {
            s32 b = func_ov125_02297800(i);
            if (ylo < b && b < yhi) {
                return i;
            }
        }
    }
    return 9;
}

void Unk_ov125_02298478::func_ov125_022976fc() {
    u8 a[0x20];
    u8 b[0x28];
    s32 x = func_ov125_02297800(unk_6b6);
    x -= 0x84;
    if (func_0206ef00()) {
        x -= 0xa;
    }
    _ZN12Unk_020e0d9813func_02089ad8Eii(&unk_428, func_ov125_0229780c(unk_6b6) - 0x78, x);
    _ZN12Unk_020dd30cC1Ev(a);
    _ZN12Unk_02071ed013func_02071f5cEP12Unk_020dd30c(_ZN12Unk_02071e0413func_02071e04Ev(_ZN12Unk_02071c5c13func_02071c68Ej(_ZN12Unk_0209865c13func_020986d4Ev(func_0209750c()), unk_6b6)), a);
    _ZN12Unk_020e0d80C1Ev(b);
    func_02050ff8(b, a);
    _ZN12Unk_020e0d9813func_02089ac0EP6StrBuf(&unk_428, b);
    _ZN12Unk_020e0d80D1Ev(b);
    _ZN12Unk_020dd30cD1Ev(a);
}

void Unk_ov125_02298478::func_ov125_022976c4() {
    u32 v = unk_6b8;
    if (v <= 7) {
        unk_6b6 = v;
        unk_428.func_ov002_022006b8();
    } else {
        unk_428.func_ov002_022006e4(1);
    }
}

void Unk_ov125_02298478::func_ov125_02297650() {
    func_ov002_022016e4((u8 *)this + 0x41c, 1);
    switch (func_0206ed50()) {
    case 5:
    case 8:
    case 9:
        func_ov002_02201700((u8 *)this + 0x41c, 0x91, 0);
        break;
    case 4:
    case 7:
    case 10:
        func_ov002_02201700((u8 *)this + 0x41c, 0x72, 0);
        break;
    default:
        func_ov002_02201700((u8 *)this + 0x41c, 0x28, 0);
        break;
    }
    func_ov002_02201700((u8 *)this + 0x41c, 2, 1);
}

u32 Unk_ov125_02298478::func_ov125_02297644(u32 i) { return *((u8 *)this + i + 0x421); }

void Unk_ov125_02298478::func_ov125_022975e4() {
    ((Unk_ov002_022013ac *)&unk_128)->func_ov002_0220160c((Unk_ov002_022013ac_Rec *)((u8 *)this + 0x41c), 0);
    s32 a = func_ov125_0229780c(unk_6b7) - 0x18;
    s32 b = func_ov125_02297800(unk_6b7) - 0x10;
    unk_128.func_ov002_02202278(a, b);
    func_ov002_02202098(&unk_128, 0);
    func_ov002_02200a58(7);
}

void Unk_ov125_02298478::func_ov125_02297590() {
    switch (unk_6b9) {
    case 0:
        func_0206ed2c(unk_6b7);
        func_0206ecf8(1);
        unk_8c = 3;
        unk_428.func_ov002_022006e4(1);
        func_ov002_02200a60(1);
        break;
    case 1:
    default:
        func_ov125_02297858();
        break;
    }
}

void Unk_ov125_02298478::func_ov125_0229753c() {
    s32 a = func_ov125_022974f4();
    s32 b = func_ov125_022974dc();
    unk_4e8.func_ov002_02202a40(a, b);
    if (unk_6b8 == 8) {
        ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202d00(1);
    }
    func_ov125_022972e8();
}

s32 Unk_ov125_02298478::func_ov125_022974f4() {
    s32 t = func_ov125_0229780c(unk_6b8);
    if (func_ov125_0229712c(8)) {
        t += 0x100;
    } else if (func_ov125_0229712c(4)) {
        t -= 0x100;
    }
    t += 0xb;
    return t;
}

s32 Unk_ov125_02298478::func_ov125_022974dc() { return func_ov125_02297800(unk_6b8) - 0xb; }

void Unk_ov125_02298478::func_ov125_022974b8() {
    ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202d00(0);
    unk_4e8.vfunc_0c();
}

void Unk_ov125_02298478::func_ov125_02297440() {
    if (func_ov125_0229712c(2)) {
        s32 a = func_ov125_022974f4();
        s32 b = func_ov125_022974dc();
        unk_4e8.func_ov002_02202a40(a, b);
        func_ov125_0229710c(2);
    } else {
        s32 a = func_ov125_022974f4();
        s32 b = func_ov125_022974dc();
        unk_4e8.func_ov002_022029e8(a, b, 3, 1);
        unk_6bb = unk_8d;
        func_ov002_02200a58(5);
    }
}

void Unk_ov125_02298478::func_ov125_022973ec() {
    s32 a = ((Unk_ov002_022013ac *)&unk_128)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_128)->func_ov002_02201498(unk_6ba);
    unk_4e8.func_ov002_02202a18(a, b, 2);
    unk_6bb = unk_8d;
    func_ov002_02200a58(5);
}

void Unk_ov125_02298478::func_ov125_02297388() {
    unk_6b9 = 1;
    unk_6ba = func_ov002_02201a70(&unk_128);
    s32 a = ((Unk_ov002_022013ac *)&unk_128)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_128)->func_ov002_02201498(unk_6ba);
    unk_4e8.func_ov002_02202a40(a, b);
    unk_4e8.func_0208d538(8);
    func_ov002_02200a58(8);
}

void Unk_ov125_02298478::func_ov125_02297354() {
    s32 a = func_ov125_022974f4();
    s32 b = func_ov125_022974dc();
    unk_4e8.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202d00(1);
}

void Unk_ov125_02298478::func_ov125_02297308() {
    unk_6ba = 0;
    s32 a = ((Unk_ov002_022013ac *)&unk_128)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_128)->func_ov002_02201498(unk_6ba);
    unk_4e8.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202d00(7);
}

void Unk_ov125_02298478::func_ov125_022972e8() {
    unk_4e8.func_ov002_02202a78();
    unk_4e8.vfunc_0c();
}

BOOL Unk_ov125_02298478::func_ov125_022972ac(u32 lo, u32 hi) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        if (v == hi) {
            func_ov125_0229711c(8);
            unk_6b8 = lo;
        } else {
            unk_6b8 = v + 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297278(u32 lo, u32 hi) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        if (v == lo) {
            unk_6b8 = hi;
            func_ov125_0229711c(4);
        } else {
            unk_6b8 = v - 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297250(u32 lo, u32 hi, u32 to) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        unk_6b8 = v + (to - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297228(u32 lo, u32 hi, u32 to) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        unk_6b8 = v + (to - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297144(void *pad) {
    u32 prev = unk_6b8;
    func_ov125_0229710c(0xc);
    if (func_ov002_0220126c(pad)) {
        if (!func_ov125_02297278(0, 3)) {
            func_ov125_02297278(4, 7);
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov125_022972ac(0, 3)) {
            func_ov125_022972ac(4, 7);
        }
    }
    if (!func_ov125_0229712c(0xc)) {
        if (func_ov002_0220128c(pad)) {
            if (!func_ov125_02297250(4, 7, 0)) {
                if (unk_6b8 == 8) {
                    unk_6b8 = 7;
                    ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202c40();
                }
            }
        } else if (func_ov002_0220127c(pad)) {
            if (!func_ov125_02297228(0, 3, 4)) {
                u32 t = unk_6b8;
                if (t >= 4 && t <= 7) {
                    unk_6b8 = 8;
                    ((Unk_ov002_0220464c *)&unk_4e8)->func_ov002_02202ca0();
                }
            }
        }
    }
    if (prev != unk_6b8) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_0229712c(u32 mask) {
    if (unk_6b4 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov125_02298478::func_ov125_0229711c(u32 mask) { unk_6b4 = unk_6b4 | mask; }

void Unk_ov125_02298478::func_ov125_0229710c(u32 mask) { unk_6b4 = unk_6b4 & ~mask; }

extern "C" const u8 data_ov125_022983c4[9] = {0x28, 0x60, 0x98, 0xd0, 0x38, 0x70, 0xa8, 0xe0, 0xb9};
extern "C" const u8 data_ov125_022983d0[9] = {0x7c, 0x7c, 0x7c, 0x7c, 0xa4, 0xa4, 0xa4, 0xa4, 0xd1};

