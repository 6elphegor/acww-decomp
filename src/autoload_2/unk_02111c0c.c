// mwcc-flags: -nothumb -O4,p
// NitroSDK gx_load2d.c: GX_LoadOBJ / GXS_LoadOBJ, autoload_2 0x02111c0c-0x02111ccc. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern s32 data_0213bfec; // GXi_DmaId
void MI_DmaCopy32(s32 dmaNo, const void *src, void *dest, u32 size); // MI_DmaCopy32
void MIi_CpuCopy32(const void *src, void *dest, u32 size);            // MI_CpuCopy32

// GXi_DmaCopy32
static inline void copy32(s32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 48) {
        MI_DmaCopy32(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

// G2_GetOBJCharPtr / G2S_GetOBJCharPtr (gx/g2.h): constant-returning inlines
static inline void *G2_GetOBJCharPtr(void) {
    return (void *)0x06400000; // HW_OBJ_VRAM
}

static inline void *G2S_GetOBJCharPtr(void) {
    return (void *)0x06600000; // HW_DB_OBJ_VRAM
}

// GX_LoadOBJ
void GX_LoadOBJ(const void *src, u32 offset, u32 size) {
    u32 base = (u32)G2_GetOBJCharPtr();
    copy32(data_0213bfec, src, (void *)(base + offset), size);
}

// GXS_LoadOBJ
void GXS_LoadOBJ(const void *src, u32 offset, u32 size) {
    u32 base = (u32)G2S_GetOBJCharPtr();
    copy32(data_0213bfec, src, (void *)(base + offset), size);
}
