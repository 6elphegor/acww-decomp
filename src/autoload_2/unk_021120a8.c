// mwcc-flags: -nothumb -O4,p
// NitroSDK gx_load3d.c: GX_LoadTex, autoload_2 0x021120a8-0x0211220c. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern s32 data_0213bfec; // GXi_DmaId
extern u32 data_021fcbf4; // sTexLCDCBlk1
extern u32 data_021fcc04; // sTexLCDCBlk2
extern u32 data_021fcc08; // sSzTexBlk1
void MI_DmaCopy32(s32 dmaNo, const void *src, void *dest, u32 size); // MI_DmaCopy32
void MIi_CpuCopy32(const void *src, void *dest, u32 size);            // MI_CpuCopy32
void MI_DmaCopy32Async(s32 dmaNo, const void *src, void *dest, u32 size, void *callback, void *arg); // MI_DmaCopy32Async

// GXi_DmaCopy32
static inline void GXi_DmaCopy32(s32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 48) {
        MI_DmaCopy32(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

// GXi_DmaCopy32Async
static inline void GXi_DmaCopy32Async(s32 dmaNo, const void *src, void *dest, u32 size, void *callback, void *arg) {
    if (dmaNo != -1) {
        MI_DmaCopy32Async(dmaNo, src, dest, size, callback, arg);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

// GX_LoadTex
void GX_LoadTex(const void *pSrc, u32 dstSlotOffset, u32 szByte) {
    void *pLCDC;

    if (0 == data_021fcc04) {
        pLCDC = (void *)(data_021fcbf4 + dstSlotOffset);
    } else {
        if (dstSlotOffset + szByte < data_021fcc08) {
            pLCDC = (void *)(data_021fcbf4 + dstSlotOffset);
        } else if (dstSlotOffset >= data_021fcc08) {
            pLCDC = (void *)(data_021fcc04 + dstSlotOffset - data_021fcc08);
        } else {
            void *pLCDC2 = (void *)data_021fcc04;
            u32 sz = data_021fcc08 - dstSlotOffset;

            pLCDC = (void *)(data_021fcbf4 + dstSlotOffset);
            GXi_DmaCopy32(data_0213bfec, pSrc, pLCDC, sz);
            GXi_DmaCopy32Async(data_0213bfec, (void *)((u8 *)pSrc + sz), pLCDC2, szByte - sz, 0, 0);
            return;
        }
    }
    GXi_DmaCopy32Async(data_0213bfec, pSrc, pLCDC, szByte, 0, 0);
}
