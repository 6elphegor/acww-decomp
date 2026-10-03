// ov140: scene overlay (class Unk_ov140_02293e04, vtable 0x02293e04, 0x1760 bytes).
// LampLights list screen of up to 0x20 records shown six per page, with three counters drawn as digits.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov140_02293e04;

extern "C" {
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];

void Mem_Clear(void *p, u32 n);
void Mem_Copy(const void *src, void *dst, u32 n);
void func_0206f994(void *win, u8 *src, u32 n);
void func_0206ee80(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void func_0206ecf8(u32 v);
void func_0206ed2c(u32 v);
void func_0206e874();
void Snd_PlaySe(u32 v);
void Gfx2d_SetSubBgModeState(u32 a);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 a, u32 b, u32 c, u32 d);
void Gfx2d_ShowLayer(u32 a);
void Gfx2d_ResetLayer(u32 a);
void File_LoadToBuffer(void *src, void *dst, u32 n);
void Oam_DrawCell(s32 a, void *src, s32 n, void *dst, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void *Net_GetWifiFriendList();
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_ov002_02203920(void *p);
Unk_ov140_02293e04 *func_ov140_02293c6c();
void func_ov140_022935d0();
}

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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
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

// Text window, 0x40 bytes (src/main/unk_0206f53c.cpp)
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();
    u8 unk_04[0x3c];
};

// Screen upload helper, 0x24 bytes (src/main/unk_020b8464.cpp)
class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u8 unk_04[0x20];
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
    u32 func_ov139_02291f98(s32 i);
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

typedef void (Unk_ov140_02293e04::*Unk_ov140_02293e04_Fn)();

class Unk_ov140_02293e04 : public Unk_ov002_022044e4 {
public:
    Unk_ov140_02293e04() : unk_8e8(), unk_f0c(), unk_f70(), unk_10d4(), unk_16a0() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov140_022929b0(u32 m);
    void func_ov140_022929c0(u32 m);
    BOOL func_ov140_022929d0(u32 m);
    void func_ov140_022929e8();
    void func_ov140_02292a3c();
    void func_ov140_02292a90();
    void func_ov140_02292b10();
    Unk_020e0488 *func_ov140_02292b3c();
    void *func_ov140_02292b6c();
    void func_ov140_02292b74(s32 t);
    BOOL func_ov140_02292bb4(u8 *p);
    void func_ov140_02292bc8();
    s32 func_ov140_02292c48();
    void func_ov140_02292c84();
    BOOL func_ov140_02292d88();
    void func_ov140_02292e00(s32 v);
    void func_ov140_02292e20();
    void func_ov140_02292e64();
    BOOL func_ov140_02292ea4(u32 pad);
    void func_ov140_02292f48();
    void func_ov140_02292f74();
    void func_ov140_02292f94();
    void func_ov140_02292fb4(s32 a, s32 b);
    void func_ov140_02293018();
    void func_ov140_0229303c();
    s32 func_ov140_02293060();
    s32 func_ov140_02293080();
    void func_ov140_022930a4();
    void func_ov140_022930e0();
    void func_ov140_02293140();
    void func_ov140_02293178();
    void func_ov140_022931b0();
    void func_ov140_022931d0();
    void func_ov140_022931ec();
    void func_ov140_02293204();
    void func_ov140_02293260();
    void func_ov140_02293298();
    void func_ov140_022932c4();
    void func_ov140_02293318();
    void func_ov140_022933b8();
    void func_ov140_022933e8();
    void func_ov140_02293450();
    void func_ov140_0229352c();
    void func_ov140_02293574();
    void func_ov140_02293598();
    void func_ov140_0229361c();
    void func_ov140_02293638();
    void func_ov140_0229366c();
    void func_ov140_02293674();
    void func_ov140_02293690();
    void func_ov140_022936c4();
    void func_ov140_02293750();
    void func_ov140_02293770();
    void func_ov140_0229379c();
    void func_ov140_022937d4();
    void func_ov140_022937fc();
    void func_ov140_02293848();
    void func_ov140_022938e0();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u8 *unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 unk_ac[0x800];
    /* 0x8ac */ u16 unk_8ac;
    /* 0x8ae */ u8 unk_8ae;
    /* 0x8af */ u8 unk_8af[6];
    /* 0x8b5 */ u8 unk_8b5[0x20];
    /* 0x8d5 */ u8 unk_8d5[6];
    /* 0x8db */ u8 unk_8db;
    /* 0x8dc */ u8 unk_8dc;
    /* 0x8dd */ u8 unk_8dd;
    /* 0x8de */ u8 unk_8de;
    /* 0x8df */ u8 unk_8df;
    /* 0x8e0 */ u8 unk_8e0[6];
    /* 0x8e6 */ u8 unk_8e6;
    /* 0x8e7 */ u8 unk_8e7;
    /* 0x8e8 */ Unk_ov139_02291f60 unk_8e8;
    /* 0xf0c */ Unk_ov002_02204614 unk_f0c;
    /* 0xf70 */ Unk_ov002_022046cc unk_f70;
    /* 0x10d4 */ BgVramTask unk_10d4;
    /* 0x10f8 */ u8 unk_10f8[0x16a0 - 0x10f8];
    /* 0x16a0 */ Unk_020e0488 unk_16a0[3];
};

