#ifndef PROTO_PROTO_OV065_UNK_OV065_02283304_H
#define PROTO_PROTO_OV065_UNK_OV065_02283304_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02283304.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "net/gpiOperation.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_gpiCheckForError
s32 gpiCheckForError(void *h, const char *str, s32 flag);
#endif
#ifndef PROTO_LOCAL_gpiValueForKey
s32 gpiValueForKey(const char *hay, const char *needle, char *out, s32 n);
#endif
#ifndef PROTO_LOCAL_gpiCheckSocketConnect
s32 gpiCheckSocketConnect(void *h, s32 x, s32 *out);
#endif
#ifndef PROTO_LOCAL_gpiReadKeyAndValue
s32 gpiReadKeyAndValue(void *h, char *buf, s32 *pos, char *out1, char *out2);
#endif
#ifndef PROTO_LOCAL_gpiSetError
void gpiSetError(void *h, s32 code, const char *msg);
#endif
#ifndef PROTO_LOCAL_gpiSetErrorString
void gpiSetErrorString(void *h, const char *msg);
#endif
#ifndef PROTO_LOCAL_gpiSendTransferReply
s32 gpiSendTransferReply(void *h, s32 *a, s32 b, s32 c, const char *dflt);
#endif
#ifndef PROTO_LOCAL_gpiHandleTransferMessage
void gpiHandleTransferMessage(void *h, s32 p1, s32 p2, const char *p3);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_gpiProcessRegisterUniqueNick
s32 gpiProcessRegisterUniqueNick(void *h, GPIOperation *s, char *str);
#endif
}
#endif

#endif
