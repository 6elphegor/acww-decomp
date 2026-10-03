// ov141: scene overlay (class Unk_ov141_02293968, vtable 0x02293968, 0x1674 bytes).
// LampLights six-slot list of nearby players' records with a selection cursor.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov141_02293968;

extern "C" {
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u32 gCurrentHeap;

BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void Snd_PlaySe(u32 v);
void MI_CpuCopy8(void *a, void *b, u32 n);
void func_020733bc();
s32 func_020eae78();
u32 *func_020ea65c();
u32 func_020ea6c8(void *e);
void *func_020ea6f4(void *e);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void File_LoadToBuffer(void *a, void *b, u32 c);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206ecf8(s32 a);
void *func_0206e868();
void *func_0206e85c();
void func_0206e874();
void Oam_DrawCell(u32 a, s32 h, s32 x, u32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_ov002_02203920(void *p);
Unk_ov141_02293968 *func_ov141_022938a0();
}

void func_0207217c(); // C++ linkage in main

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
class Unk_ov002_022044e4 : public GameProc {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
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

// Screen upload helper, 0x24 bytes (src/main/unk_020b8464.cpp)
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    void func_020b87d0();
    u32 unk_04[0x20 / 4];
};

// Menu cursor sub-object hierarchy (src/ov002/unk_02202200.cpp, unk_02202b68.cpp)
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
};

