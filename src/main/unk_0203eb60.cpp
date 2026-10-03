#include "types.h"

// TU048: 0x0203eb60-0x0203eb78. Dispatch through a table of six handlers (.data 0x020d96d4-0x020d96ec).

typedef s32 (*Unk_0203eb60_Fn)(u8 *, s32);

extern "C" {
s32 CharInteractSync_OnCharMsg(u8 *p, s32 x);
s32 CharInteractSync_OnRelease(u8 *p, s32 x);
s32 CharInteractSync_OnReply(u8 *p, s32 x);
s32 CharInteractSync_OnLockRequest(u8 *p, s32 x);
}

extern "C" Unk_0203eb60_Fn sCharInteractSyncRecvFns[6] = {
    CharInteractSync_OnLockRequest, CharInteractSync_OnReply, CharInteractSync_OnReply, CharInteractSync_OnRelease, CharInteractSync_OnCharMsg, CharInteractSync_OnCharMsg,
};

extern "C" s32 CharInteractSync_Dispatch(u8 *p, s32 x) {
    sCharInteractSyncRecvFns[*p](p, x);
}
