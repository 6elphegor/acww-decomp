#ifndef GAME_CONSTELLATIONSTORE_H
#define GAME_CONSTELLATIONSTORE_H

#include "types.h"
#include "game/ConstellationRecord.h"

// The saved constellations (SaveData::constellations). Defined in src/main/unk_020b0774.cpp (which still keeps its
// own copy of the class: switch it to this header).
class ConstellationStore {
public:
    ConstellationStore();
    ~ConstellationStore();
    ConstellationRecord records[16];
};

#endif
