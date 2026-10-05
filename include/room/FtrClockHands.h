#ifndef ROOM_FTRCLOCKHANDS_H
#define ROOM_FTRCLOCKHANDS_H

#include "types.h"

// Hour / minute hand joints of a clock furniture model (member at 0x73e).
// Members defined in src/ov004/unk_ov004_02204f24.cpp (0x02205d5c-0x02205d8c).
struct FtrClockHands {
    ~FtrClockHands();
    void set(s32 a, s32 b);
    void clear();

    /* 0x00 */ s8 hourJnt;
    /* 0x01 */ s8 minJnt;
    /* 0x02 */ u8 valid;
};

#endif // ROOM_FTRCLOCKHANDS_H
