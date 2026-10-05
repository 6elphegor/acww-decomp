#ifndef NET_WFCMOVEMBWORK_H
#define NET_WFCMOVEMBWORK_H

#include "types.h"

// Multiboot parent work of the ov001 settings transfer (sWfcMoveMb, src/ov001/unk_ov001_02220ad8.cpp; declared by
// unk_ov001_022218a4.cpp). Raw areas: child record of aid 1 at 0x0e (0x1e bytes: MB user info 0x16, MAC +0x16,
// aid +0x1c), MB segment buffer from 0x2c, MB_Init work at 0x10040, WfcMoveWhWork at 0x1b160.
struct WfcMoveMbWork {
    /* 0x00000 */ u16 state;
    /* 0x00002 */ u16 childMasks[6];
    /* 0x0000e */ u8 pad_0e[0x1b140 - 0x0e];
    /* 0x1b140 */ void *mbWork;
    /* 0x1b144 */ void *segmentBuffer;
};

#endif
