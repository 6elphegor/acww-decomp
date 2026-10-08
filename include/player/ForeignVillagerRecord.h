#ifndef PLAYER_FOREIGNVILLAGERRECORD_H
#define PLAYER_FOREIGNVILLAGERRECORD_H

#include "types.h"
#include "save/TownId.h"
#include "npc/VillagerId.h"

// A villager who moved to another player's town and writes from there (PlayerData::foreignVillagerRecord, 0x1a
// bytes): its town, its id, the present and its friendship. Defined in src/main/unk_02098d20.cpp.
class ForeignVillagerRecord {
public:
    ForeignVillagerRecord();
    ~ForeignVillagerRecord();
    /* 0x00 */ TownId town;
    /* 0x0a */ VillagerId villager;
    /* 0x16 */ u16 present;
    /* 0x18 */ s8 friendship;

    BOOL offer(void *a1, s32 a2, void *a3);
    void set(void *a1, s32 a2, void *a3, u16 *p);
    BOOL isSet();
    void clear();
};

#endif
