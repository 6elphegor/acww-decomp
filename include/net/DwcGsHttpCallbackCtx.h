#ifndef NET_DWCGSHTTPCALLBACKCTX_H
#define NET_DWCGSHTTPCALLBACKCTX_H

#include "types.h"

// DwcGsHttp_Get/Post request context: user data and the caller's callback (src/ov065/unk_ov065_02277974.cpp, src/ov065/unk_ov065_02277e70.cpp).

struct DwcGsHttpCallbackCtx {
    /* 0x0 */ u32 userData;
    /* 0x4 */ void (*callback)(s32, s32, s32, u32);
};

#endif
