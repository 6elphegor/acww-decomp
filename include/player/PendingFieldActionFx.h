#ifndef PLAYER_PENDINGFIELDACTIONFX_H
#define PLAYER_PENDINGFIELDACTIONFX_H

#include "types.h"

// Field action event deferred by Unk_02005e7c::handleNetEvent until action flag 10 is set: type/sub of the
// FieldActionFxEvent and the pending flag (Unk_02005e7c::pendingEvent, unit position in pendingEventUnitX/Z).

struct PendingFieldActionFx {
    /* 0x0 */ u8 type : 5;
    /* 0x0 */ u8 sub : 2;
    /* 0x0 */ u8 set : 1;
};

#endif
