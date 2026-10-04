#ifndef ROOM_PHONECHOICESET_H
#define ROOM_PHONECHOICESET_H

// Choice list of the room telephone (RoomTelephone::openChoices; data_ov004_0224e298.. in
// src/ov004/unk_ov004_02229660.cpp, also used by the _switch file).
#include "types.h"

struct PhoneChoiceSet {
    /* 0x0 */ const u8 *choiceMsgs;
    /* 0x4 */ u8 numChoices;
};

#endif // ROOM_PHONECHOICESET_H
