#ifndef TALK_VILLAGERTALKREQUESTITEMTOPICS_H
#define TALK_VILLAGERTALKREQUESTITEMTOPICS_H

#include "types.h"

struct Unk_020238b0_Out;
struct Unk_020238b0_Parent;
class VillagerTalkRequestItemTopics;

typedef void (VillagerTalkRequestItemTopics::*Unk_020238b0_Fn)();
typedef void (VillagerTalkRequestItemTopics::*Unk_020238b0_OutFn)(Unk_020238b0_Out *);

// Villager talk topics of the item request / errand chain (Q* states: hand over item, return, clear, reward);
// a base of VillagerTalkRequestStartTopics (ov069). Members defined in src/main/unk_0201c050.cpp.
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
    /* 0x0cc */ u8 pad_cc[0xfc - 0xcc];
    /* 0x0fc */ Unk_020238b0_Parent *actor;
    /* 0x100 */ u8 topicFile[0x11e - 0x100];
    /* 0x11e */ u8 topicIndex;
    /* 0x11f */ u8 pad_11f;
    /* 0x120 */ u16 itemFromPlayer;
    /* 0x122 */ u8 pad_122[2];
    /* 0x124 */ s32 memoryIndex;
    /* 0x128 */ void *memory;
    /* 0x12c */ u8 pad_12c[0x156 - 0x12c];
    /* 0x156 */ u16 pendingSe;
    /* 0x158 */ u8 pad_158[0x160 - 0x158];
    /* 0x160 */ void *planErrand;
    /* 0x164 */ u8 pad_164[0x198 - 0x164];
    /* 0x198 */ u16 itemToPlayer;
    /* 0x19a */ u8 pad_19a[2];
    /* 0x19c */ s32 price;
};

#endif // TALK_VILLAGERTALKREQUESTITEMTOPICS_H
