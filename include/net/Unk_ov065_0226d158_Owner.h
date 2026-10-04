#ifndef NET_UNK_OV065_0226D158_OWNER_H
#define NET_UNK_OV065_0226D158_OWNER_H

#include "types.h"

// HTTP form, date/time, key-value pair and owner-info records of the NAS login code
// (src/ov065/unk_ov065_0226d128.cpp, src/ov065/unk_ov065_0226cb18.cpp).

struct Unk_ov065_0226d158_Form {
    /* 0x0 */ void *entries;
    /* 0x4 */ s32 capacity;
    /* 0x8 */ s32 count;
};

struct Unk_ov065_0226d158_Date {
    /* 0x0 */ s32 year;
    /* 0x4 */ s32 month;
    /* 0x8 */ s32 day;
    /* 0xc */ s32 week;
};

struct Unk_ov065_0226d158_Time {
    /* 0x0 */ s32 hour;
    /* 0x4 */ s32 minute;
    /* 0x8 */ s32 second;
};

struct Unk_ov065_0226d158_Kv {
    /* 0x0 */ const char *key;
    /* 0x4 */ const char *val;
};

struct Unk_ov065_0226d158_Owner {
    /* 0x00 */ u8 language;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 birthMonth;
    /* 0x03 */ u8 birthDay;
    /* 0x04 */ u16 nickName[10];
    /* 0x18 */ u16 nickNameLength;
    /* 0x1a */ u16 comment[26];
    /* 0x4e */ u16 commentLength;
};

#endif
