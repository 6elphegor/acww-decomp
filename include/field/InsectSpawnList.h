#ifndef FIELD_INSECTSPAWNLIST_H
#define FIELD_INSECTSPAWNLIST_H

#include "types.h"

// The insect spawn tables (src/main/unk_02060b9c.cpp): per month (gInsectSpawnTables[12], Insect_GetSpawnTable),
// six time slots (Insect_HourToTimeSlot) of {insect kind, cumulative chance out of 100} entries.
typedef struct InsectSpawnEntry {
    u8 kind;
    u8 cumulativeChance;
} InsectSpawnEntry;

typedef struct InsectSpawnList {
    InsectSpawnEntry *entries;
    u8 entryCount;
} InsectSpawnList;

#endif
