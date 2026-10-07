#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_02133D04_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_02133D04_H

// Prototypes of the functions defined in src/autoload_2/unk_02133d04.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_func_02133ef8
void *func_02133ef8(void *ptr, size_t size);
#endif
#ifndef PROTO_LOCAL___DecodeSignedNumber
u8 *__DecodeSignedNumber(u8 *p, s32 *value);
#endif
#ifndef PROTO_LOCAL___DecodeUnsignedNumber
u8 *__DecodeUnsignedNumber(u8 *p, u32 *value);
#endif
#ifndef PROTO_LOCAL___read_console
int __read_console(u32 handle, u8 *buffer, size_t *count, void *idle_proc);
#endif
#ifndef PROTO_LOCAL___write_console
int __write_console(u32 handle, u8 *buffer, size_t *count, void *idle_proc);
#endif
#ifndef PROTO_LOCAL___close_console
int __close_console(u32 handle);
#endif
}
#endif

#endif
