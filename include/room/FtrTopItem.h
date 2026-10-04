#ifndef ROOM_FTRTOPITEM_H
#define ROOM_FTRTOPITEM_H

#include "types.h"
#include "room/FtrActorParts.h"

struct Unk_ov004_02205c80_Obj;

// Item placed on top of a furniture object (0x022062f4; element of FtrTopItems).
// Members defined in src/ov004/unk_ov004_02204f24.cpp.
struct FtrTopItem {
    FtrTopItem();
    ~FtrTopItem();
    BOOL set(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    u16 *getItem();
    Unk_ov004_02205d8c_Vec *getPos();
    void clear();
    BOOL isSet();
    void draw(Unk_ov004_02205c80_Obj *o);
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 item;
    /* 0x04 */ Unk_ov004_02205d8c_Vec relPos;
};

#endif // ROOM_FTRTOPITEM_H
