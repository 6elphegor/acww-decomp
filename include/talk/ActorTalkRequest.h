#ifndef TALK_ACTORTALKREQUEST_H
#define TALK_ACTORTALKREQUEST_H

#include "types.h"
#include "talk/TalkMsgRequest.h"
#include "talk/TalkStartMsg.h"

class ChoiceList;
class Unk_02015b8c_Scene;

// Talk request of an actor conversation (0xac bytes; vtable 0x020d7710): TalkMsgRequest plus the two talking actors,
// emotion state, the deferred task runner and the sub-scene parameters (0x64..0xa8). Base of the SpNpc*Talk /
// VillagerTalk requests (overlays 4, 45..88). Defined in src/main/unk_020119cc.cpp (0x020156ac..0x02015b54; the task
// / sub-scene half at 0x02014d90.. is named Unk_020d7710 in symbols.txt, see talk/Unk_020d7710.h).
class ActorTalkRequest : public TalkMsgRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void resetMsg();
    virtual void onConditionTag();
    virtual void onEventTag(u32 id);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual s32 getVoiceType();
    virtual void start(TalkStartMsg *out) = 0;  // 0x78
    virtual void runDeferred();                 // 0x7c
    virtual void update();                      // 0x80
    virtual void onTaskDone(u32 id);            // 0x84 (called by the task runner with the finished task id)

    u8 getSpeakerIndex();
    Unk_02015b8c_Scene *getSpeakerActor();
    Unk_02015b8c_Scene *getActorB(u32 idx);
    Unk_02015b8c_Scene *getActionActor();
    Unk_02015b8c_Scene *getActor(u32 idx);
    void setSlotFromString(u32 a, u32 b, u32 c);
    void setItemNameSlot(u32 a, u32 b, u32 c);
    void setVillagerNameSlot(u32 a, u32 b);
    void setPlayerNameSlot(u32 a, u32 b);
    void setTownNameSlot(u32 a, u32 b);
    void setDaySlot(u32 a, u32 b);
    void setMonthSlot(u32 a, u32 b);
    void setFixedPointSlot(s32 a, u32 b, s32 c);
    void setNumberNamedSlot(s32 a, u32 b, s32 c, u8 d, s32 e, s32 f);
    void setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e);
    BOOL isItemActionBusy();
    void clearItemActionBusy();
    void setItemActionBusy();
    void playEmotion(u32 a, u32 b);
    ChoiceList *getChoiceList();
    void setOwnerActor(Unk_02015b8c_Scene *p);
    Unk_02015b8c_Scene *getPartnerActor();
    void setPartnerActor(Unk_02015b8c_Scene *p);
    void *func_02015aac();
    void func_02015ab0(u32 a);
    void tick();

    /* 0x44 */ u32 unk_44;
    /* 0x48 */ Unk_02015b8c_Scene *unk_48;      // owner actor (speaker 0)
    /* 0x4c */ Unk_02015b8c_Scene *unk_4c;      // partner actor (speaker 1)
    /* 0x50 */ u8 unk_50;                       // actor index the action tags apply to
    /* 0x51 */ u8 speakerIndex;
    /* 0x52 */ u8 pad_52[6];
    /* 0x58 */ u32 lastEmotion;
    /* 0x5c */ u8 itemActionBusy;
    /* 0x60 */ u32 unk_60;                      // running task id (0xc = none)
    // 0x64..0xa7: sub-scene parameters (TalkSubSceneParams; Unk_020d7710::initSubSceneParams)
    /* 0x64 */ s32 subSceneType;
    /* 0x68 */ u32 menuPtrArg0;
    /* 0x6c */ u32 menuPtrArg1;
    /* 0x70 */ u32 menu12Arg;
    /* 0x74 */ u32 pocketFilter;
    /* 0x78 */ u16 pocketMask;
    /* 0x7a */ u16 unk_7a;                      // sub-scene item
    /* 0x7c */ u32 handOverKind;
    /* 0x80 */ u8 unk_80;                       // pocket select mode
    /* 0x81 */ u8 pad_81;
    /* 0x82 */ u8 launcherMenu;
    /* 0x83 */ u8 launcherIndex;
    /* 0x84 */ u8 keepWindowClosed;
    /* 0x85 */ u8 pad_85[0x0b];
    /* 0x90 */ u8 handOverMode;
    /* 0x91 */ u8 pad_91[3];
    /* 0x94 */ u32 handOverVariant;
    /* 0x98 */ u32 launcherText;
    /* 0x9c */ u32 launcherTextSize;
    /* 0xa0 */ u32 unk_a0;                      // focusNewSpeaker (0xa0), unk_3d (0xa1)
    /* 0xa4 */ u32 closeMode;
    /* 0xa8 */ u8 taskStep;                     // step of the running task (Unk_020d7710::runTask)
    /* 0xa9 */ u8 taskRunning;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 pad_ab;
};

#endif
