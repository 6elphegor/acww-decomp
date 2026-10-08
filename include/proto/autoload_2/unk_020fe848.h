#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020FE848_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020FE848_H

// Prototypes of the functions defined in src/autoload_2/unk_020fe848.c (generated: tools/host_protos.py)

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_readNvram
BOOL readNvram(u32 addr, u32 size, void *dst);
#endif
#ifndef PROTO_LOCAL_writeNvram
void writeNvram(u32 addr, u16 size, void *src);
#endif
#ifndef PROTO_LOCAL_verify
BOOL verify(void *ref, u32 addr, u32 size, void *tmp);
#endif
#ifndef PROTO_LOCAL_writeDisable
BOOL writeDisable(void);
#endif
#ifndef PROTO_LOCAL_Callback_NVRAM
u16 Callback_NVRAM(u32 tag, u32 data, u32 err);
#endif
#ifndef PROTO_LOCAL_DWCi_BACKUPlGetWifi
u8 *DWCi_BACKUPlGetWifi(void);
#endif
#ifdef __cplusplus
}
#endif

#endif
