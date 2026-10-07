#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_0211D20C_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_0211D20C_H

// Prototypes of the functions defined in src/autoload_2/unk_0211d20c.c (generated: tools/host_protos.py)

#include "types.h"
#include "nitro/os_rtc.h"
#include "types64.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_RTC_ConvertDateTimeToSecond
s64 RTC_ConvertDateTimeToSecond(RTCDate *date, RTCTime *time);
#endif
#ifndef PROTO_LOCAL_RTC_Init
void RTC_Init(void);
#endif
#ifdef __cplusplus
}
#endif

#endif
