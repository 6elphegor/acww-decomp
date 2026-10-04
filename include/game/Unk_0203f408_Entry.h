#ifndef GAME_UNK_0203F408_ENTRY_H
#define GAME_UNK_0203F408_ENTRY_H

#include "types.h"

// Event day-list entry (src/main/unk_0203f104.cpp, unk_0203eb78.cpp, unk_0203ecec.cpp).

struct Unk_0203f408_Entry {
    /* 0x00 */ u16 eventId;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u32 start;
    /* 0x08 */ u32 end;
};

#endif