class Unk_ov002_02202d98 : public HandCursor {
public:
    void func_ov002_02202844();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// Same object as Unk_ov002_02202d98 under the name used by src/ov002/unk_02202b68.cpp
class Unk_ov002_0220464c : public HandCursor {
public:
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

// Menu list sub-object, 0x164 bytes (src/ov002/unk_022034c4.cpp)
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// ov139 menu helper, 0x624 bytes (src/ov139/unk_02291f60.cpp)
class Unk_ov139_02291f60 {
public:
    Unk_ov139_02291f60();
    ~Unk_ov139_02291f60();
    s32 func_ov139_02291f98(s32 i);
    void func_ov139_02292154(s32 i);
    void func_ov139_0229217c(s32 i, u8 *str);
    void func_ov139_022921ac();
    void func_ov139_022922a0(s32 a, s32 x, s32 n, s32 e);
    void func_ov139_0229237c();
    void func_ov139_022923dc();
    void func_ov139_02292410();
    void func_ov139_02292480(s32 a, s32 b);
    void func_ov139_02292498();
    void func_ov139_022924d8();
    void func_ov139_022924f4();
    void func_ov139_02292510(u8 id, u8 v);
    u32 unk_00[0x624 / 4];
};

// ov092 singleton returned by ProcBase_GetParent
class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

static inline BOOL Unk_ov141_02293194_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov141_02292b94_Buf {
    u8 b[0x10];
    u8 flag;
};

typedef void (Unk_ov141_02293968::*Unk_ov141_02293968_Fn)();

class Unk_ov141_02293968 : public Unk_ov002_022044e4 {
public:
    Unk_ov141_02293968() : unk_94(), unk_6b8(), unk_71c(), unk_880() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov141_0229297c(u32 m);
    void func_ov141_0229298c(u32 m);
    BOOL func_ov141_0229299c(u32 m);
    BOOL func_ov141_022929b4(s32 v);
    void func_ov141_022929e8();
    void func_ov141_022929ec();
    void func_ov141_022929f0(s32 idx, void *src);
    s32 func_ov141_02292a24();
    s32 func_ov141_02292a48(u8 *e);
    void func_ov141_02292afc();
    void func_ov141_02292b94();
    void func_ov141_02292ca0();
    BOOL func_ov141_02292ce4(u32 pad);
    void func_ov141_02292d78();
    void func_ov141_02292da4();
    void func_ov141_02292dc4();
    void func_ov141_02292de4(s32 a, s32 b);
    void func_ov141_02292e48();
    void func_ov141_02292e6c();
    s32 func_ov141_02292e90();
    s32 func_ov141_02292eb0();
    void func_ov141_02292ecc();
    void func_ov141_02292f08();
    void func_ov141_02292f44();
    void func_ov141_02292f80();
    void func_ov141_02292fa0();
    void func_ov141_02292fbc();
    void func_ov141_02292fd4();
    void func_ov141_02293000();
    void func_ov141_02293054();
    void func_ov141_022930d4();
    void func_ov141_02293104();
    void func_ov141_02293194();
    void func_ov141_02293254();
    void func_ov141_02293270();
    void func_ov141_022932f0();
    void func_ov141_0229333c();
    void func_ov141_02293354();
    void func_ov141_02293380();
    void func_ov141_02293388();
    void func_ov141_022933a4();
    void func_ov141_022933d0();
    void func_ov141_02293424();
    void func_ov141_02293448();
    void func_ov141_02293474();
    void func_ov141_022934b4();
    void func_ov141_022934e4();
    void func_ov141_02293524();
    void func_ov141_022935e0();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov139_02291f60 unk_94;
    /* 0x6b8 */ Unk_ov002_02204614 unk_6b8;
    /* 0x71c */ Unk_ov002_022046cc unk_71c;
    /* 0x880 */ Unk_020e45f8 unk_880;
    /* 0x8a4 */ u8 unk_8a4[6][0xe0];
    /* 0xde4 */ u8 unk_de4[6][0x11];
    /* 0xe4a */ u8 unk_e4a[2];
    /* 0xe4c */ u32 unk_e4c;
    /* 0xe50 */ s32 unk_e50;
    /* 0xe54 */ s32 unk_e54;
    /* 0xe58 */ s32 unk_e58;
    /* 0xe5c */ s32 unk_e5c;
    /* 0xe60 */ u8 unk_e60[0x800];
    /* 0x1660 */ u16 unk_1660;
    /* 0x1662 */ u8 unk_1662;
    /* 0x1663 */ u8 unk_1663[6];
    /* 0x1669 */ u8 unk_1669[6];
    /* 0x166f */ u8 unk_166f;
    /* 0x1670 */ u8 unk_1670;
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov141_SceneEntry {
    Unk_ov141_02293968 *(*create)();
    u16 a;
    u16 b;
};
extern "C" Unk_ov141_SceneEntry data_ov141_02293900 = {func_ov141_022938a0, 0xb6, 0xba};

extern "C" Unk_ov141_02293968 *func_ov141_022938a0() { return new Unk_ov141_02293968(); }

BOOL Unk_ov141_02293968::vfunc_00() {
    func_ov141_022933d0();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov141_02293968::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291c5c();
    func_ov141_022933a4();
    return TRUE;
}

BOOL Unk_ov141_02293968::onDraw() {
    if (MenuCtrl_IsButtons()) {
        unk_6b8.func_ov002_02202844();
    }
    if (!func_ov141_0229299c(1)) {
        return FALSE;
    }
    unk_71c.func_ov002_022036a4(unk_e50);
    u32 base = unk_e4c + 0x60;
    s32 h0 = unk_94.func_ov139_02291f98(0);
    s32 h1 = unk_94.func_ov139_02291f98(1);
    s32 h2 = unk_94.func_ov139_02291f98(2);
    s32 h3 = unk_94.func_ov139_02291f98(3);
    s32 t = unk_e54;
    if (t != -1) {
        Oam_DrawCell(1, h1, 0x80, base + (t << 4), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    Oam_DrawCell(1, h0, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, h2, 0x80, base, unk_e5c, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, h3, 0x80, base, unk_e58, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    unk_94.func_ov139_02292480(0, unk_e4c);
    return TRUE;
}

BOOL Unk_ov141_02293968::vfunc_4c() {
    static Unk_ov141_02293968_Fn tbl[5] = {
        &Unk_ov141_02293968::func_ov141_02293524,
        &Unk_ov141_02293968::func_ov141_022934e4,
        &Unk_ov141_02293968::func_ov141_022934b4,
        &Unk_ov141_02293968::func_ov141_02293474,
        &Unk_ov141_02293968::func_ov141_02293448};
    func_ov141_02293354();
    (this->*tbl[unk_8c])();
    func_ov141_0229333c();
    return TRUE;
}

void Unk_ov141_02293968::func_ov141_022935e0() {
    static Unk_ov141_02293968_Fn tbl[6] = {
        &Unk_ov141_02293968::func_ov141_02293194,
        &Unk_ov141_02293968::func_ov141_02293104,
        &Unk_ov141_02293968::func_ov141_022930d4,
        &Unk_ov141_02293968::func_ov141_02293054,
        &Unk_ov141_02293968::func_ov141_02293000,
        &Unk_ov141_02293968::func_ov141_02292fd4};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov141_02293968::vfunc_50() {
    func_ov141_02293388();
    func_ov141_022935e0();
    func_ov141_02293380();
    return TRUE;
}

BOOL Unk_ov141_02293968::vfunc_54() { return TRUE; }

BOOL Unk_ov141_02293968::vfunc_58() { return TRUE; }

BOOL Unk_ov141_02293968::vfunc_5c() {
    if (func_ov141_0229299c(2)) {
        func_0206ecf8(0);
    } else {
        func_0206ecf8(1);
        void *s = func_0206e868();
        if (s) {
            MI_CpuCopy8(unk_8a4[unk_e54], s, 0xe0);
        }
        s = func_0206e85c();
        if (s) {
            MI_CpuCopy8(unk_de4[unk_e54], s, 0x11);
        }
    }
    func_0206e874();
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov141_02293968::func_ov141_02293524() {
    func_ov141_022932f0();
    func_ov141_02293270();
    func_ov141_02293254();
    func_ov002_02200a50(1);
}

void Unk_ov141_02293968::func_ov141_022934e4() {
    unk_94.func_ov139_022921ac();
    func_ov002_022008e0(8, 4, 0, 0x30);
    func_020020b8(6);
    func_ov141_02293424();
    func_ov141_0229298c(1);
    func_ov002_02200a50(2);
}

void Unk_ov141_02293968::func_ov141_022934b4() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov141_02292f80();
        func_ov141_022929ec();
    }
    func_ov141_02293424();
}

void Unk_ov141_02293968::func_ov141_02293474() {
    func_ov141_022929e8();
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov141_02293424();
    func_ov002_02200a50(4);
}

void Unk_ov141_02293968::func_ov141_02293448() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
    } else {
        func_ov141_02293424();
    }
}

void Unk_ov141_02293968::func_ov141_02293424() {
    func_ov002_02200840(6, 0, 0);
    unk_e4c = func_ov002_02200920();
}

void Unk_ov141_02293968::func_ov141_022933d0() {
    s32 i;
    unk_1660 = 0;
    unk_94.func_ov139_02292510(6, 0x7e);
    for (i = 0; i < 6; i++) {
        unk_1663[i] = 0;
    }
    func_ov141_022929b4(-1);
    unk_e5c = 8;
    unk_1670 = 0;
}

void Unk_ov141_02293968::func_ov141_022933a4() {
    unk_71c.func_ov002_02203900();
    unk_94.func_ov139_022924f4();
    unk_880.func_020b87d0();
}

void Unk_ov141_02293968::func_ov141_02293388() {
    func_ov141_02293354();
    unk_6b8.vfunc_0c();
}

void Unk_ov141_02293968::func_ov141_02293380() {
    func_ov141_0229333c();
}

void Unk_ov141_02293968::func_ov141_02293354() {
    unk_880.func_020b87d0();
    unk_71c.func_ov002_02203900();
    unk_94.func_ov139_022924d8();
}

void Unk_ov141_02293968::func_ov141_0229333c() {
    func_ov141_02292ca0();
    unk_94.func_ov139_02292498();
}

void Unk_ov141_02293968::func_ov141_022932f0() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov141_02293968::func_ov141_02293270() {
    unk_94.func_ov139_02292410();
    unk_94.func_ov139_022923dc();
    File_LoadToBuffer((void *)"menu/res/b0_bg.bsc", unk_e60, 0x800);
    func_0206ee80(unk_e60, 7, 8, 0x10, 0x13, 7);
    func_0206ee80(unk_e60, 0x12, 8, 0x19, 0x13, 7);
    func_ov141_0229298c(4);
    func_020026c4((void *)"menu/res/ten0.bpl", gCurrentHeap, 6, 3, 3, 3);
}

void Unk_ov141_02293968::func_ov141_02293254() {
    unk_94.func_ov139_0229237c();
    func_ov002_02203920(&unk_71c);
}

void Unk_ov141_02293968::func_ov141_02293194() {
    if (func_ov002_02200a14(1)) {
        func_ov141_02292fa0();
        return;
    }
    if (Unk_ov141_02293194_Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY - 0x10;
        if (x >= 0x28 && x < 0xd0 && y >= 0x30 && y < 0x90) {
            s32 i = (y - 0x30) >> 4;
            if (unk_1663[i] != 0) {
                if (func_ov141_022929b4(i)) {
                    Snd_PlaySe(0x29);
                }
            }
        } else if (y >= 0x96 && y < 0xa7) {
            if (x >= 0x37 && x < 0x7b) {
                func_ov141_02292f08();
            } else if (x >= 0x89 && x < 0xc5) {
                if (unk_e58 == 8) {
                    func_ov141_02292f44();
                }
            }
        }
    } else {
        func_ov141_02292b94();
    }
}

void Unk_ov141_02293968::func_ov141_02293104() {
    if (func_ov002_022009d4()) {
        func_ov141_02292fbc();
    } else if (func_ov141_02292ce4(func_ov002_022009c8())) {
        func_ov141_02292e48();
    } else {
        u32 t = gPad[1];
        if (t & 1) {
            func_ov141_02292da4();
        } else if (t & 2) {
            func_ov141_02292e6c();
            func_ov141_02292f08();
        } else if ((t & 8) && unk_e58 == 8) {
            func_ov141_02292e6c();
            func_ov141_02292f44();
        } else {
            func_ov141_02292b94();
        }
    }
}

void Unk_ov141_02293968::func_ov141_022930d4() {
    if (!unk_6b8.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_1662);
        func_ov141_022935e0();
    }
}

void Unk_ov141_02293968::func_ov141_02293054() {
    if (unk_6b8.isAnimDone()) {
        u32 c = unk_1670;
        if (c == 7) {
            if (unk_e58 == 8) {
                func_ov141_02292f44();
                return;
            }
        } else if (c == 6) {
            func_ov141_02292f08();
            return;
        } else if (unk_1663[c] != 0) {
            func_ov141_022929b4(c);
            Snd_PlaySe(0x29);
            func_ov141_0229298c(8);
            func_ov141_0229298c(0x10);
        }
        func_ov002_02200a58(1);
        func_ov141_02292d78();
    }
}

void Unk_ov141_02293968::func_ov141_02293000() {
    if (unk_6b8.isAnimDone()) {
        func_ov141_02292dc4();
        func_ov002_02200a58(unk_1662);
        if (func_ov141_0229299c(8)) {
            func_ov141_0229297c(8);
            unk_1670 = 7;
            func_ov141_02292e48();
        }
    }
}

void Unk_ov141_02293968::func_ov141_02292fd4() {
    if (unk_166f != 0) {
        unk_166f--;
    } else {
        func_ov141_02292e6c();
        func_ov002_02200a60(1);
    }
}

void Unk_ov141_02293968::func_ov141_02292fbc() {
    func_ov141_02292e6c();
    func_ov002_02200a58(0);
}

void Unk_ov141_02293968::func_ov141_02292fa0() {
    func_ov141_02292ecc();
    func_ov002_02200980();
    func_ov002_02200a58(1);
}

void Unk_ov141_02293968::func_ov141_02292f80() {
    if (MenuCtrl_IsTouch()) {
        func_ov141_02292fbc();
    } else {
        func_ov141_02292fa0();
    }
}

void Unk_ov141_02293968::func_ov141_02292f44() {
    func_ov141_0229297c(2);
    unk_e58 = 10;
    unk_166f = 5;
    func_ov002_02200a50(3);
    func_ov002_02200a58(5);
    Snd_PlaySe(0x27);
}

void Unk_ov141_02293968::func_ov141_02292f08() {
    func_ov141_0229298c(2);
    unk_e5c = 10;
    unk_166f = 5;
    func_ov002_02200a50(3);
    func_ov002_02200a58(5);
    Snd_PlaySe(0x28);
}

void Unk_ov141_02293968::func_ov141_02292ecc() {
    s32 a = func_ov141_02292eb0();
    s32 b = func_ov141_02292e90();
    unk_6b8.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_6b8)->func_ov002_02202d00(7);
    func_ov141_02292dc4();
}

s32 Unk_ov141_02293968::func_ov141_02292eb0() {
    u32 c = unk_1670;
    if (c == 6) {
        return 0x43;
    }
    if (c == 7) {
        return 0x95;
    }
    return 0x2c;
}

s32 Unk_ov141_02293968::func_ov141_02292e90() {
    u32 c = unk_1670;
    if ((u8)(c + 0xfa) <= 1) {
        return 0xae;
    }
    return c * 16 + 0x46;
}

void Unk_ov141_02293968::func_ov141_02292e6c() {
    ((Unk_ov002_0220464c *)&unk_6b8)->func_ov002_02202d00(0);
    unk_6b8.vfunc_0c();
}

void Unk_ov141_02293968::func_ov141_02292e48() {
    s32 a = func_ov141_02292eb0();
    s32 b = func_ov141_02292e90();
    func_ov141_02292de4(a, b);
}

void Unk_ov141_02293968::func_ov141_02292de4(s32 a, s32 b) {
    if (func_ov141_0229299c(0x10)) {
        unk_6b8.func_ov002_022029e8(a, b, 3, 0);
        func_ov141_0229297c(0x10);
    } else {
        unk_6b8.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_1662 = unk_8d;
    func_ov002_02200a58(2);
}

void Unk_ov141_02293968::func_ov141_02292dc4() {
    unk_6b8.func_ov002_02202a78();
    unk_6b8.vfunc_0c();
}

void Unk_ov141_02293968::func_ov141_02292da4() {
    ((Unk_ov002_0220464c *)&unk_6b8)->func_ov002_02202b68();
    func_ov002_02200a58(3);
}

void Unk_ov141_02293968::func_ov141_02292d78() {
    unk_6b8.func_ov002_02202af0();
    unk_1662 = unk_8d;
    func_ov002_02200a58(4);
}

BOOL Unk_ov141_02293968::func_ov141_02292ce4(u32 pad) {
    u32 old = unk_1670;
    if (old <= 5) {
        if (func_ov002_0220128c(pad)) {
            if (unk_1670 != 0) {
                unk_1670 = unk_1670 - 1;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (unk_1670 < 5) {
                unk_1670 = unk_1670 + 1;
            } else {
                unk_1670 = 6;
            }
        }
    } else {
        if (func_ov002_0220128c(pad)) {
            unk_1670 = 5;
        } else if (func_ov002_0220126c(pad)) {
            unk_1670 = 6;
        } else if (func_ov002_0220125c(pad)) {
            unk_1670 = 7;
        }
    }
    if (old != unk_1670) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov141_02293968::func_ov141_02292ca0() {
    if (func_ov141_0229299c(4)) {
        if (unk_880.func_020b86c0((u32)unk_e60, 6, 0x800, 0)) {
            func_ov141_0229297c(4);
        }
    }
}

void Unk_ov141_02293968::func_ov141_02292b94() {
    s32 cnt;
    u32 *list;
    s32 n2;
    s32 z[3];
    Unk_ov141_02292b94_Buf buf;
    s32 i;
    func_020733bc();
    cnt = func_020eae78();
    for (i = 0; i < 6; i++) {
        if (unk_1663[i] == 1) {
            unk_1663[i] = 2;
        }
    }
    func_0207217c();
    list = func_020ea65c();
    z[0] = 0;
    z[1] = 0;
    z[2] = 0;
    for (u8 j = 0; j < cnt; j = j + 1) {
        u32 e = list[j];
        if (e != 0) {
            func_0207217c();
            u32 n = func_020ea6c8((void *)e);
            if (n == 0x11) {
                func_0207217c();
                MI_CpuCopy8(func_020ea6f4((void *)e), &buf, n);
                if (buf.flag == 0) {
                    s32 idx = func_ov141_02292a48((u8 *)e);
                    if (idx == ~z[1]) {
                        s32 idx2 = func_ov141_02292a24();
                        if (idx2 != ~z[2]) {
                            func_ov141_022929f0(idx2, (void *)e);
                            func_0207217c();
                            n2 = func_020ea6c8((void *)e);
                            func_0207217c();
                            void *q = func_020ea6f4((void *)e);
                            u8 *dst = unk_de4[idx2];
                            MI_CpuCopy8(q, dst, n2);
                            unk_94.func_ov139_0229217c(idx2, dst);
                            *((u8 *)this + idx2 + 0x1669) = z[0];
                        }
                    } else {
                        func_ov141_022929f0(idx, (void *)e);
                    }
                }
            }
        }
    }
    func_ov141_02292afc();
}

void Unk_ov141_02293968::func_ov141_02292afc() {
    s32 i;
    s32 none = -1;
    u32 zero = 0;
    for (i = 0; i < 6; i++) {
        u8 *e = (u8 *)this + i;
        u8 *st = e + 0x1663;
        switch (e[0x1663]) {
        case 1:
            if (e[0x1669] < 5) {
                e[0x1669] = e[0x1669] + 1;
                unk_94.func_ov139_022922a0(i, e[0x1669], 5, 0xe);
            }
            break;
        case 2:
            if (e[0x1669] > 1) {
                e[0x1669]--;
                unk_94.func_ov139_022922a0(i, e[0x1669], 5, 0xe);
            } else {
                *st = zero;
                unk_94.func_ov139_02292154(i);
                if (unk_e54 == i) {
                    func_ov141_022929b4(none);
                }
            }
            break;
        }
    }
}

s32 Unk_ov141_02293968::func_ov141_02292a48(u8 *e) {
    for (s32 i = 0; i < 6; i++) {
        if (unk_1663[i] == 2) {
            BOOL fE = FALSE, fD = FALSE, fC = FALSE, fB = FALSE, fA = FALSE;
            u8 *s = unk_8a4[i] + 2;
            if (e[2] == s[0] && e[3] == s[1]) {
                fA = TRUE;
            }
            if (fA && e[4] == s[2]) {
                fB = TRUE;
            }
            if (fB && e[5] == s[3]) {
                fC = TRUE;
            }
            if (fC && e[6] == s[4]) {
                fD = TRUE;
            }
            if (fD && e[7] == s[5]) {
                fE = TRUE;
            }
            if (fE) {
                return i;
            }
        }
    }
    return -1;
}

s32 Unk_ov141_02293968::func_ov141_02292a24() {
    for (s32 i = 0; i < 6; i++) {
        if (unk_1663[i] == 0) {
            return i;
        }
    }
    return -1;
}

void Unk_ov141_02293968::func_ov141_022929f0(s32 idx, void *src) {
    MI_CpuCopy8(src, unk_8a4[idx], 0xe0);
    unk_1663[idx] = 1;
}

void Unk_ov141_02293968::func_ov141_022929ec() {}

void Unk_ov141_02293968::func_ov141_022929e8() {}

BOOL Unk_ov141_02293968::func_ov141_022929b4(s32 v) {
    BOOL changed = unk_e54 != v ? TRUE : FALSE;
    unk_e54 = v;
    if (v == -1) {
        unk_e58 = 9;
    } else {
        unk_e58 = 8;
    }
    return changed;
}

BOOL Unk_ov141_02293968::func_ov141_0229299c(u32 m) {
    if (unk_1660 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov141_02293968::func_ov141_0229298c(u32 m) { unk_1660 = unk_1660 | m; }

void Unk_ov141_02293968::func_ov141_0229297c(u32 m) { unk_1660 = unk_1660 & ~m; }

