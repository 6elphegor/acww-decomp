#ifndef GFX_TOONTABLE_H
#define GFX_TOONTABLE_H

#include "types.h"

// 32-entry colour table (toon table) copied by value from sDefaultToonTable.
// Used in src/main/unk_020027b4.cpp (3D graphics setup).

struct ToonTable {
    /* 0x00 */ u16 colors[32];
};

#endif
