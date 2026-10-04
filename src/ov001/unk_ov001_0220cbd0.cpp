// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220cbd0_Tbl {
    u32 *offsets;
    u8 *strings;
    void *unk_08;
};

struct WfcMsgBank {
    u32 offsets;
    u32 strings;
    void *file;
};

struct Unk_ov001_0220cc30_Mgr {
    u8 unk_00[0x60];
    void *pool;
};

extern "C" {
Unk_ov001_0220cc30_Mgr *sWfcMsgPool;

extern void WfcFs_FreeFile(void *);
extern void *WfcPool_Get(void *);
extern void WfcPool_Put(void *, void *);
extern void *WfcFs_LoadFile(void *, void *, u32);
extern void *WfcPool_CreateFrom(s32, void *, s32);
extern void WfcHeap_FreeAndClear(void *);
extern void *WfcHeap_Alloc(s32, s32);

#pragma thumb off

void WfcMsg_InitPool() {
    Unk_ov001_0220cc30_Mgr *m = (Unk_ov001_0220cc30_Mgr *)WfcHeap_Alloc(0x64, 4);
    sWfcMsgPool = m;
    sWfcMsgPool->pool = WfcPool_CreateFrom(8, m, 0xc);
}

void WfcMsg_FreePool() {
    WfcHeap_FreeAndClear(&sWfcMsgPool);
}

WfcMsgBank *WfcMsg_Load(void *a) {
    u32 sz;
    WfcMsgBank *e = (WfcMsgBank *)WfcPool_Get(sWfcMsgPool->pool);
    e->file = WfcFs_LoadFile(a, &sz, 4);
    u8 *b = (u8 *)e->file + 0x20;
    e->offsets = (u32)(b + 0x10);
    e->strings = (u32)(b + *(u32 *)(b + 4) + 8);
    return e;
}

void WfcMsg_Unload(WfcMsgBank *e) {
    WfcFs_FreeFile(e->file);
    WfcPool_Put(sWfcMsgPool->pool, e);
}

u8 *WfcMsg_GetString(Unk_ov001_0220cbd0_Tbl *t, u32 i) {
    return t->strings + t->offsets[i & 0xffff];
}

u16 *WfcMsg_GetStringWithDigit(Unk_ov001_0220cbd0_Tbl *t, u32 i, s32 j, u32 v) {
    u16 *p = (u16 *)(t->strings + t->offsets[i & 0xffff]);
    if (j >= 0) p[j] = v + 0x30;
    return p;
}
}
#pragma thumb reset
