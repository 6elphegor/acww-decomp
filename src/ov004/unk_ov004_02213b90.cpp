// mwcc-version: 1.2/sp2
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

// ---- definitions ----

// ---------------------------------------------------------------- data
// The six 4-byte objects are initialised by __sinit_ov004_02246b8c in this order.
extern "C" DebugColor data_ov004_022502f4(0x1f, 0x14, 0x14, 0x1f);
extern "C" DebugColor data_ov004_022502e4(0x14, 0x14, 0x1f, 0x1f);
extern "C" DebugColor data_ov004_022502ec(0x1f, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov004_022502dc(0x14, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov004_022502d0(0x14, 0x1f, 0x1f, 0x1f);
extern "C" DebugColor data_ov004_022502e0(0x14, 0x18, 0x18, 0x1f);
extern "C" ActorProfile sMuseumExhibitInfoProfile = { (void *(*)())MuseumExhibitInfo_Create, 0x19, 0x1e, 0, 0xc8000, 0x12c000, 0x258000 };
extern "C" {
s16 sMuseumExhibitSpawnMsg = -1;
char sMuseumExhibitMsgFile[] = "obj_etc_museum";
u8 sMuseumExhibitAutoTalkActive;
u8 sMuseumExhibitInfoCount;
u32 sMuseumExhibitSpawnKind;
u8 *sMuseumExhibitSpawnList;
u32 sMuseumExhibitSpawnCount;
u32 sMuseumExhibitSpawnFacingArc;
MuseumExhibitInfo *sMuseumExhibitInfos[0x20];
}

// ---------------------------------------------------------------- 0x02213b90
extern "C" s32 MuseumExhibitInfo_SpawnAutoTalk() {
    if (sMuseumExhibitAutoTalkActive == 0) {
        sMuseumExhibitSpawnKind = 4;
        sMuseumExhibitSpawnMsg = 0;
        sMuseumExhibitSpawnList = 0;
        sMuseumExhibitSpawnCount = 0;
        sMuseumExhibitSpawnFacingArc = 0;
        return Actor_spawn(0x19, 0, gVec3Zero, 0, 0);
    }
    return 0;
}

extern "C" void MuseumExhibitInfo_Spawn(s32 a, void *b, s32 c, s32 d, s16 e, u8 *f, s32 g) {
    u16 loc[3];
    sMuseumExhibitSpawnKind = a;
    sMuseumExhibitSpawnMsg = e;
    sMuseumExhibitSpawnList = f;
    sMuseumExhibitSpawnCount = g;
    sMuseumExhibitSpawnFacingArc = d;
    loc[0] = 0;
    loc[1] = c;
    loc[2] = 0;
    Actor_spawn(0x19, 0, b, loc, 0);
}

extern "C" void *MuseumExhibitInfo_GetByIndex(s32 i) {
    if (i >= 0 && (u32)i < 0x20) {
        return sMuseumExhibitInfos[i];
    }
    return 0;
}

void MuseumExhibitInfo::mainAct03() {
    if (window) {
        if (window->state) {
            changeAct(2);
        }
    }
}

BOOL MuseumExhibitInfo::setupAct03() {
    u16 id[2];
    Character_attachTalkRequest(this, this);
    setFileName(sMuseumExhibitMsgFile);
    id[1] = 0x12e4;
    TalkWindowState *const g = &data_021ed0a0;
    if ((u32)MuseumData_getDonationState(g, &id[1]) <= 1) {
        MsgString9B obj;
        if (MuseumData_getDonorName(g, &obj, &id[1])) {
            msgIndex = 3;
            TalkWindowState_setSlot(window, 0, &obj);
        }
    } else {
        msgIndex = 4;
    }
    window->nextState = 1;
    talkCount++;
    return TRUE;
}

void MuseumExhibitInfo::mainAct02() {
    if (window) {
        if (window->state == 0) {
            Character_detachTalkRequest(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}

void MuseumExhibitInfo::mainAct01() {
    if (window) {
        if (window->state) {
            changeAct(2);
        }
    }
}

BOOL MuseumExhibitInfo::setupAct01() {
    struct { u16 pad[3]; u16 w; u16 sel; } l;
    u32 i = 0;
    cursor = i;
    for (; i < itemCount; i++) {
        l.w = items[i];
        if (MuseumData_isDonated(&data_021ed0a0, &l.w)) {
            cursor = i;
            break;
        }
    }
    l.sel = items[cursor];
    Character_attachTalkRequest(this, this);
    TalkMsgRequest &s = *this;
    s.setFileName(sMuseumExhibitMsgFile);
    if (isAnyDonated() == 0) {
        msgIndex = 0;
    } else if (kind == 3) {
        if (itemCount == 1) {
            msgIndex = 5;
        } else {
            msgIndex = infoMsgIndex;
        }
    } else if (kind <= 1) {
        u32 n = countDonatedFromCursor();
        if (n > 3) n = 3;
        msgIndex = (n - 1) % 3 + 5;
    } else {
        if (MuseumData_getDonationState(&data_021ed0a0, &l.sel) != 2) {
            msgIndex = 1;
        } else {
            msgIndex = 2;
        }
    }
    window->nextState = 1;
    return TRUE;
}

void MuseumExhibitInfo::mainAct00() {
    if (isAutoTalkKind()) {
        if (talkCount == 0) {
            TalkRequest_AddPlayerTalk6(this, 0);
        } else {
            ProcBase_RequestDelete(this);
        }
    }
}

void MuseumExhibitInfo::execAct() {
    static Unk_ov004_02213ea8_Fn tbl[4] = {
        &MuseumExhibitInfo::mainAct00,
        &MuseumExhibitInfo::mainAct01,
        &MuseumExhibitInfo::mainAct02,
        &MuseumExhibitInfo::mainAct03,
    };
    if (act < 4) {
        (this->*tbl[act])();
    }
}

BOOL MuseumExhibitInfo::changeAct(s32 idx) {
    static Unk_ov004_02213f34_Fn tbl[4] = {
        &MuseumExhibitInfo::setupAct00,
        &MuseumExhibitInfo::setupAct01,
        &MuseumExhibitInfo::setupAct02,
        &MuseumExhibitInfo::setupAct03,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            act = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void MuseumExhibitInfo::onChoice(u32) {
    if (isAutoTalkKind() == 0) {
        u8 a0, a1, a2, a3;
        u16 sel;
        if (ChoiceList_getResult(TalkWindowState_getChoiceList(window)) == 0) {
            sel = items[cursor];
            if (kind <= 1) {
                u32 n = countDonatedFromCursor();
                if (n > 3) n = 3;
                a0 = (n - 1) % 3 + 5;
                TalkWindowState_setNextMessage(window, &a0, 0);
            } else if (MuseumData_getDonationState(&data_021ed0a0, &sel) != 2) {
                a1 = 1;
                TalkWindowState_setNextMessage(window, &a1, 0);
            } else {
                a2 = 2;
                TalkWindowState_setNextMessage(window, &a2, 0);
            }
        } else {
            a3 = gTalkMsgIndexEnd;
            TalkWindowState_setNextMessage(window, &a3, 0);
        }
    }
}

void MuseumExhibitInfo::onMessageEnd(u32) {
    u8 b[7];
    if (isAutoTalkKind() == 0) {
        if (kind == 3) {
            if (msgIndex != 5) {
                if (isAllDonated()) {
                    u32 e = msgIndex;
                    if (infoMsgIndex == e) {
                        b[0] = e + 1;
                        TalkWindowState_setNextMessage(window, &b[0], 0);
                    } else {
                        b[1] = gTalkMsgIndexEnd;
                        TalkWindowState_setNextMessage(window, &b[1], 0);
                    }
                } else {
                    b[2] = gTalkMsgIndexEnd;
                    TalkWindowState_setNextMessage(window, &b[2], 0);
                }
            } else {
                b[3] = gTalkMsgIndexEnd;
                TalkWindowState_setNextMessage(window, &b[3], 0);
            }
        } else if (countDonatedFromCursor() != 0) {
            void *o = TalkWindowState_getChoiceList(window);
            if (o) {
                ChoiceList_reset(o, 2, 1);
                b[4] = 0xe5;
                ChoiceList_setEntry(o, 0, &b[4], 0, gTalkMsgIndexNone, 0, 0);
                b[5] = 0xe6;
                ChoiceList_setEntry(o, 1, &b[5], 0, gTalkMsgIndexNone, 0, 0);
                ChoiceList_loadTexts(o);
                TalkWindowState_openChoices(window, 1);
            }
        } else {
            b[6] = gTalkMsgIndexEnd;
            TalkWindowState_setNextMessage(window, &b[6], 0);
        }
    }
}

void MuseumExhibitInfo::onMessageStart(u32) {
    if (isAutoTalkKind() == 0) {
        u16 w1, w2;
        if (kind <= 1) {
            u32 n = 0;
            switch (msgIndex) {
            case 5: n = 1; break;
            case 6: n = 2; break;
            case 7: n = 3; break;
            }
            u32 i;
            for (i = 0; i < n; i++) {
                w1 = items[cursor];
                ItemName o(&w1);
                TalkWindowState_setNamedSlot(window, i, &o, 7);
                advanceToNextDonated();
            }
        } else {
            u32 idx = cursor;
            if (idx < itemCount) {
                w2 = items[idx];
                MsgString9B e;
                MuseumData_getDonorName(&data_021ed0a0, &e, &w2);
                TalkWindowState_setSlot(window, 0, &e);
                ItemName o2(&w2);
                TalkWindowState_setNamedSlot(window, 0, &o2, 7);
                if (kind != 3) {
                    advanceToNextDonated();
                }
            }
        }
    }
}

void MuseumExhibitInfo::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 1:
        changeAct(3);
        break;
    case 0:
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL MuseumExhibitInfo::acceptsInteraction(void *a0) {
    Actor *a = (Actor *)a0;
    if (a) {
        if (Vec_DistXZ(&a->position, (u8 *)this + 0x5c) < 0x2333) {
            if (Math_AngleDiffAbs((s16)(*(s16 *)((u8 *)this + 0x8e) + 0x8000), a->rotY) < facingArc) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::unregisterSelf() {
    if (isAutoTalkKind() == 0) {
        u32 idx = index;
        if (idx < 0x20) {
            sMuseumExhibitInfos[idx] = 0;
            sMuseumExhibitInfoCount--;
            index = 0xff;
            return TRUE;
        }
    } else {
        sMuseumExhibitAutoTalkActive = 0;
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::registerSelf() {
    if (isAutoTalkKind()) {
        index = 0xff;
        sMuseumExhibitAutoTalkActive = 1;
        return TRUE;
    }
    index = sMuseumExhibitInfoCount;
    if (index < 0x20) {
        sMuseumExhibitInfos[index] = this;
        sMuseumExhibitInfoCount++;
        return TRUE;
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::setupAct02() {
    return TRUE;
}

BOOL MuseumExhibitInfo::setupAct00() {
    return TRUE;
}

void MuseumExhibitInfo::advanceToNextDonated() {
    u32 i = cursor + 1;
    for (; i < itemCount; i++) {
        u16 w = items[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w)) {
            cursor = i;
            return;
        }
    }
    cursor = itemCount;
}

u32 MuseumExhibitInfo::countDonatedFromCursor() {
    u32 cnt = 0;
    u32 i = cursor;
    for (; i < itemCount; i++) {
        u16 w = items[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w)) {
            cnt++;
        }
    }
    return cnt;
}

BOOL MuseumExhibitInfo::isAllDonated() {
    u32 i;
    for (i = 0; i < itemCount; i++) {
        u16 w = items[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL MuseumExhibitInfo::isAnyDonated() {
    u32 i;
    for (i = 0; i < itemCount; i++) {
        u16 w = items[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::isAutoTalkKind() {
    if (kind == 4) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------- 0x0221465c
extern "C" void MuseumExhibitInfo_ClearRegistry(void) {
    if (sMuseumExhibitInfoCount == 0) {
        u32 i;
        for (i = 0; i < 0x20; i++) {
            sMuseumExhibitInfos[i] = 0;
        }
    }
}

BOOL MuseumExhibitInfo::onDelete() {
    unregisterSelf();
    if (items != 0) {
        Mem_Free(items);
    }
    return TRUE;
}

BOOL MuseumExhibitInfo::onDraw() {
    return TRUE;
}

BOOL MuseumExhibitInfo::onExecute() {
    execAct();
    if (isAutoTalkKind() == 0) {
        TouchPicker_addSphere(Scene_GetTouchPicker(), (TouchPickSphere *)touchSphere, &position, 0xc00, 0xe, index);
    }
    return TRUE;
}

BOOL MuseumExhibitInfo::onCreate() {
    Unk_ov004_022146ec_Bits l;
    s32 v[3];
    s32 out[3];
    BOOL r;
    MuseumExhibitInfo_ClearRegistry();
    kind = sMuseumExhibitSpawnKind;
    infoMsgIndex = sMuseumExhibitSpawnMsg;
    itemCount = sMuseumExhibitSpawnCount;
    facingArc = sMuseumExhibitSpawnFacingArc;
    if (registerSelf() != 0) {
        if (isAutoTalkKind() != 0) {
            Actor *o = PlayerActor_GetCharacter(4);
            if (o != 0) {
                s32 idx = ((u16)o->rotY >> 4) * 2;
                v[0] = data_02135f44[idx];
                v[1] = 0;
                v[2] = data_02135f44[idx + 1];
                Vec_Add(out, &o->position, v);
                position.x = out[0];
                position.y = out[1];
                position.z = out[2];
            }
        }
        l.a = (u16)gCommManager->myAid;
        *(u16 *)&l = (*(u16 *)&l & ~0xfc) | ((Scene_GetCurrent() & 0x3f) << 2);
        l.c = index;
        Character_setCharId(this, *(u16 *)&l);
        changeAct(0);
        r = buildItemList();
    } else {
        r = FALSE;
    }
    return r;
}

MuseumExhibitInfo::~MuseumExhibitInfo() {
    _ZN15TouchPickSphereD1Ev((TouchPickSphere *)touchSphere);
}

MuseumExhibitInfo::MuseumExhibitInfo() {
    _ZN15TouchPickSphereC1Ev((TouchPickSphere *)touchSphere);
}

extern "C" MuseumExhibitInfo *MuseumExhibitInfo_Create(void) {
    return new MuseumExhibitInfo;
}
