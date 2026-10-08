#ifndef TOWN_TOWNFLAG_H
#define TOWN_TOWNFLAG_H

#include "types.h"

// The town flag of the save (the pattern and the gate house design) and the save record that holds it
// (gSaveTownFlag: the villager house styles, then the flag at 4). Methods in src/main/unk_020b0e60.cpp (which still
// declares these classes itself: switch it to this header).
class TownFlag {
public:
    TownFlag();
    ~TownFlag();
    s32 getGateDesign();
    TownFlag *initDefault();

    /* 0x000 */ u8 pattern[0x228];
    /* 0x228 */ u8 gateDesign;
};

class TownStyleRecordView {
public:
    u8 *getTownFlag();
    void *getHouseStyles();
};

#endif
