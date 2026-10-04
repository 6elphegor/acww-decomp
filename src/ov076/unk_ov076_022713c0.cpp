// mwcc-flags: -str reuse
#include "types.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/ActorTalkRequest.h"
#include "talk/SpNpcTalkRequest.h"
#include "item/ItemPickSpec.h"
#include "actor/ActorProfile.h"


class ActorTalkRequest;
class SpNpcPascal;
class SpNpcPascalTalk;


struct Unk_ov076_Vec {
    s32 x, y, z;
};

struct Unk_ov076_02271864_Msg {
    u8 msgIndex;
    u8 unk_01;
    u16 item;
};

struct Unk_ov076_02271a3c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};


extern "C" {
void _ZN16ActorTalkRequest15requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setPocketFilterEjjj(void *p, BOOL (*cb)(u16 *, s32), u32 a, u32 b);
void _ZN16ActorTalkRequest12openSubSceneEi(void *p, s32 v);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *self, s32 a);
void _ZN9NpcLookAt7disableEv(void *self);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *self, s32 a, s32 b, u32 c, s32 d, s32 e);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
s32 _ZN11NpcAnimCtrl9getAnimIdEj(void *self, s32 a);
BOOL _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(void *self, void *o);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, s32 a, s32 b, s32 c);
s32 Random_GlobalBelow(s32 a);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void Pocket_AddItem(u16 *, s32);
void Pocket_RemoveItem();
s32 Pocket_FindEmpty();
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 MenuCtrl_BuildPocketMask(BOOL (*cb)(u16 *, s32));
s32 MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void EventWeekSlots_MarkPlayer(u32 id);
void TalkRequest_SetTargetDone(void *self);
void Math_StepAngle(void *a, s32 b, s32 c);
void ProcBase_RequestDelete(void *self);
void FieldFish_ScareAround(Unk_ov076_Vec *v, s32 a);
void Effect_Create(s32 a, Unk_ov076_Vec *v, s32 b, s32 c);
void Snd_SeEmitterPlayOneShotAlt(void *self, s32 a, s32 b, s32 c);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u32 gVec3Zero;
extern u32 __ptmf_null[];
}






class SpNpcPascalTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcPascalTalk::*Fn)();

    SpNpcPascalTalk();
    virtual ~SpNpcPascalTalk();
    virtual void resetMsg();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone(u32 id);

    void attachOwner(SpNpcPascal *o);
    void onScallopPicked();
    void setResultHandler(s32 i);

    s32 topic;
    SpNpcPascal *owner;
    u16 giftItem;
    Fn resultHandler;
};




struct Unk_020d77a4_Vec3;




class SpNpcPascal : public SpNpcActor {
public:
    SpNpcPascal() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 v, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct00();
    BOOL setupAct00();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    void changeAct(s32 state);

    u8 pad_652[2];
    s32 unk_654;
    SpNpcPascalTalk talk;
    u8 giftGiven;
    u8 pad_719;
    u16 homeAngle;
    s32 diveStartZ;
    s16 spinSpeed;
    u8 pad_722[2];
};

struct Unk_ov076_02271d20_Ent {
    BOOL (SpNpcPascal::*enter)();
    BOOL (SpNpcPascal::*exit)();
};


struct Unk_ov076_02271f44_Ent {
    const char *a;
    u8 b;
    u8 pad[3];
};

static inline BOOL Unk_ov076_IsItem(u16 *p, u16 k) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        u16 v = k;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == k) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

extern "C" {
extern Unk_ov076_02271d20_Ent sSpNpcPascalActTable[6];
extern u8 sSpNpcPascalKey[];
extern u8 sSpNpcPascalModelPath[];
extern u8 sSpNpcPascalTexturePath[];
extern const Unk_ov076_02271f44_Ent sSpNpcPascalTopicMsgs[3];
BOOL SpNpcPascal_IsScallop(u16 *p, s32 x);
SpNpcPascal *SpNpcPascal_Create();
}

typedef BOOL (SpNpcPascal::*Unk_ov076_Fn)();
extern "C" {
void _ZN11SpNpcPascal9mainAct03Ev();
void _ZN11SpNpcPascal10setupAct05Ev();
void _ZN11SpNpcPascal9mainAct05Ev();
void _ZN11SpNpcPascal9mainAct04Ev();
void _ZN11SpNpcPascal9mainAct01Ev();
void _ZN11SpNpcPascal10setupAct04Ev();
void _ZN11SpNpcPascal10setupAct03Ev();
void _ZN11SpNpcPascal9mainAct02Ev();
void _ZN11SpNpcPascal10setupAct00Ev();
void _ZN11SpNpcPascal10setupAct01Ev();
void _ZN11SpNpcPascal9mainAct00Ev();
}
// ---------------------------------------------------------------------------------------------------------------------

