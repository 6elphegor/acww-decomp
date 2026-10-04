#ifndef NITRO_OS_ALARM_H
#define NITRO_OS_ALARM_H

#include "types.h"

// NitroSDK OSAlarm (nitro/os/common/alarm_shared.h; field names as in pret pokediamond / pokeheartgold) and the alarm
// queue (OSi_AlarmQueue, data_021fcf30). Used by os_alarm.c / os_valarm.c / os_reset.c in autoload_2
// (src/autoload_2/unk_02114ef4.c, unk_021153f8.c, unk_02115468.c).

typedef struct OSAlarm OSAlarm;
struct OSAlarm {
    /* 0x00 */ void (*handler)(void *);
    /* 0x04 */ void *arg;
    /* 0x08 */ u32 tag;
    /* 0x10 */ u64 fire;
    /* 0x18 */ OSAlarm *prev;
    /* 0x1c */ OSAlarm *next;
    /* 0x20 */ u64 period;
    /* 0x28 */ u64 start;
};

typedef struct {
    OSAlarm *head;
    OSAlarm *tail;
} OSAlarmQueue;

#endif
