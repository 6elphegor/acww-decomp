#ifndef SYS_OVERLAYHANDLE_H
#define SYS_OVERLAYHANDLE_H

#include "types.h"

// 0x7c-byte handle of a loaded overlay (gOverlayHandle; OverlayHandle_Load / _Unload). Defined in main,
// unk_020742f4.cpp (dtor 0x02076c68); the net code (unk_020720f8.cpp,
// unk_02070560.cpp) reads overlayId / isLoading of gOverlayHandle.
class OverlayHandle {
public:
    /* 0x00 */ s32 overlayId;
    /* 0x04 */ u8 isLoading;
    /* 0x05 */ u8 pad_05[0x7c - 0x05];
    OverlayHandle() { overlayId = -1; }
    ~OverlayHandle();
};

#endif
