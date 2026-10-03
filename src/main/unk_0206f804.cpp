#include "types.h"

// Fixed 0x29 byte string holder (vtable and constructors live in the next unit)
class EncodedString41 {
public:
    s32 getLength();

    /* 0x00 */ u8 pad_00[0x0e];
    /* 0x0e */ u8 unk_0e[0x29];
};

extern "C" {
extern u8 sCommSubPostReply;
s32 Text_GetLength(const u8 *str, s32 len);

void func_0206f4d8(u8 *p, u32 x);
void CommSub_StartCountdown(u8 *p, u32 x);
void CommSub_RecvCountdownRequest(u8 *p, u32 x);
void CommSub_RecvTownTune(u8 *p, u32 x);
void CommSub_RecvPostReply(u8 *p, u32 x);
void CommSub_RecvPostLetter(u8 *p, u32 x);
void CommSub_ClearBottleLetter(u8 *p, u32 x);
void CommSub_RecvBottleLetter(u8 *p, u32 x);
void CommSub_RecvItemList15(u8 *p, u32 x);
void CommSub_RecvReleaseOrThrow(u8 *p, u32 x);
void CommSub_RecvInsectRelease(u8 *p, u32 x);
void CommSub_RecvBbsPost(u8 *p, u32 x);

typedef void (*Unk_0206f804_Fn)(u8 *, u32);
}

Unk_0206f804_Fn sCommSubHandlers[24] = {
    CommSub_RecvBbsPost, CommSub_RecvInsectRelease, CommSub_RecvReleaseOrThrow, CommSub_RecvItemList15, CommSub_RecvItemList15, CommSub_RecvReleaseOrThrow,
    CommSub_RecvBottleLetter, CommSub_ClearBottleLetter, CommSub_RecvPostLetter, CommSub_RecvPostReply, CommSub_RecvPostReply, CommSub_RecvPostReply,
    CommSub_RecvTownTune, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest, CommSub_RecvCountdownRequest,
    CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, func_0206f4d8,
};

s32 EncodedString41::getLength() { return Text_GetLength(unk_0e, 0x29); }

extern "C" void CommSub_ResetPostReply() { sCommSubPostReply = 0x18; }

extern "C" void CommSub_Dispatch(u8 *p, u32 x) { sCommSubHandlers[p[0]](p, x); }