extern "C" {
extern u32 data_ov140_02293d00[];
extern u32 data_ov140_02293d40[];
extern u32 data_ov140_02293d80[];
extern u32 data_ov140_02293d88[];
extern u32 data_ov140_02293da4[];
extern u32 data_ov140_02293dcc[];
extern u32 data_ov140_02293e64[];
}

static inline BOOL Unk_ov140_02293450_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov140_SceneEntry {
    Unk_ov140_02293e04 *(*create)();
    u16 a;
    u16 b;
};

// Data definition order is chosen so mwcc emits the objects in the original order

extern "C" u32 data_ov140_02293e64[84] = {
    0x81a800a8, 0x0000b17b, 0x41c880a8, 0x0000b17f,
    0x41a840c8, 0x0000b1fb, 0x01c800c8, 0x0000b1ff,
    0x4028403e, 0x000048e6, 0x4008403e, 0x000048e6,
    0x41e0403e, 0x000048e6, 0x41c0403e, 0x000048e6,
    0x41a0403e, 0x000048e6, 0x4028402e, 0x000048e6,
    0x4008402e, 0x000048e6, 0x41e0402e, 0x000048e6,
    0x41c0402e, 0x000048e6, 0x41a0402e, 0x000048e6,
    0x4028401e, 0x000048e6, 0x4008401e, 0x000048e6,
    0x41e0401e, 0x000048e6, 0x41c0401e, 0x000048e6,
    0x41a0401e, 0x000048e6, 0x4028400e, 0x000048e6,
    0x4008400e, 0x000048e6, 0x41e0400e, 0x000048e6,
    0x41c0400e, 0x000048e6, 0x41a0400e, 0x000048e6,
    0x402840fe, 0x000048e6, 0x400840fe, 0x000048e6,
    0x41e040fe, 0x000048e6, 0x41c040fe, 0x000048e6,
    0x41a040fe, 0x000048e6, 0x402840ee, 0x000048e6,
    0x400840ee, 0x000048e6, 0x41e040ee, 0x000048e6,
    0x41c040ee, 0x000048e6, 0x41a040ee, 0x000048e6,
    0x41b440d6, 0x000058cd, 0x01d440d6, 0x000058d1,
    0x400c40d6, 0x000058ed, 0x002c40d6, 0x000058f1,
    0x902040d5, 0x00005888, 0x800840d5, 0x00005888,
    0x91c840d5, 0x00005888, 0x81b040d5, 0xffff5888,
};

// Scene registration entry read by main (0x020e2100): factory, then two ids
extern "C" Unk_ov140_SceneEntry data_ov140_02293d10 = {func_ov140_02293c6c, 0xb5, 0xb9};

