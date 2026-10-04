#ifndef NPC_UNK_02014254_H
#define NPC_UNK_02014254_H

#include "types.h"
#include "npc/NpcTalkCtrl.h"

// 0x28-byte talk controller member of NpcActor (talkCtrl, +0x618): an NpcTalkCtrl with its own (empty) constructor
// and destructor. Defined in main, unk_020119cc.cpp (C1 0x02014254; D1 0x02014250 = NpcTalkCtrl_Destroy).
class Unk_02014254 : public NpcTalkCtrl {
public:
    Unk_02014254();
    ~Unk_02014254();
};

#endif
