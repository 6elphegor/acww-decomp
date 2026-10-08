#ifndef GAME_CONSTELLATIONSTORE_H
#define GAME_CONSTELLATIONSTORE_H

#include "types.h"
#include "game/ConstellationRecord.h"

// The saved constellations (SaveData::constellations, 0x464 bytes): the records, the used bits
// (ConstellationStore_IsUsed / SetUsed / ClearUsed) and the "new" bits (Constellation_GetNewStatus). Defined in
// src/main/unk_020b0774.cpp (which still keeps its own copy of the class: switch it to this header).
class ConstellationStore {
public:
    ConstellationStore();
    ~ConstellationStore();
    /* 0x000 */ ConstellationRecord records[16];
    /* 0x460 */ u16 usedMask;
    /* 0x462 */ u16 newMask;
};

#endif
