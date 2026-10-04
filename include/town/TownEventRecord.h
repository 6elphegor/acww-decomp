#ifndef TOWN_TOWNEVENTRECORD_H
#define TOWN_TOWNEVENTRECORD_H

#include "types.h"

// Applied town event (gSaveTownEvents[4], TownState_GetEvent/AddEvent/FindEvent/RemoveEvent); eventId 0x63 = free.
// Used by src/main/unk_0204a780.cpp and unk_02041e00.cpp.

struct TownEventRecord {
    /* 0x00 */ u16 eventId;
    /* 0x02 */ u8 year;
    /* 0x04 */ s32 start;
    /* 0x08 */ s32 end;
};

#endif
