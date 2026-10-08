#ifndef NET_DWCGSHTTPCALLBACKCTX_H
#define NET_DWCGSHTTPCALLBACKCTX_H

#include "types.h"

// DwcGsHttp_Get/Post request context: user data and the caller's callback (src/ov065/unk_ov065_02277974.cpp, src/ov065/unk_ov065_02277e70.cpp).

// The caller's request callback: the received data (NULL on an error), its length, the result (0 or an error code)
// and the caller's user data.
typedef void (*DwcGsHttpCallback)(char *data, s32 len, s32 result, void *userData);

struct DwcGsHttpCallbackCtx {
    /* 0x0 */ void *userData;
    /* 0x4 */ DwcGsHttpCallback callback;
};
#ifndef __cplusplus
typedef struct DwcGsHttpCallbackCtx DwcGsHttpCallbackCtx;
#endif

#endif
