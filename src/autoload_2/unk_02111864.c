// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern s32 data_0213bfec; // GXi_DmaId
void func_02115c24(s32 dmaNo, const void *src, void *dest, u32 size); // MI_DmaCopy32
void func_02115e78(const void *src, void *dest, u32 size);            // MI_CpuCopy32
void func_02115bac(s32 dmaNo, const void *src, void *dest, u32 size); // MI_DmaCopy16
void func_02115e48(const void *src, void *dest, u32 size);            // MI_CpuCopy16
void *func_02110708(void);
void *func_02110728(void);
void *func_0211075c(void);
void *func_021107dc(void);
void *func_02110868(void);
void *func_021108e8(void);
void *func_02110974(void);
void *func_02110994(void);
void *func_021109c8(void);

static inline void copy32(s32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 48) {
        func_02115c24(dmaNo, src, dest, size);
    } else {
        func_02115e78(src, dest, size);
    }
}

static inline void copy16(s32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 28) {
        func_02115bac(dmaNo, src, dest, size);
    } else {
        func_02115e48(src, dest, size);
    }
}

// GXS_LoadBG0Scr
void func_02111ba4(const void *src, u32 offset, u32 size) {
    u8 *base = func_021109c8();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG1Scr
void func_02111b3c(const void *src, u32 offset, u32 size) {
    u8 *base = func_02110994();
    copy16(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG1Scr
void func_02111ad4(const void *src, u32 offset, u32 size) {
    u8 *base = func_02110974();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG2Scr
void func_02111a6c(const void *src, u32 offset, u32 size) {
    u8 *base = func_021108e8();
    copy16(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG2Scr
void func_02111a04(const void *src, u32 offset, u32 size) {
    u8 *base = func_02110868();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG3Scr
void func_0211199c(const void *src, u32 offset, u32 size) {
    u8 *base = func_021107dc();
    copy16(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG3Scr (sub engine BG3 screen base, 16-bit copy)
void func_02111934(const void *src, u32 offset, u32 size) {
    u8 *base = func_0211075c();
    copy16(data_0213bfec, src, base + offset, size);
}

// GX_LoadBG0Char (main engine BG0 character base)
void func_021118cc(const void *src, u32 offset, u32 size) {
    u8 *base = func_02110728();
    copy32(data_0213bfec, src, base + offset, size);
}

// GXS_LoadBG0Char (sub engine BG0 character base, 32-bit copy)
void func_02111864(const void *src, u32 offset, u32 size) {
    u8 *base = func_02110708();
    copy32(data_0213bfec, src, base + offset, size);
}

