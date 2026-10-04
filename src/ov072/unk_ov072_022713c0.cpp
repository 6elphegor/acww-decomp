// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/SpNpcTalkRequest.h"
#include "actor/Unk_ov004_SceneEntry.h"


struct Unk_0201bc1c;

// Grid (unk_0204e858.cpp): cells are 0x28 bytes
struct Unk_02071a58_Grid {
    u8 *cells;
    u32 w, h;
};

struct Unk_ov072_02272234_Ent {
    const char *msgKey;
    u8 msgIndex;
};


struct Unk_ov072_02271a58_Obj {
    u32 v[2];
};

class SpNpcGulliver;
class SpNpcGulliverTalk;

struct Unk_ov072_022718d0_Ent {
    void (SpNpcGulliverTalk::*f)();
    u8 flag;
};

struct Unk_ov072_ColorCtor {
    u8 a, b, c, d;
    Unk_ov072_ColorCtor(u8 a, u8 b, u8 c, u8 d) : a(a), b(b), c(c), d(d) {}
};


extern "C" {
extern u8 data_021e58a6;
extern u8 gVec3Zero[];
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;

BOOL _ZN13GulliverQuest9isStartedEv(void *self);
s32 _ZN13GulliverQuest12getPartCountEv(void *self);
void _ZN13GulliverQuest7addPartEv(void *self);
void _ZN13GulliverQuest5startEv(void *self);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void TalkRequest_SetTargetDone(void *p);
void EventWeekSlots_MarkPlayer(s32 a);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
s32 _ZN11NpcAnimCtrl9getAnimIdEj(void *self, u32 a);
void _ZN14NpcMoveAnimSet12setStandAnimEi(void *self, s32 a);
s32 Pocket_FindItem(u16 *p);
void Pocket_RemoveItem(s32 a);
void Pocket_AddItem(u16 *p, s32 a);
u32 Random_GlobalBelow(u32 n);
void _ZN12ItemPickSpec3setEii(Unk_ov072_02271a58_Obj *o, s32 a, s32 b);
void ItemPickSpec_Destruct(Unk_ov072_02271a58_Obj *o);
void ItemPick_One(u16 *out, Unk_ov072_02271a58_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void *TownBlockMap_Get();
void *MapBlock_GetItemPtr(void *cell, s32 a, s32 b, s32 c);
void MapBlock_SetItem(void *cell, u16 *h, s32 a, s32 b, s32 c);
BOOL _ZN8BlockMap23canPlaceItemAtBlockUnitEiiii(void *self, s32 x, s32 y, s32 z, s32 w);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
BOOL Item_IsMarker(void *p);
BOOL Item_IsTreeStage0(void *p);
void MI_CpuFill8(void *dst, s32 v, s32 n);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN11NpcTalkCtrl11requestTalkEhh(void *self, u32 a, u32 b);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u32 a, u32 b, u32 c, u32 *d, u32 e, u32 f, u32 g);
void SpNpcGulliver_ScatterShipParts();
BOOL SpNpcGulliver_PlaceShipPart(u8 *cnt, s32 *pe, void *g);
BOOL SpNpcGulliver_IsSpotClear(s32 *a, s32 *b, void *g);
}






// Sub-object at +0x658 (vtable 0x02272438)
class SpNpcGulliverTalk : public SpNpcTalkRequest {
public:
    SpNpcGulliverTalk();
    virtual ~SpNpcGulliverTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone(u32 id);

    void attachOwner(SpNpcGulliver *owner);
    void scriptWakeUp();
    void setScript(s32 s);

    /* 0xac */ s32 script;
    /* 0xb0 */ u8 scriptStep;
    /* 0xb4 */ s32 topic;
    /* 0xb8 */ SpNpcGulliver *ownerNpc;
};




struct Unk_020d77a4_Vec3;




class SpNpcGulliver : public SpNpcActor {
public:
    SpNpcGulliver() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 s);

    s32 unk_654;
    SpNpcGulliverTalk talk;
    u8 repairing;
    u8 pad_715[0x718 - 0x715];
    s32 gestureDelay;
    s32 gestureTimer;
};

struct Unk_ov072_02271fe8_Ent {
    BOOL (SpNpcGulliver::*enter)();
    BOOL (SpNpcGulliver::*exit)();
};


