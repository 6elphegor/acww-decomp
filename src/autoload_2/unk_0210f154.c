// mwcc-flags: -nothumb
// NitroSDK GX (gx.c and gx_vramcnt.c), autoload_2 0x0210f154-0x0210f900. ARM code, mwcc 1.2/base, default -O4,s.
// data_021fcbd8 is the 13-halfword VRAM bank state (index: 0 lcdc, 1 bg, 2 obj, 3 arm7, 4 tex, 5 texPltt,
// 6 clearImage, 7 bgExtPltt, 8 objExtPltt, 9 subBg, 10 subObj, 11 subBgExtPltt, 12 subObjExtPltt); the game and
// the delinked callers also refer to its members by their own symbols (data_021fcbda ... data_021fcbf0).
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;

extern u16 data_0213bfe8; // sIsDispOn
extern u32 data_0213bfec; // dma number used by GX_Init (-1: CPU)
extern u16 data_021fcbd0; // GX VRAM lock id
extern u16 data_021fcbd4; // sDispMode
extern u16 data_021fcbd8[13];
extern u16 data_021fcbda;
extern u16 data_021fcbdc;
extern u16 data_021fcbde;
extern u16 data_021fcbe0;
extern u16 data_021fcbe2;
extern u16 data_021fcbe4;
extern u16 data_021fcbe6;
extern u16 data_021fcbe8;
extern u16 data_021fcbea;
extern u16 data_021fcbec;
extern u16 data_021fcbee;
extern u16 data_021fcbf0;

