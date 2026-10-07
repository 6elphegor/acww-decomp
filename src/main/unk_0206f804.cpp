#include "types.h"
#include "talk/EncodedString41.h"
#include "proto/main/unk_02051218.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/main/unk_0206f4f0.h"
#include "proto/main/unk_0206f804.h"


extern "C" {


typedef void (*CommSubHandler)(u8 *, u32);
}

CommSubHandler sCommSubHandlers[24] = {
    CommSub_RecvBbsPost, CommSub_RecvInsectRelease, CommSub_RecvReleaseOrThrow, CommSub_RecvItemList15, CommSub_RecvItemList15, CommSub_RecvReleaseOrThrow,
    CommSub_RecvBottleLetter, CommSub_ClearBottleLetter, CommSub_RecvPostLetter, CommSub_RecvPostReply, CommSub_RecvPostReply, CommSub_RecvPostReply,
    CommSub_RecvTownTune, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest,
    CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, CommSub_RecvClearPendingUnit,
};

s32 EncodedString41::getLength() { return Text_GetLength(text, 0x29); }

extern "C" void CommSub_ResetPostReply() { sCommSubPostReply = 0x18; }

extern "C" void CommSub_Dispatch(u8 *p, u32 x) { sCommSubHandlers[p[0]](p, x); }