extern "C" {
extern u8 sSpNpcGulliverKey[12];
extern u8 sSpNpcGulliverModelPath[23];
extern u8 sSpNpcGulliverTexturePath[27];
extern const Unk_ov072_02272234_Ent sSpNpcGulliverTopicMsgs[8];
extern Unk_ov072_022718d0_Ent sSpNpcGulliverTalkScripts[2];
extern Unk_ov072_02271fe8_Ent sSpNpcGulliverActTable[4];
s32 SpNpcGulliver_TickTimer(void *self, s32 *p);
SpNpcGulliver *SpNpcGulliver_Create();
}

Unk_ov072_ColorCtor data_ov072_02272590(31, 20, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272580(20, 20, 31, 31);
Unk_ov072_ColorCtor data_ov072_0227258c(31, 31, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272594(20, 31, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272584(20, 31, 31, 31);
Unk_ov072_ColorCtor data_ov072_02272588(20, 24, 24, 31);

extern "C" {
u8 sSpNpcGulliverKey[12] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'u', 'l', 'l', 0};
u8 sSpNpcGulliverTexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'g', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
u8 sSpNpcGulliverModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'g', '.', 'n', 's', 'b', 'm', 'd', 0};
}

Unk_ov072_022718d0_Ent sSpNpcGulliverTalkScripts[2] = {
    {NULL, 0},
    {&SpNpcGulliverTalk::scriptWakeUp, 1},
};

Unk_ov072_02271fe8_Ent sSpNpcGulliverActTable[4] = {
    {&SpNpcGulliver::setupAct00, &SpNpcGulliver::mainAct00},
    {&SpNpcGulliver::setupAct01, &SpNpcGulliver::mainAct01},
    {&SpNpcGulliver::setupAct02, &SpNpcGulliver::mainAct02},
    {NULL, &SpNpcGulliver::mainAct03},
};

extern "C" Unk_ov004_SceneEntry sSpNpcGulliverProfile = {(void *(*)())SpNpcGulliver_Create, 0x60, 0x67, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
const Unk_ov072_02272234_Ent sSpNpcGulliverTopicMsgs[8] = {
    {(const char *)sSpNpcGulliverKey, 0},
    {(const char *)sSpNpcGulliverKey, 5},
    {(const char *)sSpNpcGulliverKey, 0x1e},
    {(const char *)sSpNpcGulliverKey, 0xd},
    {(const char *)sSpNpcGulliverKey, 0x12},
    {(const char *)sSpNpcGulliverKey, 0x13},
    {(const char *)sSpNpcGulliverKey, 0x14},
    {(const char *)sSpNpcGulliverKey, 0x15},
};
}

static inline void *Unk_ov072_02271a58_Cell(Unk_02071a58_Grid *g, u32 x, u32 y) {
    if (x < g->w && y < g->h && g->cells != NULL) {
        return g->cells + (y * g->w + x) * 0x28;
    }
    return NULL;
}

static inline BOOL Unk_ov072_02271ca4_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov072_02271ca4_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 0x5d || v > 0x61) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if (v != 0x69) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (v != 0x6d) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) {
            f9 = FALSE;
        }
    }
    return f9;
}

extern "C" SpNpcGulliver *SpNpcGulliver_Create() {
    return new SpNpcGulliver();
}

BOOL SpNpcGulliver::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcGulliver::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    u8 *const g = &data_021e58a6;
    if (_ZN13GulliverQuest9isStartedEv(g)) {
        if (_ZN13GulliverQuest12getPartCountEv(g) >= 5) {
            repairing = 1;
        }
        changeAct(1);
    } else {
        changeAct(0);
    }
    collider.groups |= 2;
    return TRUE;
}

u8 *SpNpcGulliver::getTexturePath() {
    return sSpNpcGulliverTexturePath;
}

u8 *SpNpcGulliver::getModelPath() {
    return sSpNpcGulliverModelPath;
}

BOOL SpNpcGulliver::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcGulliverActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcGulliverActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcGulliver::changeAct(s32 s) {
    BOOL ok = TRUE;
    if (sSpNpcGulliverActTable[s].enter != NULL) {
        ok = (this->*sSpNpcGulliverActTable[s].enter)();
    }
    if (ok) {
        unk_654 = s;
    }
}

extern "C" s32 SpNpcGulliver_TickTimer(void *self, s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

BOOL SpNpcGulliver::setupAct00() {
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 0, 0, 0, (u32 *)gVec3Zero, 4, data_020c6d1c, 1);
    actionCtrl.requestPlayAnim(1, 0xef, 1, data_020c6cc8, 0);
    _ZN14NpcMoveAnimSet12setStandAnimEi(&moveAnimSet, 0xef);
    return TRUE;
}