extern u32 func_021123d0(void);
extern void func_0206d49c(void);
extern void func_02115ca0(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_02115e64(u32 data, void *dest, u32 size);
extern void func_02115664(u16 a, u16 b);
extern void func_021104ac(u32 mask);

#define reg_GX_DISPSTAT (*(volatile u16 *)0x04000004)
#define reg_GX_DISPCNT (*(volatile u32 *)0x04000000)
#define reg_GXS_DB_DISPCNT (*(volatile u32 *)0x04001000)
#define reg_GX_POWCNT (*(volatile u16 *)0x04000304)
#define VRAMCNT(n) (*(volatile u8 *)(0x04000240 + (n)))

void func_0210f884(u32 bank);
void func_0210f7f8(u32 bank);
void func_0210f76c(u32 bank);
u32 func_0210f734(u16 *p);
u32 func_0210f720(void);
u32 func_0210f70c(void);
u32 func_0210f628(u16 *p);
u32 func_0210f614(void);
u32 func_0210f600(void);
u32 func_0210f5dc(void);
u32 func_0210f5b8(void);
u32 func_0210f5a4(void);
u32 func_0210f590(void);
u32 func_0210f57c(void);
u32 func_0210f568(void);
u32 func_0210f554(void);
u32 func_0210f540(void);
u32 func_0210f52c(void);
u32 func_0210f504(void);
u32 func_0210f4dc(void);
u32 func_0210f4cc(void);
u32 func_0210f478(u32 mask);
u32 func_0210f460(void);
void func_0210f3e0(void);
void func_0210f248(void);
BOOL func_0210f218(BOOL enable);
BOOL func_0210f1e8(BOOL enable);
void func_0210f1a0(void);
void func_0210f154(void);

// GX_SetBankForSubOBJ
void func_0210f884(u32 bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[10]) & ~bank);
    data_021fcbd8[10] = bank;
    switch (bank) {
    case 0: break;
    case 8: VRAMCNT(3) = 0x84; break;
    case 0x100: VRAMCNT(9) = 0x82; break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForSubBGExtPltt
void func_0210f7f8(u32 bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[11]) & ~bank);
    data_021fcbd8[11] = bank;
    switch (bank) {
    case 0x80:
        reg_GXS_DB_DISPCNT |= 0x40000000;
        VRAMCNT(8) = 0x82;
        break;
    case 0:
        reg_GXS_DB_DISPCNT &= ~0x40000000;
        break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GX_SetBankForSubOBJExtPltt
void func_0210f76c(u32 bank) {
    data_021fcbd8[0] = (u16)((data_021fcbd8[0] | data_021fcbd8[12]) & ~bank);
    data_021fcbd8[12] = bank;
    switch (bank) {
    case 0x100:
        reg_GXS_DB_DISPCNT |= 0x80000000;
        VRAMCNT(9) = 0x83;
        break;
    case 0:
        reg_GXS_DB_DISPCNT &= ~0x80000000;
        break;
    }
    func_021104ac(data_021fcbd8[0]);
}

// GXi_ResetBank (bank mask goes back to LCDC)
u32 func_0210f734(u16 *p) {
    u16 v = *p;
    *p = 0;
    data_021fcbd8[0] |= v;
    func_021104ac(v);
    return v;
}

// GX_ResetBankForTex
u32 func_0210f720(void) { return func_0210f734(&data_021fcbe0); }

// GX_ResetBankForTexPltt
u32 func_0210f70c(void) { return func_0210f734(&data_021fcbe2); }

// GXi_DisableBank (clears the VRAMCNT registers of the banks in *p)
u32 func_0210f628(u16 *p) {
    u32 v = *p;
    *p = 0;
    if (v & 1) VRAMCNT(0) = 0;
    if (v & 2) VRAMCNT(1) = 0;
    if (v & 4) VRAMCNT(2) = 0;
    if (v & 8) VRAMCNT(3) = 0;
    if (v & 0x10) VRAMCNT(4) = 0;
    if (v & 0x20) VRAMCNT(5) = 0;
    if (v & 0x40) VRAMCNT(6) = 0;
    if (v & 0x80) VRAMCNT(8) = 0;
    if (v & 0x100) VRAMCNT(9) = 0;
    func_02115664(v, data_021fcbd0);
    return v;
}

// GX_DisableBankForBG
u32 func_0210f614(void) { return func_0210f628(&data_021fcbda); }

// GX_DisableBankForOBJ
u32 func_0210f600(void) { return func_0210f628(&data_021fcbdc); }

// GX_DisableBankForBGExtPltt
u32 func_0210f5dc(void) {
    reg_GX_DISPCNT &= ~0x40000000;
    return func_0210f628(&data_021fcbe6);
}

// GX_DisableBankForOBJExtPltt
u32 func_0210f5b8(void) {
    reg_GX_DISPCNT &= ~0x80000000;
    return func_0210f628(&data_021fcbe8);
}

// GX_DisableBankForTex
u32 func_0210f5a4(void) { return func_0210f628(&data_021fcbe0); }

// GX_DisableBankForTexPltt
u32 func_0210f590(void) { return func_0210f628(&data_021fcbe2); }

// GX_DisableBankForClearImage
u32 func_0210f57c(void) { return func_0210f628(&data_021fcbe4); }

// GX_DisableBankForARM7
u32 func_0210f568(void) { return func_0210f628(&data_021fcbde); }

// GX_DisableBankForLCDC
u32 func_0210f554(void) { return func_0210f628(&data_021fcbd8[0]); }

// GX_DisableBankForSubBG
u32 func_0210f540(void) { return func_0210f628(&data_021fcbea); }

// GX_DisableBankForSubOBJ
u32 func_0210f52c(void) { return func_0210f628(&data_021fcbec); }

// GX_DisableBankForSubBGExtPltt
u32 func_0210f504(void) {
    reg_GXS_DB_DISPCNT &= ~0x40000000;
    return func_0210f628(&data_021fcbee);
}

// GX_DisableBankForSubOBJExtPltt
u32 func_0210f4dc(void) {
    reg_GXS_DB_DISPCNT &= ~0x80000000;
    return func_0210f628(&data_021fcbf0);
}

// GX_GetBankForTex
u32 func_0210f4cc(void) { return data_021fcbd8[4]; }

// GXi_GetBankSize (total size in bytes of a VRAM bank mask)
u32 func_0210f478(u32 mask) {
    u32 size = 0;
    if (mask & 1) size += 0x20000;
    if (mask & 2) size += 0x20000;
    if (mask & 4) size += 0x20000;
    if (mask & 8) size += 0x20000;
    if (mask & 0x10) size += 0x10000;
    if (mask & 0x20) size += 0x4000;
    if (mask & 0x40) size += 0x4000;
    if (mask & 0x80) size += 0x8000;
    if (mask & 0x100) size += 0x4000;
    return size;
}

// GX_GetSizeOfTexPltt
u32 func_0210f460(void) { return func_0210f478(data_021fcbd8[5]); }

// GXi_InitVRamState (clears the bank state and VRAMCNT_A..I; called by GX_Init)
void func_0210f3e0(void) {
    data_021fcbd8[0] = 0;
    data_021fcbd8[1] = 0;
    data_021fcbd8[2] = 0;
    data_021fcbd8[3] = 0;
    data_021fcbd8[4] = 0;
    data_021fcbd8[5] = 0;
    data_021fcbd8[6] = 0;
    data_021fcbd8[7] = 0;
    data_021fcbd8[8] = 0;
    data_021fcbd8[9] = 0;
    data_021fcbd8[10] = 0;
    data_021fcbd8[11] = 0;
    data_021fcbd8[12] = 0;
    *(volatile u32 *)0x04000240 = 0;
    *(volatile u8 *)0x04000244 = 0;
    *(volatile u8 *)0x04000245 = 0;
    *(volatile u8 *)0x04000246 = 0;
    *(volatile u16 *)0x04000248 = 0;
}

// GX_Init
void func_0210f248(void) {
    reg_GX_POWCNT |= 0x8000;
    reg_GX_POWCNT = (u16)((reg_GX_POWCNT & 0xfffffdf1) | 0x20e);
    reg_GX_POWCNT |= 1;
    func_0210f3e0();
    if (data_021fcbd0 == 0) {
        do {
            u32 id = func_021123d0();
            if (id == (u32)-3) func_0206d49c();
            data_021fcbd0 = (u16)id;
        } while (data_021fcbd0 == 0);
    }
    reg_GX_DISPSTAT = 0;
    reg_GX_DISPCNT = 0;
    if (data_0213bfec != (u32)-1) {
        func_02115ca0(data_0213bfec, (void *)0x04000008, 0, 0x60);
        *(volatile u16 *)0x0400006c = 0;
        func_02115ca0(data_0213bfec, (void *)0x04001000, 0, 0x70);
    } else {
        volatile u32 tmp = 0;
        func_02115e64(tmp, (void *)0x04000008, 0x60);
        *(volatile u16 *)0x0400006c = 0;
        {
            volatile u32 tmp2 = 0;
            func_02115e64(tmp2, (void *)0x04001000, 0x70);
        }
    }
    *(volatile u16 *)0x04000020 = 0x100;
    *(volatile u16 *)0x04000026 = 0x100;
    *(volatile u16 *)0x04000030 = 0x100;
    *(volatile u16 *)0x04000036 = 0x100;
    *(volatile u16 *)0x04001020 = 0x100;
    *(volatile u16 *)0x04001026 = 0x100;
    *(volatile u16 *)0x04001030 = 0x100;
    *(volatile u16 *)0x04001036 = 0x100;
}

// GX_HBlankIntr
BOOL func_0210f218(BOOL enable) {
    volatile u16 *p = &reg_GX_DISPSTAT;
    BOOL pre = *p & 0x10;
    if (enable) *p |= 0x10;
    else *p &= ~0x10;
    return pre;
}

// GX_VBlankIntr
BOOL func_0210f1e8(BOOL enable) {
    volatile u16 *p = &reg_GX_DISPSTAT;
    BOOL pre = *p & 0x8;
    if (enable) *p |= 0x8;
    else *p &= ~0x8;
    return pre;
}

// GX_DispOff
void func_0210f1a0(void) {
    u32 cnt = reg_GX_DISPCNT;
    data_0213bfe8 = 0;
    data_021fcbd4 = (u16)((cnt & 0x30000) >> 16);
    reg_GX_DISPCNT = cnt & ~0x30000;
}

// GX_DispOn
void func_0210f154(void) {
    u32 mode;
    data_0213bfe8 = 1;
    mode = data_021fcbd4;
    if (mode != 0) {
        reg_GX_DISPCNT = (reg_GX_DISPCNT & ~0x30000) | (mode << 16);
    } else {
        reg_GX_DISPCNT |= 0x10000;
    }
}
