#ifndef MENU_WFCCONNSELECTWORK_H
#define MENU_WFCCONNSELECTWORK_H

#include "types.h"

// Work area of the Wi-Fi connection-select screen (sWfcConnSelect, allocated in src/ov001/unk_ov001_02219c3c.cpp).
struct WfcConnSelectWork {
    /* 0x00 */ u32 paletteFile;
    /* 0x04 */ u32 slotButtons[3];
    /* 0x10 */ u32 eraseButtons[3];
    /* 0x1c */ u8 lastColumn;
    /* 0x1d */ u8 exitAction;
    /* 0x1e */ u8 pad_1e[2];
};

#endif
