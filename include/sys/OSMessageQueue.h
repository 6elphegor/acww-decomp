#ifndef SYS_OSMESSAGEQUEUE_H
#define SYS_OSMESSAGEQUEUE_H

#include "types.h"
#include "sys/OSThread.h"

// NitroSDK message queue (os_message.c: OS_InitMessageQueue / OS_SendMessage / OS_ReceiveMessage). The autoload_2
// OS C units keep their own typedef; used by the ov065 socket core (src/ov065/unk_ov065_0225f378.cpp).

typedef void *OSMessage;

typedef struct OSMessageQueue {
    /* 0x00 */ OSThreadQueue queueSend;
    /* 0x08 */ OSThreadQueue queueReceive;
    /* 0x10 */ OSMessage *msgArray;
    /* 0x14 */ s32 msgCount;
    /* 0x18 */ s32 firstIndex;
    /* 0x1c */ s32 usedCount;
} OSMessageQueue;

#endif
