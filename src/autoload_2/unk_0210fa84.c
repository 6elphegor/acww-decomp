// mwcc-flags: -nothumb
// NitroSDK GX (gx.c and gx_vramcnt.c), autoload_2 0x0210fa84-0x021104ac. ARM code, mwcc 1.2/base, default -O4,s.
// data_021fcbd8 is the 13-halfword VRAM bank state (index: 0 lcdc, 1 bg, 2 obj, 3 arm7, 4 tex, 5 texPltt,
// 6 clearImage, 7 bgExtPltt, 8 objExtPltt, 9 subBg, 10 subObj, 11 subBgExtPltt, 12 subObjExtPltt); the game and
// the delinked callers also refer to its members by their own symbols (data_021fcbda ... data_021fcbf0).
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;

extern u16 data_021fcbd8[13];

extern void func_021104ac(u32 mask);

#define reg_GX_DISPCNT (*(volatile u32 *)0x04000000)
#define reg_GX_DISP3DCNT (*(volatile u16 *)0x04000060)
#define VRAMCNT(n) (*(volatile u8 *)(0x04000240 + (n)))

void func_021101f4(int bank);
void func_02110088(int bank);
void func_0210ff74(int bank);
void func_0210febc(int bank);
void func_0210fcb8(int bank);
void func_0210fbc4(int bank);
void func_0210fa84(int bank);

