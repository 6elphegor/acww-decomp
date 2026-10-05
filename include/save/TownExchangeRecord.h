#ifndef SAVE_TOWNEXCHANGERECORD_H
#define SAVE_TOWNEXCHANGERECORD_H

#include "types.h"

// Town-exchange (player-slot style) save record, 0x84c bytes: a Letter, a constellation record, a moving villager
// and a lost-child record. Constructor, destructor and most members in src/main/unk_0208f0b0.cpp;
// getChecksumByte / setChecksumByte in src/main/unk_0208eeac.cpp. SaveData holds one at 0x10c3c.
class TownExchangeRecord {
public:
    TownExchangeRecord();
    ~TownExchangeRecord();
    u8 getChecksumByte();
    void setChecksumByte(u32 v);
    void *getVillager();
    void *getConstellation();
    u32 getCounter();
    void resetCounter();
    void incrementCounter();
    void *getLostChildRecord();
    u32 getUnkFlag();
    void setUnkFlag(u32 v);
    s32 isValid();
    u32 getChecksum();
    void setChecksum(u32 v);

    /* 0x000 */ u8 unk_000[0xf4]; // Letter
    /* 0x0f4 */ u8 unk_0f4; // constellation record starts here
    /* 0x0f5 */ u8 unk_0f5[0x47];
    /* 0x13c */ u8 villager[0x700];
    /* 0x83c */ u8 counter;
    /* 0x83d */ u8 flags;
    /* 0x83e */ u8 lostChild[0xc];
    /* 0x84a */ u16 checksum;
};

#endif // SAVE_TOWNEXCHANGERECORD_H