BOOL SpNpcGulliver::mainAct00() {
    return TRUE;
}

BOOL SpNpcGulliver::setupAct01() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, (u32 *)gVec3Zero, 4, data_020c6d1c, 1);
    if (repairing != 0) {
        gestureDelay = 0x190;
        gestureDelay += Random_GlobalBelow(0x258);
    }
    return TRUE;
}

BOOL SpNpcGulliver::mainAct01() {
    if (repairing != 0) {
        if (SpNpcGulliver_TickTimer(this, &gestureTimer) == 2) {
            actionCtrl.requestEmotion(1, 0, data_020c6cc8);
            return TRUE;
        }
        if (gestureTimer == 1) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            return TRUE;
        }
        if (SpNpcGulliver_TickTimer(this, &gestureDelay) == 0) {
            switch (Random_GlobalBelow(3)) {
            case 0:
                actionCtrl.requestEmotion(1, 0xc, data_020c6cc8);
                break;
            case 1:
                actionCtrl.requestEmotion(1, 0xd, data_020c6cc8);
                break;
            case 2:
                actionCtrl.requestEmotion(1, 0xe, data_020c6cc8);
                break;
            }
            gestureDelay = 0x190;
            gestureDelay += Random_GlobalBelow(0x258);
            gestureTimer = 0x7a;
        }
    }
    return TRUE;
}

