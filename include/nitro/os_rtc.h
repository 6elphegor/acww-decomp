#ifndef NITRO_OS_RTC_H
#define NITRO_OS_RTC_H

#include "types.h"

// NitroSDK RTC date/time (RTC_GetDate / RTC_GetTime, rtc.c units in autoload_2) and owner info (OS_GetOwnerInfo,
// os_ownerInfo.c). C header; also used by NasAuth_BuildRequest (src/ov065/unk_ov065_0226d128.cpp).

typedef struct RTCDate {
    /* 0x0 */ u32 year;
    /* 0x4 */ u32 month;
    /* 0x8 */ u32 day;
    /* 0xc */ s32 week; // RTCWeek
} RTCDate;

typedef struct RTCTime {
    /* 0x0 */ u32 hour;
    /* 0x4 */ u32 minute;
    /* 0x8 */ u32 second;
} RTCTime;

// This SDK build: nickName[10] / comment[26] (later SDKs use 11 / 27).
typedef struct OSOwnerInfo {
    /* 0x00 */ u8 language;
    /* 0x01 */ u8 favoriteColor;
    /* 0x02 */ u8 birthMonth;
    /* 0x03 */ u8 birthDay;
    /* 0x04 */ u16 nickName[10];
    /* 0x18 */ u16 nickNameLength;
    /* 0x1a */ u16 comment[26];
    /* 0x4e */ u16 commentLength;
} OSOwnerInfo;

#endif
