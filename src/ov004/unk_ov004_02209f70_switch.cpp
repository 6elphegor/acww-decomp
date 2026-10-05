// mwcc-version: 1.2/base
#include "types.h"
#include "room/Unk_ov004_0224882c_Buf.h"
#include "gfx/Mtx43.h"
#include "actor/ActorListNode.h"
#include "actor/CharacterListNode.h"
#include "room/FtrActorParts.h"
#include "gfx/AnimFrameCtrl.h"
#include "item/ItemId.h"
#include "game/CollisionVec2.h"
#include "game/LightLevel.h"
#include "gfx/G3dResAccess.h"
#include "room/FtrVisNodes.h"
#include "room/FtrSwitch.h"
#include "room/FtrClockHands.h"
#include "room/FtrAnimSet.h"
#include "room/FtrStackedSet.h"
#include "talk/TalkWindowState.h"
#include "game/BoxCollider.h"
#include "game/CollisionEdge.h"
#include "room/FtrTileList.h"
#include "room/FtrGlowMat.h"
#include "room/FtrStackLink.h"
#include "room/FtrTopItem.h"
#include "game/FxVec3.h"
#include "sys/ProcBase.h"
#include "gfx/ModelAnim.h"
#include "room/FtrCollider.h"
#include "gfx/MatTexVramTask.h"
#include "room/FtrGlowMatSet.h"
#include "room/FtrTopItems.h"
#include "room/FtrModelAnim.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/ModelResource.h"
#include "room/FtrModelRes.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "room/FtrActor.h"
#include "room/FtrNookway.h"
#include "room/FtrPhone.h"
#include "room/FtrSingingInsect.h"
#include "room/FtrComputer.h"
#include "room/FtrHeadwear.h"
#include "room/FtrKind25.h"
#include "room/FtrCarpetSample.h"
// The two functions of the ov004 translation unit 0x02209f70-0x022136d0 that need mwcc 1.2/base (signed-halfword
// switch tables): FtrSingingInsect::updateActive and vfunc_7c. Same declarations as the main file of the unit;
// nothing else is emitted here (see config/usa/arm9/overlays/ov004/object_order.txt).
// ================================================================ library chain and TU02 helper classes (from the linked TU02 unit)

// ================================================================ plain value types




// ================================================================ library chain (as tu01, but slot 08/14 as this class overrides them)






// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)


// ================================================================ helper object types (members of / used by the 0224882c object)


// ---- 0x02206520: list of up to 4 tile positions



// ---- 0x02205994: 4 ids + count (member at 0x760)

// ---- 0x02205bcc: model animation slot (base: main class LightLevel)


// ---- 0x02205b14: element view used by the 3-element container (same object as 0x02205bcc)



// ---- 0x02205c44 (member at 0x73c)

// ---- 0x02205d5c (member at 0x73e)

// ---- 0x02205e58 (member at 0x178)

// ---- 0x022062f4 (element of 0x022061b4)


// ---- 0x022061b4 (member at 0x188)

// ---- 0x02206398 (member at 0x44 of 0x02206e38; 5 pairs of resource pointers)


// ---- 0x02206434 (set of up to 4 neighbour objects)

// ---- 0x022487cc : BoxCollider (member at 0x628)






// ---- 0x022069ec / 0x02206e38 (model loader, member at 0x6c8)
class TexVramSlot;





// ---- 0x02248804 (array of 4 at 0x7c0)



// ================================================================ FtrActor





class FtrActor;



// ---- part 10: from unk_02209e64.cpp
// The base declares vfunc_14() with no parameters, but this overlay class takes one (r1), so widen it locally.

// Secondary base of the 0x0224882c family (at +0xec). Its vtable 0x020ddcf0 is not overridden by the derived class.

// Target of the callbacks at 0x02209e64..0x02209ebc; only its vtable layout is known.




