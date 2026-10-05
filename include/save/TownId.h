#ifndef SAVE_TOWNID_H
#define SAVE_TOWNID_H

// 10-byte town identity record (id + 8-byte encoded name); base of PlayerId. getTownRelation/setTown are defined in
// src/main/unk_02093ff0.cpp; the constructors and the other helpers (TownId_Construct, TownId_IsValid, ...) are plain
// functions in symbols.txt (declare them with `this` first), so the class has no declared constructor.
#include "types.h"

class TownId {
public:
    /* 0x00 */ u16 townId;
    /* 0x02 */ u8 townName[8];

    s32 getTownRelation();
    void setTown(TownId *o);
};

#endif
