// mwcc-version: 1.2/sp2
// ov003 TU10 (actor 022318e8): .text 0x02215c74-0x02216430
#include "types.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 Unk_ov009_0225e29c).
// Written by the agent that owns ov003 TU06/07/09/10/11/12 (all 1.2/sp2).  Paste unchanged after `#include "types.h"`
// (do NOT include GameProc.h: the chain below is an own copy whose slot names are the real symbol names).
//
// Vtable of every actor (original vtable symbol minus 8 bytes, 0x150 bytes):
//   primary slots 0x00..0xb8 (0xbc bytes), then 8 bytes secondary header, then the secondary vtable of TalkMsgRequest
//   (D1, D0, 08..74).  Primary slot -> symbol:
//     00 ov009::vfunc_00      04 Character::vfunc_04   08 Character::postCreate(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Actor::vfunc_14   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Actor::postDraw   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Character*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Character   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: func_ov009_0225b884 /
//     func_ov009_0225b880, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN18Unk_ov009_0225e29c10preExecuteEv           -> _ZN18Unk_ov009_0225e29c10preExecuteEv        (0x0225db04)
//   ov009  _ZN18Unk_ov009_0225e29c7preDrawEj           -> _ZN18Unk_ov009_0225e29c8vfunc_20Ej        (0x0225da90)
//   ov009  _ZN18Unk_ov009_0225e29c7preDrawEv           -> _ZN18Unk_ov009_0225e29c7preDrawEv        (0x0225d9e4)
//   ov009  func_ov009_0225b884                           -> _ZN18Unk_ov009_0225e29c8vfunc_b4Ev        (0x0225b884)
//   ov009  func_ov009_0225b880                           -> _ZN18Unk_ov009_0225e29c8vfunc_b8Ev        (0x0225b880)
//   main   TalkMsgRequest slots, one label each (the unit names them vfunc_sXX so that overrides in the primary chain
//          cannot override them): _ZN14TalkMsgRequest9vfunc_sXXEv for XX = 08 0c 10 18 1c 20 24 28 2c 30 34 3c 40 44 48 4c 50 54 58
//          5c 60 64 68 6c 70 74 (existing name _ZN14TalkMsgRequest8vfunc_XXEv) and _ZN14TalkMsgRequest9vfunc_s38Ej (existing
//          _ZN14TalkMsgRequest8vfunc_38Ej).
//   ov003  0x0221445c is _ZThn236_N18Unk_ov009_0225e29c8vfunc_88Ev, the thunk of ov009::vfunc_88 in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot vfunc_88, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
//          (No alias: the old label _ZN14TalkMsgRequest9vfunc_s14Ev is gone.)
// Notes:
//  * The ctor of a derived class calls Unk_ov009_0225e29c::Unk_ov009_0225e29c() (ov009 symbol C2 0x0225deec).
//  * Names a derived class must not reuse for its own members: unk_130 .. unk_2a4 below.

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
    virtual void vfunc_20(u32 a);
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

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov003_Vec {
    s32 x, y, z;
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14 (vfunc_88).
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct TalkWindowState {
    u8 pad_00[0x14];
    s32 unk_14;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    // Slot 0x14 has the name of Unk_ov009_0225e29c::vfunc_88, which overrides it: the vtable then names the shared
    // thunk _ZThn236_N18Unk_ov009_0225e29c8vfunc_88Ev (0x0221445c).  The compiler also emits a link-once copy of the
    // thunk in this unit; the linker keeps the first one (unk_ov003_022141bc.cpp) and drops this one.
    virtual void vfunc_88();
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

struct Unk_ov003_Blk {
    s64 v[6];
};

struct Unk_ov003_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class Unk_ov009_0225e29c : public Character, public TalkMsgRequest {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d6b8(u32 a);
    void func_ov009_0225d244();
    void func_ov009_0225bc88();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec unk_2a4;
    /* 0x2b0 */
};

// ---- main-module helper classes ----
class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    void step();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    void addToRenderObj(u32 a);
    void func_02055ae4(s32 a, s32 b, s32 c, s32 e, u16 f);
    BOOL func_02055bcc(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

class Unk_020dbd54 {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    s32 func_020547cc(void *q);

    u8 pad_04[0x5c - 4];
    void *unk_5c;
    u8 pad_60[0xb8 - 0x60];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[8];
};

#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define VillagerId_getName _ZN10VillagerId7getNameEj
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define VillagerDataProfileView_getInfo28 _ZN23VillagerDataProfileView9getInfo28Ev
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
extern "C" {
extern u8 data_021dfd8c[];
extern void *data_020cbb18;
extern void *data_021c6204;
extern const u8 data_ov003_0222eff8[];
extern const u8 data_ov003_0222eff0[];
extern char data_ov003_02235330[];
extern char data_ov003_02235308[];
extern char data_ov003_022352d4[];
extern u32 data_ov003_022352e8[];

BOOL func_ov009_0225d600(void *p);
void *SaveVillagers_Get(void *p, s32 i);
s32 func_0207e274(void *p);
s32 func_0207e278(void *p);
void func_020a5e74(s32 i, u8 *a, u8 *b, u8 *c);
s32 func_020b51e8(u32 a);
s32 VillagerId_GetPersonality(void *);

s32 func_020639e8(char *buf, const char *fmt, ...);
void func_01ffd070(Unk_ov003_Vec *out, void *a, void *b);
void NNS_G3dBindMdlTex(void *a, s32 b);
void _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, s32 d, void *e);
void _ZN10VillagerId7getNameEj(void *self, void *x);
void _ZN15TalkWindowState7setSlotEiPv(void *self, s32 a, void *q);
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(void *self, s32 i);
void *_ZN23VillagerDataProfileView9getInfo28Ev(void *self);
void *_ZN12VillagerData13getVillagerIdEv(void *self);
void *_ZN5Model12getRenderObjEv(void *self);
BOOL _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *self, void *res, u32 b);
void _ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
void NNS_G3dBindMdlPltt(void *a, s32 b);

s32 func_ov003_02218d8c();
s32 func_ov003_02218978(s32 a);
s32 func_ov003_0221897c(s32 a);
void *func_ov003_02218d84();
BOOL func_ov003_02218868(void *p);
void *func_ov003_02218870(void *p, s32 i);
s32 func_ov003_02218880(void *p);
s32 func_ov003_0221886c(void *p);
s32 func_ov003_0221898c(s32 a, s32 b);
s32 func_ov003_02218980(s32 a, s32 b);
s32 func_ov003_02218da8();
void func_ov003_022163dc();
}

static inline s32 Unk_ov003_02215c7c_Idx(Unk_ov009_0225e29c *o) {
    BOOL r = FALSE;
    u16 v = o->unk_132;
    if (v < 0x5001 || v > 0x5008) {
    } else {
        r = TRUE;
    }
    if (r) {
        return v - 0x5001;
    }
    return -1;
}

struct Unk_ov003_02215fc0_Rec {
    u8 f : 5;
};

// 12-byte vector with a trivial destructor (main 0x02000c8c = _ZN6FxVec3D1Ev)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

// ============================================================ class Unk_ov003_022318e8
class Unk_ov003_022318e8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_022318e8();
    virtual ~Unk_ov003_022318e8();

    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual BOOL vfunc_70();
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();

    char *func_ov003_02215f98();
    u8 func_ov003_02215fc0();
    s32 func_ov003_02216018();

    /* 0x2b0 */ Unk_020dbd54 unk_2b0;
    /* 0x368 */ ModelAnim unk_368;
};

