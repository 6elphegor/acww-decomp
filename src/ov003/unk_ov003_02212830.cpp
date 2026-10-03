// mwcc-version: 1.2/sp2
#include "types.h"

class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual void vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[0x50 - 0xc];
};

struct Unk_0203389c_Vec {
    s32 x, y, z;
};
typedef Unk_0203389c_Vec Unk_ov003_Vec;

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual void vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_Vec unk_5c;
    /* 0x68 */ Unk_ov003_Vec unk_68;
    /* 0x74 */ u8 pad_74[0x8e - 0x74];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX, except 0x14 (main symbol _ZN14TalkMsgRequest8vfunc_14Ev).
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 pad_04[0x18];
};

class TalkWindowState {
public:
    s32 setSlot(s32 idx, void *p);
    u8 pad_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void onActionTag4();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    void setSpeakerName(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

// ---------------------------------------------------------------- types of the merged unit (old files 02212140 / 02212a5c / 022135c4 / 02213f70)
struct Unk_ov003_02212a5c_V3 {
    s32 x, y, z;
    Unk_ov003_02212a5c_V3() {}
    Unk_ov003_02212a5c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};
typedef Unk_ov003_02212a5c_V3 V3;
typedef Unk_ov003_Vec V3P;

struct Unk_ov003_02212a5c_Bits {
    u16 a : 2;
    u16 b : 2;
    u16 c : 1;
    u16 d : 1;
    u16 e : 1;
    u16 f : 1;
    u16 g : 1;
    u16 h : 1;
    u16 i : 1;
};
typedef Unk_ov003_02212a5c_Bits Unk_ov003_022135c4_Fl;

struct Unk_ov003_022135c4_Q4 {
    s32 x, y, z, w;
};
struct Unk_ov003_022135c4_Blk {
    s64 v[6];
};
struct Unk_ov003_022135c4_Rec {
    s32 x, y, z, w;
};
typedef Unk_ov003_022135c4_Q4 Q4;
typedef Unk_ov003_022135c4_Blk Blk;
typedef Unk_ov003_022135c4_Rec Rec;

struct Unk_ov003_02212f04_Pos {
    s32 v[3];
};
typedef Unk_ov003_02212f04_Pos Pos;

class Unk_ov003_02212830_Ctl {
public:
    u8 pad_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_ov003_02212888_Str {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();
};

// main-module helper classes
class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 pad[0x26];
};

struct Unk_02032238 {
    Unk_02032238();
    ~Unk_02032238();
    u32 pad_00;
    /* 0x04 */ s32 unk_04;
    u32 pad_08[2];
    /* 0x10 */ u8 unk_10;
    u8 pad_11[0x30 - 0x11];
};

class Unk_0203398c {
public:
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0xc];
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};
typedef Unk_0203398c Loc;

class Unk_020e0d08 {
public:
    Unk_020e0d08();
    ~Unk_020e0d08();
    virtual Unk_ov003_Vec *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);

    void *func_02089098();
    void func_02089040();
    s32 func_02088d38(u32 a);

    /* 0x04 */ u8 pad_04[0xc];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 pad_14[4];
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u8 pad_1c[0x3c - 0x1c];
    /* 0x3c */ u8 unk_3c;
};

class Unk_020e0cf4 : public Unk_020e0d08 {
public:
    Unk_020e0cf4();
    ~Unk_020e0cf4();
    virtual Unk_ov003_Vec *vfunc_00();
    virtual u32 vfunc_04();
    s32 func_02088c98(void *o, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ u8 *unk_40;
};

class Unk_ov003_02230c40 : public Unk_020e0cf4 {
public:
    Unk_ov003_02230c40();
    ~Unk_ov003_02230c40();
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    /* 0x44 */ u8 unk_44;
};

struct Unk_ov003_SceneEntry {
    void *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

class Unk_ov003_02230c6c;
typedef Unk_ov003_02230c6c Obj;
typedef void (Unk_ov003_02230c6c::*Unk_02212954_Fn)();
typedef BOOL (Unk_ov003_02230c6c::*Unk_022129d0_Fn)();
typedef void (Unk_ov003_02230c6c::*Fn0)();
typedef BOOL (Unk_ov003_02230c6c::*Fn1)();

class Unk_ov003_02230c6c : public Character, public TalkMsgRequest {
public:
    Unk_ov003_02230c6c();
    virtual ~Unk_ov003_02230c6c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    void func_ov003_02212830();
    BOOL func_ov003_02212860();
    void func_ov003_02212864();
    BOOL func_ov003_02212888();
    void func_ov003_0221294c();
    BOOL func_ov003_02212950();
    void func_ov003_02212954();
    BOOL func_ov003_022129d0(s32 m);
    void func_ov003_02212af4();
    BOOL func_ov003_02212b5c();
    void func_ov003_02212ba8();
    BOOL func_ov003_02212bf4();

