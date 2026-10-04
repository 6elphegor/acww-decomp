#ifndef PLAYER_FIELDACTIONFXEVENT_H
#define PLAYER_FIELDACTIONFXEVENT_H

#include "types.h"

// Field action event taken from the per-player slot by FieldActionFx_Take (type, sub, unit position x << 8 | z);
// read by Unk_02005e7c::handleNetEvent (src/main/unk_02004558_extra.cpp). Same layout as the sFieldActionFxSlots
// entries of src/main/unk_02041e00.cpp (TU-local Unk_02042104_Ent).

struct FieldActionFxEvent {
    /* 0x0 */ u8 type;
    /* 0x1 */ u8 sub;
    /* 0x2 */ volatile u16 pos;
};

#endif
