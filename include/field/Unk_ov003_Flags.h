#ifndef FIELD_UNK_OV003_FLAGS_H
#define FIELD_UNK_OV003_FLAGS_H

#include "types.h"

// 1-byte entry flags, BuildingActor::entryFlags (+0x232) of the ov003 building actors.
struct Unk_ov003_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

#endif