namespace p10 {
extern "C" {
extern u16 gFtrSoundNone;
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];

void *FtrActorHeap_GetInstance(void);
void _ZN12FtrActorHeap4freeEPv(void *heap, void *p);
void *_ZN12FtrActorHeap5allocEv(void *heap, u32 size);
void *memset(void *p, s32 v, u32 n);

void _ZN8FtrActorC1Ev(void *);
void _ZN8FtrActorC2Ev(void *);

void _ZN9FtrSwitch3setEji(void *, s32, s32);
BOOL _ZN9FtrSwitch10isChangingEv(void *);
u8 _ZN9FtrSwitch4isOnEv(void *);
void _ZN15FtrSoundEmitter4playEjj(void *, u32, void *);
void *_ZN11FtrModelRes10getAnimSetEv(void *);
void *_ZN10FtrAnimSet6getBvaEj(void *, u32);
u32 FtrActor_StepAnims(void *);
u32 FtrActor_GetFtrIndex(void *);
u32 FtrSound_GetSe0(u32);
void *FtrContactSet_GetInstance(void);
void *_ZN13FtrContactSet11findContactEPv(void *, void *);
s32 *_ZN10FtrContact22getClampedContactPointEv(void);
u32 _ZN10FtrContact12getPushAngleEv(void *);

u32 ItemInfo_IsReady(void);
void TalkRequest_SetTargetDone(void *);
void TalkRequest_AddPlayerTalk6(void *, s32);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
}
}

// ---------------------------------------------------------------- callbacks

// ---------------------------------------------------------------- 0x0224882c allocator

// ---------------------------------------------------------------- FtrNookway





// ---------------------------------------------------------------- FtrPhone











typedef void (FtrPhone::*Unk_ov004_0220a1e8_Fn)();
typedef BOOL (FtrPhone::*Unk_ov004_0220a280_Fn)();





















// ---------------------------------------------------------------- FtrSingingInsect


BOOL FtrSingingInsect::updateActive() {
    u32 h = p10::FtrSound_GetSe0(p10::FtrActor_GetFtrIndex(this));
    if ((u16)(h + 0xfc07) <= 3) {
        switch (singPhase) {
        case 0:
            if (restTimer != 0) {
                restTimer--;
            }
            if (restTimer == 0) {
                singPhase = 1;
                loopCount = 0;
                prevAnimDone = 0;
                singFrames = 0;
                if (h != p10::gFtrSoundNone) {
                    p10::_ZN15FtrSoundEmitter4playEjj(soundEmitter, h, centerPos);
                }
            }
            break;
        case 1: {
            singFrames++;
            u32 r = p10::FtrActor_StepAnims(this);
            if (prevAnimDone != 0 && r != 0) {
                prevAnimDone = 0;
                playAnim(0, 1, 0x1000, 0);
                loopCount++;
                if (loopCount >= loopsPerPhrase) {
                    singPhase = 0;
                    if (h == 0x3fc) {
                        restTimer = 0x3c;
                    } else {
                        restTimer = 200;
                    }
                }
            }
            prevAnimDone = r;
            break;
        }
        }
    } else {
        switch (singPhase) {
        case 0:
            if (restTimer != 0) {
                restTimer--;
            }
            if (restTimer == 0) {
                singPhase = 1;
                loopCount = 0;
                prevAnimDone = 0;
                if (h != p10::gFtrSoundNone) {
                    p10::_ZN15FtrSoundEmitter4playEjj(soundEmitter, h, centerPos);
                }
            }
            break;
        case 1:
        case 2:
        case 3: {
            if (h == 0x3ff) {
                if (p10::_ZN13AnimFrameCtrl14hasPassedFrameEi(animFrameCtrl, 0x14)) {
                    if (h != p10::gFtrSoundNone) {
                        p10::_ZN15FtrSoundEmitter4playEjj(soundEmitter, h, centerPos);
                    }
                }
            }
            u32 r = p10::FtrActor_StepAnims(this);
            if (prevAnimDone != 0 && r != 0) {
                prevAnimDone = 0;
                playAnim(0, 1, 0x1000, 0);
                loopCount++;
                if (loopCount >= loopsPerPhrase) {
                    singPhase = (singPhase + 1) & 3;
                    loopCount = 0;
                    if (singPhase != 0) {
                        if (h != p10::gFtrSoundNone) {
                            p10::_ZN15FtrSoundEmitter4playEjj(soundEmitter, h, centerPos);
                        }
                    } else {
                        if (p10::_ZN10FtrAnimSet6getBvaEj(p10::_ZN11FtrModelRes10getAnimSetEv(modelRes), 0) != 0) {
                            restTimer = loopsPerPhrase * ((Unk_ov004_0220a648_Bits *)&anims[3].numFrames)->mid;
                        } else {
                            restTimer = loopsPerPhrase * ((Unk_ov004_0220a648_Bits *)&animNumFrames)->mid;
                        }
                    }
                }
            }
            prevAnimDone = r;
            break;
        }
        }
    }
    return TRUE;
}

