// mwcc-version: 1.2/sp2
// ov003 TU12 (actor 02231c14): .text 0x022165d0-0x02216824
#include "types.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 BuildingActor).
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
//   ov009  _ZN13BuildingActor10preExecuteEv           -> _ZN13BuildingActor10preExecuteEv        (0x0225db04)
//   ov009  _ZN13BuildingActor7preDrawEj           -> _ZN13BuildingActor8vfunc_20Ej        (0x0225da90)
//   ov009  _ZN13BuildingActor7preDrawEv           -> _ZN13BuildingActor7preDrawEv        (0x0225d9e4)
//   ov009  func_ov009_0225b884                           -> _ZN13BuildingActor8vfunc_b4Ev        (0x0225b884)
//   ov009  func_ov009_0225b880                           -> _ZN13BuildingActor8vfunc_b8Ev        (0x0225b880)
//   main   TalkMsgRequest slots, one label each (the unit names them vfunc_sXX so that overrides in the primary chain
//          cannot override them): _ZN14TalkMsgRequest9vfunc_sXXEv for XX = 08 0c 10 18 1c 20 24 28 2c 30 34 3c 40 44 48 4c 50 54 58
//          5c 60 64 68 6c 70 74 (existing name _ZN14TalkMsgRequest8vfunc_XXEv) and _ZN14TalkMsgRequest9vfunc_s38Ej (existing
//          _ZN14TalkMsgRequest8vfunc_38Ej).
//   ov003  0x0221445c is _ZThn236_N13BuildingActor8vfunc_88Ev, the thunk of ov009::vfunc_88 in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot vfunc_88, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
//          (No alias: the old label _ZN14TalkMsgRequest9vfunc_s14Ev is gone.)
// Notes:
//  * The ctor of a derived class calls BuildingActor::BuildingActor() (ov009 symbol C2 0x0225deec).
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
    // Slot 0x14 has the name of BuildingActor::vfunc_88, which overrides it: the vtable then names the shared
    // thunk _ZThn236_N13BuildingActor8vfunc_88Ev (0x0221445c).  The compiler also emits a link-once copy of the
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
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
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

    s32 getBtaAnim(u32 a);
    void getResources();
    void updateMatrix();

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

class HouseData {
public:
    BOOL func_0206022c();
    u8 func_0206045c();
    u8 pad[0x15a4];
};

extern "C" {
extern u32 gCurrentHeap;
extern void *data_021c6204;
extern HouseData data_021e58a8;
extern const s8 data_ov003_0222f000[];
extern char data_ov003_02235358[];

s32 PlayerData_GetCurrentIndex();
s32 func_020978fc();
void *File_LoadAlloc(char *a, u32 b, s32 c, s32 *out);
void *NNS_G3dGetTex(void *p);
BOOL Gfx3d_LoadTex(void *p, u32 a);
void *Gfx3d_CopyTex(void *p, void *a);
void Mem_Free(void *p);
void NNS_G3dBindMdlTex(void *a, void *b);
void NNS_G3dBindMdlPltt(void *a, void *b);
void _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, s32 d, s32 e);
s32 func_020639e8(char *buf, const char *fmt, ...);
BOOL _ZN13BuildingActor10getDoorPosEP23Unk_ov009_0225b880_Vec3Ps(void *self, void *v, s16 *ang);

BuildingActor *func_ov003_02218b40(u32 a);
u32 func_ov003_02218da8();
void func_ov003_022167d0();
u8 func_ov003_022166d8();
char *func_ov003_022166a4();
}
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_

struct Unk_ov003_Vec3 {
    s32 x, y, z;
};

class Unk_ov003_02231c14 : public BuildingActor {
public:
    Unk_ov003_02231c14();
    virtual ~Unk_ov003_02231c14();
    virtual BOOL onDraw();
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();

    void func_ov003_02216604();
    void func_ov003_02216648();

    /* 0x2b0 */ void *unk_2b0;
    /* 0x2b4 */ void *unk_2b4;
};

struct Unk_ov003_SceneEntry {
    void (*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

extern "C" const s8 data_ov003_0222f000[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
extern "C" Unk_ov003_SceneEntry data_ov003_02231bf4 = { func_ov003_022167d0, 0x1f, 0x25, 0, 0xc8000, 0x12c000, 0x258000 };
extern "C" {
char data_ov003_02235358[0x20];
}

extern "C" void func_ov003_022167d0() {
    new Unk_ov003_02231c14();
}

Unk_ov003_02231c14::Unk_ov003_02231c14() {}

Unk_ov003_02231c14::~Unk_ov003_02231c14() {}

BOOL Unk_ov003_02231c14::vfunc_70() {
    Unk_ov003_Vec3 v;
    s16 ang;
    func_ov003_02216648();
    func_ov003_02216604();
    if (_ZN13BuildingActor10getDoorPosEP23Unk_ov009_0225b880_Vec3Ps(this, &v, &ang)) {
        v.x -= 0x2000;
        v.z += 0x1000;
        Actor_spawn(0x24, 0x501d, &v, 0, 0);
    }
    return TRUE;
}

BOOL Unk_ov003_02231c14::onDraw() {
    BuildingActor *o = func_ov003_02218b40(0x501d);
    if (o) {
        o->updateMatrix();
    }
    return TRUE;
}

extern "C" u8 func_ov003_022166d8() { return data_021e58a8.func_0206045c(); }

extern "C" char *func_ov003_022166a4() {
    u32 i = func_ov003_022166d8();
    u32 c = func_ov003_02218da8();
    func_020639e8(data_ov003_02235358, "/str/plHsTex/home%c%c.nsbtx", data_ov003_0222f000[i & 0xf], c);
    return data_ov003_02235358;
}

void Unk_ov003_02231c14::func_ov003_02216648() {
    void *r4 = File_LoadAlloc(func_ov003_022166a4(), gCurrentHeap, -4, 0);
    unk_2b0 = NNS_G3dGetTex(r4);
    if (Gfx3d_LoadTex(unk_2b0, 0)) {
        unk_2b0 = Gfx3d_CopyTex(unk_2b0, data_021c6204);
    }
    Mem_Free(r4);
}

void Unk_ov003_02231c14::func_ov003_02216604() {
    if (unk_2b0) {
        NNS_G3dBindMdlTex(unk_194, unk_2b0);
    }
    if (unk_2b4) {
        NNS_G3dBindMdlTex(unk_194, unk_2b4);
        NNS_G3dBindMdlPltt(unk_194, unk_2b4);
    }
}

BOOL Unk_ov003_02231c14::vfunc_90() {
    PlayerData_GetCurrentIndex();
    if (func_020978fc() == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02231c14::vfunc_9c() { return data_021e58a8.func_0206022c(); }

BOOL Unk_ov003_02231c14::vfunc_8c() { return TRUE; }

BOOL Unk_ov003_02231c14::vfunc_98() { return TRUE; }

