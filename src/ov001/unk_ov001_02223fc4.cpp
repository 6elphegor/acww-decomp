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
void func_ov001_02225d58(void *);
void func_ov001_02224cfc(void *, void *);
void func_ov001_02224ca0(void *);
void *func_ov001_02225dd8(s32, s32);
void *func_ov001_02225db0(s32, s32);
void *func_ov001_02224d84(s32, void *, s32);

s32 func_0212a438(void *);
s32 memcmp(void *, void *, s32);
void FS_InitFile(void *);
s32 FS_OpenFile(void *, void *);
void func_0206d49c();
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

BOOL func_ov001_02223fc4(void *a, void *b, s32 n);
s32 func_ov001_02224178(void *a);
s32 func_ov001_02224188(u8 *self, s32 x, s32 y, s32 z);
s32 func_ov001_022241d0(void *self, s32 code);
BOOL func_ov001_02224170();
}

extern "C" const char data_ov001_0222a450[4];
extern "C" const char data_ov001_0222a450[4] = "dwc";
extern "C" Unk_ov001_0222df30 *data_ov001_0222df30 = 0;

extern "C" void func_ov001_022242e8() {
    u32 a[2];
    u32 b[2];
    Unk_ov001_022242e8_Obj o;
    Unk_ov001_022242e8_Obj2 o2;
    u32 r4;
    data_ov001_0222df30 = (Unk_ov001_0222df30 *)func_ov001_02225db0(0xe8, 4);
    FS_InitFile(&o);
    if (FS_OpenFile(&o, (void *)"rom:/dwc/utility.bin") == 0) {
        func_0206d49c();
    }
    data_ov001_0222df30->unk_e4 = OS_GetLockID();
    r4 = *(u32 *)((u8 *)&o + 0x24);
    FS_ReadFile(&o, a, 8);
    FS_ReadFile(&o, b, 8);
    FS_CloseFile(&o);
    FS_InitArchive(data_ov001_0222df30->unk_88);
    if (FS_RegisterArchiveName(data_ov001_0222df30->unk_88, (void *)data_ov001_0222a450, 3) == 0) {
        func_0206d49c();
    }
    FS_SetArchiveProc(data_ov001_0222df30->unk_88, (void *)func_ov001_022241d0, 0x602);
    if (FS_LoadArchive(data_ov001_0222df30->unk_88, r4, b[0], b[1], a[0], a[1], (void *)func_ov001_02224188, (void *)func_ov001_02224170) == 0) {
        func_0206d49c();
    }
    void *r4b = FS_LoadArchiveTables(data_ov001_0222df30->unk_88, 0, 0);
    data_ov001_0222df30->unk_00 = func_ov001_02225dd8((s32)r4b, 4);
    FS_LoadArchiveTables(data_ov001_0222df30->unk_88, data_ov001_0222df30->unk_00, r4b);
    data_ov001_0222df30->unk_84 = func_ov001_02224d84(0x20, data_ov001_0222df30->unk_04, 4);
    OS_SPrintf(&o2, (void *)"%s:/", (void *)data_ov001_0222a450);
    FS_ChangeDir(&o2);
}

extern "C" void func_ov001_02224258() {
    FS_ChangeDir((void *)"rom:/");
    FS_UnloadArchiveTables(data_ov001_0222df30->unk_88);
    FS_UnloadArchive(data_ov001_0222df30->unk_88);
    FS_ReleaseArchiveName(data_ov001_0222df30->unk_88);
    OS_ReleaseLockID(data_ov001_0222df30->unk_e4);
    data_ov001_0222df30->unk_e4 = 0;
    func_ov001_02225d58(data_ov001_0222df30);
    data_ov001_0222df30->unk_00 = 0;
    func_ov001_02225d58(&data_ov001_0222df30);
}

extern "C" s32 func_ov001_022241d0(void *self, s32 code) {
    switch (code) {
    case 9:
        CARD_LockRom(data_ov001_0222df30->unk_e4);
        return 0;
    case 10:
        CARD_UnlockRom(data_ov001_0222df30->unk_e4);
        return 0;
    case 1:
        return 4;
    default:
        return 8;
    }
}

extern "C" s32 func_ov001_02224188(u8 *self, s32 x, s32 y, s32 z) {
    CARDi_ReadRom(-1, (void *)(y + *(s32 *)(self + 0x28)), x, z, (void *)func_ov001_02224178, self, 1);
    return 6;
}

extern "C" s32 func_ov001_02224178(void *a) {
    return FS_NotifyArchiveAsyncEnd(a, 0);
}

extern "C" BOOL func_ov001_02224170() {
    return TRUE;
}

extern "C" void *func_ov001_02224074(void *name, u32 *outSize, s32 c) {
    void *p;
    Unk_ov001_02224074_Obj o;
    s32 r6;
    u32 n;
    func_ov001_02224ca0(data_ov001_0222df30->unk_84);
    FS_InitFile(&o);
    if (FS_OpenFile(&o, name) == 0) {
        func_0206d49c();
    }
    n = o.unk_28 - o.unk_24;
    if (outSize != 0) {
        *outSize = n;
    }
    if (func_ov001_02223fc4(name, (void *)".l", 2) != 0) {
        r6 = -4;
    } else {
        r6 = c;
    }
    p = func_ov001_02225dd8(n, r6);
    FS_ReadFile(&o, p, n);
    FS_CloseFile(&o);
    if (r6 > 0) {
        return p;
    }
    u32 v = *(u32 *)p >> 8;
    if (outSize != 0) {
        *outSize = v;
    }
    void *q = func_ov001_02225dd8(v, c);
    MI_UncompressLZ8(p, q);
    func_ov001_02225d58(&p);
    return q;
}

extern "C" void func_ov001_02224038(void *p, ...) {
    func_ov001_02225d58(&p);
    func_ov001_02224cfc(data_ov001_0222df30->unk_84, p);
}

extern "C" BOOL func_ov001_02223fc4(void *a, void *b, s32 n) {
    s32 la = func_0212a438(a);
    s32 lb = func_0212a438(b);
    if (la < n || lb < n) {
        return FALSE;
    }
    return memcmp((u8 *)a + (la - n), (u8 *)b + (lb - n), n) == 0;
}

