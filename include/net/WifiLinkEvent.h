#ifndef NET_WIFILINKEVENT_H
#define NET_WIFILINKEVENT_H

#include "types.h"
#include "nitro/wm.h"

// Event that WifiLink_Notify passes to the notify callback (WifiLinkWork::notifyCallback, set by
// WifiLink_StartupAsync): request id, result, found AP (request 7), detail code and the reporting source line.
// Built in src/ov065/unk_ov065_02268c64.cpp, handled by WifiAp_OnLinkNotify (src/ov065/unk_ov065_0226b3c4.cpp).

struct WifiLinkEvent {
    /* 0x00 */ s16 request;
    /* 0x02 */ s16 result;
    /* 0x04 */ WMBssDesc *bssDesc;
    /* 0x08 */ u32 detail;
    /* 0x0c */ s32 sourceLine;
};

typedef void (*WifiLinkNotifyCallback)(WifiLinkEvent *);

#endif
