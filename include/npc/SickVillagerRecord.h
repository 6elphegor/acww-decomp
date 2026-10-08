#ifndef NPC_SICKVILLAGERRECORD_H
#define NPC_SICKVILLAGERRECORD_H

#include "types.h"
#include "npc/VillagerId.h"
#include "player/PlayerId.h"

struct ClockDate;

// The sick villager of the town and the players who visited it. Methods in src/main/unk_02098e90.cpp (which still
// has its own copy of this definition: it should include this header instead).
class SickVillagerRecord {
public:
    u8 errand[0xc];
    VillagerId villagerId;
    PlayerId visitors[5];
    u8 startDate[4];
    u8 statusDate[4];
    u8 sickDay;
    PlayerId *getTopVisitor();
    BOOL isRecentlyRecovered(ClockDate *d);
    BOOL isRecovered();
    void setTodaysVisitor(PlayerId *e);
    BOOL hasTodaysVisitor();
    BOOL hasVisitor(PlayerId *e);
    PlayerId *getTodaysVisitor();
    PlayerId *getVisitor(u32 i);
    void startSickness(VillagerId *a, u8 *b);
    VillagerId *getVillagerId();
    SickVillagerRecord *destructRecord();
    SickVillagerRecord *constructRecord();
    void *getErrand();
    void resetRecord();
    u8 *getParcelErrand();
};

#endif
