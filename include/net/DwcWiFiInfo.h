#ifndef NET_DWCWIFIINFO_H
#define NET_DWCWIFIINFO_H

#include "types.h"

// The WFC-ID record DWCi_BM_GetWiFiInfo unpacks from the NVRAM ID block (src/autoload_2/unk_020fedcc.c: its struct S):
// the user id (43 bits; 0 while the DS has no Wi-Fi id yet), a second 43-bit id and two 16-bit fields. 0x14 bytes on
// i386 (u64 4-aligned), 0x18 on x86-64: callers need the whole record, not just the user id.
struct DwcWiFiInfo {
    /* 0x00 */ u64 userId;
    /* 0x08 */ u64 unk_08;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ u16 unk_12;
};

#ifdef __cplusplus
extern "C"
#endif
void DWCi_BM_GetWiFiInfo(struct DwcWiFiInfo *info);

#endif