SpNpcPascal *SpNpcPascal_Create() {
    return new SpNpcPascal();
}

BOOL SpNpcPascal::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcPascal::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    collider.groups |= 2;
    homeAngle = rotY;
    changeAct(0);
    return TRUE;
}

u8 *SpNpcPascal::getTexturePath() { return sSpNpcPascalTexturePath; }

u8 *SpNpcPascal::getModelPath() { return sSpNpcPascalModelPath; }

BOOL SpNpcPascal::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcPascalActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcPascalActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcPascal::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcPascalActTable[state].enter != NULL) {
        ok = (this->*sSpNpcPascalActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcPascal::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcPascal::mainAct00() { return TRUE; }

BOOL SpNpcPascal::setupAct01() {
    void *p = talk.getTalkPlayer();
    u32 r = 0;
    if (p != NULL) {
        r = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, r, 0);
    return TRUE;
}

BOOL SpNpcPascal::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcPascal::mainAct02() { return TRUE; }

BOOL SpNpcPascal::setupAct03() {
    if (giftGiven == 1) {
        homeAngle = homeAngle + 0x8000;
    }
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 1, 0, 0, 0, (s16)homeAngle, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcPascal::mainAct03() {
    if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            if (giftGiven == 0) {
                changeAct(0);
            } else {
                changeAct(4);
            }
        }
    }
    return TRUE;
}

BOOL SpNpcPascal::setupAct04() {
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0xf9, 1, 0, 0);
    Snd_SeEmitterPlayOneShotAlt(&seEmitter, 0x814, 0x7f, 0);
    rotY = rotY + 0x8000;
    moveAngleY = rotY;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, rotY);
    s32 t = -(rotY / 6);
    if (t < 0) {
        t = -t;
    }
    spinSpeed = t;
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 0, 0, 0, (s32)&gVec3Zero, 4, data_020c6d1c, 1);
    diveStartZ = position.z;
    return TRUE;
}

BOOL SpNpcPascal::mainAct04() {
    Unk_ov076_Vec v;
    if (_ZN11NpcAnimCtrl9getAnimIdEj(&animCtrl, 0) == 0xf9 &&
        _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&animCtrl, this)) {
        changeAct(5);
    } else {
        if (_ZN11NpcAnimCtrl9getAnimIdEj(&animCtrl, 0) == 0xf9 && ((Unk_ov076_02271a3c_Bits *)((u8 *)this + 0x190))->mid == 0xb) {
            *((u8 *)this + 0x511) = 0;
            *((u8 *)this + 0x510) = 0;
        }
        Math_StepAngle(&rotY, 0, spinSpeed);
        if (((Unk_ov076_02271a3c_Bits *)((u8 *)this + 0x190))->mid == 0x1b) {
            Unk_ov076_Vec *pv = (Unk_ov076_Vec *)&position;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            v.y = 0;
            v.z = v.z + 0x3800;
            FieldFish_ScareAround(&v, 0x5000);
            Effect_Create(0x16, &v, 0, 0);
            Snd_SeEmitterPlayOneShotAlt(&seEmitter, 0x7ed, 0x7f, 0);
        }
    }
    moveAngleY = rotY;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, rotY);
    return TRUE;
}

BOOL SpNpcPascal::setupAct05() {
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0xfa, 0, 0, 0);
    _ZN9NpcLookAt7disableEv(&lookAt);
    rotY = 0;
    moveAngleY = 0;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, 0);
    position.z += 0x4000;
    return TRUE;
}

BOOL SpNpcPascal::mainAct05() {
    moveAngleY = 0;
    rotY = 0;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, 0);
    position.z += 0xeb;
    if (position.z > diveStartZ + 0x14000) {
        ProcBase_RequestDelete(this);
    }
    return TRUE;
}

void SpNpcPascalTalk::onTaskDone(u32) {
    if (resultHandler) {
        (this->*resultHandler)();
        resultHandler = *(Fn *)__ptmf_null;
    }
}

void SpNpcPascalTalk::setResultHandler(s32 i) {
    static Fn tbl[1] = {&SpNpcPascalTalk::onScallopPicked};
    resultHandler = tbl[i];
}

