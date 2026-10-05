#ifndef ROOM_FTRTOPITEM_H
#define ROOM_FTRTOPITEM_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "room/FtrActorParts.h"

class FtrActor;

// Item placed on top of a furniture object (0x022062f4; element of FtrTopItems).
// Members defined in src/ov004/unk_ov004_02204f24.cpp.
struct FtrTopItem {
    FtrTopItem();
    ~FtrTopItem();
    BOOL set(u16 *id, VecFx32 *pos);
    u16 *getItem();
    VecFx32 *getPos();
    void clear();
    BOOL isSet();
    void draw(FtrActor *o);
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 item;
    /* 0x04 */ VecFx32 relPos;
};

#endif // ROOM_FTRTOPITEM_H
