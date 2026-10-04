#ifndef ROOM_FTRVISNODES_H
#define ROOM_FTRVISNODES_H

#include "types.h"

// Up to 4 model node ids shown / hidden together (furniture object member at 0x760).
// Members defined in src/ov004/unk_ov004_02204f24.cpp (0x02205994-0x022059f2).
class FtrVisNodes {
public:
    u8 isVisible();
    BOOL hasNode(s32 v);
    void setVisible(u32 v);
    void init(void *p, u32 v);

    /* 0x00 */ s8 nodeIds[4];
    /* 0x04 */ u8 visible;
};

#endif // ROOM_FTRVISNODES_H
