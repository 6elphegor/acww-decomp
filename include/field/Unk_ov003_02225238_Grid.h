#ifndef FIELD_UNK_OV003_02225238_GRID_H
#define FIELD_UNK_OV003_02225238_GRID_H

#include "types.h"

// Byte cell grid (cells, width, height) read by the ov003 bottle-throw code (0x02224e68..0x02225238).
struct Unk_ov003_02225238_Grid {
    /* 0x00 */ u8 *cells;
    /* 0x04 */ u32 w;
    /* 0x08 */ u32 h;
};

#endif
