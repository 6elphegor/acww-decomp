#include "types.h"

extern "C" {
void DC_FlushRange(void *p, u32 size);
void GX_LoadOBJ(void *p, u32 src, u32 size);
void GXS_LoadOBJ(void *p, u32 src, u32 size);
void GX_LoadOBJPltt(void *p, u32 src, u32 size);
void GXS_LoadOBJPltt(void *p, u32 src, u32 size);
void *Mem_AllocTail(u32 size);
void Mem_Free(void *p);
BOOL FS_OpenFile(void *self, const void *path);
BOOL FS_SeekFile(void *self, u32 off, s32 z);
s32 FS_ReadFile(void *self, void *dst, u32 size);
BOOL FS_CloseFile(void *self);
s32 Hud_GetSceneHudKind(void);
}

struct HudObjGfx {
    u8 unk_00[0x48];
    s32 unk_48;
    s32 unk_4c;
    u8 unk_50[0x200];
    s32 unk_250;
    u8 unk_254;
    u8 unk_255;

    HudObjGfx();
    ~HudObjGfx();
    BOOL loadChars();
    BOOL loadPalette(s32 mode);
    const char *getCharPath(s32 mode);
    const char *getPalettePath(s32 mode);
};

class HudObjGfxIo {
public:
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

const char *HudObjGfx::getCharPath(s32 mode) {
    if (mode >= 4) mode = Hud_GetSceneHudKind();
    const char *b = "/a_mes/a_mes_ten0_obj_ncg.bin";
    const char *a = "/a_mes/a_mes_ten1_obj_ncg.bin";
    const char *c = "/a_mes/a_mes_ten3_obj_ncg.bin";
    const char *r = "/a_mes/a_mes_obj_ncg.bin";
    if (mode == 2) r = a;
    else if (mode == 3) r = b;
    else if (unk_255 != 0) r = c;
    return r;
}

BOOL HudObjGfx::loadPalette(s32 mode) {
    void *r6 = (void *)FS_OpenFile(this, getPalettePath(mode));
    BOOL ok;
    unk_48 = (s32)Mem_AllocTail(0x180);
    if (unk_48 != 0) {
        ok = FS_ReadFile(this, (void *)unk_48, 0x180) != -1 ? TRUE : FALSE;
    } else {
        ok = FALSE;
    }
    s32 r0 = FS_CloseFile(this);
    if (r6 != 0 && ok != 0 && r0 != 0 && unk_48 != 0) return TRUE;
    return FALSE;
}

BOOL HudObjGfx::loadChars() {
    void *r6 = (void *)FS_OpenFile(this, getCharPath(4));
    BOOL ok;
    unk_4c = (s32)Mem_AllocTail(0x3000);
    if (unk_4c != 0) {
        ok = FS_ReadFile(this, (void *)unk_4c, 0x3000) != -1 ? TRUE : FALSE;
    } else {
        ok = FALSE;
    }
    s32 r0 = FS_CloseFile(this);
    if (r6 != 0 && ok != 0 && r0 != 0 && unk_4c != 0) return TRUE;
    return FALSE;
}

void HudObjGfxIo::freePalette() {
    if (unk_48 != NULL) {
        Mem_Free(unk_48);
        unk_48 = NULL;
    }
}

void HudObjGfxIo::freeChars() {
    if (unk_4c != NULL) {
        Mem_Free(unk_4c);
        unk_4c = NULL;
    }
}

void HudObjGfxIo::uploadPalette(s32 which) {
    u8 *base;
    u8 *p2;
    DC_FlushRange(unk_48, 0x180);
    base = unk_48;
    p2 = base + 0x160;
    if ((u32)which <= 1) {
        GX_LoadOBJPltt(base, 0x80, 0x100);
        GX_LoadOBJPltt(p2, 0x1e0, 0x20);
    }
    if (which == 0 || which == 2) {
        GXS_LoadOBJPltt(base, 0x80, 0x100);
        GXS_LoadOBJPltt(p2, 0x1e0, 0x20);
    }
}

void HudObjGfxIo::uploadChars(s32 which) {
    DC_FlushRange(unk_4c, 0x3000);
    if ((u32)which <= 1) {
        GX_LoadOBJ(unk_4c, 0x1000, 0x3000);
    }
    if (which == 0 || which == 2) {
        GXS_LoadOBJ(unk_4c, 0x1000, 0x3000);
    }
}

BOOL HudObjGfxIo::loadKindChars(s32 k) {
    BOOL a = FS_OpenFile(this, ((HudObjGfx *)this)->getCharPath(k));
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0, z5 = 0;
    u32 src;
    s32 i;
    unk_4c = (u8 *)Mem_AllocTail(0x500);
    ok = TRUE;
    if (unk_4c != NULL) {
        src = z1;
        for (i = 0; (u32)i < 2; i++, src += 0x400) {
            if (!FS_SeekFile(this, src, z1)) ok = z2;
            if (FS_ReadFile(this, unk_4c + i * 0x280, 0x280) == ~z4) ok = z3;
        }
    }
    BOOL r = FS_CloseFile(this);
    if (a && ok && r && unk_4c != NULL) return TRUE;
    return FALSE;
}

