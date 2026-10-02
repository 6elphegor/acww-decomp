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
extern u32 data_021fcbf8;
extern s32 data_021fcbfc;
extern u16 data_02139f44[];
extern u32 data_021fcbf4, data_021fcc00, data_021fcc04, data_021fcc08;
void func_01ffa080(s32 dmaNo);                                   // MI_WaitDma
void func_0210fbc4(s32 bank);
void func_0210fcb8(u32 bank);
s32 func_0210f70c(void);
void func_02115a2c(s32 dmaNo, const void *src, void *dest, u32 size, void *callback, void *arg);

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

// GX_EndLoadTex
void func_02112038(void) {
    if (data_0213bfec != -1) {
        func_01ffa080(data_0213bfec);
    }
    func_0210fcb8(data_021fcc00);
    data_021fcc08 = 0;
    data_021fcc04 = 0;
    data_021fcbf4 = 0;
    data_021fcc00 = 0;
}

// GX_BeginLoadBGExtPltt
void func_02111ff0(void) {
    s32 v = func_0210f70c();
    data_021fcbfc = v;
    data_021fcbf8 = (u32)data_02139f44[v >> 4] << 12;
}

// GX_LoadBGExtPltt
void func_02111f7c(const void *src, u32 offset, u32 size) {
    u8 *dest = (u8 *)data_021fcbf8 + offset;
    if (data_0213bfec != -1) {
        func_02115a2c(data_0213bfec, src, dest, size, 0, 0);
    } else {
        func_02115e78(src, dest, size);
    }
}

// GX_EndLoadBGExtPltt
void func_02111f24(void) {
    if (data_0213bfec != -1) {
        func_01ffa080(data_0213bfec);
    }
    func_0210fbc4(data_021fcbfc);
    data_021fcbfc = 0;
    data_021fcbf8 = 0;
}

// GX_LoadBGPltt (0x05000000)
void func_02111ec8(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000000 + offset, size);
}

// GXS_LoadBGPltt (0x05000400)
void func_02111e60(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000400 + offset, size);
}

// GX_LoadOBJPltt (0x05000200)
void func_02111df8(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000200 + offset, size);
}

// GXS_LoadOBJPltt (0x05000600)
void func_02111d90(const void *src, u32 offset, u32 size) {
    copy16(data_0213bfec, src, (u8 *)0x5000600 + offset, size);
}

// GX_LoadOAM (main engine OAM, 0x07000000)
void func_02111d34(const void *src, u32 offset, u32 size) {
    copy32(data_0213bfec, src, (u8 *)0x7000000 + offset, size);
}

// GXS_LoadOAM (sub engine OAM, 0x07000400)
void func_02111ccc(const void *src, u32 offset, u32 size) {
    copy32(data_0213bfec, src, (u8 *)0x7000400 + offset, size);
}