extern "C" BOOL SpNpcPascal_IsScallop(u16 *p, s32 x) {
    if (x == 0) {
        return Unk_ov076_IsItem(p, 0x1559);
    }
    return FALSE;
}

void SpNpcPascalTalk::onScallopPicked() {
    TalkWindowState *r4 = window;
    Unk_ov076_02271864_Msg m;
    m.msgIndex = 5;
    if (MenuCtrl_IsResultOk()) {
        if (MenuCtrl_GetIndex() >= 0) {
            Pocket_RemoveItem();
        }
        m.item = 0x1559;
        _ZN16ActorTalkRequest15requestTakeItemEPtjjj(this, &m.item, 0, 5, 0);
        m.msgIndex = 6;
    }
    r4->setNextMessage(&m.msgIndex, sSpNpcPascalKey);
}

SpNpcPascalTalk::SpNpcPascalTalk() {
    giftItem = 0xfff1;
}

SpNpcPascalTalk::~SpNpcPascalTalk() {}

void SpNpcPascalTalk::resetMsg() {
    ActorTalkRequest::resetMsg();
    resultHandler = *(Fn *)__ptmf_null;
}

void SpNpcPascalTalk::attachOwner(SpNpcPascal *o) {
    resetMsg();
    owner = o;
    owner->giftGiven = 0;
    topic = 0;
}

void SpNpcPascalTalk::start(TalkStartMsg *a) {
    TalkStartMsg *out = (TalkStartMsg *)a;
    if (MenuCtrl_BuildPocketMask(SpNpcPascal_IsScallop)) {
        topic = 0;
    } else if (Random_GlobalBelow(2) == 0) {
        topic = 1;
    } else {
        topic = 2;
    }
    if (topic >= 0 && topic < 3) {
        out->msgIndex = sSpNpcPascalTopicMsgs[topic].b;
        out->msgKey = (const char *)sSpNpcPascalTopicMsgs[topic].a;
    }
}

void SpNpcPascalTalk::onMessageEnd(u32) {
    u8 *tag = sSpNpcPascalKey;
    u8 code = 0xff;
    u8 msg;
    u16 oa, ob, oc, v;
    s32 t0 = msgIndex;
    if (t0 == 0xfe || (t0 >= 0xf && t0 <= 0xfd)) {
        code = (u8)(Random_GlobalBelow(2) + 0xd);
    }
    switch (msgIndex) {
    case 4:
        _ZN16ActorTalkRequest15setPocketFilterEjjj(this, SpNpcPascal_IsScallop, 0xd, 0);
        _ZN16ActorTalkRequest12openSubSceneEi(this, 0);
        setResultHandler(0);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        break;
    case 10:
    case 11:
        if (msgIndex == 10) {
            giftItem = 0x4a38;
        } else {
            giftItem = 0x1373;
        }
        _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &giftItem, 0, 5, 0);
        Pocket_AddItem(&giftItem, 0);
        owner->giftGiven = 1;
        Talk_CheckAndSetPlayerFlag(0x18, 1);
        code = 0xc;
        break;
    case 12:
        BOOL ok;
        if (Item_IsFurniture(&giftItem)) {
            v = 0x4a38;
            if (Item_GetFurnitureIndex(&giftItem) == Item_GetFurnitureIndex(&v)) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        } else {
            if (giftItem == 0x4a38) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        }
        if (ok) {
            code = 0x33;
        } else {
            code = 0xfd;
        }
        break;
    case 13:
    case 14:
        if (owner->giftGiven == 0) {
            if (Pocket_FindEmpty() >= 0) {
                s32 t = Random_GlobalBelow(9);
                if (t <= 6) {
                    ItemPickSpec o0;
                    o0.set(0, 0x15);
                    ItemPick_One(&oa, &o0, 0, 0, 1, 1, 0);
                    giftItem = oa;
                } else if (t == 7) {
                    ItemPickSpec o1;
                    o1.set(4, 0x15);
                    ItemPick_One(&ob, &o1, 0, 0, 1, 1, 0);
                    giftItem = ob;
                } else {
                    ItemPickSpec o2;
                    o2.set(3, 0x15);
                    ItemPick_One(&oc, &o2, 0, 0, 1, 1, 0);
                    giftItem = oc;
                }
                _ZN16ActorTalkRequest15requestGiveItemEPtjjj(this, &giftItem, 0, 5, 0);
                Pocket_AddItem(&giftItem, 0);
                Talk_CheckAndSetPlayerFlag(0x18, 1);
            }
            owner->giftGiven = 1;
        }
        EventWeekSlots_MarkPlayer(0x42);
        break;
    }
    if (code != 0xff) {
        msg = code;
        window->setNextMessage(&msg, tag);
    }
}

