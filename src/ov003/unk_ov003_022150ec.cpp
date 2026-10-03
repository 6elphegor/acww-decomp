// mwcc-version: 1.2/sp2
// mwcc-flags: -O4,s
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
    virtual void vfunc_20(u32 a);
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 a);
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
    virtual BOOL postDraw(s32 a);
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
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
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void clearTalkStartMode();
    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14.
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
    virtual BOOL vfunc_6c(u32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
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
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
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
    /* 0x194 */ s32 unk_194;
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

struct Unk_0209d498_Time {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

// 0x20-byte member object (ctor func_02055c88, dtor func_02055c70)
struct ModelAnim {
    ModelAnim();
    ~ModelAnim();
    u8 pad_00[8];
    /* 0x08 */ s32 unk_08;
    u8 pad_0c[0xc];
    /* 0x18 */ s32 *unk_18;
    u8 pad_1c[4];
};

// Other actor with a u8 at +0x2d4 (element of the Y child list)
struct Unk_ov003_02215748_Ent {
    u8 pad_00[0x2d4];
    u8 unk_2d4;
};

struct Unk_ov003_SceneEntry {void *(*factory)(); u16 id,size; u32 zero,a,b,c;};
class CountdownDigit; class CountdownSign;
extern "C" CountdownDigit *CountdownDigit_Create();
extern "C" CountdownSign *CountdownSign_Create();
extern "C" Unk_ov003_SceneEntry sCountdownDigitProfile = {(void *(*)())CountdownDigit_Create, 0x26, 0x2c, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" Unk_ov003_SceneEntry sCountdownSignProfile = {(void *(*)())CountdownSign_Create, 0x25, 0x2b, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" u8 sCountdownSpawnIndex;
extern "C" u32 sCountdownHours;
extern "C" u32 sCountdownSeconds;
extern "C" u32 sCountdownMinutes;
u8 sCountdownSpawnIndex;
u32 sCountdownHours, sCountdownSeconds, sCountdownMinutes;
extern "C" const s32 sCountdownDigitOffsetsX[6] = {-0x1900,-0x1100,-0x500,0x300,0xf00,0x1700};
extern "C" {
extern u8 sCountdownSpawnIndex;
extern u32 sCountdownHours;
extern u32 sCountdownSeconds;
extern u32 sCountdownMinutes;
extern const s32 sCountdownDigitOffsetsX[6];
extern char data_ov003_02231750[];
extern char data_ov003_022318b8[];
extern u32 gFieldStructureHeap;

void CountdownDigit_Update(void *p);
void CountdownSign_ModelCallback(void *p);
s32 _ZN5Model12getRenderObjEv(void *p);
void _ZN9ModelAnim7replaceEiiiit(void *m, s32 a, s32 b, s32 c, s32 d, u32 e);
BOOL _ZN9ModelAnim11allocMatAnmEjPv(void *m, s32 a, s32 b);
void _ZN9ModelAnim4initEiiit(void *m, s32 a, s32 b, s32 c, s32 d);
void _ZN9ModelAnim14addToRenderObjEj(void *m, s32 a);
void Clock_GetDateTime(void *p);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(u32 a, u32 b, void *c, u32 d, u32 e);
void _ZN5Model15setInitCallbackEii(void *m, void (*fn)(void *), void *self);
s32 _ZN12G3dResAccess10findMatIdxEi(s32 a, const char *s);
void Snd_PlaySe(u32 a);
void _ZN13AnimFrameCtrl4stepEv(void *m);
void _ZN13BuildingActor12updateMatrixEv(void *p);
BOOL BuildingState_Set(u32 a, u32 b);
void func_02094030(void *p);
void func_02094018(void *p);
void Npc_GetName(void *p, void *q);
void *Heap_Alloc(u32 heap, u32 size);
void func_0212899c(void *p, s32 v, u32 n);
}

class Unk_ov003_02215ad8_Str {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();
};

// ---------------------------------------------------------------- DoorLight
class CountdownDigit : public BuildingActor {
public:
    virtual BOOL vfunc_b0();
    CountdownDigit();
    virtual ~CountdownDigit();
    virtual BOOL onExecute();
    virtual BOOL vfunc_70();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    /* 0x2b0 */ u8 unk_2b0;
    /* 0x2b1 */ u8 unk_2b1;
    /* 0x2b2 */ u8 unk_2b2;
    /* 0x2b3 */ u8 pad_2b3;
    /* 0x2b4 */ ModelAnim unk_2b4;
    /* 0x2d4 */ u8 unk_2d4;
    /* 0x2d5 */ u8 unk_2d5;
    /* 0x2d6 */ u8 pad_2d6[2];
};

// ---------------------------------------------------------------- Y
class CountdownSign;
typedef void (CountdownSign::*Unk_02215614_Fn)();
typedef BOOL (CountdownSign::*Unk_02215680_Fn)();

class CountdownSign : public BuildingActor {
public:
    CountdownSign();
    virtual ~CountdownSign();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL postDraw(s32 a);
    virtual BOOL vfunc_6c(u32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();

    void execNewYear();
    BOOL enterNewYear();
    void execCountdown();
    BOOL enterCountdown();

    /* 0x2b0 */ ModelAnim unk_2b0;
    /* 0x2d0 */ s8 unk_2d0;
    /* 0x2d1 */ u8 unk_2d1;
    /* 0x2d2 */ u8 pad_2d2[2];
    /* 0x2d4 */ Unk_ov003_02215748_Ent *unk_2d4[6];
};

// ---------------------------------------------------------------- Z
class KatrinaTent : public BuildingActor {
public:
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();

    /* 0x2b0 */ u8 unk_2b0;
};

struct Unk_ov003_02215a04_Ctx {
    u8 unk_00[2];
    u8 pad_02[2];
};
struct Unk_ov003_02215a04_Sub {
    u8 pad_00[0x2c];
    u32 unk_2c;
};
struct Unk_ov003_022159c8_Word {
    u8 pad_00[0xc];
    u32 unk_0c;
};
struct Unk_ov003_02215a04_Obj {
    Unk_ov003_02215a04_Ctx *unk_00;
    Unk_ov003_02215a04_Sub *unk_04;
    u8 pad_08[0x14];
    void (*unk_1c)(void *);
    u8 pad_20[0x90 - 0x20];
    u8 unk_90;
    u8 pad_91[0xb0 - 0x91];
    Unk_ov003_022159c8_Word *unk_b0;
};

// ================================================================
BOOL CountdownDigit::onExecute() {
    CountdownDigit_Update(this);
    s32 r4 = _ZN5Model12getRenderObjEv(unk_138);
    s32 r2 = getBtaAnim(0);
    _ZN9ModelAnim7replaceEiiiit(&unk_2b4, r4, r2, 1, 0x1000, unk_2b1);
    return TRUE;
}

CountdownDigit::CountdownDigit() {}
CountdownDigit::~CountdownDigit() {}

void *CountdownDigit::operator new(unsigned long size) {
    void *p = Heap_Alloc(gFieldStructureHeap, size);
    func_0212899c(p, 0, size);
    return p;
}

void CountdownDigit::operator delete(void *p) {}

// ---------------------------------------------------------------- Y methods
void CountdownSign::execNewYear() {
    _ZN13AnimFrameCtrl4stepEv(&unk_2b0);
    *unk_2b0.unk_18 = unk_2b0.unk_08;
}

BOOL CountdownSign::enterNewYear() {
    s32 r1 = getBtaAnim(1);
    _ZN9ModelAnim4initEiiit(&unk_2b0, r1, 0, 0x1000, 0);
    unk_2d1 = 1;
    return TRUE;
}

void CountdownSign::execCountdown() {
    _ZN13AnimFrameCtrl4stepEv(&unk_2b0);
    *unk_2b0.unk_18 = unk_2b0.unk_08;
    u32 tm[2];
    tm[0] = 0;
    tm[1] = 0;
    Clock_GetDateTime(tm);
    if (((u8 *)tm)[4] == 1) {
        Snd_PlaySe(0x61);
        vfunc_6c(1);
    }
}

BOOL CountdownSign::enterCountdown() {
    s32 r1 = getBtaAnim(0);
    _ZN9ModelAnim4initEiiit(&unk_2b0, r1, 0, 0x1000, 0);
    unk_2d1 = 0x1f;
    return TRUE;
}

void CountdownSign::vfunc_74() {
    static Unk_02215614_Fn tbl[3] = { &CountdownSign::execCountdown, &CountdownSign::execNewYear };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

BOOL CountdownSign::vfunc_6c(u32 a) {
    static Unk_02215680_Fn tbl[3] = { &CountdownSign::enterCountdown, &CountdownSign::enterNewYear };
    if (a < 3) {
        if ((this->*tbl[a])()) {
            if (BuildingState_Set(unk_132, a)) {
                unk_130 = a;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void CountdownSign::vfunc_ac() { BuildingActor::vfunc_ac(); }
void CountdownSign::vfunc_a8() { BuildingActor::vfunc_a8(); }
void CountdownSign::vfunc_a4() { BuildingActor::vfunc_a4(); }

BOOL CountdownSign::vfunc_0c() {
    for (u32 i = 0; i < 6; i++) {
        unk_2d4[i] = 0;
    }
    return TRUE;
}

BOOL CountdownSign::postDraw(s32 a) {
    if (a == 2) {
        if ((unk_231 & 1) == 0) {
            for (u32 i = 0; i < 6; i++) {
                Unk_ov003_02215748_Ent *p = unk_2d4[i];
                if (p) {
                    if (p->unk_2d4) {
                        ::_ZN13BuildingActor12updateMatrixEv(p);
                    }
                }
            }
        }
    }
    return Character::postDraw(a);
}

BOOL CountdownSign::onExecute() {
    Unk_0209d498_Time t;
    ((u32 *)&t)[0] = 0;
    ((u32 *)&t)[1] = 0;
    Clock_GetDateTime(&t);
    u32 secs = 0x15180 - (t.b0 + (t.b1 * 0x3c + t.b2 * 0xe10));
    sCountdownSeconds = secs;
    u32 h = sCountdownSeconds / 0xe10;
    sCountdownHours = h;
    sCountdownSeconds = sCountdownSeconds - h * 0xe10;
    u32 m = sCountdownSeconds / 0x3c;
    sCountdownMinutes = m;
    sCountdownSeconds = sCountdownSeconds - m * 0x3c;
    return TRUE;
}

BOOL CountdownSign::vfunc_70() {
    getResources();
    onExecute();
    s32 z = 0;
    u32 i = 0;
    s32 v[3];
    do {
        s32 c = unk_5c[2] + 0x500;
        s32 b = unk_5c[1] + 0x2500;
        s32 a = unk_5c[0] + sCountdownDigitOffsetsX[i];
        v[0] = a;
        v[1] = b;
        v[2] = c;
        sCountdownSpawnIndex = i;
        unk_2d4[i] = (Unk_ov003_02215748_Ent *)_ZN5Actor5spawnEPvS0_S0_S0_S0_(0x26, 0x501f, v, z, z);
        i++;
    } while (i < 6);
    _ZN5Model15setInitCallbackEii(unk_138, CountdownSign_ModelCallback, this);
    unk_2d0 = _ZN12G3dResAccess10findMatIdxEi(unk_194, "m_cbs_Adt");
    if (_ZN9ModelAnim11allocMatAnmEjPv(&unk_2b0, unk_194, gFieldStructureHeap)) {
        s32 r1 = getBtaAnim(0);
        _ZN9ModelAnim4initEiiit(&unk_2b0, r1, 0, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&unk_2b0, _ZN5Model12getRenderObjEv(unk_138));
    }
    u32 tm[2];
    tm[0] = 0;
    tm[1] = 0;
    Clock_GetDateTime(tm);
    if (((u8 *)tm)[4] == 1) {
        vfunc_6c(1);
    } else {
        vfunc_6c(0);
    }
    return TRUE;
}

CountdownSign::CountdownSign() {
    unk_2d0 = -1;
}
CountdownSign::~CountdownSign() {}

// ---------------------------------------------------------------- free functions
extern "C" {
void CountdownSign_MaterialCallback(Unk_ov003_02215a04_Obj *o);
void CountdownSign_SetMaterialAlpha(CountdownSign *self, s32 a, Unk_ov003_02215a04_Obj *o);

void CountdownSign_ModelCallback(void *p) {
    Unk_ov003_02215a04_Obj *o = (Unk_ov003_02215a04_Obj *)p;
    o->unk_1c = (void (*)(void *))CountdownSign_MaterialCallback;
    o->unk_90 = 2;
}

void CountdownSign_MaterialCallback(Unk_ov003_02215a04_Obj *o) {
    Unk_ov003_02215a04_Sub *s = o->unk_04;
    if (s->unk_2c != 0) {
        CountdownSign_SetMaterialAlpha((CountdownSign *)s->unk_2c, o->unk_00->unk_00[1], o);
    }
}

CountdownDigit *CountdownDigit_Create() {
    return new CountdownDigit();
}

CountdownSign *CountdownSign_Create() {
    return new CountdownSign();
}

void CountdownSign_SetMaterialAlpha(CountdownSign *self, s32 a, Unk_ov003_02215a04_Obj *o) {
    if (a == self->unk_2d0) {
        o->unk_b0->unk_0c &= ~0x1f0000;
        o->unk_b0->unk_0c |= (u32)self->unk_2d1 << 16;
    }
}
}



BOOL CountdownDigit::vfunc_b0() {
    return FALSE;
}