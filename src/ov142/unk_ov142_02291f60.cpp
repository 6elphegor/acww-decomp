// ov142: scene overlay (class Unk_ov142_02294da8, vtable 0x02294da8, 0x2e10 bytes): item catalog list.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov142_02294da8;

// Other modules' methods called with the object first (the real symbol is the mangled name).
#define PlayerData_getCatalog _ZN10PlayerData10getCatalogEv
#define func_02133150 _s32_div_f

// ---- main-module classes (copied from src/main) ----
class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(void *src, BOOL a, BOOL b);
    void copy(MsgString *o);
    void clear();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

class TextLabel;

class Unk_020e0488 : public MsgString {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fa4c();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
};

class ItemName : public MsgString {
public:
    ItemName();
    virtual ~ItemName();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    BOOL setFromItem(u16 *p);

    /* 0x12 */ u8 unk_12[0x11];
};

// Screen upload helper, 0x24 bytes
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    void func_020b8670(u32 a, u8 b, u32 c);
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    void func_020b87d0();
    u32 unk_04[0x20 / 4];
};

class Unk_ov004_02235a0c {
public:
    void func_ov004_02235a2c();
    void func_ov004_02235a54(u16 *p);
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

extern "C" {
extern u8 data_020e416c;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern void *gCurrentHeap;

void func_0206f9c8(Unk_020e0488 *w, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206ecf8(s32 a);
void Snd_PlaySe(u32 id);
void *func_ov004_02235a04();
s32 Item_TestInfoFlag4(u16 *p);
s32 Item_GetMemberPrice(u16 *p);
s32 Item_TestInfoFlag3(u16 *p);
void func_020021fc(s32 a, s32 b, s32 c);
void MIi_CpuClear16(u32 v, void *dst, s32 n);
void MIi_CpuCopy16(void *dst, void *src, s32 n);
u32 PlayerData_GetCurrent();
s32 Catalog_HasItem(void *a, u16 *b);
s32 _s32_div_f(s32 a, s32 b);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020e761c(void *p, s32 a, s32 b);
BOOL MenuCtrl_IsTouch();
void func_0206e738(u32 a);
s32 func_0200261c(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 func_020026c4(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 File_LoadToBuffer(const void *src, void *dst, s32 n);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202e48(void *p);
void func_ov002_02202e54(void *p);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_ov002_02203920(void *p);
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void func_020020b8(u32 x);
void func_020021a0(u32 x);
void Oam_DrawCell(u32 a, const void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, const void *info, s32 x, s32 y, s32 pal, s32 pri, s32 rect);
BOOL MenuCtrl_IsButtons();

// Mangled-name declaration (macro'd above): the object is the first argument.
void *PlayerData_getCatalog(u32 p);
}

// ---- ov002 sub-objects ----
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    BOOL getAnim();
};

class Unk_ov002_02202d98 : public HandCursor {
public:
    void func_ov002_02202844();
    s32 func_ov002_02202878();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// Same object as Unk_ov002_02202d98 under the name used by src/ov002
class Unk_ov002_0220464c : public HandCursor {
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

class ScrollKnob {
public:
    virtual ~ScrollKnob();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL areAnimsDone();
    void moveTo(s32 a, s32 b);
    u32 unk_04[0x44 / 4];
};

class Unk_ov002_022046b0 : public ScrollKnob {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    void func_ov002_02202ed0();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
};

class Unk_ov002_02202fac {
public:
    virtual ~Unk_ov002_02202fac();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 idx);
    void func_ov002_022032b0(s32 idx);
    u32 unk_04[0x160 / 4];
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    virtual ~Unk_ov002_022046cc();
    void func_ov002_02203510(s32 idx);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
};

// ---- ov002 scene base (vtable 0x022044e4) ----
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
    void func_ov002_02200850(s32 a);
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
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

typedef void (Unk_ov142_02294da8::*Unk_ov142_02294da8_Fn)();

// Vtable 0x02294da8, size 0x2e10
class Unk_ov142_02294da8 : public Unk_ov002_022044e4 {
public:
    Unk_ov142_02294da8() : unk_e8(), unk_14c(), unk_194(), unk_2f8(), unk_678() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov142_02292008(u32 m);
    void func_ov142_02292018(u32 m);
    BOOL func_ov142_02292028(u32 m);
    void func_ov142_0229203c();
    void func_ov142_022920b0(u32 t);
    u16 func_ov142_02292154(s32 x, s32 y, s32 t);
    void func_ov142_022921f0();
    void func_ov142_022922c8();
    void func_ov142_022922d8();
    void func_ov142_022922e8();
    void func_ov142_022922f8();
    void func_ov142_02292364();
    void func_ov142_022923ac();
    void func_ov142_022923c8();
    void func_ov142_022923e4(s32 a);
    void func_ov142_02292414();
    void func_ov142_02292440();
    void func_ov142_02292478();
    BOOL func_ov142_022924a0();
    void func_ov142_022924c8();
    void func_ov142_02292554();
    void func_ov142_02292564(s32 v, BOOL c);
    BOOL func_ov142_022925dc(s32 x, s32 y);
    BOOL func_ov142_02292624(u32 pad);
    void func_ov142_0229291c();
    void func_ov142_0229294c();
    void func_ov142_02292964();
    BOOL func_ov142_0229297c();
    void func_ov142_02292a1c();
    void func_ov142_02292a3c();
    void func_ov142_02292a5c();
    void func_ov142_02292a94();
    BOOL func_ov142_02292ab8(u32 a, s32 b);
    u32 func_ov142_02292bbc(s32 x, s32 y);
    BOOL func_ov142_02292c58(u32 a);
    void func_ov142_02292d80();
    void func_ov142_02292e1c();
    void func_ov142_02292e94(s32 v);
    void func_ov142_02292f00();
    void func_ov142_02292f8c();
    u16 *func_ov142_02293004(s32 idx);
    s32 func_ov142_02293098();
    s32 func_ov142_022930a8();
    s32 func_ov142_022930b8(u16 *out, u16 start, s32 n, s32 off);
    s32 func_ov142_0229312c(u16 *out, u16 start, s32 n, s32 off);
    void func_ov142_022931a0();
    void func_ov142_0229320c();
    void func_ov142_02293240();
    void func_ov142_02293274();
    void func_ov142_022932a8();
    void func_ov142_022932dc();
    void func_ov142_02293314();
    void func_ov142_02293348();
    void func_ov142_0229337c();
    void func_ov142_02293528(u32 v);
    void func_ov142_02293540(u8 v);
    void func_ov142_022935bc();
    void func_ov142_022935f8();
    void func_ov142_02293618(s32 a, s32 b, s32 c, u8 d, s32 e);
    void func_ov142_0229365c(s32 a);
    void func_ov142_022936a4();
    void func_ov142_02293734();
    void func_ov142_02293820();
    Unk_020e0488 *func_ov142_0229384c();
    void func_ov142_02293884();
    void func_ov142_022938a8();
    void func_ov142_022938c0();
    void func_ov142_022938dc(s32 a, s32 b);
    void func_ov142_0229390c();
    void func_ov142_02293954();
    s32 func_ov142_02293970();
    s32 func_ov142_02293a0c();
    void func_ov142_02293a94();
    void func_ov142_02293acc();
    void func_ov142_02293af8();
    void func_ov142_02293b34();
    void func_ov142_02293b78();
    void func_ov142_02293b98();
    void func_ov142_02293bbc();
    void func_ov142_02293bd4();
    void func_ov142_02293bfc();
    void func_ov142_02293c38();
    void func_ov142_02293c50();
    void func_ov142_02293cb8();
    void func_ov142_02293d10();
    void func_ov142_02293d54();
    void func_ov142_02293dfc();
    void func_ov142_02293e68();
    void func_ov142_02293e8c();
    void func_ov142_02293ec0();
    void func_ov142_02293ee8();
    void func_ov142_02293f1c();
    void func_ov142_02293f5c();
    void func_ov142_02293fa8();
    void func_ov142_02294030();
    void func_ov142_02294058();
    void func_ov142_0229408c();
    void func_ov142_022940c0();
    void func_ov142_022941c4();
    void func_ov142_02294234();
    void func_ov142_02294334();
    void func_ov142_0229435c();
    void func_ov142_022943c0();
    void func_ov142_022943d8();
    void func_ov142_02294424();
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

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ s32 unk_b0;
    /* 0x0b4 */ s16 unk_b4;
    /* 0x0b6 */ u16 unk_b6;
    /* 0x0b8 */ s16 unk_b8;
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ s16 unk_c4[9];
    /* 0x0d6 */ s16 unk_d6[9];
    /* 0x0e8 */ Unk_ov002_02204614 unk_e8;
    /* 0x14c */ Unk_ov002_022046b0 unk_14c;
    /* 0x194 */ Unk_ov002_022046cc unk_194;
    /* 0x2f8 */ Unk_020e0488 unk_2f8[14];
    /* 0x678 */ Unk_020e45f8 unk_678[4];
    /* 0x708 */ u16 unk_708[0x800 / 2];
    /* 0xf08 */ u16 unk_f08[0x88 / 2];
    /* 0xf90 */ u16 unk_f90[0x88 / 2];
    /* 0x1018 */ u16 unk_1018[0x200 / 2];
    /* 0x1218 */ u16 unk_1218[0x40 / 2];
    /* 0x1258 */ u16 unk_1258[0x140 / 2];
    /* 0x1398 */ u16 unk_1398[0x80 / 2];
    /* 0x1418 */ u16 unk_1418[0xfe / 2];
    /* 0x1516 */ u16 unk_1516[0x68 / 2];
    /* 0x157e */ u16 unk_157e[9];
    /* 0x1590 */ u8 unk_1590[0x800];
    /* 0x1d90 */ u8 unk_1d90[0x800];
    /* 0x2590 */ u8 unk_2590[0x800];
    /* 0x2d90 */ u16 unk_2d90[16];
    /* 0x2db0 */ u16 unk_2db0[16];
    /* 0x2dd0 */ u16 unk_2dd0[16];
    /* 0x2df0 */ u16 unk_2df0[16];
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov142_SceneEntry {
    Unk_ov142_02294da8 *(*create)();
    u16 a;
    u16 b;
};

static inline BOOL Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov142_02293b34_IsOne() {
    if (data_020e416c == 1) return TRUE;
    return FALSE;
}

extern "C" Unk_ov142_02294da8 *func_ov142_02294bc8();

extern "C" u32 data_ov142_02294d18[2];
extern "C" u32 data_ov142_02294d20[2];
extern "C" u32 data_ov142_02294d28[2];
extern "C" u32 data_ov142_02294d30[2];
extern "C" u32 data_ov142_02294d38[8];
extern "C" u32 data_ov142_02294d58[8];
extern "C" u32 data_ov142_02294d78[10];
extern "C" u32 data_ov142_02294e08[36];
extern "C" void func_ov142_022942e8(Unk_ov142_02294da8 *p);
extern "C" void func_ov142_022943b8(Unk_ov142_02294da8 *p);

extern "C" {
void _ZN18Unk_ov142_02294da819func_ov142_02293c50Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02293d54Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02293dfcEv();
void _ZN18Unk_ov142_02294da819func_ov142_02293e68Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02293e8cEv();
void _ZN18Unk_ov142_02294da819func_ov142_02293ec0Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02293ee8Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02293f1cEv();
void _ZN18Unk_ov142_02294da819func_ov142_02293f5cEv();
void _ZN18Unk_ov142_02294da819func_ov142_02293fa8Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02294030Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02294058Ev();
void _ZN18Unk_ov142_02294da819func_ov142_0229408cEv();
void _ZN18Unk_ov142_02294da819func_ov142_022940c0Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02294514Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02294544Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02294584Ev();
void _ZN18Unk_ov142_02294da819func_ov142_022945b4Ev();
void _ZN18Unk_ov142_02294da819func_ov142_022945f4Ev();
void _ZN18Unk_ov142_02294da819func_ov142_02294624Ev();
void _ZN18Unk_ov142_02294da819func_ov142_0229465cEv();
void _ZN18Unk_ov142_02294da819func_ov142_022946bcEv();
}
extern "C" void *data_ov142_02294c60[2];
extern "C" void *data_ov142_02294c68[2];
extern "C" void *data_ov142_02294c70[2];
extern "C" void *data_ov142_02294c78[2];
extern "C" void *data_ov142_02294c80[2];
extern "C" void *data_ov142_02294c90[2];
extern "C" void *data_ov142_02294c98[2];
extern "C" void *data_ov142_02294ca0[2];
extern "C" void *data_ov142_02294ca8[2];
extern "C" void *data_ov142_02294cb0[2];
extern "C" void *data_ov142_02294cb8[2];
extern "C" void *data_ov142_02294cc0[2];
extern "C" void *data_ov142_02294cc8[2];
extern "C" void *data_ov142_02294cd0[2];
extern "C" void *data_ov142_02294cd8[2];
extern "C" void *data_ov142_02294ce0[2];
extern "C" void *data_ov142_02294ce8[2];
extern "C" void *data_ov142_02294cf0[2];
extern "C" void *data_ov142_02294cf8[2];
extern "C" void *data_ov142_02294d00[2];
extern "C" void *data_ov142_02294d08[2];
extern "C" void *data_ov142_02294d10[2];


extern "C" Unk_ov142_02294da8 *func_ov142_02294bc8() { return new Unk_ov142_02294da8(); }

BOOL Unk_ov142_02294da8::vfunc_00() {
    func_ov142_02294424();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov142_02294da8::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291c5c();
    func_ov142_022943d8();
    return TRUE;
}

BOOL Unk_ov142_02294da8::onDraw() {
    s32 y;
    s32 t;
    s32 d;
    s32 i;
    s32 j;
    s32 x;
    s32 pal;
    if (MenuCtrl_IsButtons()) {
        unk_e8.func_ov002_02202844();
    }
    if (!func_ov142_02292028(1)) {
        return FALSE;
    }
    unk_194.func_ov002_022036a4(unk_98);
    y = unk_94 + 0x60;
    if (!func_ov142_02292028(0x100)) {
        Unk_ov002_022046b0 *p = &unk_14c;
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
        func_02088730(1, (u8 *)data_ov142_02294e08 + x * 8, 0x80, y, pal, 1, 0);
        func_02088730(1, (u8 *)data_ov142_02294e08 + (x + 1) * 8, 0x80, y, pal, 1, 0);
    }
    Oam_DrawCell(1, data_ov142_02294d38, 0x80, y, unk_bf, 1, 0x1000, 0x1000, 0, -1, 0, 0);
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
            Oam_DrawCell(1, data_ov142_02294d78, 0x80, x, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, data_ov142_02294d58, 0x80, x, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
    return TRUE;
}

extern "C" void *data_ov142_02294d00[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_022945b4Ev, 0};
extern "C" void *data_ov142_02294c70[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293fa8Ev, 0};
extern "C" void *data_ov142_02294ce0[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293e8cEv, 0};
extern "C" void *data_ov142_02294c98[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293ee8Ev, 0};
extern "C" void *data_ov142_02294c68[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293c50Ev, 0};
extern "C" void *data_ov142_02294ce8[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02294514Ev, 0};
extern "C" u32 data_ov142_02294d58[8] = {0x401440cd, 0x00008908, 0x41f840cd, 0x00008908,
                                         0x41d840cd, 0x00008908, 0x41b840cd, 0xffff8908};
extern "C" u32 data_ov142_02294d30[2] = {0x403800bb, 0xffff110e};
extern "C" u32 data_ov142_02294d28[2] = {0x403800b9, 0x0000910e};
extern "C" u32 data_ov142_02294d78[10] = {0x41b800bc, 0x0000890c, 0x401440cd, 0x00008928, 0x41f840cd,
                                          0x00008928, 0x41d840cd, 0x00008928, 0x41b840cd, 0xffff8928};
extern "C" u32 data_ov142_02294d18[2] = {0x40380035, 0x00008110};
extern "C" void *data_ov142_02294d10[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02294624Ev, 0};
extern "C" void *data_ov142_02294d08[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_022945f4Ev, 0};
extern "C" u32 data_ov142_02294e08[36] = {
    0x41820038, 0x000074d5, 0x01928038, 0x000074d7, 0x41820028, 0x000074d2, 0x01928028, 0x000074d4, 0x41820018,
    0x000074cf, 0x01928018, 0x000074d1, 0x41820008, 0x000074d8, 0x01928008, 0x000074da, 0x418200f8, 0x000074cc,
    0x019280f8, 0x000074ce, 0x418200e8, 0x000074c9, 0x019280e8, 0x000074cb, 0x418200d8, 0x000074c6, 0x019280d8,
    0x000074c8, 0x418200c8, 0x000074c3, 0x019280c8, 0x000074c5, 0x418200b8, 0x000064c0, 0x019280b8, 0xffff64c2};
extern "C" void *data_ov142_02294cf8[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02294584Ev, 0};
extern "C" void *data_ov142_02294cf0[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02294544Ev, 0};
extern "C" void *data_ov142_02294c90[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293ec0Ev, 0};

BOOL Unk_ov142_02294da8::vfunc_4c() {
    static Unk_ov142_02294da8_Fn tbl[8] = {
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cd8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c60,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294d10,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294d08,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294d00,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cf8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cf0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ce8};
    func_ov142_0229435c();
    (this->*tbl[unk_8c])();
    func_ov142_02294334();
    return TRUE;
}

extern "C" void *data_ov142_02294cd0[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_022940c0Ev, 0};
extern "C" void *data_ov142_02294cc8[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_0229408cEv, 0};
extern "C" void *data_ov142_02294cb8[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293dfcEv, 0};
extern "C" void *data_ov142_02294c60[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_0229465cEv, 0};
extern "C" void *data_ov142_02294cb0[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293d54Ev, 0};
extern "C" u32 data_ov142_02294d20[2] = {0x40380037, 0x00001110};
extern "C" void *data_ov142_02294ca0[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293f1cEv, 0};

void Unk_ov142_02294da8::func_ov142_02294750() {
    static Unk_ov142_02294da8_Fn tbl[14] = {
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cd0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cc8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c78,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cc0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c70,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ca8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ca0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c98,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c90,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ce0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c80,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cb8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cb0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c68};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov142_02294da8::vfunc_50() {
    func_ov142_022943c0();
    func_ov142_02294750();
    func_ov142_022943b8(this);
    return TRUE;
}

BOOL Unk_ov142_02294da8::vfunc_54() { return TRUE; }

BOOL Unk_ov142_02294da8::vfunc_58() { return TRUE; }

BOOL Unk_ov142_02294da8::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov142_02294da8::func_ov142_022946bc() {
    func_ov142_022942e8(this);
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

void Unk_ov142_02294da8::func_ov142_02294624() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x18);
    func_ov142_022944c8();
    func_ov002_02200a50(3);
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

void Unk_ov142_02294da8::func_ov142_022945b4() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(5);
        func_ov002_02200874(0, 0);
        unk_194.func_ov002_022032b0(0x22);
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

void Unk_ov142_02294da8::func_ov142_02294544() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(7);
        func_ov002_02200874(0, 0);
        unk_194.func_ov002_02203510(0x65);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov142_02294da8::func_ov142_02294514() {
    if (func_ov002_02200908(-1)) {
        func_ov142_02293bd4();
        func_ov002_02200a60(2);
    }
    unk_98 = func_ov002_02200920();
}

// ---- 0x022944c8 ----
void Unk_ov142_02294da8::func_ov142_022944c8() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0x20 - unk_9c);
    unk_94 = func_ov002_02200920();
    unk_98 = unk_94;
    func_ov142_02292478();
}

void Unk_ov142_02294da8::func_ov142_02294424() {
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_c4[i] = 0;
        unk_d6[i] = 0;
    }
    i = 0;
    for (; i < 9; i++) {
        unk_157e[i] = 0xfff1;
    }
    unk_b6 = 0;
    unk_bc = 9;
    unk_c1 = 3;
    unk_c2 = 0;
    func_ov142_02292ab8(9, -1);
    func_ov142_0229337c();
    func_ov142_02293348();
    func_ov142_02293314();
    func_ov142_022932dc();
    func_ov142_022932a8();
    func_ov142_02293274();
    func_ov142_022931a0();
    func_ov142_02293240();
    func_ov142_0229320c();
    unk_14c.func_ov002_02202f0c();
}

void Unk_ov142_02294da8::func_ov142_022943d8() {
    func_ov142_02293820();
    unk_194.func_ov002_02203900();
    unk_678[0].func_020b87d0();
    unk_678[1].func_020b87d0();
    unk_678[2].func_020b87d0();
    unk_678[3].func_020b87d0();
}

void Unk_ov142_02294da8::func_ov142_022943c0() {
    func_ov142_0229435c();
    unk_e8.vfunc_0c();
}

extern "C" void func_ov142_022943b8(Unk_ov142_02294da8 *p) { p->func_ov142_02294334(); }

void Unk_ov142_02294da8::func_ov142_0229435c() {
    unk_678[0].func_020b87d0();
    unk_678[1].func_020b87d0();
    unk_678[2].func_020b87d0();
    unk_678[3].func_020b87d0();
    func_ov142_02293820();
    unk_194.func_ov002_02203900();
    unk_14c.vfunc_0c();
}

void Unk_ov142_02294da8::func_ov142_02294334() {
    func_ov142_0229203c();
    func_ov142_02292e1c();
    func_ov142_02292f00();
    unk_14c.func_ov002_02202ed0();
}

extern "C" void func_ov142_022942e8(Unk_ov142_02294da8 *) {
    func_020015b8(0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov142_02294da8::func_ov142_02294234() {
    void *h = gCurrentHeap;
    func_0200261c("menu/catalog/bg0.bch", h, 6, 0x11, 0x11, 0x51);
    func_0200261c("menu/catalog/bg1.bch", h, 6, 0x156, 0x156, 0x174);
    func_020026c4("menu/catalog/bg.bpl", h, 6, 1, 1, 5);
    File_LoadToBuffer("menu/catalog/bg_3.bpl", unk_2d90, 0x20);
    File_LoadToBuffer("menu/catalog/bg_4.bpl", unk_2dd0, 0x20);
    File_LoadToBuffer("menu/catalog/b_bg.bsc", unk_1590, 0x800);
    File_LoadToBuffer("menu/catalog/a_bg.bsc", unk_2590, 0x800);
}

void Unk_ov142_02294da8::func_ov142_022941c4() {
    func_ov002_02203920(&unk_194);
    void *h = gCurrentHeap;
    func_0200261c("menu/catalog/obj0.bch", h, 8, 0xc0, 0xc0, 0x11f);
    func_0200261c("menu/catalog/obj1.bch", h, 8, 0x120, 0x120, 0x17f);
    func_020026c4("menu/catalog/obj.bpl", h, 8, 4, 4, 9);
}

void Unk_ov142_02294da8::func_ov142_022940c0() {
    if (func_ov002_02200a14(1)) {
        func_ov142_02293bfc();
        return;
    }
    if (Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY;
        s32 r = func_ov142_02292bbc(x, y);
        if (r != 0x19) {
            func_ov142_02292c58(r);
            return;
        }
        if (func_ov142_02292028(0x100)) {
            return;
        }
        if (func_ov142_022925dc(x, y)) {
            func_ov002_02200a58(1);
            return;
        }
        if (x < 0xb8 || x >= 0xc8) {
            return;
        }
        if (!func_ov142_02292028(0x400) && y >= 0x19 && y < 0x29) {
            func_ov142_022922e8();
            func_ov002_02200a58(3);
            return;
        }
        if (!func_ov142_02292028(0x800) && y >= 0x95 && y < 0xa5) {
            func_ov142_022922d8();
            func_ov002_02200a58(3);
            return;
        }
        if (y >= 0x2c && y <= 0x86) {
            unk_14c.func_ov002_02202f00();
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov142_02294da8::func_ov142_0229408c() {
    if (gTouchHeld != 0) {
        func_ov142_02292564(gTouchCurY, 0);
    } else {
        func_ov142_02292554();
        func_ov002_02200a58(0);
    }
}

void Unk_ov142_02294da8::func_ov142_02294058() {
    if (gTouchHeld != 0) {
        func_ov142_02292564(gTouchCurY, 1);
    } else {
        func_ov142_02292554();
        func_ov002_02200a58(0);
    }
}

void Unk_ov142_02294da8::func_ov142_02294030() {
    if (gTouchHeld != 0) {
        func_ov142_022921f0();
    } else {
        func_ov142_022922c8();
        func_ov002_02200a58(0);
    }
}

void Unk_ov142_02294da8::func_ov142_02293fa8() {
    if (func_ov002_022009d4()) {
        func_ov142_02293c38();
        return;
    }
    if (func_ov142_02292624(func_ov002_022009c8())) {
        func_ov142_0229390c();
        return;
    }
    u32 k = gPad[1];
    if (k & 1) {
        func_ov142_022938a8();
    } else if (k & 2) {
        func_ov142_02293954();
        func_ov142_02293acc();
    } else if (k & 8) {
        if (func_ov142_02292028(0x20)) {
            func_ov142_02293954();
            func_ov142_02293af8();
        }
    }
}

void Unk_ov142_02294da8::func_ov142_02293f5c() {
    if (gPad[0] & 1) {
        func_ov142_022924c8();
        s32 a = func_ov142_02293a0c();
        s32 b = func_ov142_02293970();
        unk_e8.func_ov002_02202a40(a, b);
    } else {
        func_ov142_02292554();
        func_ov002_02200a58(6);
    }
}

void Unk_ov142_02294da8::func_ov142_02293f1c() {
    if (func_ov142_022924a0()) {
        func_ov002_02200a58(4);
        func_ov142_02293884();
    }
    s32 a = func_ov142_02293a0c();
    s32 b = func_ov142_02293970();
    unk_e8.func_ov002_02202a40(a, b);
}

void Unk_ov142_02294da8::func_ov142_02293ee8() {
    if (gPad[0] & 1) {
        func_ov142_022921f0();
    } else {
        func_ov142_022922c8();
        func_ov002_02200a58(4);
        func_ov142_02293884();
    }
}

void Unk_ov142_02294da8::func_ov142_02293ec0() {
    if (!unk_e8.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_ba);
        func_ov142_02294750();
    }
}

void Unk_ov142_02294da8::func_ov142_02293e8c() {
    if (unk_e8.isAnimDone()) {
        if (!func_ov142_02292c58(unk_c0)) {
            func_ov002_02200a58(4);
            func_ov142_02293884();
        }
    }
}

void Unk_ov142_02294da8::func_ov142_02293e68() {
    if (unk_e8.isAnimDone()) {
        func_ov142_022938c0();
        func_ov002_02200a58(unk_ba);
    }
}

void Unk_ov142_02294da8::func_ov142_02293dfc() {
    if (func_ov002_02200a14(1)) {
        func_ov142_02293b98();
        return;
    }
    if (Both()) {
        if (unk_194.func_ov002_02203110(3)) {
            func_ov142_02293d10();
        } else if (unk_194.func_ov002_02203110(4)) {
            func_ov142_02293cb8();
        }
    }
}

void Unk_ov142_02294da8::func_ov142_02293d54() {
    u8 old;
    if (func_ov002_022009d4()) {
        func_ov142_02293bbc();
        return;
    }
    old = unk_c0;
    func_ov002_022009c8();
    if (func_ov002_022009a4()) {
        unk_c0 = 0x17;
    } else if (func_ov002_02200998()) {
        unk_c0 = 0x18;
    }
    if (old != unk_c0) {
        func_ov142_0229390c();
        return;
    }
    {
        u32 k = gPad[1];
        if (k & 1) {
            func_ov142_022938a8();
            return;
        }
        if (k & 8) {
            func_ov142_02293954();
            func_ov142_02293d10();
        }
    }
    if (gPad[1] & 2) {
        func_ov142_02293954();
        func_ov142_02293cb8();
    }
}

void Unk_ov142_02294da8::func_ov142_02293d10() {
    Snd_PlaySe(0x29);
    unk_194.func_ov002_022030ac(3);
    func_ov002_02200a58(0xd);
    func_0206ecf8(1);
    func_0206e738(*func_ov142_02293004(unk_b8));
    func_ov142_02293b34();
}

void Unk_ov142_02294da8::func_ov142_02293cb8() {
    Snd_PlaySe(0x2a);
    unk_194.func_ov002_022030ac(4);
    unk_8c = 6;
    func_ov002_0220085c(0, 0);
    func_ov002_02200a58(0xd);
    func_ov142_02292018(0x80);
    unk_c0 = 0x12;
    unk_bf = 5;
    func_ov142_022922f8();
}

void Unk_ov142_02294da8::func_ov142_02293c50() {
    if (unk_194.func_ov002_0220308c()) {
        if (unk_e8.getAnim()) {
            s32 a = unk_194.func_ov002_0220306c();
            s32 b = unk_194.func_ov002_022030f4(-1);
            s32 c = unk_194.func_ov002_022030b8(-1);
            unk_e8.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov142_02293954();
        func_ov002_02200a60(1);
    }
}

void Unk_ov142_02294da8::func_ov142_02293c38() {
    func_ov142_02293954();
    func_ov002_02200a58(0);
}

void Unk_ov142_02294da8::func_ov142_02293bfc() {
    if (func_ov142_02292028(0x80)) {
        func_ov142_02292008(0x80);
    } else {
        unk_c0 = 0;
    }
    func_ov142_02293a94();
    func_ov002_02200980();
    func_ov002_02200a58(4);
}

void Unk_ov142_02294da8::func_ov142_02293bd4() {
    if (MenuCtrl_IsTouch()) {
        func_ov142_02293c38();
    } else {
        func_ov142_02293bfc();
    }
    func_ov142_02292008(0x80);
}

void Unk_ov142_02294da8::func_ov142_02293bbc() {
    func_ov142_02293954();
    func_ov002_02200a58(0xb);
}

void Unk_ov142_02294da8::func_ov142_02293b98() {
    unk_c0 = 0x18;
    func_ov142_02293a94();
    func_ov002_02200980();
    func_ov002_02200a58(0xc);
}

void Unk_ov142_02294da8::func_ov142_02293b78() {
    if (MenuCtrl_IsTouch()) {
        func_ov142_02293bbc();
    } else {
        func_ov142_02293b98();
    }
}

void Unk_ov142_02294da8::func_ov142_02293b34() {
    func_ov002_02200a50(2);
    if (Unk_ov142_02293b34_IsOne()) {
        if (func_ov142_02292028(0x40)) {
            func_ov142_02292008(0x40);
            ((Unk_ov004_02235a0c *)func_ov004_02235a04())->func_ov004_02235a2c();
        }
    }
}

void Unk_ov142_02294da8::func_ov142_02293af8() {
    unk_bf = 7;
    func_ov142_02293954();
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov002_0220085c(0, 0);
    func_ov142_02292364();
    Snd_PlaySe(0x59);
}

void Unk_ov142_02294da8::func_ov142_02293acc() {
    func_0206ecf8(0);
    unk_194.func_ov002_022030ac(6);
    func_ov002_02200a58(0xd);
    func_ov142_02293b34();
}

void Unk_ov142_02294da8::func_ov142_02293a94() {
    s32 a = func_ov142_02293a0c();
    s32 b = func_ov142_02293970();
    unk_e8.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_e8)->func_ov002_02202d00(1);
    func_ov142_022938c0();
}

s32 Unk_ov142_02294da8::func_ov142_02293a0c() {
    u32 c = unk_c0;
    if (c <= 8) {
        return 0x17;
    }
    if (c >= 9 && c <= 0x11) {
        return 0x40;
    }
    switch (c - 0x12) {
    case 1:
        return unk_194.func_ov002_022030f4(6);
    case 0:
        return 0xe8;
    case 2:
        return unk_14c.func_ov002_02202e84();
    case 5:
        return unk_194.func_ov002_022030f4(3);
    case 6:
        return unk_194.func_ov002_022030f4(4);
    case 3:
    case 4:
        return 0xc0;
    default:
        return 0x80;
    }
}

s32 Unk_ov142_02294da8::func_ov142_02293970() {
    u32 c = unk_c0;
    if (c <= 8) {
        return c * 16 + 0x1f;
    }
    if (c >= 9 && c <= 0x11) {
        return (c - 9) * 16 + 0x28 - (unk_a0 & 0xf);
    }
    switch (c - 0x12) {
    case 1:
        return unk_194.func_ov002_022030b8(6);
    case 0:
        return 0x57;
    case 2:
        return unk_14c.func_ov002_02202e60();
    case 5:
        return unk_194.func_ov002_022030b8(3);
    case 6:
        return unk_194.func_ov002_022030b8(4);
    case 3:
        return 0x23;
    case 4:
        return 0x9b;
    default:
        return 0x60;
    }
}

void Unk_ov142_02294da8::func_ov142_02293954() {
    ((Unk_ov002_0220464c *)&unk_e8)->func_ov002_02202d00(0);
    unk_e8.vfunc_0c();
}

void Unk_ov142_02294da8::func_ov142_0229390c() {
    u32 c = unk_c0;
    if (c == 0x13 || (c >= 9 && c <= 0x11)) {
        ((Unk_ov002_0220464c *)&unk_e8)->func_ov002_02202ca0();
    } else {
        ((Unk_ov002_0220464c *)&unk_e8)->func_ov002_02202c40();
    }
    s32 a = func_ov142_02293a0c();
    s32 b = func_ov142_02293970();
    func_ov142_022938dc(a, b);
}

void Unk_ov142_02294da8::func_ov142_022938dc(s32 a, s32 b) {
    unk_e8.func_ov002_022029e8(a, b, 3, 1);
    unk_ba = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov142_02294da8::func_ov142_022938c0() {
    unk_e8.func_ov002_02202a78();
    unk_e8.vfunc_0c();
}

void Unk_ov142_02294da8::func_ov142_022938a8() {
    ((Unk_ov002_0220464c *)&unk_e8)->func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov142_02294da8::func_ov142_02293884() {
    unk_e8.func_ov002_02202af0();
    unk_ba = unk_8d;
    func_ov002_02200a58(10);
}

Unk_020e0488 *Unk_ov142_02294da8::func_ov142_0229384c() {
    if (*(volatile u8 *)&unk_bb >= 14) {
        return &unk_2f8[13];
    }
    *(volatile u8 *)&unk_bb = *(volatile u8 *)&unk_bb + 1;
    return &unk_2f8[*(volatile u8 *)&unk_bb - 1];
}

void Unk_ov142_02294da8::func_ov142_02293820() {
    s32 i = 0;
    unk_bb = 0;
    Unk_020e0488 *w = unk_2f8;
    for (; i < 14; i++) {
        (w + i)->func_0206fc44();
    }
}

void Unk_ov142_02294da8::func_ov142_02293734() {
    ItemName buf;
    s32 i;
    Unk_020e0488 *w;
    s32 cnt;
    s32 z4 = 0, z1 = 0, z2 = 0, z3 = 0;
    s32 cur = unk_b4;
    u16 *list = func_ov142_02293004(cur);
    s32 col = (cur + 9) % 9;
    cnt = func_ov142_02293098();
    for (i = 0; i < 9; i++) {
        w = (Unk_020e0488 *)z4;
        if (cur < 0 || cur >= cnt) {
            unk_157e[col] = 0xfff1;
            w = func_ov142_0229384c();
            w->clear();
        } else {
            if (*list != unk_157e[col]) {
                unk_157e[col] = *list;
                w = func_ov142_0229384c();
                u16 id = *list;
                buf.setFromItem(&id);
                w->copy(&buf);
            }
            list++;
        }
        if (w) {
            w->func_0206fb9c(4, col * 26 + 0x52, 0xd, 0xf, 8, z1);
            w->func_0206fab4(z2, z2);
        }
        cur++;
        col++;
        if (col >= 9) col = z3;
    }
}

void Unk_ov142_02294da8::func_ov142_022936a4() {
    Unk_020e0488 *w = func_ov142_0229384c();
    func_0206f9c8(w, func_ov142_02293098(), 3, 0, 0, 0);
    w->func_0206fb48(6, 0x156, 3, 0xe, 4, 0);
    w->func_0206fa4c();
    w = func_ov142_0229384c();
    func_0206f9c8(w, func_ov142_022930a8(), 3, 0, 0, 0);
    w->func_0206fb48(6, 0x15a, 3, 0xe, 4, 0);
    w->func_0206fab4(0, 0);
}

void Unk_ov142_02294da8::func_ov142_0229365c(s32 a) {
    Unk_020e0488 *w = func_ov142_0229384c();
    func_0206f9c8(w, a, 8, 1, 0, 1);
    w->func_0206fb9c(6, 0x15d, 8, 0xe, 4, 1);
    w->func_0206fa4c();
}

void Unk_ov142_02294da8::func_ov142_02293618(s32 a, s32 b, s32 c, u8 d, s32 e) {
    Unk_020e0488 *w = func_ov142_0229384c();
    func_0206f9fc(w, a);
    w->func_0206fb9c(6, b, c, d, 4, 0);
    w->func_0206fab4(e, 0);
}

void Unk_ov142_02294da8::func_ov142_022935f8() {
    func_ov142_02293618(0x53, 0x15d, 8, 0xe, 1);
}

void Unk_ov142_02294da8::func_ov142_022935bc() {
    Unk_020e0488 *w = func_ov142_0229384c();
    w->clear();
    w->func_0206fb9c(6, 0x15d, 8, 0xe, 4, 0);
    w->func_0206fab4(0, 0);
}

void Unk_ov142_02294da8::func_ov142_02293540(u8 v) {
    if (unk_bc != v) {
        unk_bc = v;
        unk_bd = v;
        unk_a4 = (func_ov142_02293098() - 8) << 4;
        if (unk_a4 < 0) {
            unk_a4 = 0;
        }
        func_ov142_02292e94(0);
        unk_a0 = 0;
        func_ov142_02292414();
        if (unk_a4 == 0) {
            func_ov142_022923ac();
        } else {
            func_ov142_022923c8();
        }
        func_ov142_02292478();
        func_ov142_02292018(8);
    }
}

void Unk_ov142_02294da8::func_ov142_02293528(u32 v) {
    if (v != unk_bd) {
        unk_bd = v;
        unk_c2 = 1;
    }
}

void Unk_ov142_02294da8::func_ov142_0229337c() {
    s32 n = 0;
    u32 cur;
    u16 id;
    u32 h;
    s32 i;
    unk_c4[0] = 0;
    unk_d6[0] = 0;
    cur = 0x3000;
    id = 0xfff1;
    h = PlayerData_GetCurrent();
    for (i = 0; i < 0x6e9; i++) {
        BOOL r;
        id = cur;
        r = FALSE;
        u32 v = id;
        if (*(volatile u16 *)&id >= 0x45dc && v <= 0x47d7) r = TRUE;
        if (r) goto next;
        r = (v >= 0x4384 && v <= 0x4463) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x42a4 && v <= 0x4383) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3e24 && v <= 0x3ea3) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3984 && v <= 0x3d83) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x450c && v <= 0x45db) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3fa4 && v <= 0x40a3) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x4124 && v <= 0x4223) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x40a4 && v <= 0x4123) ? TRUE : FALSE;
        if (r) goto next;
        if (Item_TestInfoFlag3(&id)) {
            unk_d6[0] = unk_d6[0] + 1;
            if (Catalog_HasItem(PlayerData_getCatalog(h), &id)) {
                *(u16 *)((u8 *)this + n * 2 + 0x708) = cur;
                n++;
            }
        }
    next:
        cur = (u16)(cur + 4);
    }
    unk_c4[0] = n;
}

void Unk_ov142_02294da8::func_ov142_02293348() {
    unk_d6[1] = 0;
    unk_c4[1] = func_ov142_022930b8(unk_f08, 0x1100, 0x44, 1);
}

void Unk_ov142_02294da8::func_ov142_02293314() {
    unk_d6[2] = 0;
    unk_c4[2] = func_ov142_022930b8(unk_f90, 0x1144, 0x44, 2);
}

void Unk_ov142_02294da8::func_ov142_022932dc() {
    unk_d6[3] = 0;
    unk_c4[3] = func_ov142_0229312c(unk_1018, 0x3984, 0x100, 3);
}

void Unk_ov142_02294da8::func_ov142_022932a8() {
    unk_d6[4] = 0;
    unk_c4[4] = func_ov142_0229312c(unk_1218, 0x3e24, 0x20, 4);
}

void Unk_ov142_02294da8::func_ov142_02293274() {
    unk_d6[6] = 0;
    unk_c4[6] = func_ov142_0229312c(unk_1398, 0x1003, 0x40, 6);
}

void Unk_ov142_02294da8::func_ov142_02293240() {
    unk_d6[7] = 0;
    unk_c4[7] = func_ov142_0229312c(unk_1418, 0x45dc, 0x7f, 7);
}

void Unk_ov142_02294da8::func_ov142_0229320c() {
    *(u16 *)((u8 *)this + 0xe6) = 0;
    s32 n = func_ov142_0229312c(unk_1516, 0x450c, 0x34, 8);
    *(u16 *)((u8 *)this + 0xd4) = n;
}

void Unk_ov142_02294da8::func_ov142_022931a0() {
    *(u16 *)((u8 *)this + 0xe0) = 0;
    s32 a = func_ov142_0229312c(unk_1258, 0x3fa4, 0x40, 5);
    s32 b = func_ov142_0229312c(unk_1258 + a, 0x40a4, 0x20, 5);
    a += b;
    s32 c = func_ov142_0229312c(unk_1258 + a, 0x4124, 0x40, 5);
    *(u16 *)((u8 *)this + 0xce) = a + c;
}

s32 Unk_ov142_02294da8::func_ov142_0229312c(u16 *out, u16 start, s32 n, s32 off) {
    s32 cnt = 0;
    u32 p = PlayerData_GetCurrent();
    u16 tmp = 0xfff1;
    s32 i = 0;
    Unk_ov142_02294da8 *q = (Unk_ov142_02294da8 *)((u8 *)this + off * 2);
    for (; i < n; i++) {
        tmp = start;
        if (Item_TestInfoFlag3(&tmp)) {
            q->unk_d6[0] = q->unk_d6[0] + 1;
            if (Catalog_HasItem(PlayerData_getCatalog(p), &tmp)) {
                out[cnt] = start;
                cnt++;
            }
        }
        start = start + 4;
    }
    return cnt;
}

s32 Unk_ov142_02294da8::func_ov142_022930b8(u16 *out, u16 start, s32 n, s32 off) {
    s32 cnt = 0;
    u16 tmp = 0xfff1;
    u32 p = PlayerData_GetCurrent();
    s32 i = 0;
    Unk_ov142_02294da8 *q = (Unk_ov142_02294da8 *)((u8 *)this + off * 2);
    for (; i < n; i++) {
        tmp = start;
        if (Item_TestInfoFlag3(&tmp)) {
            q->unk_d6[0] = q->unk_d6[0] + 1;
            if (Catalog_HasItem(PlayerData_getCatalog(p), &tmp)) {
                out[cnt] = start;
                cnt++;
            }
        }
        start = start + 1;
    }
    return cnt;
}

s32 Unk_ov142_02294da8::func_ov142_022930a8() {
    return unk_d6[unk_bc];
}

s32 Unk_ov142_02294da8::func_ov142_02293098() {
    return unk_c4[unk_bc];
}

extern "C" Unk_ov142_SceneEntry data_ov142_02294c88 = {func_ov142_02294bc8, 0xb7, 0xbb};
extern "C" void *data_ov142_02294c80[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293e68Ev, 0};
extern "C" void *data_ov142_02294cc0[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02294030Ev, 0};
extern "C" void *data_ov142_02294ca8[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02293f5cEv, 0};

u16 *Unk_ov142_02294da8::func_ov142_02293004(s32 idx) {
    static u16 *tbl[9] = {
        (u16 *)((u8 *)this + 0x708), (u16 *)((u8 *)this + 0xf08), (u16 *)((u8 *)this + 0xf90),
        (u16 *)((u8 *)this + 0x1018), (u16 *)((u8 *)this + 0x1218), (u16 *)((u8 *)this + 0x1258),
        (u16 *)((u8 *)this + 0x1398), (u16 *)((u8 *)this + 0x1418), (u16 *)((u8 *)this + 0x1516)
    };
    if (idx < 0) {
        idx = 0;
    }
    return tbl[unk_bc] + idx;
}

void Unk_ov142_02294da8::func_ov142_02292f8c() {
    s32 a = unk_b4;
    s32 i = (a + 9) % 9;
    s32 j = a & 0xf;
    volatile u16 fill = 0x10;
    MIi_CpuClear16(fill, unk_1d90, 0x800);
    s32 z = 0;
    for (s32 n = 0; n < 9; n++) {
        MIi_CpuCopy16((u8 *)this + 0x1590 + i * 0x80, unk_1d90 + j * 0x80, 0x80);
        i++;
        if (i >= 9) {
            i = z;
        }
        j = (j + 1) & 0xf;
    }
    func_ov142_02292018(2);
}

void Unk_ov142_02294da8::func_ov142_02292f00() {
    if (func_ov142_02292028(2)) {
        func_ov142_02292d80();
    }
    if (func_ov142_02292028(0x10)) {
        if (unk_678[1].func_020b86c0((u32)unk_2590, 6, 0x800, 0)) {
            func_ov142_02292008(0x10);
        }
    }
    if (func_ov142_02292028(4)) {
        func_ov142_02292008(4);
        func_ov142_02293734();
    }
    if (func_ov142_02292028(8)) {
        func_ov142_02292008(8);
        func_ov142_022936a4();
    }
}

void Unk_ov142_02294da8::func_ov142_02292e94(s32 v) {
    func_ov142_02292008(0xc00);
    if (v <= 0) {
        func_ov142_02292018(0x400);
    }
    if (v >= unk_a4) {
        func_ov142_02292018(0x800);
    }
    unk_9c = v;
    func_020021fc(4, 0, unk_9c - 0x20);
    unk_b4 = v >> 4;
    func_ov142_02292f8c();
    func_ov142_02292018(4);
}

void Unk_ov142_02294da8::func_ov142_02292e1c() {
    s32 a = unk_a0;
    if (unk_9c != a) {
        if (unk_9c > a) {
            unk_9c = unk_9c - 6;
            if (unk_9c < unk_a0) {
                unk_9c = unk_a0;
            }
        } else {
            unk_9c = unk_9c + 6;
            if (unk_9c > unk_a0) {
                unk_9c = unk_a0;
            }
        }
        func_ov142_02292e94(unk_9c);
        func_ov142_02292414();
    }
}

void Unk_ov142_02294da8::func_ov142_02292d80() {
    s32 v;
    if (func_ov142_02292028(0x200)) {
        v = 5;
    } else {
        v = 3;
    }
    func_0206ee80(unk_1d90, 0, 0, 0x1f, 0x1f, v);
    if (unk_bc == unk_be) {
        s32 b = unk_b8;
        s32 d = b - unk_b4;
        if (d >= 0 && d < 9) {
            s32 m = (b & 0xf) * 2;
            func_0206ee80(unk_1d90, 0, m, 0x1f, m + 1, 4);
        }
    }
    if (unk_678[0].func_020b86c0((u32)unk_1d90, 4, 0x800, 0)) {
        func_ov142_02292008(2);
    }
}

BOOL Unk_ov142_02294da8::func_ov142_02292c58(u32 a) {
    switch (a) {
    case 0x13:
        func_ov142_02293acc();
        return TRUE;
    case 0x12:
        if (func_ov142_02292028(0x20)) {
            func_ov142_02293af8();
            return TRUE;
        }
        return FALSE;
    case 0x14:
        unk_14c.func_ov002_02202f00();
        func_ov002_02202e48(&unk_14c);
        func_ov002_02200a58(5);
        return TRUE;
    case 0x17:
        func_ov142_02293d10();
        return TRUE;
    case 0x18:
        func_ov142_02293cb8();
        return TRUE;
    case 0x15:
        if (func_ov142_02292028(0x400)) {
            return FALSE;
        }
        func_ov142_022922e8();
        func_ov002_02200a58(7);
        return TRUE;
    case 0x16:
        if (func_ov142_02292028(0x800)) {
            return FALSE;
        }
        func_ov142_022922d8();
        func_ov002_02200a58(7);
        return TRUE;
    default:
        break;
    }
    if (a <= 8) {
        if (unk_bd != a) {
            Snd_PlaySe(0xc);
            func_ov142_02293528((u8)a);
        }
        return FALSE;
    }
    if (a >= 9 && a <= 0x11) {
        if (unk_c2 != 0) {
            return FALSE;
        }
        if (func_ov142_02292ab8(unk_bc, (s16)(unk_b4 + (a - 9)))) {
            Snd_PlaySe(0x29);
        }
    }
    return FALSE;
}

u32 Unk_ov142_02294da8::func_ov142_02292bbc(s32 x, s32 y) {
    if (unk_194.func_ov002_02203110(6)) {
        return 0x13;
    }
    if (func_ov142_02292028(0x20)) {
        if (x >= 0xc4 && x < 0xe8 && y >= 0x4d && y < 0x71) {
            return 0x12;
        }
    }
    if (x <= 0x1b) {
        if (y >= 0x18 && y < 0xa8) {
            return (u8)((y - 0x18) >> 4);
        }
        return 0x19;
    }
    if (x >= 0x38 && x <= 0x9c) {
        if (y >= 0x20 && y < 0xa0) {
            s32 k = (y - (0x20 - (unk_a0 & 0xf))) >> 4;
            if (k >= func_ov142_02293098()) {
                return 0x19;
            }
            return (u8)(k + 9);
        }
        return 0x19;
    }
    return 0x19;
}

BOOL Unk_ov142_02294da8::func_ov142_02292ab8(u32 a, s32 b) {
    BOOL r = TRUE;
    volatile u16 tmp;
    if (unk_be == a && unk_b8 == b) {
        r = FALSE;
    }
    unk_be = a;
    unk_b8 = b;
    if (b == -1) {
        func_ov142_022935bc();
        func_ov142_02292008(0x20);
        unk_bf = 6;
        BOOL t;
        if (data_020e416c == 1) {
            t = TRUE;
        } else {
            t = FALSE;
        }
        if (t) {
            if (func_ov142_02292028(0x40)) {
                func_ov142_02292008(0x40);
                ((Unk_ov004_02235a0c *)func_ov004_02235a04())->func_ov004_02235a2c();
            }
        }
    } else {
        u16 v = *func_ov142_02293004(b);
        tmp = 0xfff1;
        tmp = v;
        if (Item_TestInfoFlag4((u16 *)&tmp)) {
            func_ov142_022935f8();
            unk_bf = 6;
            func_ov142_02292008(0x20);
        } else {
            func_ov142_0229365c(Item_GetMemberPrice((u16 *)&tmp));
            func_ov142_02292018(0x20);
            unk_bf = 5;
        }
        BOOL t;
        if (data_020e416c == 1) {
            t = TRUE;
        } else {
            t = FALSE;
        }
        if (t) {
            func_ov142_02292018(0x40);
            ((Unk_ov004_02235a0c *)func_ov004_02235a04())->func_ov004_02235a54((u16 *)&tmp);
        }
    }
    func_ov142_02292018(2);
    return r;
}

void Unk_ov142_02294da8::func_ov142_02292a94() {
    if (unk_e8.func_ov002_02202878() > 0x89) {
        unk_c0 = 0x13;
    } else {
        unk_c0 = 0x12;
    }
}

void Unk_ov142_02294da8::func_ov142_02292a5c() {
    if (unk_e8.func_ov002_02202878() < 0x2b) {
        unk_c0 = 0x15;
    } else if (unk_e8.func_ov002_02202878() > 0x93) {
        unk_c0 = 0x16;
    } else {
        unk_c0 = 0x14;
    }
}

void Unk_ov142_02294da8::func_ov142_02292a3c() {
    if (unk_a4 == 0) {
        func_ov142_02292a94();
    } else {
        func_ov142_02292a5c();
    }
}

void Unk_ov142_02294da8::func_ov142_02292a1c() {
    if (unk_a4 == 0) {
        func_ov142_0229294c();
    } else {
        func_ov142_02292a5c();
    }
}

BOOL Unk_ov142_02294da8::func_ov142_0229297c() {
    s32 n = func_ov142_02293098();
    if (n == 0) {
        return FALSE;
    }
    if (n > 9) {
        n = 9;
    }
    s32 y = unk_e8.func_ov002_02202878();
    if (y < 0x20) {
        y = 0x20;
    }
    if (y >= 0xa0) {
        y = 0x9f;
    }
    s32 r = unk_a0 & 0xf;
    s32 k = (y - (0x20 - r)) >> 4;
    if (k >= n) {
        k = n - 1;
    }
    unk_c0 = k + 9;
    if (r != 0) {
        if (k == 0) {
            unk_a0 = unk_a0 - r;
        } else if (k == n - 1) {
            unk_c0 = unk_c0 - 1;
            unk_a0 = unk_a0 + (0x10 - (unk_a0 & 0xf));
        }
    }
    return TRUE;
}

void Unk_ov142_02294da8::func_ov142_02292964() {
    if (func_ov142_0229297c() == 0) {
        func_ov142_02292a3c();
    }
}

void Unk_ov142_02294da8::func_ov142_0229294c() {
    if (func_ov142_0229297c() == 0) {
        func_ov142_0229291c();
    }
}

void Unk_ov142_02294da8::func_ov142_0229291c() {
    s32 t = unk_e8.func_ov002_02202878();
    if ((t & 0xf) == 0) {
        t = t - 1;
    }
    if (t < 0x18) {
        t = 0x18;
    }
    if (t >= 0xa8) {
        t = 0xa7;
    }
    unk_c0 = (t - 0x18) >> 4;
}

BOOL Unk_ov142_02294da8::func_ov142_02292624(u32 pad) {
    u32 old = unk_c0;
    if (pad == 0) {
        return FALSE;
    }
    if (old <= 8) {
        if (func_ov002_0220125c(pad)) {
            func_ov142_02292964();
        } else if (func_ov002_0220128c(pad)) {
            if (unk_c0 != 0) {
                unk_c0 = *(volatile u8 *)&unk_c0 - 1;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (unk_c0 < 8) {
                unk_c0 = *(volatile u8 *)&unk_c0 + 1;
            }
        }
    } else if (old >= 9 && old <= 0x11) {
        if (func_ov002_0220126c(pad)) {
            func_ov142_0229291c();
        } else if (func_ov002_0220125c(pad)) {
            func_ov142_02292a3c();
        } else if (func_ov002_0220128c(pad)) {
            if (unk_c0 > 9) {
                unk_c0 = *(volatile u8 *)&unk_c0 - 1;
                if (unk_c0 == 9) {
                    s32 r = unk_a0 & 0xf;
                    if (r != 0) {
                        unk_a0 = unk_a0 - r;
                    }
                }
            } else {
                if (unk_a0 >= 0x10) {
                    unk_a0 = unk_a0 - 0x10;
                    return TRUE;
                }
            }
        } else if (func_ov002_0220127c(pad)) {
            if (unk_a4 == 0) {
                if (unk_c0 < func_ov142_02293098() + 8) {
                    unk_c0 = *(volatile u8 *)&unk_c0 + 1;
                }
            } else if (unk_c0 < 0x10) {
                unk_c0 = *(volatile u8 *)&unk_c0 + 1;
            } else {
                s32 t = unk_a0;
                s32 r = t & 0xf;
                if (r != 0) {
                    unk_a0 = unk_a0 + (0x10 - r);
                    return TRUE;
                } else if (t <= unk_a4 - 0x10) {
                    unk_a0 = unk_a0 + 0x10;
                    return TRUE;
                }
            }
        }
    } else {
        switch (old - 0x12) {
        case 1:
            if (func_ov002_0220126c(pad)) {
                func_ov142_02292a1c();
            } else if (func_ov002_0220128c(pad)) {
                unk_c0 = 0x12;
            }
            break;
        case 0:
            if (func_ov002_0220126c(pad)) {
                func_ov142_02292a1c();
            } else if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x13;
            }
            break;
        case 2:
            if (func_ov002_0220128c(pad)) {
                unk_c0 = 0x15;
            } else if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x16;
            } else if (func_ov002_0220125c(pad)) {
                unk_c0 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                func_ov142_0229294c();
            }
            break;
        case 3:
            if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x14;
            } else if (func_ov002_0220125c(pad)) {
                unk_c0 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                func_ov142_0229294c();
            }
            break;
        case 4:
            if (func_ov002_0220128c(pad)) {
                unk_c0 = 0x14;
            } else if (func_ov002_0220125c(pad)) {
                unk_c0 = 0x12;
            } else if (func_ov002_0220126c(pad)) {
                func_ov142_0229294c();
            } else if (func_ov002_0220127c(pad)) {
                unk_c0 = 0x13;
            }
            break;
        }
    }
    if (old != unk_c0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov142_02294da8::func_ov142_022925dc(s32 x, s32 y) {
    if (unk_14c.func_ov002_02202f18(x, y)) {
        unk_ac = unk_a8 - y;
        unk_14c.func_ov002_02202f00();
        unk_b0 = unk_a8;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_02292564(s32 v, BOOL c) {
    if (c) {
        v = v - 0x34;
    } else {
        v = v + unk_ac;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 0x5a) {
        v = 0x5a;
    }
    if (c) {
        func_020e761c(&unk_a8, v, 8);
    } else {
        unk_a8 = v;
    }
    func_ov142_02292440();
    func_ov142_02292478();
    s32 d = unk_b0 - unk_a8;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(&unk_14c);
        unk_b0 = unk_a8;
    }
}

void Unk_ov142_02294da8::func_ov142_02292554() { unk_14c.func_ov002_02202ef4(); }

void Unk_ov142_02294da8::func_ov142_022924c8() {
    s32 old = unk_a8;
    u32 k = gPad[0];
    if (k & 0x40) {
        unk_a8 = unk_a8 - 4;
        if (unk_a8 < 0) {
            unk_a8 = 0;
        }
    } else if (k & 0x80) {
        unk_a8 = unk_a8 + 4;
        if (unk_a8 > 0x5a) {
            unk_a8 = 0x5a;
        }
    }
    if (old != unk_a8) {
        func_ov142_02292440();
        func_ov142_02292478();
        func_ov002_02202e54(&unk_14c);
    }
}

BOOL Unk_ov142_02294da8::func_ov142_022924a0() {
    if (unk_14c.areAnimsDone()) {
        unk_14c.func_ov002_02202f0c();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_02292478() {
    unk_14c.moveTo(0x38, unk_94 + (unk_a8 - 0x34));
}

void Unk_ov142_02294da8::func_ov142_02292440() {
    s32 v;
    s32 n = unk_a4;
    v = func_02133150(unk_a8 * n, 0x5a);
    if (v < 0) {
        v = 0;
    }
    if (v > n) {
        v = n;
    }
    func_ov142_02292e94(v);
    unk_a0 = v;
}

void Unk_ov142_02294da8::func_ov142_02292414() {
    if (unk_a4 > 0) {
        unk_a8 = func_02133150(unk_9c * 0x5a, unk_a4);
        func_ov142_02292478();
    }
}

void Unk_ov142_02294da8::func_ov142_022923e4(s32 a) {
    func_0206ee80(unk_2590, 0x17, 4, 0x18, 0x13, a);
    func_ov142_02292018(0x10);
}

void Unk_ov142_02294da8::func_ov142_022923c8() {
    func_ov142_02292008(0x100);
    func_ov142_022923e4(2);
}

void Unk_ov142_02294da8::func_ov142_022923ac() {
    func_ov142_02292018(0x100);
    func_ov142_022923e4(3);
}

void Unk_ov142_02294da8::func_ov142_02292364() {
    func_ov142_02293540(unk_be);
    func_ov142_02292e94((unk_b8 - 3) << 4);
    unk_a0 = unk_9c;
    func_ov142_02292414();
    func_ov142_022923ac();
    func_ov142_02292018(0x200);
}

void Unk_ov142_02294da8::func_ov142_022922f8() {
    s32 a = unk_b4;
    s32 b = func_ov142_02293098() - 8;
    if (b < 0) {
        b = 0;
    }
    if (a < 0) {
        a = 0;
    } else if (a > b) {
        a = b;
    }
    func_ov142_02292e94(a << 4);
    unk_a0 = unk_9c;
    func_ov142_02292414();
    if (unk_a4 == 0) {
        func_ov142_022923ac();
    } else {
        func_ov142_022923c8();
    }
    func_ov142_02292008(0x200);
}

void Unk_ov142_02294da8::func_ov142_022922e8() { func_ov142_02292018(0x1000); }

void Unk_ov142_02294da8::func_ov142_022922d8() { func_ov142_02292018(0x2000); }

void Unk_ov142_02294da8::func_ov142_022922c8() { func_ov142_02292008(0x3000); }

void Unk_ov142_02294da8::func_ov142_022921f0() {
    s32 old = unk_9c;
    if (func_ov142_02292028(0x1000)) {
        s32 r = unk_9c & 0xf;
        if (r != 0) {
            unk_9c = unk_9c - r;
        } else {
            unk_9c = unk_9c - 0x10;
        }
        if (unk_9c < 0) {
            unk_9c = 0;
        }
    } else {
        s32 r = unk_9c & 0xf;
        if (r != 0) {
            unk_9c = unk_9c + (0x10 - r);
        } else {
            unk_9c = unk_9c + 0x10;
        }
        s32 lim = unk_a4;
        if (unk_9c > lim) {
            unk_9c = lim;
        }
    }
    if (old != unk_9c) {
        func_ov142_02292e94(unk_9c);
        unk_a0 = unk_9c;
        func_ov142_02292414();
        func_ov002_02202e54(&unk_14c);
    }
}

u16 Unk_ov142_02294da8::func_ov142_02292154(s32 x, s32 y, s32 t) {
    u8 r = y & 0x1f;
    u8 g = (y & 0x3e0) >> 5;
    u8 b = (y & 0x7c00) >> 10;
    s32 n = 3 - t;
    r = ((u8)(x & 0x1f) * t + r * n) / 3;
    g = ((u8)((x & 0x3e0) >> 5) * t + g * n) / 3;
    b = ((u8)((x & 0x7c00) >> 10) * t + b * n) / 3;
    return r | (g << 5) | (b << 10);
}

void Unk_ov142_02294da8::func_ov142_022920b0(u32 t) {
    MIi_CpuCopy16(unk_2d90, unk_2db0, 0x20);
    MIi_CpuCopy16(unk_2dd0, unk_2df0, 0x20);
    unk_2db0[15] = func_ov142_02292154(unk_2d90[15], unk_2d90[8], t);
    unk_2df0[15] = func_ov142_02292154(unk_2dd0[15], unk_2dd0[8], t);
    unk_678[2].func_020b8670((u32)unk_2db0, 4, 3);
    unk_678[3].func_020b8670((u32)unk_2df0, 4, 4);
}

void Unk_ov142_02294da8::func_ov142_0229203c() {
    switch (unk_c2) {
    case 0:
        return;
    case 1:
        if (unk_c1 != 0) {
            unk_c1 = *(volatile u8 *)&unk_c1 - 1;
        } else {
            unk_c2 = 2;
            func_ov142_02293540(unk_bd);
        }
        break;
    case 2:
        if (unk_c1 < 3) {
            unk_c1 = *(volatile u8 *)&unk_c1 + 1;
        } else {
            unk_c2 = 0;
            return;
        }
        break;
    }
    func_ov142_022920b0(unk_c1);
}

BOOL Unk_ov142_02294da8::func_ov142_02292028(u32 m) {
    if (unk_b6 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_02292018(u32 m) { unk_b6 = unk_b6 | m; }

void Unk_ov142_02294da8::func_ov142_02292008(u32 m) { unk_b6 = unk_b6 & ~m; }

extern "C" void *data_ov142_02294cd8[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_022946bcEv, 0};
extern "C" u32 data_ov142_02294d38[8] = {0x804b00eb, 0x000064db, 0x406b80eb, 0x000064df,
                                         0x404b400b, 0x0000655b, 0x006b000b, 0xffff655f};
extern "C" void *data_ov142_02294c78[2] = {(void *)_ZN18Unk_ov142_02294da819func_ov142_02294058Ev, 0};
