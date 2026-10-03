#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

#define func_ov002_02202844 _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev
#define func_02063870 _ZN12Unk_020dd38cD1Ev
#define func_02063888 _ZN12Unk_020dd38cC2Ev
#define func_0206fab4 _ZN12Unk_020e048813func_0206fab4Eii
#define func_0206fb9c _ZN12Unk_020e048813func_0206fb9cEjjjhhi
#define func_0206fc44 _ZN12Unk_020e048813func_0206fc44Ev
#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define ScrollKnob_areAnimsDone _ZN10ScrollKnob12areAnimsDoneEv
#define ScrollKnob_setState _ZN10ScrollKnob8setStateEi
#define ScrollKnob_moveTo _ZN10ScrollKnob6moveToEii
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define MsgString_clear _ZN9MsgString5clearEv
#define func_020b86c0 _ZN12Unk_020e45f813func_020b86c0Ejhjj
#define func_020b87d0 _ZN12Unk_020e45f813func_020b87d0Ev
#define func_ov002_022028f0 _ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev
#define func_ov002_022029e8 _ZN18Unk_ov002_02202d9819func_ov002_022029e8Eiiii
#define func_ov002_02202a40 _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii
#define func_ov002_02202a78 _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev
#define func_ov002_02202af0 _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev
#define func_ov002_02202b68 _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev
#define func_ov002_02202d00 _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei
#define func_ov002_02202e60 _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev
#define func_ov002_02202e84 _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev
#define func_ov002_02202f18 _ZN18Unk_ov002_022046b019func_ov002_02202f18Eii
#define func_ov092_02291c5c _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv
#define func_ov092_02291ce4 _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii

