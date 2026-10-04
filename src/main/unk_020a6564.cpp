#include "types.h"
#include "net/CommManager.h"
#include "net/Unk_020a647c_Buf.h"

// TU198: 0x020a6564-0x020a65fc. Dispatches received records to two handlers through a table in .rodata
// (0x020d07a8-0x020d07b0).


extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
s32 Scene_GetCurrent();
void NpcNetRecord_ResetTalkSlots();
}

extern CommManager *gCommManager;


typedef void (*Unk_020a6564_Fn)(u8 *, u32);

extern "C" {
void NetArea_ReadStateANpcTalk(u8 *p);
void NetArea_ReadStateAPart0();
extern const Unk_020a6564_Fn sNetStateAReaders[2];
}

extern "C" const Unk_020a6564_Fn sNetStateAReaders[2] = {
    (Unk_020a6564_Fn)NetArea_ReadStateAPart0,
    (Unk_020a6564_Fn)NetArea_ReadStateANpcTalk,
};

extern "C" void NetArea_ReadStateAPart0() {}

extern "C" void NetArea_ReadStateANpcTalk(u8 *p) {
    u8 v = 0;
    Scene_GetCurrent();
    MI_CpuCopy8(p, &v, 1);
    if (v != 0) {
        NpcNetRecord_ResetTalkSlots();
    }
}

extern "C" void NetArea_ParseStateA() {
    CommManager *g = gCommManager;
    CommManager *sg = g;
    u8 *p = (u8 *)g->getAuxBufA();
    Unk_020a647c_Buf b;
    u32 n;
    MI_CpuCopy8(p, &b.total, 2);
    u32 total = b.total;
    n = 0;
    p += 2;
    n += 2;
    while (n < total) {
        MI_CpuCopy8(p, &b.len, 4);
        p += 4;
        n += 4;
        u32 len = b.len;
        u32 id = *(volatile u8 *)&b.id;
        sNetStateAReaders[id](p, len);
        p += len;
        n += len;
    }
    sg->clearAuxLenA();
}
