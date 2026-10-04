#ifndef TALK_ACTORTALKREQUEST_H
#define TALK_ACTORTALKREQUEST_H

#include "types.h"
#include "talk/TalkMsgRequest.h"
#include "talk/TalkStartMsg.h"

class ChoiceList;
class NpcActor;
struct TalkSubSceneParams;
struct Unk_02014420_Vec2;

// Talk request of an actor conversation (0xac bytes; vtable 0x020d7710): TalkMsgRequest plus the two talking actors,
// emotion state, the deferred task runner and the sub-scene parameters (0x64..0xa8). Base of the SpNpc*Talk /
// VillagerTalk requests (overlays 4, 45..88). Defined in src/main/unk_020119cc.cpp (0x02014d90..0x02015b54; the
// task / sub-scene half 0x02014d90..0x02015624 was the placeholder class Unk_020d7710 until H06 folded it in;
// tasks: sub-scene (menus), close / reopen the talk window, give an item).
class ActorTalkRequest : public TalkMsgRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void resetMsg();
    virtual void onConditionTag(u32 condition, u32 branchCount);
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
    NpcActor *getSpeakerActor();
    NpcActor *getActorB(u32 idx);
    NpcActor *getActionActor();
    NpcActor *getActor(u32 idx);
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
    void setOwnerActor(NpcActor *p);
    NpcActor *getPartnerActor();
    void setPartnerActor(NpcActor *p);
    void *getTalkPlayer();
    void setTalkPlayer(u32 a);
    void tick();
    // switch-speaker task and the item / melody tasks (0x02014258..0x02014d90, unk_02013b10.cpp / unk_02014420.cpp parts
    // of src/main/unk_020119cc.cpp; started through the task runner of Unk_020d7710)
    BOOL taskSwitchSpeaker();
    BOOL switchSpeakerSwap();
    BOOL switchSpeakerFocus();
    BOOL switchSpeakerClose();
    BOOL requestSwitchSpeaker(u8 v);
    BOOL taskMelody();
    BOOL melodyStart();
    BOOL melodyWait();
    BOOL melodyEnd();
    BOOL taskEatItem();
    BOOL eatItemStart();
    BOOL eatItemWait();
    BOOL taskItemAct12();
    BOOL itemAct12Start();
    BOOL itemAct12Wait();
    BOOL taskReturnItem();
    BOOL returnItemStart();
    BOOL returnItemWait();
    BOOL taskKeepItem();
    BOOL keepItemStart();
    BOOL keepItemWait();
    BOOL taskItemAct0F();
    BOOL itemAct0FStart();
    BOOL itemAct0FWait();
    BOOL taskTakeItem();
    BOOL takeItemStart();
    BOOL takeItemWait();
    BOOL taskGiveItem();
    BOOL requestPlayRandomMelody();
    BOOL requestPlayMelody(Unk_02014420_Vec2 *p);
    BOOL requestEatItem();
    BOOL requestItemAct12();
    BOOL requestReturnItem();
    BOOL requestKeepItem();
    BOOL requestItemAct0F();
    BOOL requestTakeItem(u16 *a, u32 b, u32 c, u32 d);

    // task / sub-scene half (0x02014d90..0x02015624)
    BOOL giveItemWait();
    BOOL giveItemStart();
    BOOL requestGiveItem(u16 *item, u32 kind, u32 mode, u32 variant);
    BOOL taskCloseWindow();
    BOOL closeWindowWait();
    BOOL closeWindowStart();
    BOOL requestCloseWindow(u32 mode);
    BOOL taskReopenWindow();
    BOOL requestReopenWindow();
    BOOL taskSubScene();
    BOOL subSceneWait();
    BOOL subSceneOpen();
    BOOL subSceneCloseWindow();
    void setSubSceneKind2(u32 a, u32 b, u32 c, u8 d);
    void setMenu12Arg(u32 a, u32 b);
    void setSelectionList(u32 a, u32 b, u32 c);
    void setSubSceneKindArg(u32 a, u32 b, u32 c);
    void setSubSceneKind(u32 a, u32 b);
    void setPocketFilter(u32 a, u32 b, u32 c);
    void setPocketItem(u32 a, u32 b, u32 c);
    BOOL openSubScene(s32 type);
    void runTask();
    BOOL isTaskRunning();
    BOOL startTask(s32 id);
    void initSubSceneParams(TalkSubSceneParams *p);
    void resetTasks();
    void makePlayerTurnTo(u8 *actor);
    void makePlayerLookAt(u8 *actor);

    /* 0x44 */ u32 talkPlayer;                  // player actor the talk / item hand-over is with
    /* 0x48 */ NpcActor *ownerActor;  // owner actor (speaker 0)
    /* 0x4c */ NpcActor *partnerActor; // partner actor (speaker 1)
    /* 0x50 */ u8 actionActorIndex;             // actor index the action tags apply to
    /* 0x51 */ u8 speakerIndex;
    /* 0x52 */ u8 pad_52[6];
    /* 0x58 */ u32 lastEmotion;
    /* 0x5c */ u8 itemActionBusy;
    /* 0x60 */ u32 taskId;                      // running task id (0xc = none)
    // 0x64..0xa7: sub-scene parameters (TalkSubSceneParams; ActorTalkRequest::initSubSceneParams)
    /* 0x64 */ s32 subSceneType;
    /* 0x68 */ u32 menuPtrArg0;
    /* 0x6c */ u32 menuPtrArg1;
    /* 0x70 */ u32 menu12Arg;
    /* 0x74 */ u32 pocketFilter;
    /* 0x78 */ u16 pocketMask;
    /* 0x7a */ u16 subSceneItem;
    /* 0x7c */ u32 handOverKind;
    /* 0x80 */ u8 pocketSelectMode;
    /* 0x81 */ u8 pad_81;
    /* 0x82 */ u8 launcherMenu;
    /* 0x83 */ u8 launcherIndex;
    /* 0x84 */ u8 keepWindowClosed;
    /* 0x85 */ u8 pad_85[3];
    /* 0x88 */ s32 melodyPattern[2];                // packed melody of the melody task (requestPlayMelody)
    /* 0x90 */ u8 handOverMode;
    /* 0x91 */ u8 pad_91[3];
    /* 0x94 */ u32 handOverVariant;
    /* 0x98 */ u32 launcherText;
    /* 0x9c */ u32 launcherTextSize;
    /* 0xa0 */ u8 focusNewSpeaker;              // switch-speaker task: refocus the camera (TalkSubSceneParams 0x3c)
    /* 0xa1 */ u8 randomMelody;                 // melody task plays a random melody (requestPlayRandomMelody; TalkSubSceneParams::unk_3d)
    /* 0xa2 */ u8 pad_a2[2];
    /* 0xa4 */ u32 closeMode;
    /* 0xa8 */ u8 taskStep;                     // step of the running task (ActorTalkRequest::runTask)
    /* 0xa9 */ u8 taskRunning;
    /* 0xaa */ u8 afterSaveMsg;                 // used only by SpNpcCopperTalk (ov048)
    /* 0xab */ u8 pad_ab;
};

#endif
