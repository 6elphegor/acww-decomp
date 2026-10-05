#ifndef ROOM_ROOMTELEPHONEACTENTRY_H
#define ROOM_ROOMTELEPHONEACTENTRY_H

#include "types.h"

// One entry of RoomTelephone's action table sRoomTelephoneActTable (0x0224e2b8): enter/exec member functions.
// Defined in src/ov004/unk_ov004_02229660.cpp.
class RoomTelephone;
typedef void (RoomTelephone::*RoomTelephoneActFn)();

struct RoomTelephoneActEntry {
    RoomTelephoneActFn enter;
    RoomTelephoneActFn exec;
};

#endif
