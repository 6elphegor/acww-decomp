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
extern u32 data_021fcbf8;
extern s32 data_021fcbfc;
extern u16 data_02139f44[];
extern u32 data_021fcbf4, data_021fcc00, data_021fcc04, data_021fcc08;
void MI_WaitDma(s32 dmaNo);                                   // MI_WaitDma
void GX_SetBankForTexPltt(s32 bank);
void GX_SetBankForTex(u32 bank);
s32 func_0210f70c(void);
void MI_DmaCopy32Async(s32 dmaNo, const void *src, void *dest, u32 size, void *callback, void *arg);

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

// GX_EndLoadTex
void GX_EndLoadTex(void) {
    if (data_0213bfec != -1) {
        MI_WaitDma(data_0213bfec);
    }
    GX_SetBankForTex(data_021fcc00);
    data_021fcc08 = 0;
    data_021fcc04 = 0;
    data_021fcbf4 = 0;
    data_021fcc00 = 0;
}

// GX_BeginLoadBGExtPltt
void GX_BeginLoadTexPltt(void) {
    s32 v = func_0210f70c();
    data_021fcbfc = v;
    data_021fcbf8 = (u32)data_02139f44[v >> 4] << 12;
}

// GX_LoadBGExtPltt
void func_02111f7c(const void *src, u32 offset, u32 size) {
    u8 *dest = (u8 *)data_021fcbf8 + offset;
    if (data_0213bfec != -1) {
        MI_DmaCopy32Async(data_0213bfec, src, dest, size, 0, 0);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

// GX_EndLoadBGExtPltt
void func_02111f24(void) {
    if (data_0213bfec != -1) {
        MI_WaitDma(data_0213bfec);
    }
    GX_SetBankForTexPltt(data_021fcbfc);
    data_021fcbfc = 0;
    data_021fcbf8 = 0;
}

// GX_LoadBGPltt (0x05000000)
void GX_LoadBGPltt(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000000 + offset, size);
}

// GXS_LoadBGPltt (0x05000400)
void GXS_LoadBGPltt(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000400 + offset, size);
}

// GX_LoadOBJPltt (0x05000200)
void GX_LoadOBJPltt(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000200 + offset, size);
}

// GXS_LoadOBJPltt (0x05000600)
void GXS_LoadOBJPltt(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000600 + offset, size);
}

// GX_LoadOAM (main engine OAM, 0x07000000)
void GX_LoadOAM(const void *src, u32 offset, u32 size) {
    copy32(data_0213bfec, src, (u8 *)0x7000000 + offset, size);
}

// GXS_LoadOAM (sub engine OAM, 0x07000400)
void GXS_LoadOAM(const void *src, u32 offset, u32 size) {
    copy32(data_0213bfec, src, (u8 *)0x7000400 + offset, size);
}

