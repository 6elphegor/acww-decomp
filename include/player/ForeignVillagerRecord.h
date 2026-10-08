#ifndef PLAYER_FOREIGNVILLAGERRECORD_H
#define PLAYER_FOREIGNVILLAGERRECORD_H

#include "types.h"

// A villager who moved to another player's town and writes from there (PlayerData::foreignVillagerRecord, 0x1a
// bytes): its town, its id, the present and its friendship. Defined in src/main/unk_02098d20.cpp (which still keeps
// its own copy of the class: switch it to this header).
class ForeignVillagerRecord {
public:
    ForeignVillagerRecord();
    ~ForeignVillagerRecord();
    u8 town[0xa];
    u8 villager[0xc];
    u16 present;
    s8 friendship;

    BOOL offer(void *a1, s32 a2, void *a3);
    void set(void *a1, s32 a2, void *a3, u16 *p);
    BOOL isSet();
    void clear();
};

#endif
