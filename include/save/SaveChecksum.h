#ifndef SAVE_SAVECHECKSUM_H
#define SAVE_SAVECHECKSUM_H

#include "types.h"

// The checksum word of a save slot's footer (SaveData::footer, the same 4 bytes as SaveRecord4). Methods in
// src/main/unk_0209eb0c.cpp (which still defines the class itself: it should include this header instead).
class SaveChecksum {
public:
    u16 get();
    void set(u16 v);
    u16 checksum;
};

#endif
