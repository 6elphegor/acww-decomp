#ifndef ROOM_UNK_OV004_0224E2B8_ENT_H
#define ROOM_UNK_OV004_0224E2B8_ENT_H

#include "types.h"

// One entry of RoomTelephone's action table sRoomTelephoneActTable (0x0224e2b8): enter/exec member functions.
// Defined in src/ov004/unk_ov004_02229660.cpp.
class RoomTelephone;
typedef void (RoomTelephone::*Unk_ov004_0224e2b8_Fn)();

struct Unk_ov004_0224e2b8_Ent {
    Unk_ov004_0224e2b8_Fn enter;
    Unk_ov004_0224e2b8_Fn exit;
};

#endif