extern "C" {
s32 ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void func_020b8800(void *p);
void func_0206fca8(void *p);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_ov092_02291c5c();
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void ScrollKnob_moveTo(void *p, s32 a, s32 b);
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 data_020e416c;
extern u8 data_021ef360[];
extern u8 data_021d7352[];
extern u32 gCurrentHeap;
extern s32 *func_020947f0(s32 v);
extern void func_020b4934();
extern s32 *func_020b5010(void *p);
void func_020026c4(const void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0200261c(const void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02002438(void *a, u32 b, u32 c, u32 d, u32 e);
void File_LoadToBuffer(const void *a, void *b, u32 c);
void func_020024f0(void *a, u32 b, u32 c, u32 d);
void func_0206ee80(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_020021fc(u32 a, u32 b, u32 c);
void func_020021a0(u32 a);
void func_020020b8(u32 a);
s32 func_020b86c0(void *a, void *b, u32 c, u32 d, u32 e);
void func_020b87d0(void *p);
void func_02063888(void *p);
void func_020638d0(void *a, void *b);
void func_02063870(void *p);
void String_SetSlot(u32 a, void *b);
void func_0206fb9c(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void func_0206f9fc(void *a, u32 b);
void func_0206fab4(void *a, u32 b, u32 c);
void func_ov117_02292408(void *a, void *b);
void func_ov117_02292c88(void *p);
void func_ov002_02202844(void *p);
void func_ov117_02292cac();
void *Heap_AllocTail(void *a, u32 b);
void Heap_Free(void *a, void *b);
void func_02135558(void *a, void *b, void *c);
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];
void ScrollKnob_setState(void *p, s32 v);
s32 ScrollKnob_areAnimsDone(void *p);
s32 HandCursor_isAnimDone(void *p);
s32 func_ov002_022028f0(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202d00(void *p, u32 v);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
BOOL func_ov002_02202f18(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
struct Unk_ov120_02293a2c_Oam {
    u16 unk_0;
    u16 a : 9;
    u16 pal : 5;
    u16 b : 2;
    u16 tile : 10;
    u16 c : 6;
    u16 unk_6;
};
extern Unk_ov120_02293a2c_Oam data_ov120_02294f18;
extern const u8 data_ov120_02294ec0[5];
extern const u8 data_ov120_02294ec8[5];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
s16 *func_ov117_02292c40(void *p, s32 i);
u32 func_ov117_02292c2c(void *p, s32 i);
void MsgString_clear(void *p);
void func_0206fc44(void *p);
void *PlayerData_GetCurrent();
s32 PlayerData_getPlayerId(...);
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
BOOL SaveVillagers_IsOccupied(void *a, s32 b);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void MIi_CpuCopy16(void *src, void *dst, u32 n);
void MIi_CpuClear16(u32 v, void *dst, u32 n);
void func_ov002_022019a4(void *p, s32 a);
void func_ov002_02201984(void *p, s32 a);
void func_ov002_02201938(void *p, s32 a);
}

class Unk_020e45f8 {
public:
    Unk_020e45f8();
    u32 unk_00[0x24 / 4];
};

class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x438 (ctor func_ov002_02202f88), 0x48 bytes, polymorphic
class Unk_ov002_022046b0 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x44 / 4];
};

// sub-object at +0x480 (ctor func_ov002_02202658), 0x64 bytes
class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// 3-byte record, ctor func_ov120_02292de4, dtor func_ov120_02292de0
class Unk_ov120_02292de0 {
public:
    Unk_ov120_02292de0();
    ~Unk_ov120_02292de0();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

class Unk_ov117_02292c88 {
public:
    Unk_ov117_02292c88();
    ~Unk_ov117_02292c88();
    u8 unk_00[0x66];
};

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

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 v);
    s32 func_ov002_022008fc(s32 v);
    s32 func_ov002_02200908(s32 v);
    u32 func_ov002_02200920();
    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);

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

class Unk_ov120_02295010;
typedef void (Unk_ov120_02295010::*Unk_ov120_02295010_Fn)();

// Vtable 0x02295010, size 0x2534
class Unk_ov120_02295010 : public Unk_ov002_022044e4 {
public:
    Unk_ov120_02295010()
        : unk_b0(), unk_f8(), unk_438(), unk_480(), unk_24fe(), unk_2507() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov120_02292de8(u32 mask);
    void func_ov120_02292df8(u32 mask);
    BOOL func_ov120_02292e08(u32 mask);
    void func_ov120_02292e1c();
    s32 func_ov120_02292e7c();
    BOOL func_ov120_02292f44(void *pad);
    void func_ov120_02293090();
    void func_ov120_022930b0();
    void func_ov120_022930d0();
    void func_ov120_022930f0();
    void func_ov120_02293168();
    s32 func_ov120_0229318c();
    s32 func_ov120_022931dc();
    void func_ov120_02293230();
    void func_ov120_022932a8();
    void func_ov120_022932c4();
    void func_ov120_022932e8();
    BOOL func_ov120_02293374();
    void func_ov120_022933f0();
    void func_ov120_02293440();
    BOOL func_ov120_0229348c();
    void func_ov120_022934e0();
    BOOL func_ov120_02293590();
    void func_ov120_0229359c(u32 v);
    void func_ov120_022935ac(u32 v);
    void func_ov120_022935c8();
    u32 func_ov120_0229364c(u8 v);
    void func_ov120_0229371c(u8 v);
    void func_ov120_02293784(u8 v);
    s32 func_ov120_02293b0c();
    s32 func_ov120_02293b28();
    void func_ov120_02293bd4();
    void func_ov120_02293bec();
    u32 func_ov120_022936b4(u8 v);
    void func_ov120_02293620();
    u32 func_ov120_02293838(s32 x, s32 y);
    BOOL func_ov120_02293898();
    void func_ov120_022938d0(void *src);
    void func_ov120_02293a2c(s32 x, s32 y, s32 n, s32 flag, s32 pal);
    BOOL func_ov120_02293ac0();
    u8 *func_ov120_02293b48();
    s32 func_ov120_02293b70();
    void func_ov120_02293c04(void *p, u32 idx);
    s32 func_ov120_02293c70(u8 *tbl);
    void func_ov120_02293cc8();
    void func_ov120_02293cfc();
    void *func_ov120_02293dc0();
    void func_ov120_02293df4();
    u32 func_ov120_02293e1c(u32 a, s32 b);
    void func_ov120_02293e70();
    void func_ov120_02293f08();
    void func_ov120_0229439c();
    void func_ov120_02294428();
    void func_ov120_022944d8();
    void func_ov120_0229450c();
    void func_ov120_02294514();
    void func_ov120_02294540();
    void func_ov120_0229460c();
    void func_ov120_02294614();
    void func_ov120_02294634();
    void func_ov120_0229489c();
    void func_ov120_02294024();
    void func_ov120_02294078();
    void func_ov120_022940a4();
    void func_ov120_022940dc();
    void func_ov120_02294100();
    void func_ov120_02294144();
    void func_ov120_0229418c();
    void func_ov120_022941b8();
    void func_ov120_02294290();
    void func_ov120_022942c0();
    void func_ov120_02294958();
    void func_ov120_02294974();
    void func_ov120_0229498c();
    BOOL func_ov120_022949a8();
    void func_ov120_02294a04();
    void func_ov120_02293fc4();
    void func_ov120_0229400c();
    void func_ov120_0229433c();
    void func_ov120_0229470c();
    void func_ov120_0229476c();
    void func_ov120_022947c0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u16 unk_9a;
    /* 0x9c */ u16 unk_9c;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ Unk_020e45f8 unk_b0[2];
    /* 0xf8 */ Unk_020e0488 unk_f8[13];
    /* 0x438 */ Unk_ov002_022046b0 unk_438;
    /* 0x480 */ Unk_ov002_02204614 unk_480;
    /* 0x4e4 */ u16 unk_4e4[0x400];
    /* 0xce4 */ u16 unk_ce4[0x400];
    /* 0x14e4 */ u16 unk_14e4[0x400];
    /* 0x1ce4 */ u16 unk_1ce4[0x400];
    /* 0x24e4 */ u8 unk_24e4[13];
    /* 0x24f1 */ u8 unk_24f1[13];
    /* 0x24fe */ Unk_ov120_02292de0 unk_24fe[3];
    /* 0x2507 */ Unk_ov120_02292de0 unk_2507[14];
};

static inline BOOL IsZero(u8 v) {
    if (v == 0) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov120_022942c0_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

struct Unk_ov120_02294634_V {
    s32 x, y, z;
};

// Forward declarations (definition order sets the data layout)
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_0229498cEv();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_02294974Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_02294958Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_0229489cEv();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_022947c0Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_0229476cEv();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_0229470cEv();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_022942c0Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_02294290Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_022941b8Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_0229418cEv();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_02294144Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_02294100Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_022940dcEv();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_022940a4Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_02294078Ev();
extern "C" void _ZN18Unk_ov120_0229501019func_ov120_02294024Ev();
extern const u8 data_ov120_02294ec0[5];
extern const u8 data_ov120_02294ec8[5];
extern void *data_ov120_02294f68[2];
extern void *data_ov120_02294f70[2];
extern void *data_ov120_02294f08[2];
extern void *data_ov120_02294ee8[2];
extern void *data_ov120_02294f58[2];
extern void *data_ov120_02294f50[2];
extern void *data_ov120_02294f48[2];
extern void *data_ov120_02294f28[2];
extern void *data_ov120_02294f38[2];
extern void *data_ov120_02294f60[2];
extern void *data_ov120_02294f20[2];
extern void *data_ov120_02294ee0[2];
extern void *data_ov120_02294f10[2];
extern void *data_ov120_02294ef0[2];
extern void *data_ov120_02294ef8[2];
extern void *data_ov120_02294f00[2];
extern void *data_ov120_02294f30[2];
extern u8 data_ov120_02294f78[32];
extern u8 data_ov120_02294f98[32];
extern u8 data_ov120_02294fb8[80];
extern "C" Unk_ov120_02295010 *func_ov120_02294e1c();
// Scene registration entry read by main: factory, then two ids
struct Unk_ov120_SceneEntry {
    Unk_ov120_02295010 *(*create)();
    u16 a;
    u16 b;
};


extern "C" Unk_ov120_02295010 *func_ov120_02294e1c() { return new Unk_ov120_02295010(); }

BOOL Unk_ov120_02295010::vfunc_00() {
    func_ov120_02294634();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov120_02295010::vfunc_0c() {
    ProcBase_GetParent(this);
    func_ov092_02291c5c();
    func_ov120_02294614();
    return TRUE;
}

BOOL Unk_ov120_02295010::onDraw() {
    u32 h = unk_94 + 0x60;
    if (func_ov120_02292e08(4)) {
        if (func_ov120_02292e08(8)) {
            ScrollKnob_moveTo(&unk_438, 0x67, unk_94 - 0x12 + unk_a4);
        }
        func_ov002_02202844(&unk_480);
        Oam_DrawCell(1, data_ov120_02294fb8, 0x80, h, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        s32 a, b;
        if (func_ov120_02292e08(1)) {
            b = 0xc;
            a = 0xd;
        } else {
            b = 0xb;
            a = 0xe;
        }
        Oam_DrawCell(1, data_ov120_02294f78, 0x80, h, a, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, data_ov120_02294f98, 0x80, h, b, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        u32 t = unk_ac;
        if (t != 0xe) {
            u8 *e = (u8 *)this + t * 3;
            if (e[0x2509] != 0xc) {
                func_ov120_02293a2c(e[0x2507], unk_94 + e[0x2508], 0xb, 0, -1);
            }
        }
        unk_af = (unk_af + 1) & 0xf;
        if ((unk_af & 0xc) != 0) {
            func_ov120_02293a2c(unk_9e, unk_9f + unk_94, 0xa, 0, -1);
        }
        for (s32 i = 0; i < 3; i++) {
            u8 *e = (u8 *)this + i * 3;
            u32 c = e[0x2500];
            if (c != 0xc) {
                func_ov120_02293a2c(e[0x24fe], unk_94 + e[0x24ff], (u8)(c & 0x7f), (c & 0x80) ? 1 : 0, -1);
            }
        }
        for (s32 i = 0; i < 14; i++) {
            u8 *e = (u8 *)this + i * 3;
            u8 *q = e + 0x2509;
            if (*q != 0xc) {
                s32 v;
                if (i == unk_a8 && !func_ov120_02292e08(0x100)) {
                    v = 8;
                } else {
                    v = -1;
                }
                func_ov120_02293a2c(e[0x2507], unk_94 + e[0x2508], *q, 0, v);
            }
        }
        if (func_ov120_02292e08(8)) {
            unk_438.vfunc_08();
        }
    }
    return TRUE;
}

extern "C" void *data_ov120_02294f28[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_022942c0Ev, 0};
extern "C" const u8 data_ov120_02294ec0[5] = {2, 3, 4, 5, 6};
extern "C" u8 data_ov120_02294f78[32] = {0xd3, 0x00, 0x2a, 0x40, 0xa2, 0xe1, 0x00, 0x00, 0xd3, 0x80, 0x3a, 0x00, 0xa4, 0xe1, 0x00, 0x00, 0xe3, 0x40, 0x2a, 0x00, 0xe2, 0xe1, 0x00, 0x00, 0xe3, 0x00, 0x3a, 0x00, 0xe4, 0xe1, 0xff, 0xff};
extern "C" void *data_ov120_02294f68[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_0229498cEv, 0};
extern "C" const u8 data_ov120_02294ec8[5] = {0xb, 0xc, 9, 0xa, 0xd};
extern "C" void *data_ov120_02294ee0[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_02294144Ev, 0};
extern "C" void *data_ov120_02294ef0[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_022940dcEv, 0};
extern "C" void *data_ov120_02294f70[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_02294974Ev, 0};
extern "C" void *data_ov120_02294f08[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_02294958Ev, 0};
extern "C" void *data_ov120_02294f60[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_022941b8Ev, 0};
extern "C" void *data_ov120_02294f58[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_022947c0Ev, 0};
extern "C" void *data_ov120_02294f50[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_0229476cEv, 0};
extern "C" void *data_ov120_02294f48[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_0229470cEv, 0};

BOOL Unk_ov120_02295010::vfunc_4c() {
    static Unk_ov120_02295010_Fn tbl[7] = {
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f68,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f70,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f08,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294ee8,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f58,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f50,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f48};
    func_ov120_0229460c();
    (this->*tbl[unk_8c])();
    func_ov120_02294540();
    return TRUE;
}




extern "C" void *data_ov120_02294f30[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_02294024Ev, 0};
extern "C" void *data_ov120_02294f38[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_02294290Ev, 0};
extern "C" void *data_ov120_02294f20[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_0229418cEv, 0};
extern "C" Unk_ov120_02293a2c_Oam data_ov120_02294f18 = {0xf8, 0x1f8, 0, 1, 0xc0, 0x1c, 0xffff};
extern "C" void *data_ov120_02294f10[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_02294100Ev, 0};
extern "C" void *data_ov120_02294ee8[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_0229489cEv, 0};
extern "C" void *data_ov120_02294ef8[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_022940a4Ev, 0};
extern "C" u8 data_ov120_02294fb8[80] = {0xb8, 0x40, 0x9d, 0x81, 0xab, 0x61, 0x00, 0x00, 0xb8, 0x40, 0xbd, 0x81, 0xaf, 0x61, 0x00, 0x00, 0xb8, 0x40, 0xdd, 0x81, 0xb3, 0x61, 0x00, 0x00, 0xb8, 0x40, 0xfd, 0x81, 0xb7, 0x61, 0x00, 0x00, 0xb8, 0x00, 0x1d, 0x40, 0xbb, 0x61, 0x00, 0x00, 0xb8, 0x40, 0xf5, 0x81, 0xd9, 0x60, 0x00, 0x00, 0xb8, 0x40, 0xd5, 0x81, 0xd9, 0x60, 0x00, 0x00, 0xb8, 0x40, 0xb5, 0x81, 0xd9, 0x60, 0x00, 0x00, 0xb8, 0x40, 0x15, 0x90, 0xd8, 0x60, 0x00, 0x00, 0xb8, 0x40, 0x95, 0x81, 0xd8, 0x60, 0xff, 0xff};
extern "C" u8 data_ov120_02294f98[32] = {0xd3, 0x00, 0x4d, 0x40, 0xa5, 0xc1, 0x00, 0x00, 0xd3, 0x80, 0x5d, 0x00, 0xa7, 0xc1, 0x00, 0x00, 0xe3, 0x40, 0x4d, 0x00, 0xe5, 0xc1, 0x00, 0x00, 0xe3, 0x00, 0x5d, 0x00, 0xe7, 0xc1, 0xff, 0xff};
extern "C" Unk_ov120_SceneEntry data_ov120_02294f40 = {func_ov120_02294e1c, 0xa3, 0xa7};

void Unk_ov120_02295010::func_ov120_02294a04() {
    static Unk_ov120_02295010_Fn tbl[10] = {
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f28,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f38,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f60,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f20,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294ee0,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f10,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294ef0,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294ef8,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f00,
        *(Unk_ov120_02295010_Fn *)data_ov120_02294f30};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov120_02295010::vfunc_50() {
    func_ov120_02294514();
    func_ov120_02294a04();
    func_ov120_0229450c();
    return TRUE;
}

BOOL Unk_ov120_02295010::vfunc_54() { return TRUE; }

BOOL Unk_ov120_02295010::vfunc_58() { return TRUE; }

BOOL Unk_ov120_02295010::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL Unk_ov120_02295010::func_ov120_022949a8() {
    func_ov092_02291ce4(ProcBase_GetParent(this), 0x44, 1);
    unk_8c = 5;
    func_ov002_02200a60(1);
    return TRUE;
}

void Unk_ov120_02295010::func_ov120_0229498c() {
    func_ov120_022944d8();
    func_ov120_02294428();
    func_ov002_02200a50(1);
}

void Unk_ov120_02295010::func_ov120_02294974() {
    func_ov120_0229439c();
    func_ov002_02200a50(2);
}

void Unk_ov120_02295010::func_ov120_02294958() {
    func_ov120_02293bec();
    func_ov120_02293f08();
    func_ov002_02200a50(3);
}

void Unk_ov120_02295010::func_ov120_0229489c() {
    u32 buf[8];
    func_ov120_0229433c();
    func_02063888(buf);
    func_020638d0(data_021d7352, buf);
    String_SetSlot(0, buf);
    void *q = func_ov120_02293dc0();
    func_0206fb9c(q, 8, 0x1ab, 0x12, 0xf, 0, 0);
    func_0206f9fc(q, 0xa9);
    func_0206fab4(q, 1, 0);
    func_02063870(buf);
    func_ov002_022008e0(0xa, 0, 0, 0x30);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov120_02292df8(4);
    unk_94 = func_ov002_02200920();
    func_ov002_02200a50(4);
}

void Unk_ov120_02295010::func_ov120_022947c0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        unk_ac = 8;
        unk_ad = unk_2507[unk_ac].unk_00;
        unk_ae = unk_2507[unk_ac].unk_01;
        if (*(volatile u8 *)&unk_ae > 4) {
            unk_ae = *(volatile u8 *)&unk_ae - 4;
        } else {
            unk_ae = 0;
        }
        if (*(volatile u8 *)&unk_ad < 0xfc) {
            unk_ad = *(volatile u8 *)&unk_ad + 4;
        } else {
            unk_ad = 0xff;
        }
        func_ov120_02292df8(0x800);
        func_ov120_02293fc4();
    }
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    unk_94 = func_ov002_02200920();
}

void Unk_ov120_02295010::func_ov120_0229476c() {
    func_ov120_02293168();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov002_02200a50(6);
    unk_94 = func_ov002_02200920();
}

void Unk_ov120_02295010::func_ov120_0229470c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov120_02292de8(4);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(6, 0, 0x50 - unk_98);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov120_02295010::func_ov120_02294634() {
    volatile Unk_ov120_02294634_V v;
    unk_a0 = 0;
    unk_9c = 0;
    unk_98 = 0;
    unk_9a = 0;
    unk_a4 = 0;
    unk_94 = 0;
    unk_a7 = 0;
    unk_ab = 0;
    unk_ad = 0x58;
    unk_ae = 0x70;
    unk_ac = 0xe;
    func_ov120_02293784(0);
    func_ov120_02293cfc();
    if (IsZero(data_020e416c)) {
        s32 *p = func_020947f0(4);
        v.x = p[0];
        v.y = p[1];
        v.z = p[2];
    } else {
        func_020b4934();
        s32 *p = func_020b5010(data_021ef360);
        v.x = p[0];
        v.y = p[1];
        v.z = p[2];
    }
    s32 z = (v.z + 0x800) >> 12;
    s32 x = (v.x + 0x800) >> 12;
    unk_9e = x - 8;
    unk_9f = z + 13;
    ScrollKnob_setState(&unk_438, 1);
}

void Unk_ov120_02295010::func_ov120_02294614() {
    func_ov120_02293df4();
    func_020b87d0(unk_b0);
    func_020b87d0((unk_b0 + 1));
}

void Unk_ov120_02295010::func_ov120_0229460c() {
    func_ov120_02293df4();
}

void Unk_ov120_02295010::func_ov120_02294540() {
    if (func_ov120_02293590()) {
        func_ov120_022934e0();
        func_020021fc(6, 0, unk_98 - 0x50);
        if (unk_a3 != (unk_98 >> 4)) {
            func_ov120_02292df8(0x80);
        }
    }
    func_ov120_022932e8();
    if (func_ov120_02292e08(0x80)) {
        func_ov120_02293f08();
        func_ov120_02292de8(0x80);
    }
    if (func_ov120_02292e08(0x20)) {
        if (func_020b86c0((unk_b0 + 1), unk_4e4, 4, 0x800, 0)) {
            func_ov120_02292de8(0x20);
        }
    }
    if (func_ov120_02292e08(2)) {
        if (func_020b86c0(unk_b0, unk_ce4, 6, 0x800, 0)) {
            func_ov120_02292de8(2);
        }
    }
}

void Unk_ov120_02295010::func_ov120_02294514() {
    func_ov120_0229460c();
    unk_438.vfunc_0c();
    unk_480.vfunc_0c();
}

void Unk_ov120_02295010::func_ov120_0229450c() {
    func_ov120_02294540();
}

void Unk_ov120_02295010::func_ov120_022944d8() {
    func_02002398(4, 2);
    func_02002398(6, 2);
    func_0200226c(4, 0, 0, 0);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov120_02295010::func_ov120_02294428() {
    u32 h = gCurrentHeap;
    func_020026c4("menu/map/b_map_bg.bpl", h, 4, 1, 1, 0xf);
    func_0200261c("menu/map/b_map_bg_0.bch", h, 4, 0x11, 0x11, 0x5f);
    func_0200261c("menu/map/b_map_bg_1.bch", h, 4, 0x230, 0x230, 0x25f);
    File_LoadToBuffer("menu/map/b_map_a_bg.bsc", unk_4e4, 0x800);
    func_020024f0(unk_4e4, 4, 0x800, 0);
    File_LoadToBuffer("menu/map/b_map_b_bg.bsc", unk_1ce4, 0x800);
    func_0206ee80(unk_1ce4, 0x13, 0, 0x1c, 1, 4);
}

extern "C" void *data_ov120_02294f00[2] = {(void *)_ZN18Unk_ov120_0229501019func_ov120_02294078Ev, 0};

void Unk_ov120_02295010::func_ov120_0229439c() {
    u32 h = gCurrentHeap;
    void *p = Heap_AllocTail((void *)h, 0x2000);
    static Unk_ov117_02292c88 obj;
    func_ov117_02292c88(&obj);
    func_ov117_02292408(p, &obj);
    func_02002438(p, 4, 0x60, 0x60, 0x15f);
    func_ov120_022938d0(&obj);
    Heap_Free((void *)h, p);
}

void Unk_ov120_02295010::func_ov120_0229433c() {
    u32 h = gCurrentHeap;
    func_020026c4("menu/map/b_map_obj.bpl", h, 8, 6, 6, 0xe);
    func_0200261c("menu/map/b_map_obj_0.bch", h, 8, 0xc0, 0xc0, 0xff);
    func_0200261c("menu/map/b_map_obj_1.bch", h, 8, 0x180, 0x180, 0x1ff);
}

void Unk_ov120_02295010::func_ov120_022942c0() {
    if (func_ov002_02200a14(1)) {
        func_ov120_02293fc4();
        return;
    }
    if (Unk_ov120_022942c0_Both()) {
        if (func_ov120_02293374() == 0) {
            if (func_ov120_0229348c()) {
                ScrollKnob_setState(&unk_438, 2);
                func_ov002_02200a58(1);
            } else if (func_ov120_02293898() == 0) {
                s32 t = func_ov120_02293ac0();
                if (t != 0) {
                    return;
                }
            }
        }
    }
}

void Unk_ov120_02295010::func_ov120_02294290() {
    if (gTouchHeld == 0) {
        ScrollKnob_setState(&unk_438, 3);
        func_ov120_0229400c();
    }
    func_ov120_02293440();
}

void Unk_ov120_02295010::func_ov120_022941b8() {
    if (func_ov002_022009d4()) {
        func_ov120_0229400c();
        return;
    }
    if (func_ov120_02292f44((void *)func_ov002_022009c8())) {
        if (func_ov120_02292e08(8)) {
            if (unk_ab >= 2 && unk_ab <= 7) {
                func_ov120_0229359c(unk_98 & ~0xf);
            }
        }
        func_ov120_022930f0();
        return;
    }
    u32 k = gPad[1];
    if ((k & 1) != 0) {
        func_ov120_022930d0();
    } else if ((k & 0x800) != 0) {
        func_ov120_02293784(0);
        func_ov120_0229371c(0xe);
        if (unk_ab >= 2 && unk_ab <= 7) {
            func_ov120_02292e1c();
        }
        unk_ac = func_ov120_02293838(unk_ad, unk_ae);
        func_ov120_02292df8(0x800);
        func_ov002_02200a58(9);
        func_ov120_022930f0();
    }
}

void Unk_ov120_02295010::func_ov120_0229418c() {
    if (func_ov002_022028f0(&unk_480) == 0) {
        func_ov002_02200a58(unk_aa);
        func_ov120_02294a04();
    }
}

void Unk_ov120_02295010::func_ov120_02294144() {
    if (HandCursor_isAnimDone(&unk_480)) {
        s32 r = func_ov120_02292e7c();
        if (r == 1) {
        } else if (r == 2) {
            func_ov120_022935ac(0);
            unk_a3 = 0xff;
            func_ov120_022930b0();
        } else {
            func_ov120_022930b0();
        }
    }
}

void Unk_ov120_02295010::func_ov120_02294100() {
    if (HandCursor_isAnimDone(&unk_480)) {
        func_ov120_02293090();
        if (func_ov120_02292e08(0x800)) {
            func_ov002_02200a58(9);
        } else {
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov120_02295010::func_ov120_022940dc() {
    if (ScrollKnob_areAnimsDone(&unk_438)) {
        func_ov002_02200a58(7);
    }
}

void Unk_ov120_02295010::func_ov120_022940a4() {
    if ((gPad[0] & 1) == 0) {
        ScrollKnob_setState(&unk_438, 3);
        func_ov002_02200a58(8);
    } else {
        func_ov120_022933f0();
    }
}

void Unk_ov120_02295010::func_ov120_02294078() {
    if (ScrollKnob_areAnimsDone(&unk_438)) {
        func_ov120_022930b0();
        func_ov120_02292de8(0x1000);
    }
}

void Unk_ov120_02295010::func_ov120_02294024() {
    u32 v = gPad[1];
    BOOL r = TRUE;
    if ((v & 1) != 0) goto call;
    if ((v & 0x400) != 0) goto call;
    if ((v & 2) != 0) goto call;
    if (gTouchHeld == 0 || gTouchChanged == 0) r = FALSE;
    if (r) {
    call:
        func_ov120_022949a8();
    }
}

void Unk_ov120_02295010::func_ov120_0229400c() {
    func_ov120_02293168();
    func_ov002_02200a58(0);
}

void Unk_ov120_02295010::func_ov120_02293fc4() {
    ScrollKnob_setState(&unk_438, 1);
    func_ov120_02293230();
    func_ov002_02200980();
    if (func_ov120_02292e08(0x800)) {
        func_ov002_02200a58(9);
    } else {
        func_ov002_02200a58(2);
    }
}

void Unk_ov120_02295010::func_ov120_02293f08() {
    volatile u16 v0, v1, v2, v3;
    s32 off, j, i, n;
    MIi_CpuCopy16(unk_14e4, unk_ce4, 0x800);
    n = unk_98 >> 4;
    unk_a3 = n;
    off = 0x13;
    for (i = 0; i < n; i++) {
        v0 = 0x10;
        MIi_CpuClear16(v0, unk_ce4 + off, 0x14);
        v1 = 0x10;
        MIi_CpuClear16(v1, unk_ce4 + (off + 0x20), 0x14);
        off += 0x40;
    }
    j = n + 7;
    off = j * 0x40 + 0x13;
    for (; j < 13; j++) {
        v2 = 0x10;
        MIi_CpuClear16(v2, unk_ce4 + off, 0x14);
        v3 = 0x10;
        MIi_CpuClear16(v3, unk_ce4 + (off + 0x20), 0x14);
        off += 0x40;
    }
    func_ov120_02292df8(2);
}

void Unk_ov120_02295010::func_ov120_02293e70() {
    s32 i;
    u8 *tbl;
    MIi_CpuCopy16(unk_1ce4, unk_14e4, 0x800);
    tbl = func_ov120_02293b48();
    for (i = 0; i < 13; i++) {
        s32 a = func_ov120_02293e1c(tbl[i], i) * 0x40 + 0x13;
        s32 b = i * 0x40 + 0x13;
        unk_14e4[b] = unk_1ce4[a];
        unk_14e4[b + 1] = unk_1ce4[a + 1];
        unk_14e4[b + 0x20] = unk_1ce4[a + 0x20];
        unk_14e4[b + 0x21] = unk_1ce4[a + 0x21];
    }
    func_ov120_02292df8(2);
}

u32 Unk_ov120_02295010::func_ov120_02293e1c(u32 x, s32 idx) {
    if (x == 0) return 7;
    if (x < 6) return 0;
    if (x >= 6 && x < 14) return 1;
    switch (x - 14) {
    case 2: return 2;
    case 0: return 3;
    case 3: return 4;
    case 1: return 5;
    case 4: return 6;
    }
    return 7;
}

void Unk_ov120_02295010::func_ov120_02293df4() {
    s32 i = 0;
    unk_a0 = 0;
    do {
        func_0206fc44(&unk_f8[i]);
        i++;
    } while (i < 13);
}

void *Unk_ov120_02295010::func_ov120_02293dc0() {
    if (unk_a0 >= 13) {
        return &unk_f8[12];
    }
    unk_a0 = *(volatile u8 *)&unk_a0 + 1;
    return &unk_f8[unk_a0 - 1];
}

void Unk_ov120_02295010::func_ov120_02293cfc() {
    s32 n = 0;
    s32 m, i;
    m = func_02097740(data_021d735c, PlayerData_getPlayerId(PlayerData_GetCurrent()));
    if (m != -1) {
        unk_24e4[0] = 1;
        n++;
    }
    for (i = 0; i < 4; i++) {
        if (i == m) {
            continue;
        }
        if (!func_020978c8(data_021d735c, i)) {
            continue;
        }
        unk_24e4[n] = i + 2;
        n++;
    }
    for (i = 0; i < 8; i++) {
        if (SaveVillagers_IsOccupied(data_021dfd8c, i)) {
            unk_24e4[n] = i + 6;
            n++;
        }
    }
    unk_a1 = n;
    for (; n < 0xd; n++) {
        unk_24f1[n] = 0;
    }
    n = 0;
    for (i = 0; i < 5; i++) {
        unk_24f1[n] = i + 0xe;
        n++;
    }
    unk_a2 = n;
    for (; n < 0xd; n++) {
        unk_24f1[n] = 0;
    }
}

void Unk_ov120_02295010::func_ov120_02293cc8() {
    if (func_ov120_02292e08(1)) {
        func_ov120_02293c70(unk_24f1);
    } else {
        func_ov120_02293c70(unk_24e4);
    }
}

s32 Unk_ov120_02295010::func_ov120_02293c70(u8 *tbl) {
    s32 i;
    for (i = 0; i < 0xd; i++) {
        void *w = func_ov120_02293dc0();
        func_0206fb9c(w, 6, (i << 4) + 0x160, 8, 1, 0xf, 0);
        func_ov120_02293c04(w, tbl[i]);
        func_0206fab4(w, 0, 0);
    }
}

void Unk_ov120_02295010::func_ov120_02293c04(void *p, u32 idx) {
    if (idx == 0) {
        MsgString_clear(p);
    } else if (idx == 1) {
        func_ov002_022019a4(p, PlayerData_getPlayerId(PlayerData_GetCurrent()));
    } else if (idx >= 2 && idx < 6) {
        func_ov002_02201984(p, idx - 2);
    } else if (idx >= 6 && idx < 0xe) {
        func_ov002_02201938(p, idx - 6);
    } else if (idx >= 0xe && idx < 0x13) {
        func_0206f9fc(p, idx + 0x88);
    } else {
        MsgString_clear(p);
    }
}

void Unk_ov120_02295010::func_ov120_02293bec() {
    func_ov120_02292de8(1);
    func_ov120_02293b70();
}

void Unk_ov120_02295010::func_ov120_02293bd4() {
    func_ov120_02292df8(1);
    func_ov120_02293b70();
}

s32 Unk_ov120_02295010::func_ov120_02293b70() {
    s32 k;
    func_ov120_02293e70();
    func_ov120_02293cc8();
    if (func_ov120_02293b0c() == 0) {
        func_ov120_02292de8(8);
        k = 4;
    } else {
        func_ov120_02292df8(8);
        k = 3;
    }
    func_0206ee80(unk_4e4, 0x1d, 0xa, 0x1d, 0x15, k);
    func_ov120_02292df8(0x20);
    func_ov120_0229371c(unk_a9);
}

u8 *Unk_ov120_02295010::func_ov120_02293b48() {
    if (func_ov120_02292e08(1)) {
        return unk_24f1;
    }
    return unk_24e4;
}

s32 Unk_ov120_02295010::func_ov120_02293b28() {
    if (func_ov120_02292e08(1)) {
        return unk_a2;
    }
    return unk_a1;
}

s32 Unk_ov120_02295010::func_ov120_02293b0c() {
    u32 r = func_ov120_02293b28();
    if (r <= 6) {
        return 0;
    }
    return (r - 6) << 4;
}

BOOL Unk_ov120_02295010::func_ov120_02293ac0() {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    if (x < 0x98 || x > 0xe8) {
        return FALSE;
    }
    if (y < 0x50 || y >= 0xb0) {
        return FALSE;
    }
    func_ov120_02293784(((y + (unk_98 - 0x50)) >> 4) + 0xf);
    return TRUE;
}

void Unk_ov120_02295010::func_ov120_02293a2c(s32 x, s32 y, s32 n, s32 flag, s32 pal) {
    u16 t;
    data_ov120_02294f18.tile = n * 2 + 0xc0;
    if (flag != 0) {
        t = data_ov120_02294f18.pal | 8;
        data_ov120_02294f18.pal = t;
    }
    func_02088730(1, &data_ov120_02294f18, x, y, pal, 1, 0);
    if (flag != 0) {
        data_ov120_02294f18.pal = t & 0x17;
    }
}

void Unk_ov120_02295010::func_ov120_022938d0(void *src) {
    s32 k, i;
    u32 j;
    s16 *rec;
    i = 0;
    k = i;
    for (; k < 3; i++, k++) {
        rec = func_ov117_02292c40(src, i);
        if (rec != 0) {
            switch (func_ov117_02292c2c(src, i)) {
            case 0:
                *((u8 *)this + k * 3 + 0x2500) = 8;
                break;
            case 1:
                *((u8 *)this + k * 3 + 0x2500) = 7;
                break;
            case 2:
                *((u8 *)this + k * 3 + 0x2500) = 9;
                break;
            case 3:
                *((u8 *)this + k * 3 + 0x2500) = 0x89;
                break;
            default:
                *((u8 *)this + k * 3 + 0x2500) = 0xc;
                break;
            }
            *((u8 *)this + k * 3 + 0x24fe) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x24ff) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x2500) = 0xc;
        }
    }
    j = 3;
    k = 0;
    for (; k < 0xe; j++, k++) {
        rec = func_ov117_02292c40(src, j);
        if (rec != 0) {
            if (j >= 3 && j <= 0xa) {
                *((u8 *)this + k * 3 + 0x2509) = 0;
            } else if (j == 0xb) {
                *((u8 *)this + k * 3 + 0x2509) = 1;
            } else {
                *((u8 *)this + k * 3 + 0x2509) = *(data_ov120_02294ec0 + j - 0xc);
            }
            *((u8 *)this + k * 3 + 0x2507) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x2508) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x2509) = 0xc;
        }
    }
}

BOOL Unk_ov120_02295010::func_ov120_02293898() {
    u32 r = func_ov120_02293838(gTouchCurX, gTouchCurY);
    if (r == 0xe) {
        return FALSE;
    }
    func_ov120_02293784(r + 1);
    return TRUE;
}

u32 Unk_ov120_02295010::func_ov120_02293838(s32 x, s32 y) {
    s32 i;
    for (i = 0; i < 0xe; i++) {
        u8 *e = (u8 *)this + i * 3;
        if (e[0x2509] != 0xc) {
            s32 px = e[0x2507];
            if (px - 8 < x && px + 8 > x) {
                s32 py = e[0x2508];
                if (py - 8 < y && py + 8 > y) {
                    return (u8)i;
                }
            }
        }
    }
    return 0xe;
}

void Unk_ov120_02295010::func_ov120_02293784(u8 v) {
    if (v == 0) {
        unk_a8 = 0xe;
        unk_a9 = 0xe;
        func_ov120_022932a8();
        return;
    }
    func_ov120_022932c4();
    unk_a9 = func_ov120_022936b4(v);
    unk_a8 = func_ov120_0229364c(v);
    if (v >= 1 && v < 0xf) {
        func_ov120_02292de8(0x200);
        if (func_ov120_02292e08(1)) {
            if (v >= 1 && v <= 9) {
                func_ov120_02293bec();
                func_ov120_02293620();
                return;
            }
        } else {
            if (v < 1 || v > 9) {
                func_ov120_02293bd4();
                func_ov120_02293620();
                return;
            }
        }
    } else {
        func_ov120_02292df8(0x200);
    }
    func_ov120_022935c8();
    func_ov120_0229371c(0xe);
    func_ov120_0229371c(unk_a9);
}

void Unk_ov120_02295010::func_ov120_0229371c(u8 v) {
    func_ov120_02292df8(0x80);
    if (v == 0xe) {
        func_0206ee80(unk_14e4, 0x13, 0, 0x1c, 0x19, 4);
    } else if (v == 0xd) {
        func_0206ee80(unk_14e4, 0x13, 0, 0x1c, 7, 3);
    } else {
        func_0206ee80(unk_14e4, 0x13, v * 2, 0x1c, v * 2 + 1, 3);
    }
}

u32 Unk_ov120_02295010::func_ov120_022936b4(u8 v) {
    if (v == 9) {
        return 0xd;
    }
    if (v >= 1 && v < 9) {
        s32 t = v + 5;
        s32 i = 0;
        s32 n = unk_a1;
        for (; i < n; i++) {
            if (t == unk_24e4[i]) {
                return (u8)i;
            }
        }
        return 0xe;
    }
    if (v < 0xf && v >= 0xa) {
        return (u8)(v - 0xa);
    }
    if (v < 0x1c && v >= 0xf) {
        return (u8)(v - 0xf);
    }
    return 0xe;
}

u32 Unk_ov120_02295010::func_ov120_0229364c(u8 v) {
    if (v >= 1 && v < 0xf) {
        return (u8)(v - 1);
    }
    if (v >= 0xf && v < 0x1c) {
        u32 b = func_ov120_02293b48()[v - 0xf];
        if (b == 0) {
            return 0xe;
        }
        if (b == 1 || (b >= 2 && b < 6)) {
            return 8;
        }
        if (b >= 6 && b < 0xe) {
            return (u8)(b - 6);
        }
        if (b >= 0xe && b < 0x13) {
            return data_ov120_02294ec8[b - 0xe];
        }
    }
    return 0xe;
}

void Unk_ov120_02295010::func_ov120_02293620() {
    u32 a = unk_a9;
    u32 v;
    if (a <= 5 || a == 0xd) {
        v = 0;
    } else {
        v = (a - 5) << 4;
    }
    func_ov120_022935ac(v);
    unk_a3 = 0xff;
}

void Unk_ov120_02295010::func_ov120_022935c8() {
    u32 a = unk_a9;
    if (a != 0xe) {
        if (a == 0xd) {
            func_ov120_0229359c(0);
        } else {
            if ((s32)a < (unk_98 + 0xf) >> 4) {
                func_ov120_0229359c(a << 4);
            }
            s32 h = unk_98 >> 4;
            s32 lo;
            if (unk_a9 <= 5) {
                lo = 0;
            } else {
                lo = unk_a9 - 5;
            }
            if (h < lo) {
                func_ov120_0229359c(lo << 4);
            }
        }
    }
}

void Unk_ov120_02295010::func_ov120_022935ac(u32 v) {
    unk_98 = v;
    unk_9a = unk_98;
    func_ov120_02292df8(0x10);
}

void Unk_ov120_02295010::func_ov120_0229359c(u32 v) {
    unk_9a = v;
    func_ov120_02292df8(0x10);
}

BOOL Unk_ov120_02295010::func_ov120_02293590() { return func_ov120_02292e08(0x10); }

void Unk_ov120_02295010::func_ov120_022934e0() {
    s32 n = func_ov120_02293b0c();
    if (n == 0) {
        func_ov120_02292de8(0x10);
        unk_a4 = 0;
    } else {
        u32 tg = unk_9a;
        u32 cur = unk_98;
        if (cur == tg) {
            func_ov120_02292de8(0x10);
        } else if (cur < tg) {
            unk_98 = *(volatile u16 *)&unk_98 + 8;
            if (unk_98 > unk_9a) {
                unk_98 = unk_9a;
            }
        } else if (cur < 8) {
            unk_98 = tg;
        } else {
            unk_98 = *(volatile u16 *)&unk_98 - 8;
            if (unk_98 < unk_9a) {
                unk_98 = unk_9a;
            }
        }
        unk_a4 = unk_98 * 0x58 / n;
    }
}

BOOL Unk_ov120_02295010::func_ov120_0229348c() {
    if (!func_ov120_02292e08(8)) {
        return FALSE;
    }
    if (func_ov002_02202f18(&unk_438, gTouchCurX, gTouchCurY)) {
        unk_a5 = gTouchCurY;
        unk_a6 = unk_a4;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov120_02295010::func_ov120_02293440() {
    s32 t = unk_a6 + (gTouchCurY - unk_a5);
    if (t < 0) {
        t = 0;
    } else if (t > 0x58) {
        t = 0x58;
    }
    func_ov120_022935ac(t * func_ov120_02293b0c() / 0x58);
}

void Unk_ov120_02295010::func_ov120_022933f0() {
    s32 t = unk_9a;
    u32 keys = gPad[0];
    if (keys & 0x40) {
        t = t - 4;
    } else if (keys & 0x80) {
        t = t + 4;
    }
    s32 m = func_ov120_02293b0c();
    if (t < 0) {
        t = 0;
    } else if (t > m) {
        t = m;
    }
    func_ov120_022935ac(t);
}

BOOL Unk_ov120_02295010::func_ov120_02293374() {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    if (y < 0x38 || y > 0x4c) {
        return FALSE;
    }
    if (func_ov120_02292e08(1)) {
        if (x < 0xcc || x > 0xe4) {
            return FALSE;
        }
        func_ov120_02293784(0);
        func_ov120_02293bec();
    } else {
        if (x < 0xb0 || x > 0xc8) {
            return FALSE;
        }
        func_ov120_02293784(0);
        func_ov120_02293bd4();
    }
    func_ov120_022935ac(0);
    unk_a3 = 0xff;
    return TRUE;
}

void Unk_ov120_02295010::func_ov120_022932e8() {
    if (func_ov120_02292e08(0x40)) {
        if (unk_a7 != 0) {
            unk_a7 = *(volatile u8 *)&unk_a7 - 1;
        }
        if (unk_a7 == 0) {
            if (func_ov120_02292e08(0x200)) {
                func_ov120_02292de8(0x100);
            } else {
                func_ov120_0229371c(unk_a9);
            }
            unk_a7 = 0xf;
        } else if (unk_a7 == 5) {
            if (func_ov120_02292e08(0x200)) {
                func_ov120_02292df8(0x100);
            } else {
                func_ov120_0229371c(0xe);
            }
        }
    }
}

void Unk_ov120_02295010::func_ov120_022932c4() {
    func_ov120_02292df8(0x40);
    func_ov120_02292de8(0x100);
    unk_a7 = 0xf;
}

void Unk_ov120_02295010::func_ov120_022932a8() {
    func_ov120_02292de8(0x40);
    func_ov120_02292de8(0x100);
}

void Unk_ov120_02295010::func_ov120_02293230() {
    if (!func_ov120_02292e08(8) && unk_ab == 8) {
        unk_ab = 0;
    }
    s32 a = func_ov120_022931dc();
    s32 b = func_ov120_0229318c();
    func_ov002_02202a40(&unk_480, a, b);
    if (unk_ab >= 2 && unk_ab <= 7) {
        func_ov120_0229359c(unk_98 & ~0xf);
    }
    func_ov002_02202d00(&unk_480, 1);
    func_ov120_02293090();
}

s32 Unk_ov120_02295010::func_ov120_022931dc() {
    if (func_ov120_02292e08(0x800)) {
        return unk_ad;
    }
    u32 t = unk_ab;
    if (t >= 2 && t <= 7) {
        return 0xa0;
    }
    if (t == 0) {
        return 0xd8;
    }
    if (t == 1) {
        return 0xbc;
    }
    if (t == 8) {
        return func_ov002_02202e84(&unk_438);
    }
    return 0x80;
}

s32 Unk_ov120_02295010::func_ov120_0229318c() {
    if (func_ov120_02292e08(0x800)) {
        return unk_ae;
    }
    u32 t = unk_ab;
    if (t >= 2 && t <= 7) {
        return (t - 2) * 16 + 0x58;
    }
    if (t <= 1) {
        return 0x40;
    }
    if (t == 8) {
        return func_ov002_02202e60(&unk_438);
    }
    return 0x60;
}

void Unk_ov120_02295010::func_ov120_02293168() {
    func_ov002_02202d00(&unk_480, 0);
    unk_480.vfunc_0c();
}

void Unk_ov120_02295010::func_ov120_022930f0() {
    if (func_ov120_02292e08(0x4000)) {
        s32 a = func_ov120_022931dc();
        s32 b = func_ov120_0229318c();
        func_ov002_02202a40(&unk_480, a, b);
        func_ov120_02292de8(0x4000);
    } else {
        s32 a = func_ov120_022931dc();
        s32 b = func_ov120_0229318c();
        func_ov002_022029e8(&unk_480, a, b, 3, 1);
        unk_aa = unk_8d;
        func_ov002_02200a58(3);
    }
}

void Unk_ov120_02295010::func_ov120_022930d0() {
    func_ov002_02202b68(&unk_480);
    func_ov002_02200a58(4);
}

void Unk_ov120_02295010::func_ov120_022930b0() {
    func_ov002_02202af0(&unk_480);
    func_ov002_02200a58(5);
}

void Unk_ov120_02295010::func_ov120_02293090() {
    func_ov002_02202a78(&unk_480);
    unk_480.vfunc_0c();
}

BOOL Unk_ov120_02295010::func_ov120_02292f44(void *pad) {
    u32 old = unk_ab;
    if (old >= 2 && old <= 7) {
        if (func_ov120_02292e08(8) && func_ov002_0220125c(pad)) {
            unk_ab = 8;
        } else if (func_ov002_0220128c(pad)) {
            if (*(volatile u8 *)&unk_ab > 2) {
                unk_ab = *(volatile u8 *)&unk_ab - 1;
            } else {
                unk_ab = 1;
            }
        } else if (func_ov002_0220127c(pad)) {
            s32 n = func_ov120_02293b28() - 1;
            if (unk_ab < 7 && unk_ab < n + 2) {
                unk_ab = *(volatile u8 *)&unk_ab + 1;
            }
        }
    } else if (old == 8) {
        if (func_ov002_0220128c(pad)) {
            unk_ab = 0;
        } else if (func_ov002_0220126c(pad)) {
            s32 v = func_ov002_02202e60(&unk_438);
            if (v < 0x50) {
                v = 0x50;
            }
            if (v >= 0xb0) {
                v = 0xaf;
            }
            unk_ab = ((v - 0x50) >> 4) + 2;
        }
    } else if (old <= 1) {
        if (func_ov002_0220127c(pad)) {
            unk_ab = 2;
        } else if (func_ov002_0220126c(pad)) {
            unk_ab = 1;
        } else if (func_ov002_0220125c(pad)) {
            if (unk_ab == 0 && func_ov120_02292e08(8)) {
                unk_ab = 8;
            } else {
                unk_ab = 0;
            }
        }
    }
    if (old != unk_ab) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov120_02295010::func_ov120_02292e7c() {
    if (func_ov120_02292e08(0x800)) {
        func_ov120_02293784(unk_ac + 1);
        return 0;
    }
    u32 t = unk_ab;
    if (t == 8) {
        func_ov002_02200a58(6);
        ScrollKnob_setState(&unk_438, 2);
        func_ov120_02292df8(0x1000);
        return 1;
    } else if (t == 0) {
        if (func_ov120_02292e08(1)) {
            func_ov120_02293784(0);
            func_ov120_02293bec();
            return 2;
        }
        return 0;
    } else if (t == 1) {
        if (!func_ov120_02292e08(1)) {
            func_ov120_02293784(0);
            func_ov120_02293bd4();
            return 2;
        }
        return 0;
    } else if (t >= 2 && t <= 7) {
        func_ov120_02293784(unk_a3 + t + 0xd);
        return 0;
    }
    return 0;
}

void Unk_ov120_02295010::func_ov120_02292e1c() {
    u32 idx = func_ov120_0229364c(unk_a3 + unk_ab + 0xd);
    u8 *e = (u8 *)this + idx * 3;
    if (e[0x2509] == 0xc) {
        unk_ad = 0x58;
        unk_ae = 0x70;
    } else {
        unk_ad = e[0x2507];
        unk_ae = e[0x2508];
    }
}

BOOL Unk_ov120_02295010::func_ov120_02292e08(u32 mask) {
    if (unk_9c & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov120_02295010::func_ov120_02292df8(u32 mask) { unk_9c = unk_9c | mask; }

void Unk_ov120_02295010::func_ov120_02292de8(u32 mask) { unk_9c = unk_9c & ~mask; }

Unk_ov120_02292de0::Unk_ov120_02292de0() {}

Unk_ov120_02292de0::~Unk_ov120_02292de0() {}



