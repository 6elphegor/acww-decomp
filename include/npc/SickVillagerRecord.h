#ifndef NPC_SICKVILLAGERRECORD_H
#define NPC_SICKVILLAGERRECORD_H

#include "types.h"
#include "npc/VillagerId.h"
#include "player/PlayerId.h"
#include "sys/ClockDate.h"

// A sick villager's record: the errand, the villager, the players who visited, the dates. Defined in
// src/main/unk_02098e90.cpp (which still keeps its own copy of the class: switch it to this header).
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
