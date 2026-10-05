#ifndef ROOM_FTRPREVIEWER_H
#define ROOM_FTRPREVIEWER_H

// Furniture/wallpaper/carpet preview loader (sFtrPreviewer, FtrPreviewer_GetInstance). Methods at 0x02235a0c..
// (src/ov004/unk_ov004_02233074.cpp).
#include "types.h"

class FtrPreviewer {
public:
    /* 0x00 */ u32 actors[2];
    /* 0x08 */ u16 shownItems[2];
    /* 0x0c */ u8 curSlot;
    /* 0x10 */ s32 sampleIndex;
    /* 0x14 */ u32 wallTexBuffers[2];
    /* 0x1c */ u32 floorTexBuffers[2];

    u32 getFloorBuffer();
    u32 getWallBuffer();
    void clear();
    BOOL showItem(u16 *p);
    void freeBuffers();
    void allocBuffers();
    s32 getSampleIndex();
    void reset();
    FtrPreviewer();
    ~FtrPreviewer();
};

#endif
