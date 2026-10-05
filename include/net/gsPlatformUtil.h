#ifndef NET_GSPLATFORMUTIL_H
#define NET_GSPLATFORMUTIL_H

#include "types.h"

// GameSpy nonport time functions (SDK common/gsPlatformUtil.h `gsi_time current_time();`, milliseconds, and
// common/nitro/gsTimerNitro.c `time_t time(time_t *timer);`, seconds since boot; time_t is signed here: callers compare
// it signed). Both are defined in src/ov065/unk_ov065_022789fc.cpp.

extern "C" {
u32 current_time(void);
s32 time(s32 *timer);
}

#endif
