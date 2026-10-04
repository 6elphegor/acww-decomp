#ifndef TALK_VILLAGERTALK_H
#define TALK_VILLAGERTALK_H

#include "types.h"
#include "talk/Unk_020d7710.h"
#include "talk/TalkStartMsg.h"

class VillagerActor;
class VillagerTalk;

typedef void (VillagerTalk::*Unk_020d8938_Fn)();
typedef void (VillagerTalk::*Unk_020d8938_FnArg)(u32);
typedef void (VillagerTalk::*Unk_020d8938_Fn2)(u32 a, s32 b);
typedef s32 (VillagerTalk::*Unk_020d8938_FnS)();

// Topic table entry (three state functions) set by setTopicFns.
struct Unk_020d8938_Tbl {
    Unk_020d8938_Fn a;
    Unk_020d8938_Fn b;
    Unk_020d8938_Fn c;
};

// Villager talk request (0x1a0 bytes, vtable 0x020d8930; member at 0x680 of VillagerActor): topic state functions,
// item hand-over state, memory / partner indices, choice values. Base of the event villagers' talk requests (ov004,
// ov068). Defined in src/main/unk_0201c050.cpp, which keeps its own copy (its slots onTag09_9 / onScannedTag return
// values, see C04's notes); the slot signatures here are the shared ones.
class VillagerTalk : public Unk_020d7710 {
public:
    VillagerTalk();
    virtual ~VillagerTalk();
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void onActionTag0();
    virtual void onActionTag1(u32 arg);
    virtual void onActionTag2(u32 arg);
    virtual void onActionTag3(u32 arg);
    virtual void onActionTag4(u32 arg);
    virtual void onTag09_9();
    virtual u32 getSpeakerData();
    virtual void onWindowClose();
    virtual void start(TalkStartMsg *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone(u32 id);

    // the three functions at 0x0201c7d4..0x0201c7dc: symbols.txt names them as members of this class; they are the
    // slots vfunc_b4 / vfunc_b8 / vfunc_bc of VillagerActor (labels _ZN13VillagerActor8vfunc_b4Ev ...)
    s32 vfunc_144();
    s32 vfunc_148();
    s32 vfunc_14c();
    u8 getEventKind();
    void refreshEventKind();
    BOOL hasPartner();
    u8 isInvitedByPartner();
    void setInvitedByPartner(u8 v);
    u32 getPartner();
    void setPartner(u32 v);
    void setupChoiceMenu(void *t_);
    void clearChoiceValues();
    s32 runMsgAttrHandler(u32 idx);
    s32 runCustomFn4();
    s32 runCustomFn3();
    s32 runCustomFn2();
    s32 runCustomFn1();
    s32 runCustomFn0();
    void setConstellationSlots();
    s32 attrOpenBirthdayEntry();
    s32 setHiraganaOff();
    s32 setHiraganaOn();
    s32 giveItemToPlayer();
    void showMoneyItem();
    s32 sellItemToPlayer();
    void receiveItemB();
    s32 swapItemWithPlayer();
    void receiveItem();
    s32 buyItemFromPlayer();
    s32 attrPlayMemoryTune();
    s32 attrShowLetter();
    s32 attrGiveItem();
    u32 getUnk150();
    void setUnk150(u32 v);
    void *getActorByIndex(s32 idx);
    void setChoiceFn(Unk_020d8938_Fn fn);
    void setTopicFns(Unk_020d8938_Tbl *t);
    void clearTopicFns();
    void setDeferredFn(Unk_020d8938_Fn fn);
    void setNextTaskDoneFn(Unk_020d8938_Fn fn);
    void setTaskDoneFn(Unk_020d8938_Fn fn);
    void begin(VillagerActor *owner, u32 idx);
    void setSpeakerStateUnk(void *arg);

    /* 0x0ac */ Unk_020d8938_Fn selectFn;
    /* 0x0b4 */ union { Unk_020d8938_Fn unk_b4; Unk_020d8938_FnArg unk_b4_a; };
    /* 0x0bc */ union { Unk_020d8938_Fn unk_bc; Unk_020d8938_FnArg unk_bc_a; };
    /* 0x0c4 */ union { Unk_020d8938_Fn unk_c4; Unk_020d8938_FnArg unk_c4_a; };
    /* 0x0cc */ union { Unk_020d8938_Fn unk_cc; Unk_020d8938_Fn2 unk_cc_2; };
    /* 0x0d4 */ Unk_020d8938_Fn taskDoneFn;
    /* 0x0dc */ Unk_020d8938_Fn nextTaskDoneFn;
    /* 0x0e4 */ Unk_020d8938_Fn deferredFn;
    /* 0x0ec */ Unk_020d8938_Fn unk_ec;
    /* 0x0f4 */ Unk_020d8938_Fn closeFn;
    /* 0x0fc */ VillagerActor *actor;
    /* 0x100 */ u8 pad_100[0x120 - 0x100];
    /* 0x120 */ u16 itemFromPlayer;
    /* 0x122 */ u8 pad_122[2];
    /* 0x124 */ s32 memoryIndex;
    /* 0x128 */ union { s32 unk_128; void *unk_128_p; };
    /* 0x12c */ s32 partnerMemoryIndex;
    /* 0x130 */ union { s32 unk_130; void *unk_130_p; };
    /* 0x134 */ union { s32 unk_134; u8 *unk_134_p; };
    /* 0x138 */ u8 unk_138;
    /* 0x139 */ u8 pad_139[3];
    /* 0x13c */ s32 choiceValues[5];
    /* 0x150 */ u32 errandRecord;
    /* 0x154 */ u8 unk_154;
    /* 0x155 */ u8 unk_155;
    /* 0x156 */ u16 unk_156;
    /* 0x158 */ u32 unk_158;
    /* 0x15c */ u32 unk_15c;
    /* 0x160 */ u32 unk_160;
    /* 0x164 */ u32 unk_164;
    /* 0x168 */ union { Unk_020d8938_Fn unk_168; Unk_020d8938_FnS unk_168_s; };
    /* 0x170 */ union { Unk_020d8938_Fn unk_170; Unk_020d8938_FnS unk_170_s; };
    /* 0x178 */ union { Unk_020d8938_Fn unk_178; Unk_020d8938_FnS unk_178_s; };
    /* 0x180 */ union { Unk_020d8938_Fn unk_180; Unk_020d8938_FnS unk_180_s; };
    /* 0x188 */ union { Unk_020d8938_Fn unk_188; Unk_020d8938_FnS unk_188_s; };
    /* 0x190 */ u8 pad_190[8];
    /* 0x198 */ u16 itemToPlayer;
    /* 0x19a */ u8 itemToPlayerIsReceived;
    /* 0x19b */ u8 pad_19b;
    /* 0x19c */ union { u32 unk_19c; s32 unk_19c_s; };
};

#endif