    /* 0x130 */ CachedModel unk_130;
    /* 0x1cc */ CachedModel unk_1cc;
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ Unk_02032238 unk_270;
    /* 0x2a0 */ Unk_ov003_02230c40 unk_2a0;
    /* 0x2e8 */ s32 unk_2e8;
    /* 0x2ec */ s32 unk_2ec;
    /* 0x2f0 */ s32 unk_2f0;
    /* 0x2f4 */ Unk_ov003_022135c4_Q4 unk_2f4;
    /* 0x304 */ Unk_ov003_Vec unk_304;
    /* 0x310 */ u8 pad_310[8];
    /* 0x318 */ Unk_ov003_Vec unk_318;
    /* 0x324 */ u8 unk_324[0x365 - 0x324];
    /* 0x365 */ u8 unk_365;
    /* 0x366 */ u8 unk_366;
    /* 0x367 */ u8 pad_367[0x370 - 0x367];
    /* 0x370 */ s32 unk_370;
    /* 0x374 */ Unk_ov003_02212a5c_Bits unk_374;
    /* 0x376 */ u8 pad_376[0x390 - 0x376];
    /* 0x390 */ s16 unk_390;
    /* 0x392 */ u8 pad_392[0x396 - 0x392];
    /* 0x396 */ u16 unk_396;
    /* 0x398 */ s32 unk_398;
    /* 0x39c */ s32 unk_39c;
};

// ov068 classes that own the state functions named in the ptmf tables (their symbols live in ov068)
class Unk_ov068_02267584 : public Unk_ov003_02230c6c {
public:
    void execSnowballCrumble2();
    void enterSnowballCrumble2();
    void execSnowballCrumble();
    void enterSnowballCrumble();
    void execSnowballSettle();
    void enterSnowballSettle();
    void execSnowballStack();
};
class Unk_ov068_022678c4 : public Unk_ov003_02230c6c {
public:
    void enterSnowballStack();
    void execSnowballToSnowman();
    void enterSnowballToSnowman();
    void execSnowballSplash();
    void enterSnowballSplash();
    void execSnowball05();
    void enterSnowball05();
    void execSnowballHole();
    void enterSnowballHole();
    void execSnowballBreak();
    void enterSnowballBreak();
    void execSnowballSink();
    void enterSnowballSink();
    void execSnowballFall();
    void enterSnowballFall();
};
class Unk_ov068_02268214 : public Unk_ov003_02230c6c {
public:
    void execSnowballRoll();
    void enterSnowballRoll();
};

extern "C" {
extern void *gSceneBlockMap;
extern void *gCamera;
extern u8 gCameraLookAt[];
extern s32 data_020c8cbc;
extern u32 gFrameCounter;
extern s32 data_020d0584[4];
extern u8 data_021ed2e6[];
extern s16 data_02135f44[];
extern void *gBgHeap;
extern const s16 data_ov003_0222efb8[16];
// 0x0222efba is the table's second element: no separate symbol once this unit is linked
#define data_ov003_0222efba (&data_ov003_0222efb8[1])

s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 VEC_Mag(void *v);
void func_01ffd070(void *out, void *a, void *b);
void MTX_Concat43(void *a, void *b, void *out);
s32 func_020e9650(void *a, void *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9960(void *out, void *a, void *b);
s32 func_020e7820(void *p, s32 a, s32 b, s32 c);
s32 func_020e9688(void *v);
s32 func_020e7754(s16 *p, s32 a, s32 b, s32 c);
void func_020e9888(void *v, s32 ang);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 a);
s32 WorldCurve_ToCurved(void *out, void *in);
void func_02099218(void *a, void *b, void *out);
void func_02099300(void *a, void *out);
void func_020993dc(void *a);
void func_020309d4(void *self, void *a, void *b, s32 c, s32 d, void *o, s32 k);
void func_02003e70(void *p, u32 a, u32 b, u32 c);
s32 Snd_SeEmitterPlayHeld(void *p, u32 a, u32 b, u32 c);
void func_020abc10(void *p, s32 a, s32 b, s32 c);
void *func_02095204(u32 a);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
BOOL Item_IsNormalItem(u16 *p);
void func_02039e6c(u16 v);
void FieldPos_ToUnit(s32 *out1, s32 *out2, void *p);
BOOL BlockMap_SetItemAtUnit(void *self, u16 *p, s32 x, s32 y, u32 flag);
u16 *BlockMap_GetItemPtr(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
s32 FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
u16 Item_MakeSnowman(void *p);
s32 Item_IsSnowman(u16 *c);
s32 func_02063b8c(s32 a);
s32 func_020307c4(s32 x, s32 y, s32 *a, s32 *b, s32 *c);
s32 func_02031284(s32 x, s32 y);
s32 func_02031218(s32 x, s32 y);
BOOL Item_IsMarker(void *p);
s32 func_020b5184();
Rec *func_020af3f4();
void String_Load(void *a, void *b, const char *c);
BOOL TalkRequest_EndTalkWith(void *p);
void TalkRequest_AddPlayerTalk6(void *self, s32 a);
void *Heap_Alloc(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void func_020f43fc(void *p);
void func_020f440c(void *p);

void _ZN9Character13func_0203e47cEi(void *self, TalkMsgRequest *sec);
void _ZN9Character13func_0203e488Ei(void *self, TalkMsgRequest *sec);
void _ZN12MsgString256C1Ev(void *self);
void _ZN12MsgString256D1Ev(void *self);
void _ZN12Unk_020af53c13func_020af53cEj(void *self, u32 a);
s32 _ZN12Unk_020af53c13func_020af590EjPjS0_S0_PhS1_S1_(void *self, u32 m, s32 *a, s32 *b, s32 *c, s32 z1, s32 z2, s32 z3);
void _ZN5Model10drawScaledEPi(void *self, void *v);
void _ZN11CachedModel10loadCachedEPvS0_(void *self, u32 a, const char *b);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *self, void *v);
void _ZN12Unk_02003c3013func_02003e50Ev(void *self);
void _ZN12Unk_02003c3013func_02003eccEv(void *self);

BOOL func_ov003_02212d28(Obj *o, s32 st);
BOOL func_ov003_02213290(Obj *o);
BOOL func_ov003_02213278(Obj *o);
BOOL func_ov003_02213254(Obj *o);
BOOL func_ov003_0221322c(Obj *o);
BOOL func_ov003_02213058(Pos *p);
BOOL func_ov003_02212fd4(void *a, Pos *p, u16 *out);
BOOL func_ov003_02212f04(void *a, void *pos, u16 *out);
BOOL func_ov003_02212e50(u16 *q);
void func_ov003_0222ebdc(Obj *o);
s32 func_ov003_0222ec00(Obj *o);
BOOL func_ov003_022132a0(Obj *o);
void func_ov003_0221316c(Obj *o);
void func_ov003_02212c10(Obj *o);
void func_ov003_02213960(Obj *o);
s32 func_ov003_0221363c(Obj *o);
void func_ov003_02213a30(Obj *o, s32 a, s32 b);
s32 func_ov003_022135c4(Obj *o, s32 a);
}
static inline void *Unk_ov003_02213058_Cell(void *g, s32 x, s32 y) {
    s32 hx = x >> 4;
    s32 hy = y >> 4;
    return BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
}

typedef void (Obj::*Fn0)();
typedef BOOL (Obj::*Fn1)();

struct Unk_ov003_02213278_Pad {
    s32 v[1];
    Unk_ov003_02213278_Pad() {}
    ~Unk_ov003_02213278_Pad() {}
};

struct Unk_ov003_022132b4_Tgt {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

extern "C" void func_ov003_02214168() {
    new Unk_ov003_02230c6c;
}

// ================================================================
// class Unk_ov003_02230c6c
Unk_ov003_02230c40::Unk_ov003_02230c40() {
    unk_44 = 0;
}

Unk_ov003_02230c40::~Unk_ov003_02230c40() {
    unk_44 = 0;
}

// ================================================================
// class Unk_ov003_02230c40
void Unk_ov003_02230c40::vfunc_08(u32 a, u32 b, u32 c) {
    if (c & 4) {
        unk_44 = 1;
    }
}

Unk_ov003_02230c6c::Unk_ov003_02230c6c() {
    func_020f440c(unk_324);
    unk_396 = 0xfff1;
}

Unk_ov003_02230c6c::~Unk_ov003_02230c6c() {
    func_020f43fc(unk_324);
}

extern "C" s32 func_ov003_02213fbc() { return 0x800; }

extern "C" s32 func_ov003_02213fb4() { return 0x1400; }

void *Unk_ov003_02230c6c::operator new(unsigned long size) {
    void *p = Heap_Alloc(gBgHeap, size);
    func_0212899c(p, 0, size);
    return p;
}

void Unk_ov003_02230c6c::operator delete(void *p) {
    void *h = gBgHeap;
    if (h) {
        Heap_Free(h, p);
    }
}

BOOL Unk_ov003_02230c6c::vfunc_00() {
    u32 k = 0xfff1;
    unk_396 = k;
    unk_2f4.x = data_020d0584[0];
    unk_2f4.y = data_020d0584[1];
    unk_2f4.z = data_020d0584[2];
    unk_2f4.w = data_020d0584[3];
    _ZN11CachedModel10loadCachedEPvS0_(&unk_130, 0x534e5730, "/snowman/snowball1.nsbmd");
    _ZN11CachedModel10loadCachedEPvS0_(&unk_1cc, 0x534e5731, "/snowman/snow_face.nsbmd");
    if (func_ov003_02213290(this) != 0) {
        u32 i = unk_08 & 1;
        Rec *r = func_020af3f4();
        unk_268 = r[i & 1].w;
        i = unk_08 & 1;
        r = func_020af3f4();
        r[i & 1].x = unk_5c.x;
        r[i & 1].y = unk_5c.y;
        r[i & 1].z = unk_5c.z;
        s32 sv = unk_268;
        i = unk_08 & 1;
        r = func_020af3f4();
        r[i & 1].w = sv;
    }
    setCharId((u16)unk_08);
    func_ov003_022129d0(0);
    func_ov003_0221316c(this);
    unk_68.x = unk_5c.x;
    unk_68.y = unk_5c.y;
    unk_68.z = unk_5c.z;
    V3P *pv = &unk_68;
    unk_318.x = unk_68.x;
    unk_318.y = pv->y;
    unk_318.z = pv->z;
    func_020309d4(&unk_270, &unk_5c, &unk_68, 0, unk_26c, this, 0xb);
    unk_68.x = unk_5c.x;
    unk_68.y = unk_5c.y;
    unk_68.z = unk_5c.z;
    pv = &unk_68;
    unk_318.x = unk_68.x;
    unk_318.y = pv->y;
    unk_318.z = pv->z;
    unk_365 = unk_270.unk_10;
    func_ov003_02213a30(this, 0, 0);
    _ZN12Unk_02003c3013func_02003eccEv(unk_324);
    func_0203e42c();
    func_ov003_0222ec00(this);
}

BOOL Unk_ov003_02230c6c::onExecute() {
    s32 t = FX_Div(0xa000, 0x64000);
    if (unk_374.e == 0) unk_370 = t;
    unk_68.x = unk_318.x;
    unk_68.y = unk_318.y;
    unk_68.z = unk_318.z;
    func_ov003_02213960(this);
    func_ov003_02212c10(this);
    func_ov003_02212954();
    func_ov003_0221363c(this);
    Unk_ov003_022135c4_Fl *fl = &unk_374;
    fl->f = fl->e;
    fl->e = 0;
    fl->h = 0;
    fl->i = 0;
    unk_2a0.unk_44 = 0;
    unk_68.x = unk_5c.x;
    unk_68.y = unk_5c.y;
    unk_68.z = unk_5c.z;
    V3P *pv = &unk_68;
    unk_318.x = unk_68.x;
    unk_318.y = pv->y;
    unk_318.z = pv->z;
    V3P sp = unk_5c;
    _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(unk_324, &sp);
    return TRUE;
}

BOOL Unk_ov003_02230c6c::onDraw() {
    if (gCamera != 0) {
        if (func_020e9650(gCameraLookAt, &unk_5c) <= data_020c8cbc) {
            s32 s = FX_Div(unk_268, 0x1000);
            V3P v;
            v.x = s;
            v.y = s;
            v.z = s;
            if (unk_398 == 0xb) {
                _ZN5Model10drawScaledEPi(&unk_1cc, &v);
            } else {
                _ZN5Model10drawScaledEPi(&unk_130, &v);
            }
            func_020abc10(&unk_5c, unk_268, 0x4000, 0x1000);
        }
    }
    return TRUE;
}

BOOL Unk_ov003_02230c6c::vfunc_0c() {
    if (unk_398 == 9) {
        void *g = gSceneBlockMap;
        volatile s32 x, y;
        FieldPos_ToUnit((s32 *)&x, (s32 *)&y, &unk_5c);
        s32 lx = x;
        s32 ly = y;
        s32 hx = lx >> 4;
        s32 hy = ly >> 4;
        u16 *c = BlockMap_GetItemPtr(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
        if (c != 0 && Item_IsSnowman(c) != 0) {
            u16 v = 0xfff1;
            BlockMap_SetItemAtUnit(g, &v, x, y, 0);
        }
        if (func_ov003_02212fd4((void *)unk_374.a, (Pos *)&unk_5c, &unk_396) == 0) {
            if (func_ov003_02212f04((void *)unk_374.a, &unk_5c, &unk_396) == 0) {
                _ZN12Unk_020af53c13func_020af53cEj(data_021ed2e6, unk_374.a);
            }
        }
        func_ov003_02212e50(&unk_396);
    }
    if (unk_39c == 0 && unk_398 == 0) {
        u32 i = unk_08 & 1;
        Rec *r = func_020af3f4();
        r[i & 1].x = unk_5c.x;
        r[i & 1].y = unk_5c.y;
        r[i & 1].z = unk_5c.z;
        s32 sv = unk_268;
        i = unk_08 & 1;
        r = func_020af3f4();
        r[i & 1].w = sv;
    }
    _ZN12Unk_02003c3013func_02003e50Ev(unk_324);
    func_ov003_0222ebdc(this);
}

extern "C" void func_ov003_02213a30(Obj *o, s32 a, s32 b)
{
    V3P v1;
    Q4 q;
    V3P pv;
    V3P ex;
    Blk m;
    Blk m2;
    if (a != 0) {
        s32 t = ((u16)b >> 4) * 2;
        v1.x = data_02135f44[t + 1];
        v1.y = 0;
        v1.z = -data_02135f44[t];
        s32 u = ((s32)((u32)(a << 15) >> 16) >> 4) * 2;
        func_020e9888(&v1, data_02135f44[u]);
        q.x = v1.x;
        q.y = v1.y;
        q.z = v1.z;
        q.w = data_02135f44[u + 1];
        func_02099218(&q, &o->unk_2f4, &o->unk_2f4);
        if ((gFrameCounter & 7) == o->unk_08) {
            func_020993dc(&o->unk_2f4);
        }
    }
    func_01ffd070(&ex, &o->unk_5c, &o->unk_304);
    ex.y = ex.y + o->unk_268;
    ex.y = ex.y - 0x400;
    s32 ang = WorldCurve_ToCurved(&pv, &ex);
    func_020e8388(&m, pv.x, pv.y, pv.z);
    func_020e8434(&m, ang);
    func_02099300(&o->unk_2f4, &m2);
    MTX_Concat43(&m2, &m, &m);
    *(Blk *)((u8 *)o + 0x194) = m;
    *(Blk *)((u8 *)o + 0x230) = m;
}

extern "C" void func_ov003_02213960(Obj *o)
{
    if (o->unk_2a0.unk_3c != 0) {
        if (o->unk_374.h == 0) {
            o->unk_5c.x = o->unk_5c.x + o->unk_2a0.unk_10;
            o->unk_5c.z = o->unk_5c.z + o->unk_2a0.unk_18;
        }
        if (o->unk_2a0.func_02088d38(4) != 0 && o->unk_268 < 0xa00) {
            if (o->unk_366 == 0) {
                func_02003e70(o->unk_324, 0x81c, 0x7f, 0);
            }
            o->unk_366 = 1;
        } else {
            o->unk_366 = 0;
        }
    } else {
        o->unk_366 = 0;
    }
    o->unk_2e8 = (func_01ffcb0c(FX_Div(o->unk_268 - 0x800, 0xc00), 0x10cd) + 0xdec) << 2;
}

extern "C" s32 func_ov003_0221363c(Obj *o)
{
    s32 kind = o->unk_374.c != 0 ? 0xb : 0;
    Loc loc;
    V3P d;
    s32 yaw;
    if (o->unk_39c == 0 && o->unk_398 == 0) {
        o->unk_5c.y -= 0x200;
    }
    func_020309d4(&o->unk_270, &o->unk_5c, &o->unk_68, 0, o->unk_26c, o, kind);
    u32 cur = o->unk_270.unk_10;
    if (cur > o->unk_365 && o->unk_39c == 0 && o->unk_398 == 0) {
        func_02003e70(o->unk_324, 0x81d, 0x7f, 0);
    }
    o->unk_365 = cur;
    u32 fa = 0x20;
    if (o->unk_374.d != 0) fa |= 2;
    u32 fb = 0x12;
    u8 id = o->unk_08;
    if (o->unk_398 == 0xb) fb = 0x11;
    s32 s = FX_Div(0x41000, 0x64000);
    s32 t = o->unk_268;
    if (t < 0xa00) {
        s = 0x1000;
    } else if (t < 0xe00) {
        s = FX_Div((0x64 - ((FX_Div(t - 0xa00, 0x400) * 0x23) >> 12)) << 12, 0x64000);
    }
    s32 t2 = o->unk_268;
    s32 r2 = func_01ffcb0c(t2, s);
    o->unk_2a0.func_02088c98(o, r2, t2 * 2, fa, 0x2fc, fb, id, o->unk_2e8);
    o->unk_2a0.func_02089040();
    func_020e9960(&d, &o->unk_5c, &o->unk_68);
    s32 len = VEC_Mag(&d);
    s32 ang = (s16)((FX_Div(len, func_01ffcb0c(0x323d, o->unk_268)) >> 1) << 4);
    yaw = func_020e7b98(d.x, d.z);
    if (func_ov003_022132a0(o)) {
        s32 n = VEC_Mag(&d);
        if (n == 0) {
            o->unk_2ec = 0;
            o->unk_2f0 = 0;
        } else {
            s32 v;
            s32 m = 0;
            s32 w = o->unk_39c;
            if (w == 0 && o->unk_398 == 1) m = 1;
            if (m) {
                v = n - FX_Div(0x2000, 0xa5000);
            } else if (w == 0 && o->unk_398 == 5) {
                v = n - 0x155;
            } else {
                s32 q = o->unk_270.unk_04;
                if (q & 1) {
                    if (o->unk_374.e != 0) {
                        v = n - 0x155;
                    } else {
                        v = n - 0x28;
                    }
                } else if (q & 2) {
                    v = n - 0xaa;
                } else {
                    v = n - FX_Div(0x2000, 0xa0000);
                }
            }
            if (v < 0) v = 0;
            if (v > 0x400) v = 0x400;
            n = FX_Div(v, n);
            o->unk_2ec = func_01ffcb0c(d.x, n);
            o->unk_2f0 = func_01ffcb0c(d.z, n);
        }
    } else {
        o->unk_2ec = 0;
        o->unk_2f0 = 0;
    }
    loc.func_020339bc(&o->unk_5c, 0, 0);
    if (loc.unk_34 == 3) {
        if (o->unk_374.i == 0) {
            o->unk_268 = func_01ffcb0c(o->unk_268, (len >> 7) + 0x1000);
            if (o->unk_268 > 0x1400) o->unk_268 = 0x1400;
        }
    } else {
        s32 m = 0;
        s32 w = o->unk_39c;
        if (w == 0 && o->unk_398 == 2) m = 1;
        if (!m) {
            if (w == 0 && o->unk_398 == 6) {
            } else {
                o->unk_268 = func_01ffcb0c(o->unk_268, 0x1000 - (len >> 9));
                if (o->unk_268 < 0x800) o->unk_268 = 0x800;
            }
        }
    }
    func_ov003_02213a30(o, ang, yaw);
}

extern "C" BOOL func_ov003_022135f0(Obj *o, V3P *v)
{
    if (o->unk_374.i == 0 && o->unk_374.e == 0 && o->unk_2a0.unk_44 == 0) {
        o->unk_5c.x = v->x;
        o->unk_5c.y = v->y;
        o->unk_5c.z = v->z;
        o->unk_374.i = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov003_022135e4(Obj *o)
{
    return o->unk_268;
}

extern "C" s32 func_ov003_022135c4(Obj *o, s32 a)
{
    if (o->unk_398 < 7) {
        return func_ov003_02212d28(o, 3);
    }
    return 0;
}

extern "C" BOOL func_ov003_022132b4(Obj *o, V3 *outPos, u16 *outAng, s32 *outVal, s32 speed, s32 ang) {
    Unk_ov003_022132b4_Tgt *p;
    s32 v0c, v10, v14;
    s16 h[2];
    V3 pv[3];
    s32 ox, oz;
    s32 dist;
    ang = ang;
    p = (Unk_ov003_022132b4_Tgt *)func_02095204(4);
    if (!func_020b5184()) return FALSE;
    if (!p) return FALSE;
    if (o->unk_39c != 0 || o->unk_398 != 0) return FALSE;
    if (o->unk_268 < 0xa00) return FALSE;
    if (speed > 0xc32) speed = 0xc32;
    if (o->unk_2a0.unk_3c != 0) {
        o->unk_5c.x += o->unk_2a0.unk_10;
        o->unk_5c.z += o->unk_2a0.unk_18;
        o->unk_374.h = 1;
    }
    h[0] = ang;
    if (o->unk_374.f) {
        h[0] = o->unk_390;
        func_020e7754(&h[0], ang, 5, 0x2000);
    }
    ox = o->unk_2ec;
    oz = o->unk_2f0;
    if (!o->unk_374.f) {
        o->unk_2ec = ox >> 4;
        o->unk_2f0 >>= 4;
    }
    v0c = func_01ffcb0c(func_01ffcb0c(speed, 0x1b6), o->unk_370);
    v10 = func_01ffcb0c(v0c, data_02135f44[((u16)h[0] >> 4) * 2]);
    v14 = func_01ffcb0c(v0c, data_02135f44[((u16)h[0] >> 4) * 2 + 1]);
    o->unk_2ec += v10;
    o->unk_2f0 += v14;
    o->unk_5c.x += o->unk_2ec;
    o->unk_5c.z += o->unk_2f0;
    h[1] = p->unk_8e;
    func_020e7754(&h[1], ang, 8, 0x2000);
    V3 *q = &p->unk_5c;
    pv[0].x = p->unk_5c.x;
    pv[0].y = q->y;
    pv[0].z = q->z;
    pv[1].x = pv[0].x + v10;
    pv[1].y = pv[0].y;
    pv[1].z = pv[0].z + v14;
    dist = func_020e7b98(o->unk_5c.x - pv[1].x, o->unk_5c.z - pv[1].z);
    if ((u32)func_020e9650(&o->unk_68, &pv[1]) > (u32)(o->unk_268 + 0x1000)) {
        o->unk_5c.x -= o->unk_2ec;
        o->unk_5c.z -= o->unk_2f0;
        o->unk_2ec = ox;
        o->unk_2f0 = oz;
        return FALSE;
    }
    s32 r0v = (s16)func_020e780c(dist, ang);
    s32 lim = o->unk_374.f ? 0x471c : 0x1000;
    if (r0v > (s16)lim) {
        o->unk_5c.x -= o->unk_2ec;
        o->unk_5c.z -= o->unk_2f0;
        o->unk_2ec = ox;
        o->unk_2f0 = oz;
        return FALSE;
    }
    if ((s16)func_020e780c(h[1], h[0]) > 0x471c) {
        o->unk_5c.x -= o->unk_2ec;
        o->unk_5c.z -= o->unk_2f0;
        o->unk_2ec = ox;
        o->unk_2f0 = oz;
        return FALSE;
    }
    func_020e9960(&pv[2], &o->unk_5c, &pv[1]);
    *outAng = func_020e7b98(pv[2].x, pv[2].z);
    outPos->x = pv[1].x;
    outPos->y = pv[1].y;
    outPos->z = pv[1].z;
    o->unk_374.e = 1;
    o->unk_390 = h[0];
    Snd_SeEmitterPlayHeld(o->unk_324, 0x820, 0x7f, 0);
    {
        s32 t = FX_Div(o->unk_268 - 0xa00, 0xa00);
        s32 r = func_01ffcb0c(0xc00, 0x1000 - t) + 0x200;
        func_020e7820(&o->unk_370, 0x1000, r, 0x1000);
    }
    V3 d(o->unk_2ec, 0, o->unk_2f0);
    *outVal = func_020e9688(&d) >> 1;
    return TRUE;
}

extern "C" BOOL func_ov003_022132a0(Obj *o) {
    if (o->unk_398 < 7) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov003_02213290(Obj *o) {
    if (o->unk_08 < 2) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov003_02213278(Obj *o) {
    Unk_ov003_02213278_Pad pad;
    if (!func_ov003_02213290(o)) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov003_02213254(Obj *o) {
    if (func_ov003_02213278(o)) {
        if ((o->unk_08 - 2) & 1) return FALSE;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_0221322c(Obj *o) {
    if (func_ov003_02213278(o)) {
        if (!func_ov003_02213254(o)) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" void func_ov003_0221316c(Obj *o) {
    s32 s10, s14, s18;
    s32 r;
    if (func_ov003_02213290(o)) {
        func_ov003_02212d28(o, 0);
    } else {
        r = func_ov003_0221322c(o);
        o->unk_374.a = (o->unk_08 - 2) >> 1;
        if (_ZN12Unk_020af53c13func_020af590EjPjS0_S0_PhS1_S1_(data_021ed2e6, o->unk_374.a, &s10, &s14, &s18, 0, 0, 0)) {
            o->unk_374.b = (u16)s18;
            if (r) {
                o->unk_268 = s14;
                func_ov003_02212d28(o, 9);
            } else {
                o->unk_268 = s10;
                o->unk_5c.y = s14 * 2 - (s14 >> 3) - (s10 >> 3) - 0x400;
                func_ov003_02212d28(o, 11);
            }
        }
    }
}

extern "C" BOOL func_ov003_02213058(Pos *pos) {
    void *g = gSceneBlockMap;
    if (g) {
        s32 px0, py0;
        s32 s18, s1c, s20;
        s32 x, y;
        s32 hx, hy, lx, ly;
        s32 t, r;
        s32 i, j;
        void *a;
        void *c;
        px0 = -1;
        py0 = -1;
        a = func_02095204(4);
        if (a) FieldPos_ToUnit(&px0, &py0, (u8 *)a + 0x5c);
        FieldPos_ToUnit(&x, &y, pos);
        lx = *(volatile s32 *)&x;
        ly = *(volatile s32 *)&y;
        hx = lx >> 4;
        hy = ly >> 4;
        c = BlockMap_GetItemPtr(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
        if (c) {
            if (Item_IsMarker(c)) return FALSE;
        }
        t = func_020307c4(x, y, &s18, &s1c, &s20);
        if (x != px0 || y != py0) {
            if (func_02031284(x, y)) {
                if (t == 0 || (t != 0 && s20 == 2)) {
                    r = func_02031218(x, y);
                    switch (r) {
                    case 0:
                    case 1:
                        for (i = -1; i <= 1; i++) {
                            for (j = -1; j <= 1; j++) {
                                s32 py, px, u;
                                if (i == 0 && j == 0) continue;
                                py = y + j;
                                px = x + i;
                                u = func_020307c4(px, py, &s18, &s1c, &s20);
                                if (func_02031284(px, py) && (u == 0 || s20 == 2)) continue;
                                return FALSE;
                            }
                        }
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212fd4(void *a, Pos *pos, u16 *out) {
    *out = 0xfff1;
    if (func_ov003_02213058(pos)) {
        void *g = gSceneBlockMap;
        if (g) {
            u16 t;
            s32 x, y;
            s32 hx, hy, lx, ly;
            u16 *c;
            t = Item_MakeSnowman(a);
            FieldPos_ToUnit(&x, &y, pos);
            lx = *(volatile s32 *)&x;
            ly = *(volatile s32 *)&y;
            hx = lx >> 4;
            hy = ly >> 4;
            c = (u16 *)BlockMap_GetItemPtr(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
            if (c) *out = *c;
            if (BlockMap_SetItemAtUnit(g, &t, x, y, 0)) return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212f04(void *a, void *pos, u16 *out) {
    void *g = gSceneBlockMap;
    if (g) {
        volatile u16 t[1];
        s32 x, y;
        Pos p;
        Pos q;
        u8 mask;
        s32 n;
        s32 k;
        u32 LampLights;
        s32 C;
        s32 j;
        t[0] = Item_MakeSnowman(a);
        FieldPos_ToUnit(&x, &y, pos);
        mask = 0;
        n = 0;
        for (LampLights = 0; LampLights < 8; LampLights++) {
            const s16 *e = &data_ov003_0222efb8[LampLights * 2];
            FieldPos_FromUnitCenter(&p, x + data_ov003_0222efb8[LampLights * 2], y + e[1]);
            if (func_ov003_02213058(&p)) {
                mask |= 1 << LampLights;
                n++;
            }
        }
        if (n != 0) {
            k = func_02063b8c(n);
            C = 0;
            j = 0;
            for (; (u32)j < 8; j++) {
                if ((mask >> j) & 1) {
                    if (C == k) {
                        FieldPos_FromUnitCenter(&q, x + data_ov003_0222efb8[j * 2], y + data_ov003_0222efba[j * 2]);
                        if (func_ov003_02212fd4(a, &q, out)) return TRUE;
                        return FALSE;
                    }
                    C++;
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212ebc(void *p) {
    void *g = gSceneBlockMap;
    if (g) {
        s32 x, y;
        u16 t;
        FieldPos_ToUnit(&x, &y, p);
        t = 0xfff1;
        if (BlockMap_SetItemAtUnit(g, &t, x, y, 0)) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212e50(u16 *p) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        u16 t = 0xfff1;
        ok = Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t) ? TRUE : FALSE;
    } else {
        ok = *p == 0xfff1 ? TRUE : FALSE;
    }
    if (!ok) {
        if (Item_IsNormalItem(p) || Item_IsFurniture(p)) {
            func_02039e6c(*p);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" Unk_ov003_SceneEntry data_ov003_02230c4c = {(void *(*)())func_ov003_02214168, 0xbd, 0x10, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" const s16 data_ov003_0222efb8[16] = {-1, -1, 0, -1, 0, -1, -1, 0, 1, 0, -1, 1, 0, 1, 1, 1};

extern "C" BOOL func_ov003_02212d28(Obj *o, s32 st) {
    static Fn1 tbl[14] = {
        (Fn1)&Unk_ov068_02268214::enterSnowballRoll, (Fn1)&Unk_ov068_022678c4::enterSnowballFall, (Fn1)&Unk_ov068_022678c4::enterSnowballSink, (Fn1)&Unk_ov068_022678c4::enterSnowballBreak,
        (Fn1)&Unk_ov068_022678c4::enterSnowballHole, (Fn1)&Unk_ov068_022678c4::enterSnowball05, (Fn1)&Unk_ov068_022678c4::enterSnowballSplash, (Fn1)&Unk_ov068_022678c4::enterSnowballToSnowman,
        (Fn1)&Unk_ov068_022678c4::enterSnowballStack, (Fn1)&Obj::func_ov003_02212bf4, (Fn1)&Unk_ov068_02267584::enterSnowballSettle, (Fn1)&Obj::func_ov003_02212b5c,
        (Fn1)&Unk_ov068_02267584::enterSnowballCrumble, (Fn1)&Unk_ov068_02267584::enterSnowballCrumble2};
    if (st < 0xe) {
        if ((o->*tbl[st])()) {
            o->unk_398 = st;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_ov003_02212c10(Obj *o) {
    static Fn0 tbl[14] = {
        (Fn0)&Unk_ov068_02268214::execSnowballRoll, (Fn0)&Unk_ov068_022678c4::execSnowballFall, (Fn0)&Unk_ov068_022678c4::execSnowballSink, (Fn0)&Unk_ov068_022678c4::execSnowballBreak,
        (Fn0)&Unk_ov068_022678c4::execSnowballHole, (Fn0)&Unk_ov068_022678c4::execSnowball05, (Fn0)&Unk_ov068_022678c4::execSnowballSplash, (Fn0)&Unk_ov068_022678c4::execSnowballToSnowman,
        (Fn0)&Unk_ov068_02267584::execSnowballStack, (Fn0)&Obj::func_ov003_02212ba8, (Fn0)&Unk_ov068_02267584::execSnowballSettle, (Fn0)&Obj::func_ov003_02212af4,
        (Fn0)&Unk_ov068_02267584::execSnowballCrumble, (Fn0)&Unk_ov068_02267584::execSnowballCrumble2};
    if (o->unk_398 < 0xe) (o->*tbl[o->unk_398])();
}

BOOL Unk_ov003_02230c6c::func_ov003_02212bf4() {
    unk_374.c = 0;
    unk_374.d = 1;
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_02212ba8() {
    unk_26c = unk_268;
    if (unk_2a0.unk_3c != 0) {
        u8 *p = (u8 *)unk_2a0.func_02089098();
        if (p) {
            if (*(s32 *)(p + 0x98) > 0x666) {
                func_ov003_022135c4(this, 1);
            }
        }
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_02212b5c() {
    s32 *d = data_020d0584;
    unk_374.c = 0;
    unk_374.d = 1;
    unk_2f4.x = d[0];
    unk_2f4.y = d[1];
    unk_2f4.z = d[2];
    unk_2f4.w = d[3];
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_02212af4() {
    unk_26c = unk_268;
    if (unk_2a0.unk_3c != 0) {
        u8 *p = (u8 *)unk_2a0.func_02089098();
        if (p) {
            if (*(s32 *)(p + 0x98) > 0x666) {
                func_ov003_022135c4(this, 1);
                return;
            }
        }
    }
    if (unk_374.g) TalkRequest_AddPlayerTalk6(this, 0);
}

BOOL Unk_ov003_02230c6c::vfunc_48(void *a) {
    s32 lim;
    BOOL r;
    func_0203e42c();
    lim = func_01ffcb0c(0x2000, FX_Div(0x7d000, 0x64000));
    if (a) {
        if (func_020e9650((u8 *)a + 0x5c, (u8 *)this + 0x5c) < lim) {
            if (unk_398 == 11) return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov003_02230c6c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov003_022129d0(1);
        break;
    case 1:
        func_ov003_022129d0(1);
        unk_374.g = 0;
        break;
    case 8:
        func_ov003_022129d0(0);
        break;
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_022129d0(s32 m) {
    static Unk_022129d0_Fn tbl[3] = { (Unk_022129d0_Fn)&Unk_ov003_02230c6c::func_ov003_02212950, (Unk_022129d0_Fn)&Unk_ov003_02230c6c::func_ov003_02212888, (Unk_022129d0_Fn)&Unk_ov003_02230c6c::func_ov003_02212860 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_39c = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov003_02230c6c::func_ov003_02212954() {
    static Unk_02212954_Fn tbl[3] = { &Unk_ov003_02230c6c::func_ov003_0221294c, &Unk_ov003_02230c6c::func_ov003_02212864, &Unk_ov003_02230c6c::func_ov003_02212830 };
    if (unk_39c < 3) {
        (this->*tbl[unk_39c])();
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_02212950() {
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_0221294c() {}

BOOL Unk_ov003_02230c6c::func_ov003_02212888() {
    _ZN9Character13func_0203e488Ei(this, this);
    s32 r;
    if (unk_374.g) {
        r = (unk_374.b & 3) * 3 + func_02063b8c(3);
    } else {
        r = (unk_374.b & 3) * 3 + 12 + func_02063b8c(3);
    }
    setFileName("sp_npc_snowman");
    unk_1e = r;
    ((Unk_ov003_02212830_Ctl *)unk_3c)->unk_08 = 1;
    u8 c = 0x26;
    u32 buf[0x46];
    _ZN12MsgString256C1Ev(buf);
    String_Load(buf, &c, "st_spnpc_name");
    static_cast<TalkMsgRequest &>(*this).setSpeakerName((u8 *)((Unk_ov003_02212888_Str *)buf)->vfunc_0c(), 0);
    unk_374.g = 0;
    _ZN12MsgString256D1Ev(buf);
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_02212864() {
    if (unk_3c) {
        if (((Unk_ov003_02212830_Ctl *)unk_3c)->unk_04) {
            func_ov003_022129d0(2);
        }
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_02212860() {
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_02212830() {
    if (unk_3c) {
        if (((Unk_ov003_02212830_Ctl *)unk_3c)->unk_04 == 0) {
            _ZN9Character13func_0203e47cEi(this, this);
            TalkRequest_EndTalkWith(this);
        }
    }
}

// ================================================================
