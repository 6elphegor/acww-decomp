#ifndef NET_WFCMOVEPARAMS_H
#define NET_WFCMOVEPARAMS_H

#include "types.h"

// The download-play program the ov001 settings transfer offers (WfcMove_Init, src/ov001/unk_ov001_02222e84.cpp:
// copied into the work's MBGameRegistry; built by WfcTransfer_Start, src/ov001/unk_ov001_0220cd24.cpp).
struct WfcMoveParams {
    /* 0x00 */ const char *romFilePath;
    /* 0x04 */ u16 *gameName;
    /* 0x08 */ u16 *gameIntroduction;
    /* 0x0c */ const char *iconCharPath;
    /* 0x10 */ const char *iconPalettePath;
    /* 0x14 */ u32 ggid;
    /* 0x18 */ u8 languageCode;
};

#endif
