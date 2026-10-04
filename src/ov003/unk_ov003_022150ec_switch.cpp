// mwcc-version: 1.2/base
// mwcc-flags: -O4,s
#include "types.h"
#include "sys/Unk_0209d498_Time.h"
#include "field/Unk_ov003_02214494_Views.h"
#include "gfx/NNSG3dRS.h"
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
void memset(void *p, s32 v, u32 n);
}


// ---------------------------------------------------------------- X

// ---------------------------------------------------------------- Y
class CountdownSign;
typedef void (CountdownSign::*Unk_02215614_Fn)();
typedef BOOL (CountdownSign::*Unk_02215680_Fn)();


// ---------------------------------------------------------------- Z


// ---------------------------------------------------------------- free functions
extern "C" {
void CountdownSign_MaterialCallback(NNSG3dRS *o);
void CountdownSign_SetMaterialAlpha(CountdownSign *self, s32 a, NNSG3dRS *o);
}


BOOL CountdownDigit::initBuilding() {
    digitIndex = sCountdownSpawnIndex;
    digit = 0;
    setCharId(digitIndex);
    if (_ZN9ModelAnim11allocMatAnmEjPv(&matAnim, (s32)modelRes, gFieldStructureHeap)) {
        s32 r1 = (s32)getBtaAnim(0);
        _ZN9ModelAnim4initEiiit(&matAnim, r1, 1, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&matAnim, _ZN5Model12getRenderObjEv(model));
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
    CountdownDigit *o = (CountdownDigit *)arg;
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