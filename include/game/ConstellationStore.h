#ifndef GAME_CONSTELLATIONSTORE_H
#define GAME_CONSTELLATIONSTORE_H

#include "types.h"
#include "game/ConstellationRecord.h"

// The saved constellations (SaveData::constellations, 0x464 bytes): 16 records and the mask of the used ones.
// Defined in src/main/unk_020b0774.cpp.
class ConstellationStore {
public:
    ConstellationStore();
    ~ConstellationStore();
    /* 0x000 */ ConstellationRecord records[16];
    /* 0x460 */ u16 usedMask;
    /* 0x462 */ u16 unk_462;
};

static_assert(sizeof(ConstellationStore) == 0x464, "ConstellationStore: the save layout");

#endif
