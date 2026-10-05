// mwcc-version: 1.2/base
// ov004 TU05: .text 0x02213b90-0x02214948 (class MuseumExhibitInfo). The switch function
// MuseumExhibitInfo::buildItemList needs mwcc 1.2/base and is in the _switch file (object order).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "gfx/DebugColor.h"
#include "actor/ActorProfile.h"
#include "gfx/VecFx32.h"
#include "game/Unk_ov004_022146ec_Bits.h"
#include "net/CommManager.h"
#include "talk/TalkWindowState.h"
#include "talk/MsgString9B.h"
#include "item/ItemName.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "room/MuseumExhibitInfo.h"
#include "game/TouchPickSphere.h"














class MuseumExhibitInfo;
class TouchPicker;

// Functions of other modules, under their real (mangled) symbol names; the object is the first argument.
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define Character_detachTalkRequest _ZN9Character17detachTalkRequestEi
#define Character_attachTalkRequest _ZN9Character17attachTalkRequestEi
#define Character_setCharId _ZN9Character9setCharIdEj
#define TouchPicker_addSphere _ZN11TouchPicker9addSphereEP15TouchPickSphereP7VecFx32S3_ih
#define MuseumData_isDonated _ZN10MuseumData9isDonatedEPt
#define MuseumData_getDonationState _ZN10MuseumData16getDonationStateEPt
#define MuseumData_getDonorName _ZN10MuseumData12getDonorNameEiPt
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_openChoices _ZN15TalkWindowState11openChoicesEi
#define TalkWindowState_setNamedSlot _ZN15TalkWindowState12setNamedSlotEiPvj
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define ChoiceList_loadTexts _ZN10ChoiceList9loadTextsEv
#define ChoiceList_setEntry _ZN10ChoiceList8setEntryEiPKhiS1_PKci
#define ChoiceList_reset _ZN10ChoiceList5resetEii

extern "C" {
extern u8 gTalkMsgIndexEnd;
extern char gTalkMsgIndexNone[];
extern u8 gVec3Zero[];
extern s16 data_02135f44[];
extern CommManager *gCommManager;
extern TalkWindowState data_021ed0a0;

void _ZN15TouchPickSphereC1Ev(TouchPickSphere *self);
void _ZN15TouchPickSphereD1Ev(TouchPickSphere *self);
s32 Actor_spawn(s32 a, s32 b, void *c, void *d, void *e);
void Character_detachTalkRequest(void *self, TalkMsgRequest *sec);
void Character_attachTalkRequest(void *self, TalkMsgRequest *sec);
void Character_setCharId(void *self, u32 a);
s32 TouchPicker_addSphere(TouchPicker *self, TouchPickSphere *o, void *a, u32 b, u32 c, u32 d);
s32 MuseumData_isDonated(void *self, u16 *p);
s32 MuseumData_getDonationState(void *self, u16 *p);
s32 MuseumData_getDonorName(void *self, MsgString9B *a, u16 *p);
void *TalkWindowState_getChoiceList(void *self);
void TalkWindowState_openChoices(void *self, s32 a);
void TalkWindowState_setNamedSlot(void *self, s32 a, ItemName *b, u32 c);
void TalkWindowState_setSlot(void *self, s32 a, MsgString9B *b);
void TalkWindowState_setNextMessage(void *self, u8 *a, void *b);
BOOL ChoiceList_getResult(void *self);
void ChoiceList_loadTexts(void *self);
void ChoiceList_setEntry(void *self, s32 a, const u8 *b, s32 c, const char *d, s32 e, s32 f);
void ChoiceList_reset(void *self, s32 a, s32 b);
s32 TalkRequest_SetTargetDone(void *self);
s32 TalkRequest_AddPlayerTalk6(void *self, s32 a);
void ProcBase_RequestDelete(void *self);
void *Mem_Alloc(u32 size);
void Mem_Free(void *p);
s32 Vec_DistXZ(void *a, void *b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
TouchPicker *Scene_GetTouchPicker(void);
s32 Scene_GetCurrent(void);
Actor *PlayerActor_GetCharacter(u32);
void Vec_Add(void *, void *, void *);
}


typedef void (MuseumExhibitInfo::*Unk_ov004_02213ea8_Fn)();
typedef BOOL (MuseumExhibitInfo::*Unk_ov004_02213f34_Fn)();



extern "C" {
extern s16 sMuseumExhibitSpawnMsg;
extern char sMuseumExhibitMsgFile[];
extern u8 sMuseumExhibitAutoTalkActive;
extern u8 sMuseumExhibitInfoCount;
extern u32 sMuseumExhibitSpawnKind;
extern u8 *sMuseumExhibitSpawnList;
extern u32 sMuseumExhibitSpawnCount;
extern u32 sMuseumExhibitSpawnFacingArc;
extern MuseumExhibitInfo *sMuseumExhibitInfos[0x20];
MuseumExhibitInfo *MuseumExhibitInfo_Create(void);
void MuseumExhibitInfo_ClearRegistry(void);
}

// Only this function: it needs mwcc 1.2/base (the rest of the unit is in the main file, built with 1.2/sp2).
BOOL MuseumExhibitInfo::buildItemList() {
    if (isAutoTalkKind() == 0) {
        u16 **p = &items;
        *p = (u16 *)Mem_Alloc(itemCount * 2);
        if (*p) {
            u32 i;
            switch (kind) {
            case 0:
                for (i = 0; i < itemCount; i++) {
                    u32 v = sMuseumExhibitSpawnList[i];
                    u16 r;
                    if (v < 0x38) r = v + 0x12b0; else r = 0x12b0;
                    items[i] = r;
                }
                return TRUE;
            case 1:
                for (i = 0; i < itemCount; i++) {
                    u32 v = sMuseumExhibitSpawnList[i];
                    u16 r;
                    if (v < 0x38) r = v + 0x12e8; else r = 0x12e8;
                    items[i] = r;
                }
                return TRUE;
            case 2:
                for (i = 0; i < itemCount; i++) {
                    u32 v = sMuseumExhibitSpawnList[i];
                    u32 r;
                    if (v < 0x14) r = v * 4 + 0x3894; else r = 0x3894;
                    items[i] = r;
                }
                return TRUE;
            case 3:
                for (i = 0; i < itemCount; i++) {
                    u32 v = sMuseumExhibitSpawnList[i];
                    u32 r;
                    if (v < 0x34) r = v * 4 + 0x450c; else r = 0x450c;
                    items[i] = r;
                }
                return TRUE;
            default:
                return FALSE;
            }
        }
        return FALSE;
    }
    return TRUE;
}
