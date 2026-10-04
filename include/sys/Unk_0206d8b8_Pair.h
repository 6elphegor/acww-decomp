#ifndef SYS_UNK_0206D8B8_PAIR_H
#define SYS_UNK_0206D8B8_PAIR_H

#include "types.h"

// File id passed by value to FS_OpenFileFast / File_ReadRangeById (src/main/unk_0206d5b8.cpp,
// unk_0206d3f4.cpp).

struct Unk_0206d8b8_Pair {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
};

#endif
