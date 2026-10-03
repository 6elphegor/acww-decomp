#include "types.h"

// 0x020a6914-0x020a6974: the seven functions between the linked units at 0x020a65fc (U199) and 0x020a6974 (U200).
// Bodies unchanged from src/main/unk_020a6914.cpp.

extern "C" {
void CommRecord_PackSource(void *p, int a, int b);
}

extern "C" void NetSceneMsg_Init(void) {}

extern "C" void NetSceneMsg_Fini(void) {}

extern "C" void NetSceneMsg_Set(u8 *a, u8 b) { *a = b; }

extern "C" void NetSceneMsg_Get(u8 *a, u8 *b) { *b = *a; }

extern "C" void NetStatusMsgBase_Init(void) {}

extern "C" void NetStatusMsgBase_Fini(void) {}

extern "C" void NetStatusMsgBase_Pack(u8 *p, int a, int b, int c, u8 d, int e) {
    u8 flags = 0;
    if (c) flags |= 1;
    if (d) flags |= 2;
    CommRecord_PackSource(p, b, flags);
    p[1] = e;
    p[1] |= (a << 6) & 0xc0;
}
