// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern s32 data_0213bfec; // GXi_DmaId
void MI_DmaCopy32(s32 dmaNo, const void *src, void *dest, u32 size); // MI_DmaCopy32
void MIi_CpuCopy32(const void *src, void *dest, u32 size);            // MI_CpuCopy32
void MI_DmaCopy16(s32 dmaNo, const void *src, void *dest, u32 size); // MI_DmaCopy16
void MIi_CpuCopy16(const void *src, void *dest, u32 size);            // MI_CpuCopy16
void *G2S_GetBG0CharPtr(void);
void *G2_GetBG0CharPtr(void);
void *G2S_GetBG3ScrPtr(void);
void *G2_GetBG3ScrPtr(void);
void *G2S_GetBG2ScrPtr(void);
void *G2_GetBG2ScrPtr(void);
void *G2S_GetBG1ScrPtr(void);
void *G2_GetBG1ScrPtr(void);
void *G2S_GetBG0ScrPtr(void);

static inline void copy32(s32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 48) {
        MI_DmaCopy32(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

static inline void copy16(s32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 28) {
        MI_DmaCopy16(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy16(src, dest, size);
    }
}

// GXS_LoadBG0Scr
void GXS_LoadBG0Scr(const void *src, u32 offset, u32 size) {
    u8 *base = G2S_GetBG0ScrPtr();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG1Scr
void GX_LoadBG1Scr(const void *src, u32 offset, u32 size) {
    u8 *base = G2_GetBG1ScrPtr();
    copy16(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG1Scr
void GXS_LoadBG1Scr(const void *src, u32 offset, u32 size) {
    u8 *base = G2S_GetBG1ScrPtr();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG2Scr
void GX_LoadBG2Scr(const void *src, u32 offset, u32 size) {
    u8 *base = G2_GetBG2ScrPtr();
    copy16(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG2Scr
void GXS_LoadBG2Scr(const void *src, u32 offset, u32 size) {
    u8 *base = G2S_GetBG2ScrPtr();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG3Scr
void GX_LoadBG3Scr(const void *src, u32 offset, u32 size) {
    u8 *base = G2_GetBG3ScrPtr();
    copy16(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG3Scr (sub engine BG3 screen base, 16-bit copy)
void GXS_LoadBG3Scr(const void *src, u32 offset, u32 size) {
    u8 *base = G2S_GetBG3ScrPtr();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG0Char (main engine BG0 character base)
void GX_LoadBG0Char(const void *src, u32 offset, u32 size) {
    u8 *base = G2_GetBG0CharPtr();
    copy32(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG0Char (sub engine BG0 character base, 32-bit copy)
void GXS_LoadBG0Char(const void *src, u32 offset, u32 size) {
    u8 *base = G2S_GetBG0CharPtr();
    copy32(data_0213bfec, src, base + offset, size);
}

