#ifndef ROOM_FTRPREVIEWER_H
#define ROOM_FTRPREVIEWER_H

// Furniture/wallpaper/carpet preview loader (sFtrPreviewer, FtrPreviewer_GetInstance). Methods at 0x02235a0c..
// (src/ov004/unk_ov004_02233074.cpp).
#include "types.h"
#include "item/ItemId.h"

class ProcBase;

class FtrPreviewer {
public:
    /* 0x00 */ ProcBase *actors[2];  // the furniture shown
    /* 0x08 */ ItemId shownItems[2];
    /* 0x0c */ u8 curSlot;
    /* 0x10 */ s32 sampleIndex;
    /* 0x14 */ void *wallTexBuffers[2];
    /* 0x1c */ void *floorTexBuffers[2];

    void *getFloorBuffer();
    void *getWallBuffer();
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
