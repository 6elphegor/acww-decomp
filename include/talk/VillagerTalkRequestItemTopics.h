#ifndef TALK_VILLAGERTALKREQUESTITEMTOPICS_H
#define TALK_VILLAGERTALKREQUESTITEMTOPICS_H

#include "types.h"

struct Unk_020238b0_Out;
class VillagerActor;
class VillagerTalkRequestItemTopics;

typedef void (VillagerTalkRequestItemTopics::*Unk_020238b0_Fn)();
typedef void (VillagerTalkRequestItemTopics::*Unk_020238b0_OutFn)(Unk_020238b0_Out *);

// Villager talk topics of the item request / errand chain (Q* states: hand over item, return, clear, reward); the
// root of the ov069 topic chain (... <- Hobby <- Holiday <- RequestReply <- Topics). All of them are views of the
// VillagerTalk object (0x1a0 bytes, talk/VillagerTalk.h) with member pointers of this class; the fields are the union
// of what the topic functions use. Members defined in src/main/unk_0201c050.cpp.
class VillagerTalkRequestItemTopics {
public:
    void openArbeitItemPicker();
    void clearRequest();
    void selectQComp(Unk_020238b0_Out *out);
    void selectQReturn(Unk_020238b0_Out *out);
    void finishRequestChain();
    void selectQEnd(Unk_020238b0_Out *out);
    void selectQClear(Unk_020238b0_Out *out);
    void gotoQClearOrEnd();
    void handOverQItemB();
    void selectQItemB(Unk_020238b0_Out *out);
    void pickRequestReward();
    void gotoQItemB();

    /* 0x000 */ u8 pad_00[0x3c];
    /* 0x03c */ void *window;
    /* 0x040 */ u8 pad_40[0xac - 0x40];
    /* 0x0ac */ Unk_020238b0_OutFn selectFn;
    /* 0x0b4 */ u8 pad_b4[0xc4 - 0xb4];
    /* 0x0c4 */ Unk_020238b0_Fn onEndFn;
    /* 0x0cc */ u8 pad_cc[0xec - 0xcc];
    /* 0x0ec */ Unk_020238b0_Fn unk_ec;
    /* 0x0f4 */ Unk_020238b0_Fn closeFn;
    /* 0x0fc */ VillagerActor *actor;
    /* 0x100 */ u8 topicFile[0x11e - 0x100];
    /* 0x11e */ u8 topicIndex;
    /* 0x11f */ u8 pad_11f;
    /* 0x120 */ u16 itemFromPlayer;
    /* 0x122 */ u8 pad_122[2];
    /* 0x124 */ s32 memoryIndex;
    /* 0x128 */ union { void *memory; void *unk_128_p; u32 unk_128; };
    /* 0x12c */ u32 partnerMemoryIndex;
    /* 0x130 */ u32 partnerMemory;
    /* 0x134 */ union { void *unk_134; u32 unk_134_w; };
    /* 0x138 */ u8 noMemoryUpdate;
    /* 0x139 */ u8 pad_139[3];
    /* 0x13c */ void *choiceValues[5];
    /* 0x150 */ u8 pad_150[0x154 - 0x150];
    /* 0x154 */ u8 deliveryMinutes;
    /* 0x155 */ u8 deliveryTimeIndex;
    /* 0x156 */ u16 pendingSe;
    /* 0x158 */ void *deliveryRecipient;
    /* 0x15c */ union { void *errandSlot; u32 unk_15c_w; };
    /* 0x160 */ void *planErrand;
    /* 0x164 */ u8 pad_164[0x168 - 0x164];
    /* 0x168 */ Unk_020238b0_Fn customFn0;
    /* 0x170 */ Unk_020238b0_Fn customFn1;
    /* 0x178 */ Unk_020238b0_Fn customFn2;
    /* 0x180 */ Unk_020238b0_Fn customFn3;
    /* 0x188 */ Unk_020238b0_Fn customFn4;
    /* 0x190 */ u8 partnerMask;
    /* 0x191 */ u8 pad_191[3];
    /* 0x194 */ s32 partnerCount;
    /* 0x198 */ u16 itemToPlayer;
    /* 0x19a */ u8 itemToPlayerIsReceived;
    /* 0x19b */ u8 pad_19b;
    /* 0x19c */ union { s32 price; void *unk_19c_p; u32 unk_19c_w; };
};

#endif // TALK_VILLAGERTALKREQUESTITEMTOPICS_H