extern "C" BOOL SpNpcGulliver_IsSpotClear(s32 *a, s32 *b, void *g) {
    s32 x = 0, y = 0;
    s32 i;
    for (i = 1; i <= 2; i++) {
        s32 hx, hy, xx, yy;
        u16 *cell;
        FieldUnit_FromBlockUnit(&x, &y, a[0], a[1], b[0], b[1] + i);
        xx = *(volatile s32 *)&x;
        yy = *(volatile s32 *)&y;
        hx = xx >> 4;
        hy = yy >> 4;
        cell = BlockMap_GetItemPtr(g, hx, hy, xx - (hx << 4), yy - (hy << 4), 0);
        if (cell == NULL) {
            goto fail;
        }
        if (Unk_ov072_02271ca4_R(cell, 0x5000, 0x5021)) {
            goto fail;
        }
        if (Item_IsMarker(cell)) {
            goto fail;
        }
        if (Item_IsTreeStage0(cell)) {
            continue;
        }
        if (Unk_ov072_02271ca4_Chk(cell)) {
        fail:
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL SpNpcGulliver_PlaceShipPart(u8 *cnt, s32 *pe, void *g0) {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)g0;
    u8 *t;
    s32 k, k2;
    void *cell;
    u16 h;
    volatile s32 v[4];
    k = Random_GlobalBelow(*pe);
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    for (v[1] = 1; v[1] < 5; v[1]++) {
        for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
            if (*cnt != 0) {
                if (k == 0) {
                    cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                    if (cell != NULL) {
                        t = (u8 *)MapBlock_GetItemPtr(cell, 0, 0, 0);
                        if (t != NULL) {
                            k2 = Random_GlobalBelow(*cnt);
                            for (v[3] = 0; v[3] < 16; v[3]++) {
                                for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                    if (*(u16 *)t == 0xfff1) {
                                        if (_ZN8BlockMap23canPlaceItemAtBlockUnitEiiii(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                            if (SpNpcGulliver_IsSpotClear((s32 *)&v[0], (s32 *)&v[2], g)) {
                                                if (k2 == 0) {
                                                    h = 0x1568;
                                                    MapBlock_SetItem(cell, &h, v[2], v[3], 0);
                                                    (*cnt)--;
                                                    if (*cnt == 0) {
                                                        (*pe)--;
                                                    }
                                                    return TRUE;
                                                }
                                                k2--;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                k--;
            }
        }
    }
    return FALSE;
}

extern "C" void SpNpcGulliver_ScatterShipParts() {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)TownBlockMap_Get();
    s32 total, i;
    u8 *cnt, *t;
    s32 v[5];
    u8 arr[16];
    if (g != NULL) {
        total = 0;
        v[0] = total;
        v[1] = total;
        v[2] = total;
        v[3] = total;
        v[4] = total;
        cnt = arr;
        MI_CpuFill8(cnt, total, 16);
        for (v[1] = 1; v[1] < 5; v[1]++) {
            for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
                void *cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                if (cell != NULL) {
                    t = (u8 *)MapBlock_GetItemPtr(cell, 0, 0, 0);
                    if (t != NULL) {
                        for (v[3] = 0; v[3] < 16; v[3]++) {
                            for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                if (*(u16 *)t == 0xfff1) {
                                    if (_ZN8BlockMap23canPlaceItemAtBlockUnitEiiii(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                        if (SpNpcGulliver_IsSpotClear(&v[0], &v[2], g)) {
                                            (*cnt)++;
                                        }
                                    }
                                }
                            }
                        }
                        if (*cnt != 0) {
                            total += *cnt;
                            v[4]++;
                        }
                    }
                }
            }
        }
        if (total >= 5) {
            total = 5;
        }
        for (i = 0, t = arr; i < total; i++) {
            SpNpcGulliver_PlaceShipPart(t, &v[4], g);
            if (v[4] <= 0) {
                break;
            }
        }
    }
}

BOOL SpNpcGulliver::setupAct02() {
    repairing = 0;
    if (_ZN13GulliverQuest9isStartedEv(&data_021e58a6)) {
        if (gestureTimer == 0) {
            void *p = talk.getTalkPlayer();
            s32 x = rotY;
            if (p != NULL) {
                x = _ZN8NpcActor10getAngleToEPS_(this, p);
            }
            _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
        } else {
            actionCtrl.requestEmotion(1, 0, data_020c6cc8);
        }
    } else {
        _ZN11NpcTalkCtrl11requestTalkEhh(&talkCtrl, 0, 0);
    }
    return TRUE;
}

BOOL SpNpcGulliver::mainAct02() {
    if (gestureTimer != 0) {
        void *p = talk.getTalkPlayer();
        s32 x = rotY;
        if (p != NULL) {
            x = _ZN8NpcActor10getAngleToEPS_(this, p);
        }
        _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
        gestureTimer = 0;
    }
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(3);
    }
    return TRUE;
}

BOOL SpNpcGulliver::mainAct03() {
    return TRUE;
}

void SpNpcGulliverTalk::update() {
    if (sSpNpcGulliverTalkScripts[script].flag != 0) {
        if (sSpNpcGulliverTalkScripts[script].f) {
            (this->*sSpNpcGulliverTalkScripts[script].f)();
        }
    }
}

void SpNpcGulliverTalk::onTaskDone(u32) {
    if (sSpNpcGulliverTalkScripts[script].flag == 0) {
        if (sSpNpcGulliverTalkScripts[script].f) {
            (this->*sSpNpcGulliverTalkScripts[script].f)();
            setScript(0);
        }
    }
}

void SpNpcGulliverTalk::setScript(s32 s) {
    script = s;
    scriptStep = 0;
}

void SpNpcGulliverTalk::scriptWakeUp() {
    switch (scriptStep) {
    case 0:
        if (unk_3c->state == 5) {
            ownerNpc->actionCtrl.requestPlayAnim(2, 0xd5, 1, data_020c6cc8, 0);
            _ZN14NpcMoveAnimSet12setStandAnimEi(&ownerNpc->moveAnimSet, 0);
            scriptStep = scriptStep + 1;
        }
        break;
    case 1:
        if (_ZN11NpcAnimCtrl9getAnimIdEj(&ownerNpc->animCtrl, 0) == 0xd5) {
            if (ownerNpc->actionCtrl.isActionDone()) {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(&ownerNpc->actionCtrl, 3, 2, 0, 0, 0, ownerNpc->getAngleToPlayer(4), 0, 0, data_020c6cc8, 0);
                scriptStep = scriptStep + 1;
            }
        }
        break;
    case 2:
        if (ownerNpc->actionCtrl.getAction() == 3) {
            if (ownerNpc->actionCtrl.isActionDone()) {
                u8 b;
                _ZN13GulliverQuest5startEv(&data_021e58a6);
                requestReopenWindow();
                Talk_CheckAndSetPlayerFlag(0x14, 1);
                b = Random_GlobalBelow(5) + 5;
                unk_3c->setNextMessage(&b, sSpNpcGulliverKey);
                setScript(0);
            }
        }
        break;
    }
}

SpNpcGulliverTalk::SpNpcGulliverTalk() {}

// Member (SpNpcGulliverTalk) ctor/dtor
SpNpcGulliverTalk::~SpNpcGulliverTalk() {}

void SpNpcGulliverTalk::attachOwner(SpNpcGulliver *owner) {
    resetMsg();
    ownerNpc = owner;
    topic = 0;
}

void SpNpcGulliverTalk::start(TalkStartMsg *out) {
    u16 h;
    s32 t;
    h = 0x1568;
    t = Pocket_FindItem(&h);
    if (Talk_CheckAndSetPlayerFlag(0x14, 0) == 0) {
        if (_ZN13GulliverQuest9isStartedEv(&data_021e58a6)) {
            topic = 2;
            Talk_CheckAndSetPlayerFlag(0x14, 1);
        } else {
            topic = 0;
        }
    } else if (_ZN13GulliverQuest12getPartCountEv(&data_021e58a6) >= 5) {
        topic = 3;
    } else if (t < 0) {
        if (_ZN13GulliverQuest12getPartCountEv(&data_021e58a6) == 0) {
            topic = 4;
        } else {
            s32 v;
            topic = 5;
            v = 5 - _ZN13GulliverQuest12getPartCountEv(&data_021e58a6);
            if (v < 0) {
                v = 0;
            }
            setNumberSlot(v, 0, 2, 0, 0);
        }
    } else {
        s32 i;
        u16 h2;
        if (Talk_CheckAndSetPlayerFlag(0x15, 1)) {
            topic = 6;
        } else {
            topic = 7;
        }
        for (i = 1; i <= 15; i++) {
            Pocket_RemoveItem(t);
            if (_ZN13GulliverQuest12getPartCountEv(&data_021e58a6) < 5) {
                _ZN13GulliverQuest7addPartEv(&data_021e58a6);
            }
            h2 = 0x1568;
            t = Pocket_FindItem(&h2);
            if (t < 0) {
                break;
            }
        }
        setNumberSlot(i, 1, 2, 0, 0);
    }
    s32 s = topic;
    if (s >= 0 && s < 8) {
        out->msgKey = (const char *)sSpNpcGulliverTopicMsgs[s].msgKey;
        if (topic == 0) {
            out->msgIndex = Random_GlobalBelow(5);
        } else if (topic == 3) {
            out->msgIndex = Random_GlobalBelow(5) + 13;
        } else {
            out->msgIndex = *(u8 *)((u8 *)sSpNpcGulliverTopicMsgs + 4 + topic * 8);
        }
    }
}

void SpNpcGulliverTalk::onMessageEnd(u32) {
    u8 b;
    u16 h0;
    u16 h1;
    u16 h2;
    Unk_ov072_02271a58_Obj o;
    u8 *const g = &data_021e58a6;
    h0 = 0xfff1;
    u8 *const m = sSpNpcGulliverKey;
    u32 r = 0xff;
    switch (msgIndex) {
    case 0:
        requestCloseWindow(0);
        setScript(1);
        break;
    case 0xb:
        SpNpcGulliver_ScatterShipParts();
        break;
    case 0x14:
    case 0x15:
        h1 = 0x1568;
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &h1, 0, 5, 0);
        r = 0x16;
        break;
    case 0x16:
        if (_ZN13GulliverQuest12getPartCountEv(g) >= 5) {
            r = 0x17;
        } else {
            r = (u8)(_ZN13GulliverQuest12getPartCountEv(g) + 0x19);
        }
        break;
    case 0x17:
        break;
    case 0x18:
        _ZN12ItemPickSpec3setEii(&o, 0, 0x13);
        ItemPick_One(&h2, &o, 0, 0, 1, 1, 0);
        h0 = h2;
        ItemPickSpec_Destruct(&o);
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h0, 0, 5, 0);
        Pocket_AddItem(&h0, 0);
        r = 0x19;
        break;
    case 0x19:
        EventWeekSlots_MarkPlayer(0x44);
        break;
    }
    if (r != 0xff) {
        b = r;
        unk_3c->setNextMessage(&b, m);
    }
}

void SpNpcGulliverTalk::onChoice(u32) {
    getChoiceList()->getResult();
}

BOOL SpNpcGulliver::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcGulliver::onInteractionEvent(u32 a, u8) {
    switch (a) {
    case 0:
        talk.resetMsg();
        talk.setTalkPlayer((u32)getPlayerActor(4));
        changeAct(2);
        break;
    case 8:
        if (_ZN13GulliverQuest9isStartedEv(&data_021e58a6)) {
            changeAct(1);
        } else {
            changeAct(0);
        }
        break;
    }
}

