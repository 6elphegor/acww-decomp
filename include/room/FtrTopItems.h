#ifndef ROOM_FTRTOPITEMS_H
#define ROOM_FTRTOPITEMS_H

// Up to four items placed on top of a furniture object (0x022061b4; member at 0x188 of FtrActor).
// Members defined in src/ov004/unk_ov004_02204f24.cpp.
#include "types.h"
#include "room/FtrActorParts.h"
#include "room/FtrTopItem.h"

class FtrActor;

struct FtrTopItems {
    FtrTopItems();
    ~FtrTopItems();
    void dropAll(FtrActor *o);
    BOOL pickUpAll(FtrActor *o);
    BOOL canPickUp(FtrActor *o);
    BOOL add(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    void drawAll(FtrActor *o);
    FtrTopItem *get(u32 i);
    void clearAll();
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ FtrTopItem items[4];
};

#endif // ROOM_FTRTOPITEMS_H
