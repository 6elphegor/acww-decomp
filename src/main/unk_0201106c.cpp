#include "types.h"

extern "C" {
void DC_FlushRange(void *p, u32 size);
void GX_LoadOBJ(void *p, u32 src, u32 size);
void GXS_LoadOBJ(void *p, u32 src, u32 size);
void *Mem_AllocTail(u32 size);
void Mem_Free(void *p);
BOOL FS_OpenFile(void *self, const void *path);
BOOL FS_SeekFile(void *self, u32 off, s32 z);
s32 FS_ReadFile(void *self, void *dst, u32 size);
BOOL FS_CloseFile(void *self);
}

// Defined in the neighbouring unit (U012).
class HudObjGfx {
public:
    const void *getCharPath(s32 k);
};

// The class's other methods (0x02011410, 0x02011550, 0x02011568, ...) are defined in other units.
class HudObjGfxIo {
public:
    void releaseSlideIconChars();
    void uploadSlideIconChars();
    BOOL loadSlideIconChars(s32 alt);
    void releaseLinkIconChars();
    void uploadLinkIconChars();
    BOOL loadLinkIconChars(s32 alt);
    void uploadCameraButtonChars(s32 which);
    BOOL loadCameraButtonChars(s32 alt);
    void uploadKindChars(s32 which);
    void releaseKindChars();
    BOOL loadKindChars(s32 k);
    void uploadChars(s32 which);
    void uploadPalette(s32 which);
    void freeChars();
    void freePalette();

    u8 unk_00[0x48];
    u8 *unk_48;
    u8 *unk_4c;
    u8 unk_50[0x200];
};

extern const char sHudObjCharPathTen2[];
const char sHudObjCharPathTen2[] = "/a_mes/a_mes_ten2_obj_ncg.bin";

u32 sSlideIconCharOffsets[5] = {0x28c0, 0x100, 0x140, 0x180, 0x1c0};

void HudObjGfxIo::releaseKindChars() {
    freeChars();
}

void HudObjGfxIo::uploadKindChars(s32 which) {
    BOOL w, f1, f2;
    u32 src;
    s32 i;
    DC_FlushRange(unk_4c, 0x500);
    w = which == 0;
    f1 = w || which == 1;
    f2 = w || which == 2;
    src = 0x1000;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_4c + i * 0x280;
        if (f1) GX_LoadOBJ(p, src, 0x280);
        if (f2) GXS_LoadOBJ(p, src, 0x280);
    }
}

BOOL HudObjGfxIo::loadCameraButtonChars(s32 alt) {
    BOOL a = FS_OpenFile(this, alt != 0 ? sHudObjCharPathTen2 : ((HudObjGfx *)this)->getCharPath(2));
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u32 src;
    s32 i;
    ok = TRUE;
    if (alt != 0) {
        src = 0;
    } else {
        src = 0x180;
    }
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        if (!FS_SeekFile(this, src, z1)) ok = z2;
        if (FS_ReadFile(this, unk_50 + i * 0x100, 0x100) == ~z4) ok = z3;
    }
    BOOL r = FS_CloseFile(this);
    if (a && ok && r) return TRUE;
    return FALSE;
}

void HudObjGfxIo::uploadCameraButtonChars(s32 which) {
    BOOL w, f1, f2;
    u32 src;
    s32 i;
    DC_FlushRange(unk_50, 0x200);
    w = which == 0;
    f1 = w || which == 1;
    f2 = w || which == 2;
    src = 0x1180;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_50 + i * 0x100;
        if (f1) GX_LoadOBJ(p, src, 0x100);
        if (f2) GXS_LoadOBJ(p, src, 0x100);
    }
}

BOOL HudObjGfxIo::loadLinkIconChars(s32 alt) {
    BOOL a = FS_OpenFile(this, alt != 0 ? sHudObjCharPathTen2 : ((HudObjGfx *)this)->getCharPath(4));
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u32 src;
    s32 i;
    unk_4c = (u8 *)Mem_AllocTail(0x200);
    ok = TRUE;
    if (alt != 0) {
        src = 0x200;
    } else {
        src = 0x2300;
    }
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        if (!FS_SeekFile(this, src, z1)) ok = z2;
        if (FS_ReadFile(this, unk_4c + i * 0x100, 0x100) == ~z4) ok = z3;
    }
    BOOL r = FS_CloseFile(this);
    if (a && ok && r) return TRUE;
    return FALSE;
}

void HudObjGfxIo::uploadLinkIconChars() {
    u32 src;
    s32 i;
    DC_FlushRange(unk_4c, 0x200);
    src = 0x3300;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_4c + i * 0x100;
        GX_LoadOBJ(p, src, 0x100);
        GXS_LoadOBJ(p, src, 0x100);
    }
}

void HudObjGfxIo::releaseLinkIconChars() {
    freeChars();
}

BOOL HudObjGfxIo::loadSlideIconChars(s32 alt) {
    BOOL a = FS_OpenFile(this, alt == 0 ? ((HudObjGfx *)this)->getCharPath(1) : sHudObjCharPathTen2);
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u32 src;
    s32 i;
    unk_4c = (u8 *)Mem_AllocTail(0x80);
    ok = TRUE;
    src = sSlideIconCharOffsets[alt];
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        if (!FS_SeekFile(this, src, z1)) ok = z2;
        if (FS_ReadFile(this, unk_4c + i * 0x40, 0x40) == ~z4) ok = z3;
    }
    BOOL r = FS_CloseFile(this);
    if (a && ok && r) return TRUE;
    return FALSE;
}

void HudObjGfxIo::uploadSlideIconChars() {
    u32 src;
    s32 i;
    DC_FlushRange(unk_4c, 0x80);
    src = 0x38c0;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_4c + i * 0x40;
        GX_LoadOBJ(p, src, 0x40);
        GXS_LoadOBJ(p, src, 0x40);
    }
}

void HudObjGfxIo::releaseSlideIconChars() {
    freeChars();
}