// GX_SetBankForBG
void func_021101f4(int bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[1]) & ~bank);
    data_021fcbd8[1] = bank;
    switch (bank) {
    case 0: break;
    case 8: VRAMCNT(3) = 0x81; break;
    case 12: VRAMCNT(3) = 0x89;
    case 4: VRAMCNT(2) = 0x81; break;
    case 14: VRAMCNT(3) = 0x91;
    case 6: VRAMCNT(2) = 0x89;
    case 2: VRAMCNT(1) = 0x81; break;
    case 15: VRAMCNT(3) = 0x99;
    case 7: VRAMCNT(2) = 0x91;
    case 3: VRAMCNT(1) = 0x89;
    case 1: VRAMCNT(0) = 0x81; break;
    case 11: VRAMCNT(0) = 0x81; VRAMCNT(1) = 0x89; VRAMCNT(3) = 0x91; break;
    case 13: VRAMCNT(3) = 0x91;
    case 5: VRAMCNT(0) = 0x81; VRAMCNT(2) = 0x89; break;
    case 9: VRAMCNT(0) = 0x81; VRAMCNT(3) = 0x89; break;
    case 10: VRAMCNT(1) = 0x81; VRAMCNT(3) = 0x89; break;
    case 0x70: VRAMCNT(6) = 0x99;
    case 0x30: VRAMCNT(5) = 0x91;
    case 0x10: VRAMCNT(4) = 0x81; break;
    case 0x50: VRAMCNT(6) = 0x91; VRAMCNT(4) = 0x81; break;
    case 0x60: VRAMCNT(6) = 0x89;
    case 0x20: VRAMCNT(5) = 0x81; break;
    case 0x40: VRAMCNT(6) = 0x81; break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForOBJ
void func_02110088(int bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[2]) & ~bank);
    data_021fcbd8[2] = bank;
    switch (bank) {
    case 0: break;
    case 3: VRAMCNT(1) = 0x8a;
    case 1: VRAMCNT(0) = 0x82; break;
    case 2: VRAMCNT(1) = 0x82; break;
    case 0x70: VRAMCNT(6) = 0x9a;
    case 0x30: VRAMCNT(5) = 0x92;
    case 0x10: VRAMCNT(4) = 0x82; break;
    case 0x50: VRAMCNT(6) = 0x92; VRAMCNT(4) = 0x82; break;
    case 0x60: VRAMCNT(6) = 0x8a;
    case 0x20: VRAMCNT(5) = 0x82; break;
    case 0x40: VRAMCNT(6) = 0x82; break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForBGExtPltt
void func_0210ff74(int bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[7]) & ~bank);
    data_021fcbd8[7] = bank;
    switch (bank) {
    case 0: reg_GX_DISPCNT &= ~0x40000000; break;
    case 0x10: reg_GX_DISPCNT |= 0x40000000; VRAMCNT(4) = 0x84; break;
    case 0x40: reg_GX_DISPCNT |= 0x40000000; VRAMCNT(6) = 0x8c; break;
    case 0x60: VRAMCNT(6) = 0x8c;
    case 0x20: VRAMCNT(5) = 0x84; reg_GX_DISPCNT |= 0x40000000; break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForOBJExtPltt
void func_0210febc(int bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[8]) & ~bank);
    data_021fcbd8[8] = bank;
    switch (bank) {
    case 0x20: reg_GX_DISPCNT |= 0x80000000; VRAMCNT(5) = 0x85; break;
    case 0x40: reg_GX_DISPCNT |= 0x80000000; VRAMCNT(6) = 0x85; break;
    case 0: reg_GX_DISPCNT &= ~0x80000000; break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForTex
void func_0210fcb8(int bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[4]) & ~bank);
    data_021fcbd8[4] = bank;
    if (bank == 0) {
        reg_GX_DISP3DCNT &= 0xcffe;
    } else {
        reg_GX_DISP3DCNT = (u16)((reg_GX_DISP3DCNT & ~0x3000) | 1);
        switch (bank) {
        case 0: break;
        case 5: VRAMCNT(0) = 0x83; VRAMCNT(2) = 0x8b; break;
        case 9: VRAMCNT(0) = 0x83; VRAMCNT(3) = 0x8b; break;
        case 10: VRAMCNT(1) = 0x83; VRAMCNT(3) = 0x8b; break;
        case 11: VRAMCNT(0) = 0x83; VRAMCNT(1) = 0x8b; VRAMCNT(3) = 0x93; break;
        case 13: VRAMCNT(0) = 0x83; VRAMCNT(2) = 0x8b; VRAMCNT(3) = 0x93; break;
        case 8: VRAMCNT(3) = 0x83; break;
        case 12: VRAMCNT(3) = 0x8b;
        case 4: VRAMCNT(2) = 0x83; break;
        case 14: VRAMCNT(3) = 0x93;
        case 6: VRAMCNT(2) = 0x8b;
        case 2: VRAMCNT(1) = 0x83; break;
        case 15: VRAMCNT(3) = 0x9b;
        case 7: VRAMCNT(2) = 0x93;
        case 3: VRAMCNT(1) = 0x8b;
        case 1: VRAMCNT(0) = 0x83; break;
        }
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForTexPltt
void func_0210fbc4(int bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[5]) & ~bank);
    data_021fcbd8[5] = bank;
    switch (bank) {
    case 0: break;
    case 0x40: VRAMCNT(6) = 0x83; break;
    case 0x60: VRAMCNT(6) = 0x8b;
    case 0x20: VRAMCNT(5) = 0x83; break;
    case 0x70: VRAMCNT(6) = 0x9b;
    case 0x30: VRAMCNT(5) = 0x93;
    case 0x10: VRAMCNT(4) = 0x83; break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForClearImage
void func_0210fa84(int bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[6]) & ~bank);
    data_021fcbd8[6] = bank;
    switch (bank) {
    case 3: VRAMCNT(0) = 0x93;
    case 2: VRAMCNT(1) = 0x9b; reg_GX_DISP3DCNT |= 0x4000; break;
    case 12: VRAMCNT(2) = 0x93;
    case 8: VRAMCNT(3) = 0x9b; reg_GX_DISP3DCNT |= 0x4000; break;
    case 0: reg_GX_DISP3DCNT &= ~0x4000; break;
    case 1: VRAMCNT(0) = 0x9b; reg_GX_DISP3DCNT |= 0x4000; break;
    case 4: VRAMCNT(2) = 0x9b; reg_GX_DISP3DCNT |= 0x4000; break;
    }
    func_021104ac(data_021fcbd8[0]);
}
