#ifndef MENU_WFCCONNSELECTWORK_H
#define MENU_WFCCONNSELECTWORK_H

#include "types.h"
#include "net/WfcObjGroup.h"

// Work area of the Wi-Fi connection-select screen (sWfcConnSelect, allocated in src/ov001/unk_ov001_02219c3c.cpp).
// (offsets: the DS layout)
struct WfcConnSelectWork {
    /* 0x00 */ void *paletteFile;  // WfcFs_LoadFile
    /* 0x04 */ WfcObjGroup *slotButtons[3];
    /* 0x10 */ WfcObjGroup *eraseButtons[3];
    /* 0x1c */ u8 lastColumn;
    /* 0x1d */ u8 exitAction;
    /* 0x1e */ u8 pad_1e[2];
};

#endif
