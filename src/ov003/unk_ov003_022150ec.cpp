// mwcc-version: 1.2/sp2
// mwcc-flags: -O4,s
#include "types.h"
#include "sys/Unk_0209d498_Time.h"
#include "field/Unk_ov003_02215748_Ent.h"
#include "gfx/Unk_ov003_02215a04_Obj.h"
#include "field/Unk_ov003_02215ad8_Str.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "gfx/ModelAnim.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"










class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual VecFx32 *getInteractionPos();
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
    virtual void onMessageEnd(u32 attr);
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

    /* 0x12e */ u16 unk_12e;    // in TalkMsgRequest's tail padding (door-close SE delay in ov009)
    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ s32 modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov003_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 entryState;
    /* 0x27c */ u8 closedTalk;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 warpTimer;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *colliders;
    /* 0x28c */ u8 colliderCount;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec entryPos;
    /* 0x2b0 */
};




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

    /* 0x2b0 */ u8 digitIndex;
    /* 0x2b1 */ u8 digit;
    /* 0x2b2 */ u8 prevDigit;
    /* 0x2b3 */ u8 pad_2b3;
    /* 0x2b4 */ ModelAnim matAnim;
    /* 0x2d4 */ u8 isCounting;
    /* 0x2d5 */ u8 skipSe;
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

    /* 0x2b0 */ ModelAnim matAnim;
    /* 0x2d0 */ s8 alphaMatIdx;
    /* 0x2d1 */ u8 matAlpha;
    /* 0x2d2 */ u8 pad_2d2[2];
    /* 0x2d4 */ Unk_ov003_02215748_Ent *digits[6];
};

// ---------------------------------------------------------------- Z
class KatrinaTent : public BuildingActor {
public:
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();

    /* 0x2b0 */ u8 createHour;
};


// ================================================================
BOOL CountdownDigit::onExecute() {
    CountdownDigit_Update(this);
    s32 r4 = _ZN5Model12getRenderObjEv(unk_138);
    s32 r2 = getBtaAnim(0);
    _ZN9ModelAnim7replaceEiiiit(&matAnim, r4, r2, 1, 0x1000, digit);
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
    _ZN13AnimFrameCtrl4stepEv(&matAnim);
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

BOOL CountdownSign::enterNewYear() {
    s32 r1 = getBtaAnim(1);
    _ZN9ModelAnim4initEiiit(&matAnim, r1, 0, 0x1000, 0);
    matAlpha = 1;
    return TRUE;
}

void CountdownSign::execCountdown() {
    _ZN13AnimFrameCtrl4stepEv(&matAnim);
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
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
    _ZN9ModelAnim4initEiiit(&matAnim, r1, 0, 0x1000, 0);
    matAlpha = 0x1f;
    return TRUE;
}

void CountdownSign::vfunc_74() {
    static Unk_02215614_Fn tbl[3] = { &CountdownSign::execCountdown, &CountdownSign::execNewYear };
    if (doorState < 3) {
        (this->*tbl[doorState])();
    }
}

BOOL CountdownSign::vfunc_6c(u32 a) {
    static Unk_02215680_Fn tbl[3] = { &CountdownSign::enterCountdown, &CountdownSign::enterNewYear };
    if (a < 3) {
        if ((this->*tbl[a])()) {
            if (BuildingState_Set(itemId, a)) {
                doorState = a;
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
        digits[i] = 0;
    }
    return TRUE;
}

BOOL CountdownSign::postDraw(s32 a) {
    if (a == 2) {
        if ((colliderFlags & 1) == 0) {
            for (u32 i = 0; i < 6; i++) {
                Unk_ov003_02215748_Ent *p = digits[i];
                if (p) {
                    if (p->isCounting) {
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
        s32 c = position.z + 0x500;
        s32 b = position.y + 0x2500;
        s32 a = position.x + sCountdownDigitOffsetsX[i];
        v[0] = a;
        v[1] = b;
        v[2] = c;
        sCountdownSpawnIndex = i;
        digits[i] = (Unk_ov003_02215748_Ent *)_ZN5Actor5spawnEPvS0_S0_S0_S0_(0x26, 0x501f, v, z, z);
        i++;
    } while (i < 6);
    _ZN5Model15setInitCallbackEii(unk_138, CountdownSign_ModelCallback, this);
    alphaMatIdx = _ZN12G3dResAccess10findMatIdxEi(modelRes, "m_cbs_Adt");
    if (_ZN9ModelAnim11allocMatAnmEjPv(&matAnim, modelRes, gFieldStructureHeap)) {
        s32 r1 = getBtaAnim(0);
        _ZN9ModelAnim4initEiiit(&matAnim, r1, 0, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&matAnim, _ZN5Model12getRenderObjEv(unk_138));
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
    alphaMatIdx = -1;
}
CountdownSign::~CountdownSign() {}

// ---------------------------------------------------------------- free functions
extern "C" {
void CountdownSign_MaterialCallback(Unk_ov003_02215a04_Obj *o);
void CountdownSign_SetMaterialAlpha(CountdownSign *self, s32 a, Unk_ov003_02215a04_Obj *o);

void CountdownSign_ModelCallback(void *p) {
    Unk_ov003_02215a04_Obj *o = (Unk_ov003_02215a04_Obj *)p;
    o->cbVecFuncMat = (void (*)(void *))CountdownSign_MaterialCallback;
    o->cbVecTimingMat = 2;
}

void CountdownSign_MaterialCallback(Unk_ov003_02215a04_Obj *o) {
    Unk_ov003_02215a04_Sub *s = o->pRenderObj;
    if (s->ptrUser != 0) {
        CountdownSign_SetMaterialAlpha((CountdownSign *)s->ptrUser, o->c->cmd[1], o);
    }
}

CountdownDigit *CountdownDigit_Create() {
    return new CountdownDigit();
}

CountdownSign *CountdownSign_Create() {
    return new CountdownSign();
}

void CountdownSign_SetMaterialAlpha(CountdownSign *self, s32 a, Unk_ov003_02215a04_Obj *o) {
    if (a == self->alphaMatIdx) {
        o->pMatAnmResult->prmPolygonAttr &= ~0x1f0000;
        o->pMatAnmResult->prmPolygonAttr |= (u32)self->matAlpha << 16;
    }
}
}



BOOL CountdownDigit::vfunc_b0() {
    return FALSE;
}