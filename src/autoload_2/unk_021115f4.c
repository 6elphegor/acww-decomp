// mwcc-flags: -nothumb -O4,p
// NitroSDK graphics (G2/G3/GX), autoload_2 0x021115f4-0x02111864. ARM code, mwcc 1.2/base with -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;

#define R8(a) (*(volatile u8 *)(a))
#define R16(a) (*(volatile u16 *)(a))
#define R32(a) (*(volatile u32 *)(a))

extern s32 data_0213bfec; // sDmaNo (-1 = use the CPU)
extern void func_02115c24(s32 dmaNo, const void *src, void *dst, u32 size);
extern void func_02115e78(const void *src, void *dst, u32 size);
extern void *func_02110564(void);
extern void *func_021105b4(void);
extern void *func_02110614(void);
extern void *func_0211065c(void);
extern void *func_021106b4(void);
extern void *func_021106d4(void);

// GX_LoadBG1Char
void func_021117fc(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *)func_021106d4();
    if (data_0213bfec != -1 && size > 0x30) {
        func_02115c24(data_0213bfec, src, base + offset, size);
    } else {
        func_02115e78(src, base + offset, size);
    }
}
// GXS_LoadBG1Char
void func_02111794(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *)func_021106b4();
    if (data_0213bfec != -1 && size > 0x30) {
        func_02115c24(data_0213bfec, src, base + offset, size);
    } else {
        func_02115e78(src, base + offset, size);
    }
}
// GX_LoadBG2Char
void func_0211172c(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *)func_0211065c();
    if (data_0213bfec != -1 && size > 0x30) {
        func_02115c24(data_0213bfec, src, base + offset, size);
    } else {
        func_02115e78(src, base + offset, size);
    }
}
// GXS_LoadBG2Char
void func_021116c4(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *)func_02110614();
    if (data_0213bfec != -1 && size > 0x30) {
        func_02115c24(data_0213bfec, src, base + offset, size);
    } else {
        func_02115e78(src, base + offset, size);
    }
}
// GX_LoadBG3Char
void func_0211165c(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *)func_021105b4();
    if (data_0213bfec != -1 && size > 0x30) {
        func_02115c24(data_0213bfec, src, base + offset, size);
    } else {
        func_02115e78(src, base + offset, size);
    }
}
// GXS_LoadBG3Char
void func_021115f4(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *)func_02110564();
    if (data_0213bfec != -1 && size > 0x30) {
        func_02115c24(data_0213bfec, src, base + offset, size);
    } else {
        func_02115e78(src, base + offset, size);
    }
}