void SpNpcPascalTalk::onChoice(u32) {
    s32 mode = getChoiceList()->getResult();
    u8 *tag = sSpNpcPascalKey;
    u8 code = 0xff;
    switch (msgIndex) {
    case 0:
    case 1:
        if (mode == 0) {
            code = (u8)(Random_GlobalBelow(0xef) + 0xf);
        } else {
            code = 5;
        }
        break;
    case 2:
        if (mode == 2) {
            code = 4;
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        if (mode == 0) {
            code = 0xb;
        } else if (mode == 1) {
            code = 9;
        } else {
            code = 0xa;
        }
        break;
    }
    if (code != 0xff) {
        u8 b = code;
        window->setNextMessage(&b, tag);
    }
}

BOOL SpNpcPascal::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (Talk_CheckAndSetPlayerFlag(0x18, r) == 1) {
        return r;
    }
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcPascal::onInteractionEvent(u32 a, u8) {
    switch (a) {
    case 0:
        talk.resetMsg();
        talk.setTalkPlayer((u32)getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        if (giftGiven != 0) {
            changeAct(4);
        } else {
            changeAct(3);
        }
        break;
    }
}

// Data (definition order sets the layout)
extern "C" const Unk_ov076_02271f44_Ent sSpNpcPascalTopicMsgs[3] = {
    {(const char *)sSpNpcPascalKey, 2}, {(const char *)sSpNpcPascalKey, 0}, {(const char *)sSpNpcPascalKey, 1},
};

extern "C" u8 sSpNpcPascalKey[16] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'o', 't', 't', 'e', 'r', 0};

extern "C" u8 sSpNpcPascalModelPath[24] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'o', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" ActorProfile sSpNpcPascalProfile = {(void *(*)())SpNpcPascal_Create, 0x68, 0x6e, 2, 0x5000, 0x5000, 0x3e800};

extern "C" u8 sSpNpcPascalTexturePath[28] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'o', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

void *data_ov076_02272070[2] = {(void *)_ZN11SpNpcPascal10setupAct01Ev, 0};
void *data_ov076_02272068[2] = {(void *)_ZN11SpNpcPascal10setupAct00Ev, 0};
void *data_ov076_02272038[2] = {(void *)_ZN11SpNpcPascal9mainAct05Ev, 0};
void *data_ov076_02272058[2] = {(void *)_ZN11SpNpcPascal10setupAct03Ev, 0};
void *data_ov076_02272050[2] = {(void *)_ZN11SpNpcPascal10setupAct04Ev, 0};
void *data_ov076_02272048[2] = {(void *)_ZN11SpNpcPascal9mainAct01Ev, 0};
void *data_ov076_02272060[2] = {(void *)_ZN11SpNpcPascal9mainAct02Ev, 0};
void *data_ov076_02272078[2] = {(void *)_ZN11SpNpcPascal9mainAct00Ev, 0};
void *data_ov076_02272020[2] = {(void *)_ZN11SpNpcPascal9mainAct03Ev, 0};
void *data_ov076_02272030[2] = {(void *)_ZN11SpNpcPascal10setupAct05Ev, 0};
void *data_ov076_02272040[2] = {(void *)_ZN11SpNpcPascal9mainAct04Ev, 0};

Unk_ov076_02271d20_Ent sSpNpcPascalActTable[6] = {
    {*(Unk_ov076_Fn *)data_ov076_02272068, *(Unk_ov076_Fn *)data_ov076_02272078},
    {*(Unk_ov076_Fn *)data_ov076_02272070, *(Unk_ov076_Fn *)data_ov076_02272048},
    {NULL, *(Unk_ov076_Fn *)data_ov076_02272060},
    {*(Unk_ov076_Fn *)data_ov076_02272058, *(Unk_ov076_Fn *)data_ov076_02272020},
    {*(Unk_ov076_Fn *)data_ov076_02272050, *(Unk_ov076_Fn *)data_ov076_02272040},
    {*(Unk_ov076_Fn *)data_ov076_02272030, *(Unk_ov076_Fn *)data_ov076_02272038},
};