// ---- part 11: from unk_0220a898.cpp
// ---------------------------------------------------------------------------------------------------------------------
// Main-module base classes (layout only; copied in shape from src/main)

// ---------------------------------------------------------------------------------------------------------------------
// Externs

namespace p11 {
extern "C" {
extern u8 data_ov004_02240024[];
extern u8 data_ov004_02240038[];
extern char data_ov004_0224bb50[];

s32 FtrSync_RequestAct(s32 a, s32 b, u8 c, u8 d);
s32 FtrSync_ChangeAct(s32 a, s32 b, u8 c, u8 d);
s32 Random_GlobalBelow(s32 a, ...);
s32 Item_MakeFurniture(s32 a, s32 b);
BOOL CarpetTex_Load(u32 a, u16 *p);
s32 CarpetTex_GetTex(s32 a);
BOOL _ZN14MatTexVramTask7requestEPvjS0_jj(void *a, s32 b, char *c, s32 d, s32 e, s32 f);

s32 _ZN8FtrActor9initAnimsEiiii(void *p, s32 a, s32 b, s32 c, s32 d);
s32 _ZN8FtrActor8playAnimEiiij(void *p, s32 a, s32 b, s32 c, s32 d);
s32 FtrActor_GetFtrIndex(void *p);
s32 FtrSound_GetSe0(void);
s32 _ZN8FtrActor17getAnimFrameCountEi(void *p);
void FtrActor_StepAnims(void *p);
void _ZN8FtrActor10playSound0Ev(void *p);
void _ZN8FtrActor10playSound1Ev(void *p);
void _ZN8FtrActor10playSound2Ev(void *p);
void _ZN13FtrGlowMatSet6setLitEjjj(void *p, s32 a, s32 b, s32 c);
s32 _ZN9FtrSwitch10isChangingEv(void *p);
void _ZN9FtrSwitch3setEji(void *p, s32 a, s32 b);
void _ZN13FtrGlowMatSet6updateEv(void *p);
s32 _ZN9FtrSwitch4isOnEv(void *p);
void _ZN13FtrGlowMatSet4initEjj(void *p, s32 a, s32 b);
s32 FtrMgr_IsShopScene(void);
void _ZN11FtrVisNodes10setVisibleEj(void *p, s32 a);
s32 FtrPreviewer_GetInstance(void);
s32 _ZN12FtrPreviewer14getFloorBufferEv(s32 a);
s32 _ZN12FtrPreviewer14getSampleIndexEv(s32 a);
}
}

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 4 base class (vtable 0x0224882c, secondary vtable 0x022488d8 at +0xec)

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224b43c

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224936c


// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x02249498


// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x022496f0


// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224981c



// ---------------------------------------------------------------------------------------------------------------------
// FtrSingingInsect



// ---------------------------------------------------------------------------------------------------------------------
// FtrComputer












// ---------------------------------------------------------------------------------------------------------------------
// FtrHeadwear
















// ---------------------------------------------------------------------------------------------------------------------
// FtrKind25





// ---------------------------------------------------------------------------------------------------------------------
// FtrCarpetSample





// Out-of-line constructors (defined after the factories so they are not inlined)

BOOL FtrSingingInsect::initModel() {
    p11::_ZN8FtrActor9initAnimsEiiii(this, 0, 1, 0x1000, 0);
    p11::FtrActor_GetFtrIndex(this);
    s32 t = p11::FtrSound_GetSe0();
    switch (t) {
    case 0x3f9:
        loopCount = 4;
        loopsPerPhrase = loopCount;
        break;
    case 0x3fb:
        loopCount = 4;
        loopsPerPhrase = loopCount;
        break;
    case 0x3fa:
        loopCount = 4;
        loopsPerPhrase = loopCount;
        break;
    case 0x3fc:
        loopCount = 2;
        loopsPerPhrase = loopCount;
        break;
    default:
        loopCount = 1;
        loopsPerPhrase = loopCount;
        break;
    }
    singPhase = 0;
    restTimer = 0;
    if (spawnMode != 1) {
        if (t == 0x3fc) {
            restTimer = p11::Random_GlobalBelow(0x3c, 0);
        } else if ((u16)(t + 0xfc07) <= 2) {
            restTimer = p11::Random_GlobalBelow(0xc8, 0);
        } else {
            restTimer = p11::Random_GlobalBelow(loopsPerPhrase * p11::_ZN8FtrActor17getAnimFrameCountEi(this));
        }
    }
    return TRUE;
}

