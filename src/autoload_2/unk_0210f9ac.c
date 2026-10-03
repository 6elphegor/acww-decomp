// mwcc-flags: -nothumb
// NitroSDK GX (gx.c and gx_vramcnt.c), autoload_2 0x0210f9ac-0x0210f9cc. ARM code, mwcc 1.2/base, default -O4,s.
// data_021fcbd8 is the 13-halfword VRAM bank state (index: 0 lcdc, 1 bg, 2 obj, 3 arm7, 4 tex, 5 texPltt,
// 6 clearImage, 7 bgExtPltt, 8 objExtPltt, 9 subBg, 10 subObj, 11 subBgExtPltt, 12 subObjExtPltt); the game and
// the delinked callers also refer to its members by their own symbols (data_021fcbda ... data_021fcbf0).
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;

extern u16 data_021fcbd8[13];

extern void GX_VRAMCNT_SetLCDC_(u32 mask);


void GX_SetBankForLCDC(u32 bank);

// GX_SetBankForLCDC
void GX_SetBankForLCDC(u32 bank) {
    data_021fcbd8[0] |= bank;
    GX_VRAMCNT_SetLCDC_(bank);
}
