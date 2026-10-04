// mwcc-version: 1.2/base
// mwcc-flags: -O4,s
#include "types.h"
#include "sys/Unk_0209d498_Time.h"
#include "field/Unk_ov003_02214494_Views.h"
#include "field/Unk_ov003_02215748_Ent.h"
#include "gfx/Unk_ov003_02215a04_Obj.h"
#include "field/Unk_ov003_02215ad8_Str.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
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






struct Unk_ov003_022150f0_Obj {
    u8 pad_00[0x2b0];
    u8 digitIndex;
    u8 digit;
    u8 prevDigit;
    u8 pad_2b3[0x2d4 - 0x2b3];
    u8 isCounting;
    u8 skipSe;
};
extern "C" s32 Scene_GetCurrent();
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


// ---------------------------------------------------------------- free functions
extern "C" {
void CountdownSign_MaterialCallback(Unk_ov003_02215a04_Obj *o);
void CountdownSign_SetMaterialAlpha(CountdownSign *self, s32 a, Unk_ov003_02215a04_Obj *o);
}


BOOL CountdownDigit::vfunc_70() {
    digitIndex = sCountdownSpawnIndex;
    digit = 0;
    setCharId(digitIndex);
    if (_ZN9ModelAnim11allocMatAnmEjPv(&matAnim, modelRes, gFieldStructureHeap)) {
        s32 r1 = getBtaAnim(0);
        _ZN9ModelAnim4initEiiit(&matAnim, r1, 1, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&matAnim, _ZN5Model12getRenderObjEv(unk_138));
    }
    isCounting = 1;
    prevDigit = 0xff;
    u32 tm[2];
    tm[0] = 0;
    tm[1] = 0;
    Clock_GetDateTime(tm);
    if (((u8 *)tm)[4] != 1) {
        switch (digitIndex) {
        case 0:
            digit = prevDigit = (sCountdownHours / 10) & 1;
            skipSe = 0;
            break;
        case 1:
            digit = prevDigit = sCountdownHours % 10;
            skipSe = 0;
            break;
        case 2:
            digit = prevDigit = sCountdownMinutes / 10;
            skipSe = 0;
            break;
        case 3:
            digit = prevDigit = sCountdownMinutes % 10;
            skipSe = 0;
            break;
        case 4:
            digit = prevDigit = sCountdownSeconds / 10;
            skipSe = 1;
            break;
        case 5:
            digit = prevDigit = sCountdownSeconds % 10;
            skipSe = 1;
            break;
        }
    }
    CountdownDigit_Update(this);
    return TRUE;
}


extern "C" void CountdownDigit_Update(void *arg) {
    Unk_ov003_022150f0_Obj *o = (Unk_ov003_022150f0_Obj *)arg;
    if (o->isCounting != 0) {
        Unk_ov003_02214890_Buf l;
        l.w0 = 0;
        l.w1 = 0;
        Clock_GetDateTime(&l);
        if (((u8 *)&l)[4] == 1) {
            goto clr;
        }
        switch (o->digitIndex) {
        case 0:
            o->digit = (sCountdownHours / 10) & 1;
            break;
        case 1:
            o->digit = sCountdownHours % 10;
            break;
        case 2:
            o->digit = sCountdownMinutes / 10;
            break;
        case 3:
            o->digit = sCountdownMinutes % 10;
            break;
        case 4:
            o->digit = sCountdownSeconds / 10;
            break;
        case 5:
            o->digit = sCountdownSeconds % 10;
            break;
        }
        s32 r = -1;
        if (sCountdownHours != 0) {
            goto done;
        }
        if (Scene_GetCurrent() == 0x2c) {
            goto done;
        }
        if (sCountdownMinutes == 1 && sCountdownSeconds == 0) {
            r = 3;
        } else if (sCountdownMinutes == 0 && sCountdownSeconds != 0) {
            if (sCountdownSeconds <= 10) {
                r = 2;
            } else {
                r = 3;
            }
        }
        if (o->prevDigit == o->digit) {
            goto done;
        }
        if (r != -1 && o->digitIndex == 5) {
            switch (r) {
            case 1:
                if (o->skipSe == 0) {
                    Snd_PlaySe(0x61);
                }
                break;
            case 2:
                if (o->skipSe == 0) {
                    Snd_PlaySe(0x60);
                }
                break;
            case 3:
                if (o->skipSe == 0) {
                    Snd_PlaySe(0x62);
                }
                break;
            }
            o->skipSe = 0;
        } else {
            o->skipSe = 0;
        }
        goto done;
    clr:
        o->isCounting = 0;
    }
done:
    o->prevDigit = o->digit;
}