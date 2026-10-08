#ifndef SYS_CLOCKOFFSET_H
#define SYS_CLOCKOFFSET_H

#include "types.h"

// The offset of the game clock from the RTC (SaveData::clockOffset). Its functions (ClockOffset_Clear /
// CalcMinutes / CalcSeconds) are in src/main/unk_0209cb74.cpp (which still keeps its own copy of the struct: switch
// it to this header).
struct ClockOffset {
    u32 minutes;
    u16 seconds;
};

#endif
