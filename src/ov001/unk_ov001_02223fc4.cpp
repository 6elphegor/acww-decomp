// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df30 {
    void *unk_00;
    u8 unk_04[0x80];
    void *unk_84;
    u8 unk_88[0x5c];
    u16 unk_e4;
};

struct Unk_ov001_02224074_Obj {
    u8 pad_00[0x24];
    u32 unk_24;
    u32 unk_28;
    u8 pad_2c[0x1c];
};

struct Unk_ov001_022242e8_Obj {
    u8 pad_00[0x48];
};

struct Unk_ov001_022242e8_Obj2 {
    u8 pad_00[0x80];
};

extern "C" {
void WfcHeap_FreeAndClear(void *);
void WfcPool_Put(void *, void *);
void WfcPool_Get(void *);
void *WfcHeap_Alloc(s32, s32);
void *WfcHeap_AllocClear(s32, s32);
void *WfcPool_CreateFrom(s32, void *, s32);

s32 func_0212a438(void *);
s32 memcmp(void *, void *, s32);
void FS_InitFile(void *);
s32 FS_OpenFile(void *, void *);
void Fatal_Trap();
void FS_ReadFile(void *, void *, s32);
void FS_CloseFile(void *);
void MI_UncompressLZ8(void *, void *);
s32 FS_NotifyArchiveAsyncEnd(void *, s32);
void CARDi_ReadRom(s32, void *, s32, s32, void *, void *, s32);
void CARD_LockRom(u32);
void CARD_UnlockRom(u32);
void FS_ChangeDir(void *);
void FS_UnloadArchiveTables(void *);
void FS_UnloadArchive(void *);
void FS_ReleaseArchiveName(void *);
void OS_ReleaseLockID(u32);
u32 OS_GetLockID();
void FS_InitArchive(void *);
s32 FS_RegisterArchiveName(void *, void *, s32);
void FS_SetArchiveProc(void *, void *, s32);
s32 FS_LoadArchive(void *, u32, u32, u32, u32, u32, void *, void *);
void *FS_LoadArchiveTables(void *, void *, void *);
void OS_SPrintf(void *, void *, void *);

BOOL WfcUtil_StrEndsWith(void *a, void *b, s32 n);
s32 WfcFs_OnReadDone(void *a);
s32 WfcFs_ReadCallback(u8 *self, s32 x, s32 y, s32 z);
s32 WfcFs_ArchiveProc(void *self, s32 code);
BOOL WfcFs_WriteCallback();
}

extern "C" const char sWfcArchiveName[4];
extern "C" const char sWfcArchiveName[4] = "dwc";
extern "C" Unk_ov001_0222df30 *sWfcFs = 0;

extern "C" void WfcFs_MountArchive() {
    u32 a[2];
    u32 b[2];
    Unk_ov001_022242e8_Obj o;
    Unk_ov001_022242e8_Obj2 o2;
    u32 r4;
    sWfcFs = (Unk_ov001_0222df30 *)WfcHeap_AllocClear(0xe8, 4);
    FS_InitFile(&o);
    if (FS_OpenFile(&o, (void *)"rom:/dwc/utility.bin") == 0) {
        Fatal_Trap();
    }
    sWfcFs->unk_e4 = OS_GetLockID();
    r4 = *(u32 *)((u8 *)&o + 0x24);
    FS_ReadFile(&o, a, 8);
    FS_ReadFile(&o, b, 8);
    FS_CloseFile(&o);
    FS_InitArchive(sWfcFs->unk_88);
    if (FS_RegisterArchiveName(sWfcFs->unk_88, (void *)sWfcArchiveName, 3) == 0) {
        Fatal_Trap();
    }
    FS_SetArchiveProc(sWfcFs->unk_88, (void *)WfcFs_ArchiveProc, 0x602);
    if (FS_LoadArchive(sWfcFs->unk_88, r4, b[0], b[1], a[0], a[1], (void *)WfcFs_ReadCallback, (void *)WfcFs_WriteCallback) == 0) {
        Fatal_Trap();
    }
    void *r4b = FS_LoadArchiveTables(sWfcFs->unk_88, 0, 0);
    sWfcFs->unk_00 = WfcHeap_Alloc((s32)r4b, 4);
    FS_LoadArchiveTables(sWfcFs->unk_88, sWfcFs->unk_00, r4b);
    sWfcFs->unk_84 = WfcPool_CreateFrom(0x20, sWfcFs->unk_04, 4);
    OS_SPrintf(&o2, (void *)"%s:/", (void *)sWfcArchiveName);
    FS_ChangeDir(&o2);
}

extern "C" void WfcFs_UnmountArchive() {
    FS_ChangeDir((void *)"rom:/");
    FS_UnloadArchiveTables(sWfcFs->unk_88);
    FS_UnloadArchive(sWfcFs->unk_88);
    FS_ReleaseArchiveName(sWfcFs->unk_88);
    OS_ReleaseLockID(sWfcFs->unk_e4);
    sWfcFs->unk_e4 = 0;
    WfcHeap_FreeAndClear(sWfcFs);
    sWfcFs->unk_00 = 0;
    WfcHeap_FreeAndClear(&sWfcFs);
}

extern "C" s32 WfcFs_ArchiveProc(void *self, s32 code) {
    switch (code) {
    case 9:
        CARD_LockRom(sWfcFs->unk_e4);
        return 0;
    case 10:
        CARD_UnlockRom(sWfcFs->unk_e4);
        return 0;
    case 1:
        return 4;
    default:
        return 8;
    }
}

extern "C" s32 WfcFs_ReadCallback(u8 *self, s32 x, s32 y, s32 z) {
    CARDi_ReadRom(-1, (void *)(y + *(s32 *)(self + 0x28)), x, z, (void *)WfcFs_OnReadDone, self, 1);
    return 6;
}

extern "C" s32 WfcFs_OnReadDone(void *a) {
    return FS_NotifyArchiveAsyncEnd(a, 0);
}

extern "C" BOOL WfcFs_WriteCallback() {
    return TRUE;
}

extern "C" void *WfcFs_LoadFile(void *name, u32 *outSize, s32 c) {
    void *p;
    Unk_ov001_02224074_Obj o;
    s32 r6;
    u32 n;
    WfcPool_Get(sWfcFs->unk_84);
    FS_InitFile(&o);
    if (FS_OpenFile(&o, name) == 0) {
        Fatal_Trap();
    }
    n = o.unk_28 - o.unk_24;
    if (outSize != 0) {
        *outSize = n;
    }
    if (WfcUtil_StrEndsWith(name, (void *)".l", 2) != 0) {
        r6 = -4;
    } else {
        r6 = c;
    }
    p = WfcHeap_Alloc(n, r6);
    FS_ReadFile(&o, p, n);
    FS_CloseFile(&o);
    if (r6 > 0) {
        return p;
    }
    u32 v = *(u32 *)p >> 8;
    if (outSize != 0) {
        *outSize = v;
    }
    void *q = WfcHeap_Alloc(v, c);
    MI_UncompressLZ8(p, q);
    WfcHeap_FreeAndClear(&p);
    return q;
}

extern "C" void WfcFs_FreeFile(void *p, ...) {
    WfcHeap_FreeAndClear(&p);
    WfcPool_Put(sWfcFs->unk_84, p);
}

extern "C" BOOL WfcUtil_StrEndsWith(void *a, void *b, s32 n) {
    s32 la = func_0212a438(a);
    s32 lb = func_0212a438(b);
    if (la < n || lb < n) {
        return FALSE;
    }
    return memcmp((u8 *)a + (la - n), (u8 *)b + (lb - n), n) == 0;
}

