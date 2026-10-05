#ifndef NET_DWCMATCHUSERKEY_H
#define NET_DWCMATCHUSERKEY_H

#include "types.h"

// DWC matchmaking user key entry (sDwcMatchUserKeys[], 0x738 bytes = 0x9a entries of 0xc; src/ov065/unk_ov065_022723b8.cpp).
// keyName is the allocated name string DwcMatch_ClearUserKeys frees; value points to the int or string reported to QR2.

struct DwcMatchUserKey {
    /* 0x00 */ u8 keyId;
    /* 0x01 */ u8 isString;
    /* 0x02 */ u8 unk_02[2];
    /* 0x04 */ char *keyName;
    /* 0x08 */ s32 *value;
};

#endif
