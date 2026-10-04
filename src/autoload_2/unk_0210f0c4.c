// mwcc-flags: -nothumb
// NitroSDK GX (gx.c), two functions: autoload_2 0x0210f0c4-0x0210f154. ARM code, mwcc 1.2/base.
// The file's objects are defined here (.data 0x0213bfe8-0x0213bff0, autoload_3 .bss 0x021fcbd0-0x021fcbd8); GX_Init and
// the display on/off functions of the same file are in unk_0210f154.c.
typedef unsigned short u16;
typedef unsigned int u32;

extern u16 data_0213bfe8; // sIsDispOn
extern u32 data_0213bfec; // GXi_DmaId
extern u16 data_021fcbd0; // GXi_VRamLockId
extern u16 data_021fcbd4; // sDispMode

#define reg_GX_DISPCNT (*(volatile u32 *)0x04000000)
#define reg_GXS_DB_DISPCNT (*(volatile u32 *)0x04001000)

void GX_SetGraphicsMode(u32 dispMode, u32 bgMode, u32 bg0_2d3d);
void GXS_SetGraphicsMode(u32 bgMode);

// GX_SetGraphicsMode
void GX_SetGraphicsMode(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = reg_GX_DISPCNT;
    data_021fcbd4 = (u16)dispMode;
    if (!data_0213bfe8) dispMode = 0;
    cnt &= ~(0x7 | 0x8 | 0xf0000);
    reg_GX_DISPCNT = (u32)(cnt | (dispMode << 16) | bgMode | (bg0_2d3d << 3));
    if (!data_021fcbd4) data_0213bfe8 = 0;
}

// GXS_SetGraphicsMode
void GXS_SetGraphicsMode(u32 bgMode) {
    reg_GXS_DB_DISPCNT = (u32)((reg_GXS_DB_DISPCNT & ~0x7) | bgMode);
}

// ---- file-scope objects (definition order gives the original order after mwcc's size sort)
u16 data_021fcbd0; // GXi_VRamLockId
u16 data_021fcbd4; // sDispMode
u32 data_0213bfec = 3; // GXi_DmaId
u16 data_0213bfe8 = 1; // sIsDispOn