extern "C" u32 data_ov140_02293d80[2] = {0x804840e0, 0xffffc1c8};

extern "C" u32 data_ov140_02293d40[2] = {0x804840e0, 0xffffc1c0};

// Sprite descriptors for the per-row status icons (vfunc_24)
extern "C" u32 data_ov140_02293d00[2] = {0x804840e0, 0xffffc1c4};

extern "C" u32 data_ov140_02293d88[2] = {0x804840e0, 0xffffd1cc};

extern "C" u32 data_ov140_02293dcc[12] = {
    0x402840ee, 0x000058c6, 0x419c00df, 0x00005886, 0x400840ee, 0x000058c6,
    0x41e040ee, 0x000058c6, 0x41c040ee, 0x000058c6, 0x41a040ee, 0xffff58c6,
};

extern "C" Unk_ov140_02293e04 *func_ov140_02293c6c() { return new Unk_ov140_02293e04(); }

BOOL Unk_ov140_02293e04::vfunc_00() {
    func_ov140_022936c4();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov140_02293e04::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291c5c();
    func_ov140_02293690();
    return TRUE;
}

BOOL Unk_ov140_02293e04::onDraw() {
    if (MenuCtrl_IsButtons()) {
        unk_f0c.func_ov002_02202844();
    }
    if (func_ov140_022929d0(1) == 0) {
        return FALSE;
    }
    unk_f70.func_ov002_022036a4(unk_98);
    u8 *base = unk_94 + 0x60;
    Oam_DrawCell(1, data_ov140_02293da4, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    u32 a = unk_8e8.func_ov139_02291f98(5);
    u32 b = unk_8e8.func_ov139_02291f98(6);
    u32 c = unk_8e8.func_ov139_02291f98(7);
    s32 v = unk_9c;
    if (v != -1) {
        Oam_DrawCell(1, data_ov140_02293dcc, 0x80, base + (v << 4), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    Oam_DrawCell(1, data_ov140_02293e64, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, (void *)a, 0x80, base, unk_a8, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, (void *)b, 0x80, base, unk_a4, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, (void *)c, 0x80, base, unk_a0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    unk_8e8.func_ov139_02292480(0, (s32)unk_94);
    if (func_ov140_022929d0(0x20) == 0) {
        void *tbl[5] = {0, data_ov140_02293d40, data_ov140_02293d00, data_ov140_02293d80, data_ov140_02293d88};
        s32 z = 0;
        s32 i;
        for (i = 0; i < 6; base += 0x10, i++) {
            void *t = tbl[unk_8e0[i]];
            if (t != 0) {
                Oam_DrawCell(1, t, 0x80, base, -1, 2, 0x1000, 0x1000, z, -1, z, z);
            }
        }
    }
    return TRUE;
}

extern "C" u32 data_ov140_02293da4[10] = {
    0x005040d7, 0x000081f4, 0x004880d4, 0x0000c1d0, 0x01a600d7,
    0x000081f3, 0x019a00d7, 0x000081f2, 0x01a000d7, 0xffff81f1,
};

BOOL Unk_ov140_02293e04::vfunc_4c() {
    static Unk_ov140_02293e04_Fn tbl[5] = {
        &Unk_ov140_02293e04::func_ov140_02293848,
        &Unk_ov140_02293e04::func_ov140_022937fc,
        &Unk_ov140_02293e04::func_ov140_022937d4,
        &Unk_ov140_02293e04::func_ov140_0229379c,
        &Unk_ov140_02293e04::func_ov140_02293770};
    func_ov140_02293638();
    (this->*tbl[unk_8c])();
    func_ov140_0229361c();
    return TRUE;
}

void Unk_ov140_02293e04::func_ov140_022938e0() {
    static Unk_ov140_02293e04_Fn tbl[8] = {
        &Unk_ov140_02293e04::func_ov140_02293450,
        &Unk_ov140_02293e04::func_ov140_022933e8,
        &Unk_ov140_02293e04::func_ov140_022933b8,
        &Unk_ov140_02293e04::func_ov140_02293318,
        &Unk_ov140_02293e04::func_ov140_022932c4,
        &Unk_ov140_02293e04::func_ov140_02293298,
        &Unk_ov140_02293e04::func_ov140_02293260,
        &Unk_ov140_02293e04::func_ov140_02293204};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov140_02293e04::vfunc_50() {
    func_ov140_02293674();
    func_ov140_022938e0();
    func_ov140_0229366c();
    return TRUE;
}

BOOL Unk_ov140_02293e04::vfunc_54() { return TRUE; }

BOOL Unk_ov140_02293e04::vfunc_58() { return TRUE; }

BOOL Unk_ov140_02293e04::vfunc_5c() {
    if (func_ov140_022929d0(2)) {
        func_0206ecf8(0);
    } else {
        func_0206ecf8(1);
        func_0206ed2c(unk_8d5[unk_9c]);
    }
    func_0206e874();
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov140_02293e04::func_ov140_02293848() {
    func_ov140_022935d0();
    func_ov140_02293598();
    func_ov140_02293574();
    unk_8e8.func_ov139_022921ac();
    func_ov002_02200a50(1);
}

void Unk_ov140_02293e04::func_ov140_022937fc() {
    func_ov140_02292bc8();
    func_ov140_02292c84();
    func_ov140_02292b74(5);
    func_ov002_022008e0(8, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    func_ov140_02293750();
    func_ov140_022929c0(1);
    func_ov002_02200a50(2);
}

void Unk_ov140_02293e04::func_ov140_022937d4() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov140_022931b0();
    }
    func_ov140_02293750();
}

void Unk_ov140_02293e04::func_ov140_0229379c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov140_02293750();
    func_ov002_02200a50(4);
}

void Unk_ov140_02293e04::func_ov140_02293770() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        func_ov002_02200a60(5);
    } else {
        func_ov140_02293750();
    }
}

void Unk_ov140_02293e04::func_ov140_02293750() {
    func_ov002_02200840(6, 0, 0);
    unk_94 = (u8 *)func_ov002_02200920();
}

void Unk_ov140_02293e04::func_ov140_022936c4() {
    unk_8ac = 0;
    unk_8e8.func_ov139_02292510(6, 0x7f);
    s32 i;
    for (i = 0; i < 6; i++) {
        unk_8af[i] = 0;
        unk_8e0[i] = 0;
    }
    for (i = 0; i < 0x20; i++) {
        unk_8b5[i] = 0xff;
    }
    func_ov140_02292e00(-1);
    unk_a4 = 8;
    unk_a8 = 9;
    unk_8dc = 0;
    unk_8dd = 0;
    unk_8de = 0;
}

void Unk_ov140_02293e04::func_ov140_02293690() {
    unk_f70.func_ov002_02203900();
    unk_8e8.func_ov139_022924f4();
    unk_10d4.cancel();
    func_ov140_02292b10();
}

void Unk_ov140_02293e04::func_ov140_02293674() {
    func_ov140_02293638();
    unk_f0c.vfunc_0c();
}

void Unk_ov140_02293e04::func_ov140_0229366c() { func_ov140_0229361c(); }

void Unk_ov140_02293e04::func_ov140_02293638() {
    unk_10d4.cancel();
    unk_f70.func_ov002_02203900();
    unk_8e8.func_ov139_022924d8();
    func_ov140_02292b10();
}

void Unk_ov140_02293e04::func_ov140_0229361c() {
    func_ov140_02292e64();
    unk_8e8.func_ov139_02292498();
}

extern "C" void func_ov140_022935d0() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void Unk_ov140_02293e04::func_ov140_02293598() {
    unk_8e8.func_ov139_02292410();
    unk_8e8.func_ov139_022923dc();
    File_LoadToBuffer((void *)"menu/res/d0_bg.bsc", unk_ac, 0x800);
    func_ov140_02292e20();
}

void Unk_ov140_02293e04::func_ov140_02293574() {
    unk_8e8.func_ov139_0229237c();
    func_ov002_02203920(&unk_f70);
}

void Unk_ov140_02293e04::func_ov140_0229352c() {
    u32 c = func_ov140_02292c48();
    if (c != unk_8df) {
        unk_8df = c;
        func_ov140_02292a90();
        func_ov140_02292c84();
        func_ov140_02292b74(5);
    } else if (func_ov140_02292d88()) {
        func_ov140_02292b74(5);
    }
}

void Unk_ov140_02293e04::func_ov140_02293450() {
    func_ov140_0229352c();
    if (func_ov002_02200a14(1)) {
        func_ov140_022931d0();
    } else if (Unk_ov140_02293450_Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY - 0x10;
        if (x >= 0x28 && x < 0xd0 && y >= 0x30 && y < 0x90) {
            s32 i = (y - 0x30) >> 4;
            u8 *e = (u8 *)this + i;
            if (e[0x8af] != 0 && e[0x8e0] != 4) {
                func_ov140_02292e00(i);
                Snd_PlaySe(0x29);
            }
        } else if (y >= 0x96 && y < 0xa7) {
            if (x >= 0x5e && x < 0x9a) {
                func_ov140_02293140();
            } else if (x >= 0x9f && x < 0xdb) {
                if (unk_a0 == 8) {
                    func_ov140_02293178();
                }
            } else if (x >= 0x1d && x < 0x59) {
                if (unk_a8 == 8) {
                    func_ov140_022930e0();
                }
            }
        }
    }
}

void Unk_ov140_02293e04::func_ov140_022933e8() {
    func_ov140_0229352c();
    if (func_ov002_022009d4()) {
        func_ov140_022931ec();
    } else {
        s32 v = func_ov002_022009c8();
        if (func_ov140_02292ea4(v)) {
            func_ov140_02293018();
        } else {
            u16 t = gPad[1];
            if ((u32)t & 1) {
                func_ov140_02292f74();
            } else if ((u32)t & 2) {
                func_ov140_02293140();
                func_ov140_0229303c();
            }
        }
    }
}

void Unk_ov140_02293e04::func_ov140_022933b8() {
    if (unk_f0c.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_8ae);
        func_ov140_022938e0();
    }
}

void Unk_ov140_02293e04::func_ov140_02293318() {
    if (unk_f0c.isAnimDone()) {
        u32 c = unk_8dc;
        if (c == 6) {
            if (unk_a8 != 8) {
                goto tail;
            }
            func_ov140_022930e0();
        } else if (c == 8) {
            if (unk_a0 != 8) {
                goto tail;
            }
            func_ov140_02293178();
        } else if (c == 7) {
            func_ov140_02293140();
        } else {
            u8 *e = (u8 *)this + c;
            if (e[0x8af] == 0 || e[0x8e0] == 4) {
                goto tail;
            }
            func_ov140_02292e00(c);
            Snd_PlaySe(0x29);
            func_ov140_022929c0(8);
            func_ov140_022929c0(0x10);
        tail:
            func_ov002_02200a58(1);
            func_ov140_02292f48();
        }
    }
}

void Unk_ov140_02293e04::func_ov140_022932c4() {
    if (unk_f0c.isAnimDone()) {
        func_ov140_02292f94();
        func_ov002_02200a58(unk_8ae);
        if (func_ov140_022929d0(8)) {
            func_ov140_022929b0(8);
            unk_8dc = 8;
            func_ov140_02293018();
        }
    }
}

void Unk_ov140_02293e04::func_ov140_02293298() {
    if (unk_8db != 0) {
        unk_8db = unk_8db - 1;
    } else {
        func_ov140_0229303c();
        func_ov002_02200a60(1);
    }
}

void Unk_ov140_02293e04::func_ov140_02293260() {
    if (unk_8db > 1) {
        unk_8db = unk_8db - 1;
        func_ov140_02292b74(unk_8db);
    } else {
        func_ov140_02292b74(0);
        func_ov140_02292c84();
        func_ov002_02200a58(7);
    }
}

void Unk_ov140_02293e04::func_ov140_02293204() {
    u32 t = unk_8db;
    if (t < 5) {
        func_ov140_02292b74(t);
        unk_8db++;
    } else {
        func_ov140_02292b74(5);
        unk_a8 = 8;
        if (MenuCtrl_IsTouch()) {
            func_ov140_022931ec();
        } else {
            func_ov002_02200a58(1);
            func_ov140_02292f48();
        }
        func_ov140_022929b0(0x20);
    }
}

void Unk_ov140_02293e04::func_ov140_022931ec() {
    func_ov140_0229303c();
    func_ov002_02200a58(0);
}

void Unk_ov140_02293e04::func_ov140_022931d0() {
    func_ov140_022930a4();
    func_ov002_02200980();
    func_ov002_02200a58(1);
}

void Unk_ov140_02293e04::func_ov140_022931b0() {
    if (MenuCtrl_IsTouch()) {
        func_ov140_022931ec();
    } else {
        func_ov140_022931d0();
    }
}

void Unk_ov140_02293e04::func_ov140_02293178() {
    func_ov140_022929b0(2);
    unk_a0 = 10;
    unk_8db = 5;
    func_ov002_02200a50(3);
    func_ov002_02200a58(5);
    Snd_PlaySe(0x27);
}

void Unk_ov140_02293e04::func_ov140_02293140() {
    func_ov140_022929c0(2);
    unk_a4 = 10;
    unk_8db = 5;
    func_ov002_02200a50(3);
    func_ov002_02200a58(5);
    Snd_PlaySe(0x28);
}

void Unk_ov140_02293e04::func_ov140_022930e0() {
    func_ov140_022929c0(0x20);
    func_ov002_02200a58(6);
    unk_8db = 5;
    unk_8dd++;
    if (unk_8dd > unk_8de) {
        unk_8dd = 0;
    }
    func_ov140_022929e8();
    unk_a8 = 10;
    func_ov140_02292e00(-1);
    Snd_PlaySe(0xc);
}

void Unk_ov140_02293e04::func_ov140_022930a4() {
    s32 x = func_ov140_02293080();
    s32 y = func_ov140_02293060();
    unk_f0c.func_ov002_02202a40(x, y);
    ((Unk_ov002_0220464c *)&unk_f0c)->func_ov002_02202d00(7);
    func_ov140_02292f94();
}

s32 Unk_ov140_02293e04::func_ov140_02293080() {
    u32 v = unk_8dc;
    if (v == 7) {
        return 0x6a;
    }
    if (v == 8) {
        return 0xab;
    }
    if (v == 6) {
        return 0x29;
    }
    return 0x24;
}

s32 Unk_ov140_02293e04::func_ov140_02293060() {
    u32 v = unk_8dc;
    if ((u8)(v + 0xfa) <= 2) {
        return 0xae;
    }
    return v * 16 + 0x46;
}

void Unk_ov140_02293e04::func_ov140_0229303c() {
    ((Unk_ov002_0220464c *)&unk_f0c)->func_ov002_02202d00(0);
    unk_f0c.vfunc_0c();
}

void Unk_ov140_02293e04::func_ov140_02293018() {
    s32 x = func_ov140_02293080();
    s32 y = func_ov140_02293060();
    func_ov140_02292fb4(x, y);
}

void Unk_ov140_02293e04::func_ov140_02292fb4(s32 a, s32 b) {
    if (func_ov140_022929d0(0x10)) {
        unk_f0c.func_ov002_022029e8(a, b, 3, 0);
        func_ov140_022929b0(0x10);
    } else {
        unk_f0c.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_8ae = unk_8d;
    func_ov002_02200a58(2);
}

void Unk_ov140_02293e04::func_ov140_02292f94() {
    unk_f0c.func_ov002_02202a78();
    unk_f0c.vfunc_0c();
}

void Unk_ov140_02293e04::func_ov140_02292f74() {
    ((Unk_ov002_0220464c *)&unk_f0c)->func_ov002_02202b68();
    func_ov002_02200a58(3);
}

void Unk_ov140_02293e04::func_ov140_02292f48() {
    unk_f0c.func_ov002_02202af0();
    unk_8ae = unk_8d;
    func_ov002_02200a58(4);
}

BOOL Unk_ov140_02293e04::func_ov140_02292ea4(u32 pad) {
    u32 old = unk_8dc;
    if (old <= 5) {
        if (func_ov002_0220128c(pad)) {
            if (unk_8dc != 0) {
                unk_8dc--;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (unk_8dc < 5) {
                unk_8dc++;
            } else {
                unk_8dc = 6;
            }
        }
    } else {
        if (func_ov002_0220128c(pad)) {
            unk_8dc = 5;
        } else if (func_ov002_0220126c(pad)) {
            if (unk_8dc > 6) {
                unk_8dc--;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (unk_8dc < 8) {
                unk_8dc++;
            }
        }
    }
    if (old != unk_8dc) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov140_02293e04::func_ov140_02292e64() {
    if (func_ov140_022929d0(4)) {
        if (unk_10d4.requestScreen((u32)unk_ac, 6, 0x800, 0)) {
            func_ov140_022929b0(4);
        }
    }
}

void Unk_ov140_02293e04::func_ov140_02292e20() {
    func_0206ee80(unk_ac, 6, 8, 0xf, 0x13, 7);
    func_0206ee80(unk_ac, 0x11, 8, 0x18, 0x13, 7);
    func_ov140_022929c0(4);
}

void Unk_ov140_02293e04::func_ov140_02292e00(s32 v) {
    unk_9c = v;
    if (v == -1) {
        unk_a0 = 9;
    } else {
        unk_a0 = 8;
    }
}

BOOL Unk_ov140_02293e04::func_ov140_02292d88() {
    s32 i, k;
    BOOL changed = FALSE;
    u8 *tbl = (u8 *)func_ov140_02292b6c();
    k = unk_8dd * 6;
    i = 0;
    s32 z = 0;
    do {
        s32 off = k * 0x13;
        s32 v;
        if (func_ov140_02292bb4(tbl + 0x180 + off) == 0) {
            v = z;
        } else {
            v = (tbl + off)[0x192];
        }
        if (v != unk_8e0[i]) {
            changed = TRUE;
            unk_8e0[i] = v;
        }
        k++;
        i++;
    } while (i < 6);
    return changed;
}

void Unk_ov140_02293e04::func_ov140_02292c84() {
    struct { u8 a[8]; u8 b[8]; u8 pad[8]; } l;
    u32 id;
    u8 *rec;
    u32 off;
    s32 z1 = 0, z2 = 0;
    func_ov140_02292e20();
    Mem_Clear(l.a, 8);
    Mem_Clear(l.b, 8);
    s32 j = unk_8dd * 6;
    u8 *tbl = (u8 *)func_ov140_02292b6c();
    s32 i = 0;
    for (; i < 6; j++, i++) {
        if (j < 0x20) {
            id = unk_8b5[j];
            if (id == 0xff || (off = id * 0x13, rec = tbl + 0x180 + off, !func_ov140_02292bb4(rec))) {
                unk_8af[i] = z1;
                unk_8e0[i] = z1;
                unk_8e8.func_ov139_02292154(i);
            } else {
                unk_8d5[i] = id;
                unk_8af[i] = 1;
                unk_8e0[i] = (tbl + off)[0x192];
                Mem_Copy(tbl + 0x188 + off, l.a, 8);
                Mem_Copy(rec, l.b, 8);
                unk_8e8.func_ov139_0229217c(i, l.a);
            }
        } else {
            unk_8af[i] = z2;
            unk_8e0[i] = z2;
            unk_8e8.func_ov139_02292154(i);
        }
    }
}

s32 Unk_ov140_02293e04::func_ov140_02292c48() {
    s32 i, cnt;
    u8 *tbl = (u8 *)func_ov140_02292b6c();
    cnt = 0;
    i = 0;
    do {
        if (func_ov140_02292bb4(tbl + 0x180 + i * 0x13)) {
            cnt++;
        }
        i++;
    } while (i < 0x20);
    return cnt;
}

void Unk_ov140_02293e04::func_ov140_02292bc8() {
    u8 *tbl = (u8 *)func_ov140_02292b6c();
    s32 cnt = 0;
    s32 i = 0;
    do {
        if (func_ov140_02292bb4(tbl + 0x180 + i * 0x13)) {
            cnt++;
        }
        unk_8b5[i] = i;
        i++;
    } while (i < 0x20);
    unk_8dd = 0;
    unk_8de = 5;
    unk_8df = cnt;
    func_ov140_02292a3c();
    func_ov140_02292a90();
    func_ov140_022929e8();
    if (unk_8de != 0) {
        unk_a8 = 8;
    }
}

BOOL Unk_ov140_02293e04::func_ov140_02292bb4(u8 *p) {
    if (p[0x10] == 6 && p[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov140_02293e04::func_ov140_02292b74(s32 t) {
    s32 i;
    for (i = 0; i < 6; i++) {
        s32 col;
        if (unk_8e0[i] == 4) {
            col = 8;
        } else {
            col = 0xe;
        }
        unk_8e8.func_ov139_022922a0(i, t, 5, col);
    }
}

void *Unk_ov140_02293e04::func_ov140_02292b6c() { return Net_GetWifiFriendList(); }

Unk_020e0488 *Unk_ov140_02293e04::func_ov140_02292b3c() {
    u32 c = unk_8e6;
    if (c >= 3) {
        return &unk_16a0[2];
    }
    unk_8e6 = c + 1;
    return &unk_16a0[unk_8e6 - 1];
}

void Unk_ov140_02293e04::func_ov140_02292b10() {
    s32 i;
    unk_8e6 = 0;
    for (i = 0; i < 3; i++) {
        unk_16a0[i].func_0206fc44();
    }
}

void Unk_ov140_02293e04::func_ov140_02292a90() {
    Unk_020e0488 *w = func_ov140_02292b3c();
    u8 buf[3];
    u32 v = unk_8df;
    if (v < 10) {
        buf[0] = v + 0x35;
        buf[1] = 0;
        buf[2] = 0;
    } else {
        buf[0] = (s32)v / 10 + 0x35;
        buf[1] = unk_8df % 10 + 0x35;
        buf[2] = 0;
    }
    func_0206f994(w, buf, 3);
    w->func_0206fb48(8, 0x1f4, 2, 0xf, 0, 1);
    w->func_0206fab4(0, 0);
}

void Unk_ov140_02293e04::func_ov140_02292a3c() {
    Unk_020e0488 *w = func_ov140_02292b3c();
    u8 buf[2];
    buf[0] = unk_8de + 0x35;
    buf[1] = 0;
    func_0206f994(w, buf, 2);
    w->func_0206fb48(8, 0x1f3, 1, 0xf, 0, 1);
    w->func_0206fab4(0, 0);
}

void Unk_ov140_02293e04::func_ov140_022929e8() {
    Unk_020e0488 *w = func_ov140_02292b3c();
    u8 buf[2];
    buf[0] = unk_8dd + 0x35;
    buf[1] = 0;
    func_0206f994(w, buf, 2);
    w->func_0206fb48(8, 0x1f2, 1, 0xf, 0, 1);
    w->func_0206fab4(0, 0);
}

BOOL Unk_ov140_02293e04::func_ov140_022929d0(u32 m) {
    if (unk_8ac & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov140_02293e04::func_ov140_022929c0(u32 m) { unk_8ac = unk_8ac | m; }

void Unk_ov140_02293e04::func_ov140_022929b0(u32 m) { unk_8ac = unk_8ac & ~m; }

