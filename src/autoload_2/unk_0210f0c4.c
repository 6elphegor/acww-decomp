// mwcc-flags: -nothumb
// NitroSDK GX (gx.c), two functions: autoload_2 0x0210f0c4-0x0210f154. ARM code, mwcc 1.2/base.
// The file's other functions and its two objects (sIsDispOn in autoload_2 .data, sDispMode in autoload_3 bss)
// are still delinked, so the objects are referenced by their symbols.txt names.
typedef unsigned short u16;
typedef unsigned int u32;

extern u16 data_0213bfe8; // sIsDispOn
extern u16 data_021fcbd4; // sDispMode

#define reg_GX_DISPCNT (*(volatile u32 *)0x04000000)
#define reg_GXS_DB_DISPCNT (*(volatile u32 *)0x04001000)

void func_0210f0e0(u32 dispMode, u32 bgMode, u32 bg0_2d3d);
void func_0210f0c4(u32 bgMode);

// GX_SetGraphicsMode
void func_0210f0e0(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = reg_GX_DISPCNT;
    data_021fcbd4 = (u16)dispMode;
    if (!data_0213bfe8) dispMode = 0;
    cnt &= ~(0x7 | 0x8 | 0xf0000);
    reg_GX_DISPCNT = (u32)(cnt | (dispMode << 16) | bgMode | (bg0_2d3d << 3));
    if (!data_021fcbd4) data_0213bfe8 = 0;
}

// GXS_SetGraphicsMode
void func_0210f0c4(u32 bgMode) {
    reg_GXS_DB_DISPCNT = (u32)((reg_GXS_DB_DISPCNT & ~0x7) | bgMode);
}
