// mwcc-version: 1.2/sp2
// mwcc-flags: -O4,s
#include "types.h"
#include "sys/Unk_0209d498_Time.h"
#include "field/Unk_ov003_02215748_Ent.h"
#include "gfx/Unk_ov003_02215a04_Obj.h"
#include "field/Unk_ov003_02215ad8_Str.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "gfx/ModelAnim.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"
#include "town/KatrinaTent.h"
#include "town/CountdownDigit.h"
#include "town/CountdownSign.h"










class Unk_020b1ddc;





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


// ---------------------------------------------------------------- X

// ---------------------------------------------------------------- Y
class CountdownSign;
typedef void (CountdownSign::*Unk_02215614_Fn)();
typedef BOOL (CountdownSign::*Unk_02215680_Fn)();


// ---------------------------------------------------------------- Z


// ================================================================
BOOL CountdownDigit::onExecute() {
    CountdownDigit_Update(this);
    s32 r4 = _ZN5Model12getRenderObjEv(unk_138);
    s32 r2 = (s32)getBtaAnim(0);
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
    s32 r1 = (s32)getBtaAnim(1);
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
    s32 r1 = (s32)getBtaAnim(0);
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

s32 CountdownSign::vfunc_6c(s32 arg) {
    u32 a = arg;
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

char *CountdownSign::vfunc_ac() { return BuildingActor::vfunc_ac(); }
char *CountdownSign::vfunc_a8() { return BuildingActor::vfunc_a8(); }
char *CountdownSign::vfunc_a4() { return BuildingActor::vfunc_a4(); }

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
    alphaMatIdx = _ZN12G3dResAccess10findMatIdxEi((s32)modelRes, "m_cbs_Adt");
    if (_ZN9ModelAnim11allocMatAnmEjPv(&matAnim, (s32)modelRes, gFieldStructureHeap)) {
        s32 r1 = (s32)getBtaAnim(0);
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