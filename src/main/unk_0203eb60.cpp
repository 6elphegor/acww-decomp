#include "types.h"
#include "proto/main/unk_0203e7d0.h"
#include "proto/main/unk_0203eb60.h"

// TU048: 0x0203eb60-0x0203eb78. Dispatch through a table of six handlers (.data 0x020d96d4-0x020d96ec).

typedef s32 (*CharInteractSyncRecvFn)(u8 *, s32);

extern "C" {
}

extern "C" CharInteractSyncRecvFn sCharInteractSyncRecvFns[6] = {
    CharInteractSync_OnLockRequest, CharInteractSync_OnReply, CharInteractSync_OnReply, CharInteractSync_OnRelease, CharInteractSync_OnCharMsg, CharInteractSync_OnCharMsg,
};

extern "C" void CharInteractSync_Dispatch(u8 *p, s32 x) {
    sCharInteractSyncRecvFns[*p](p, x);
}