struct Unk_ov003_SceneEntry {
    void (*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};
extern "C" {
char data_ov003_022352d4[0x14];
u32 data_ov003_022352e8[8];
char data_ov003_02235308[0x28];
char data_ov003_02235330[0x28];
}

extern "C" void func_ov003_022163dc() {
    new Unk_ov003_022318e8;
}

Unk_ov003_022318e8::Unk_ov003_022318e8() {
    for (u32 i = 0; i < 8; i++) {
        data_ov003_022352e8[i] = 0;
    }
}

Unk_ov003_022318e8::~Unk_ov003_022318e8() {
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 data_ov003_0222eff0[8];
extern "C" Unk_ov003_SceneEntry data_ov003_022318c8;
extern "C" const u8 data_ov003_0222eff8[8];

extern "C" const u8 data_ov003_0222eff0[8] = { 0x0a, 0x0b, 0x0c, 0x08, 0x09, 0x0d, 0, 0 };
extern "C" const u8 data_ov003_0222eff8[8] = { 0x10, 0x11, 0x12, 0x0e, 0x0f, 0x13, 0, 0 };

extern "C" Unk_ov003_SceneEntry data_ov003_022318c8 = { func_ov003_022163dc, 0x1d, 0x23, 0, 0xc8000, 0x12c000, 0x258000 };

BOOL Unk_ov003_022318e8::vfunc_70() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    static FxVec3 v(-0x2000, 0x1000, 0x2000);
    Unk_ov003_Vec tmp;
    func_01ffd070(&tmp, &unk_5c, &v);
    Actor_spawn(0x18, idx, &tmp, 0, this);
    data_ov003_022352e8[idx] = (u32)this;
    s32 k = func_ov003_02215fc0();
    s32 r7 = func_ov003_0221898c(func_ov003_02218d8c(), k);
    s32 r4 = func_ov003_02218980(func_ov003_02218d8c(), k);
    void *g = unk_194;
    if (r7) {
        NNS_G3dBindMdlTex(g, r7);
    }
    if (r4) {
        NNS_G3dBindMdlTex(g, r4);
        NNS_G3dBindMdlPltt(g, r4);
    }
    if (func_ov003_02218868(func_ov003_02218d84())) {
        s32 q = func_ov003_02216018() >> 2;
        if (_ZN5Model11setResourceEP16Unk_020553f8_Resj(&unk_2b0, func_ov003_02218870(func_ov003_02218d84(), q), 0)) {
            void *a = func_ov003_02218870(func_ov003_02218d84(), q);
            NNS_G3dBindMdlTex(a, func_ov003_02218880(func_ov003_02218d84()));
            void *b = func_ov003_02218870(func_ov003_02218d84(), q);
            NNS_G3dBindMdlPltt(b, func_ov003_02218880(func_ov003_02218d84()));
            if (unk_368.func_02055bcc((u32)unk_2b0.unk_5c, data_021c6204)) {
                s32 c = func_ov003_0221886c(func_ov003_02218d84());
                s32 d = func_ov003_02218880(func_ov003_02218d84());
                unk_368.func_02055ae4(c, d, 0, 0x1000, 0);
                unk_368.addToRenderObj((u32)_ZN5Model12getRenderObjEv(&unk_2b0));
                *(Unk_ov003_Blk *)((u8 *)this + 0x314) = unk_19c;
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::onExecute() {
    if (func_ov003_02218868(func_ov003_02218d84())) {
        *(Unk_ov003_Blk *)((u8 *)this + 0x314) = unk_19c;
        if ((unk_231 & 1) == 0) {
            unk_368.step();
            **(u32 **)((u8 *)this + 0x380) = *(u32 *)((u8 *)this + 0x370);
        }
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::onDraw() {
    if (func_ov003_02218868(func_ov003_02218d84())) {
        unk_2b0.func_020547cc(0);
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_0c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    data_ov003_022352e8[idx] = 0;
    return TRUE;
}

s32 Unk_ov003_022318e8::func_ov003_02216018() {
    u8 *g = data_021dfd8c;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)VillagerDataProfileView_getInfo28(SaveVillagers_Get(g, idx));
    return r->f;
}

u8 Unk_ov003_022318e8::func_ov003_02215fc0() {
    u8 *g = data_021dfd8c;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)VillagerDataProfileView_getInfo28(SaveVillagers_Get(g, idx));
    return r->f & 3;
}

char *Unk_ov003_022318e8::func_ov003_02215f98() {
    s32 t = func_ov003_02216018();
    func_020639e8(data_ov003_022352d4, "obj_house%d_%d", t >> 2, t & 3);
    return data_ov003_022352d4;
}

char *Unk_ov003_022318e8::vfunc_a4() {
    s32 a = func_ov003_02216018();
    char *s = func_ov003_02215f98();
    s32 e = func_ov003_02218da8();
    func_020639e8(data_ov003_02235308, "/str/npcHs/%d/%s%c.arc", a >> 2, s, e);
    return data_ov003_02235308;
}

char *Unk_ov003_022318e8::vfunc_a8() {
    s32 a = func_ov003_02216018();
    char *s = func_ov003_02215f98();
    s32 e = func_ov003_02218da8();
    func_020639e8(data_ov003_02235330, "/str/npcHs/%d/%s%c.nsbtx", a >> 2, s, e);
    return data_ov003_02235330;
}

char *Unk_ov003_022318e8::vfunc_ac() {
    return 0;
}

s32 Unk_ov003_022318e8::vfunc_64() {
    return func_ov003_0221897c(func_ov003_02218d8c());
}

s32 Unk_ov003_022318e8::vfunc_68() {
    return func_ov003_02218978(func_ov003_02218d8c());
}

void Unk_ov003_022318e8::vfunc_78() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = SaveVillagers_Get(data_021dfd8c, idx);
    setFileName("obj_etc_closed");
    if (func_0207e274(p) == 0) {
        unk_1e = 6;
    } else if (unk_232.f1) {
        setFileName("obj_etc_error");
        unk_1e = 0;
    } else if (void *q = VillagerData_getVillagerId(p)) {
        if (unk_233 == 0) {
            unk_1e = data_ov003_0222eff8[VillagerId_GetPersonality(q)];
        } else {
            unk_1e = data_ov003_0222eff0[VillagerId_GetPersonality(q)];
        }
    }
    u32 l[9];
    _ZN12Unk_020e1c64C1Ev(&l[1]);
    VillagerId_getName(VillagerData_getVillagerId(p), &l[1]);
    TalkWindowState_setSlot(unk_3c, 0, &l[1]);
    _ZN12Unk_020e1c64D1Ev(&l[1]);
}

BOOL Unk_ov003_022318e8::vfunc_8c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = SaveVillagers_Get(data_021dfd8c, idx);
    if (p) {
        if (func_0207e274(p) == 0) {
            return FALSE;
        }
        if (func_0207e278(p) == 0 || func_0207e278(p) == 3 || func_0207e278(p) == 4 || func_0207e278(p) == 5 ||
            func_0207e278(p) == 6 || func_0207e278(p) == 7) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_022318e8::vfunc_9c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    if (func_ov009_0225d600(this)) {
        void *p = SaveVillagers_Get(data_021dfd8c, idx);
        if (p) {
            if (func_0207e274(p) == 0) {
                return FALSE;
            }
            if (func_0207e278(p) == 0 || func_0207e278(p) == 3 || func_0207e278(p) == 4 || func_0207e278(p) == 5 ||
                func_0207e278(p) == 6 || func_0207e278(p) == 7) {
                return FALSE;
            }
            if (func_0207e278(p) == 2) {
                u8 a, b, c;
                u32 i = 0;
                void *g = data_020cbb18;
                for (; i < 4; i++) {
                    if (func_02072e88(g, i)) {
                        func_020a5e74(i, &a, &b, &c);
                        if (idx == func_020b51e8(a)) {
                            return TRUE;
                        }
                    }
                }
                return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_022318e8::vfunc_90() {
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_98() {
    return TRUE;
}

