#ifndef NPC_VILLAGERID_H
#define NPC_VILLAGERID_H

#include "types.h"

// Villager identity (0xc bytes): home town id and name, personality and species.
// Members defined in src/main/unk_02003008.cpp (isValid / set / getGender / makeFileName) and
// src/main/unk_02002b1c.cpp (getName).
class VillagerId {
public:
    u32 getName(u32 arg);
    void makeFileName(void *buf, u32 size, u32 arg);
    u32 getGender();
    void set(u32 id, u32 type, void *s);
    u32 isValid();

    /* 0x00 */ u16 townId;
    /* 0x02 */ u8 townName[8];
    /* 0x0a */ u8 personality;
    /* 0x0b */ u8 species;
};

#endif // NPC_VILLAGERID_H
