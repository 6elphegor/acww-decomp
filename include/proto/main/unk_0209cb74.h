#ifndef PROTO_PROTO_MAIN_UNK_0209CB74_H
#define PROTO_PROTO_MAIN_UNK_0209CB74_H

// Prototypes of the functions defined in src/main/unk_0209cb74.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "sys/ClockDateTime.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_DateTime_Compare
s32 DateTime_Compare(ClockDateTime *a, ClockDateTime *b, u32 mask);
#endif
#ifndef PROTO_LOCAL_DateTime_AddSeconds
void DateTime_AddSeconds(ClockDateTime *p, s32 n);
#endif
#ifndef PROTO_LOCAL_DateTime_Sub
void DateTime_Sub(ClockDateTime *t, ClockDateTime *p);
#endif
#ifndef PROTO_LOCAL_Clock_GetRtcDateTime
void Clock_GetRtcDateTime(ClockDateTime *out);
#endif
#ifdef __cplusplus
}
#endif

#endif
