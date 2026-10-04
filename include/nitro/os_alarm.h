#ifndef NITRO_OS_ALARM_H
#define NITRO_OS_ALARM_H

#include "types.h"

// NitroSDK OSAlarm (nitro/os/common/alarm_shared.h; field names as in pret pokediamond / pokeheartgold) and the alarm
// queue (OSi_AlarmQueue, data_021fcf30). Used by os_alarm.c / os_valarm.c / os_reset.c in autoload_2
// (src/autoload_2/unk_02114ef4.c, unk_021153f8.c, unk_02115468.c) and the ov066 local wireless layer's beacon /
// scan timers (src/ov066/unk_ov066_0225f1a0.cpp).

typedef struct OSAlarm OSAlarm;
struct OSAlarm {
    /* 0x00 */ void (*handler)(void *);
    /* 0x04 */ void *arg;
    /* 0x08 */ u32 tag;
    /* 0x0c */ u64 fire; // mwcc aligns u64 to 4: OSAlarm is 0x2c bytes (ov066 LocalWl arrays and timers at +0x10 / +0x3c)
    /* 0x14 */ OSAlarm *prev;
    /* 0x18 */ OSAlarm *next;
    /* 0x1c */ u64 period;
    /* 0x24 */ u64 start;
};

typedef struct {
    OSAlarm *head;
    OSAlarm *tail;
} OSAlarmQueue;

#endif
