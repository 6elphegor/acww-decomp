// mwcc-flags: -O4,p
#include "types.h"

typedef s32 (*Unk_ov001_0222df28_Fn)(...);

struct Unk_ov001_0222df28 {
    u32 pad_00[0x10];
    s32 unk_40;
    s32 unk_44;
    u32 pad_48;
    Unk_ov001_0222df28_Fn unk_4c;
    u16 unk_50;
    u16 unk_52;
    u32 unk_54;
    u8 pad_58[0xf80 - 0x58];
    u8 unk_f80[0x1060 - 0xf80];
    u8 unk_1060[0x12a0 - 0x1060];
    u32 unk_12a0;
    u32 unk_12a4;
    u32 pad_12a8[(0x13a8 - 0x12a8) / 4];
    u32 unk_13a8;
    Unk_ov001_0222df28_Fn unk_13ac;
    u32 unk_13b0;
    u32 pad_13b4[3];
    u8 unk_13c0[0x20];
    u8 unk_13e0[0x1e00 - 0x13e0];
    u8 unk_1e00[4];
};

struct Unk_ov001_0222df2c_Rec {
    u16 unk_00;
    u8 pad_02[0x42];
};

struct Unk_ov001_0222df2c {
    u32 pad_000[0x40];
    Unk_ov001_0222df2c_Rec unk_100[2];
    u8 pad_188[0x200 - 0x188];
    u16 unk_200;
    u16 unk_202;
    u32 unk_204;
    u32 unk_208[16];
    u8 pad_248[0xa90 - 0x248];
    u8 unk_a90;
    u8 pad_a91;
    u8 unk_a92;
    u8 unk_a93;
    u32 unk_a94;
    u8 pad_a98[0xab0 - 0xa98];
    void *unk_ab0;
};

typedef void (*Unk_ov001_0222df24_Fn)(u32, const void *, ...);

extern "C" {
extern Unk_ov001_0222df24_Fn data_ov001_0222df24;
extern Unk_ov001_0222df28 *data_ov001_0222df28;
extern Unk_ov001_0222df2c *data_ov001_0222df2c;
extern const char *data_ov001_0222b628[];
extern u8 data_ov001_0222b778[];
extern u8 data_ov001_0222b7c0[];
extern u8 data_ov001_0222b7f0[];
extern u8 data_ov001_0222b81c[];
extern u8 data_ov001_0222b848[];
extern u8 data_ov001_0222b850[];

s32 func_02121844(void *, s32);
s32 func_02121570(void *, s32, s32, s32, s32);
s32 func_021206b4(void *, void *, s32, void *, s32, s32, s32, s32, s32, s32, s32);
s32 func_0211fbb4(s32, s32);
s32 func_021200a8(void *);
s32 func_02121b8c(void *, s32, void *);
s32 func_02120164(void *, void *);
void func_02116048(void *, void *, s32);
s32 func_ov001_0222230c();
s32 func_ov001_02221ab4(void *);
s32 func_ov001_02222320();
void *func_ov001_02221b74(u32);

s32 func_ov001_022226f4();
s32 func_ov001_022228c4();
s32 func_ov001_02222b5c();
s32 func_ov001_02222c30();
void func_ov001_02222744(u16 *);
void func_ov001_02222988(u16 *);
void func_ov001_02222bdc(u16 *);
void func_ov001_02222ca8(u16 *);
void func_ov001_02222d98(u32);
void func_ov001_02222db8(s32);
namespace Unk_ov001_02222db8_Ns {
s32 func_ov001_02222db8(s32);
}

#pragma thumb off

#define G (data_ov001_0222df28)
#define H (data_ov001_0222df2c)
#define LOG (data_ov001_0222df24)

s32 func_ov001_022226f4() {
    s32 r;
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(6);
    r = func_02121844(G->unk_1e00, 0xd);
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    return FALSE;
}

void func_ov001_02222744(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
        return;
    }
    switch (p[2]) {
    case 10: {
        Unk_ov001_0222df28 *g = G;
        if (g->unk_44 == 2) {
            if (g->unk_40 == 4) {
                if (func_ov001_022226f4()) {
                    return;
                }
                if (LOG) {
                    LOG(0x8000000, data_ov001_0222b7c0);
                }
                Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
                return;
            } else if (g->unk_40 == 6) {
                return;
            }
        } else if (g->unk_44 == 4) {
            s32 r = func_02121570(g->unk_13e0, 0xd, 7, 0x44, 1);
            if (r != 0) {
                func_ov001_02222d98(r);
                Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
                return;
            }
            Unk_ov001_02222db8_Ns::func_ov001_02222db8(5);
            return;
        }
        Unk_ov001_02222db8_Ns::func_ov001_02222db8(4);
        return;
    }
    case 11:
        break;
    case 12:
    case 13:
    default:
        if (LOG) {
            LOG(0x8000000, data_ov001_0222b778, p[2]);
        }
        break;
    }
}

s32 func_ov001_022228c4() {
    s32 r;
    if ((u32)(G->unk_40 - 4) <= 2) {
        return TRUE;
    }
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(4);
    {
        Unk_ov001_0222df28 *g = G;
        r = func_021206b4((void *)func_ov001_02222744, g->unk_1060, (u16)g->unk_12a4, g->unk_f80, (u16)g->unk_12a0, 1, 0, 0, 0, 0, 0);
    }
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    return FALSE;
}

void func_ov001_02222988(u16 *p) {
    u32 sh = p[8];
    u32 mask = (u16)(1 << sh);
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
        return;
    }
    switch (p[4]) {
    case 2:
        return;
    case 7: {
        s32 r;
        if (LOG) {
            LOG(0x8000000, data_ov001_0222b7f0);
        }
        if (G->unk_4c != 0 && (r = G->unk_4c(p)) == 0) {
            r = func_0211fbb4(0, p[8]);
            if (r == 2) {
                return;
            }
            func_ov001_02222d98(r);
            Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
            return;
        }
        G->unk_52 |= mask;
        return;
    }
    case 9:
        if (LOG) {
            LOG(0x8000000, data_ov001_0222b81c);
        }
        G->unk_52 &= ~mask;
        return;
    case 0:
        if (func_ov001_022228c4()) {
            return;
        }
        Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
        return;
    default:
        if (LOG) {
            LOG(0x8000000, data_ov001_0222b778, p[4]);
        }
        return;
    }
}

s32 func_ov001_02222b5c() {
    s32 r;
    if ((u32)(G->unk_40 - 4) <= 2) {
        return TRUE;
    }
    r = func_021200a8((void *)func_ov001_02222988);
    if (r != 2) {
        func_ov001_02222d98(r);
        return FALSE;
    }
    G->unk_50 = 0;
    G->unk_52 = 1;
    return TRUE;
}

void func_ov001_02222bdc(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
        return;
    }
    if (func_ov001_02222b5c()) {
        return;
    }
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
}

s32 func_ov001_02222c30() {
    s32 r;
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(3);
    r = G->unk_13ac(G->unk_13c0);
    r = func_02121b8c((void *)func_ov001_02222bdc, r, G->unk_13c0);
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
    return FALSE;
}

void func_ov001_02222ca8(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
        return;
    }
    if (G->unk_13ac != 0) {
        if (func_ov001_02222c30()) {
            return;
        }
        Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
        return;
    }
    if (func_ov001_02222b5c()) {
        return;
    }
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
}

s32 func_ov001_02222d40() {
    s32 r;
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(3);
    r = func_02120164((void *)func_ov001_02222ca8, G);
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    Unk_ov001_02222db8_Ns::func_ov001_02222db8(9);
    return FALSE;
}

void func_ov001_02222d98(u32 v) {
    Unk_ov001_0222df28 *g = G;
    if ((u32)(g->unk_40 - 9) > 1) {
        g->unk_54 = v;
    }
}

void func_ov001_02222db8(s32 n) {
    if (LOG) {
        LOG(0x8000000, data_ov001_0222b848, data_ov001_0222b628[G->unk_40]);
    }
    G->unk_40 = n;
    if (LOG) {
        LOG(0x8000000, data_ov001_0222b850, data_ov001_0222b628[G->unk_40]);
    }
}

void func_ov001_02222e48(Unk_ov001_0222df28 *p) {
    G = p;
    p->unk_40 = 0;
    G->unk_13a8 = 0;
    G->unk_13ac = 0;
    G->unk_13b0 = 0;
}

u16 func_ov001_02222e84() {
    return *(u16 *)((u8 *)H + 0x144);
}

void func_ov001_02222e9c() {
    s32 i;
    for (i = 0; i < 16; i++) {
        Unk_ov001_0222df2c *h = H;
        if (h->unk_208[i] != 0) {
            Unk_ov001_0222df2c_Rec *r = &h->unk_100[(u32)i];
            if (i == 1) {
                if (h->unk_a93 == 1) {
                    if (r->unk_00 != 0x10) {
                        return;
                    }
                    h->unk_a94 = h->unk_a94 + 1;
                    h = H;
                    if ((h->unk_a94 & 1) == 0) {
                        h->unk_200 = h->unk_200 + 1;
                        h = H;
                        if (h->unk_200 >= 0x24) {
                            h->unk_200 = 0;
                        }
                    }
                } else {
                    h->unk_202 = 0xbc;
                    if (r->unk_00 == 0xbd) {
                        H->unk_a93 = 1;
                        H->unk_200 = 0;
                        H->unk_a94 = 0;
                    }
                }
            }
        }
    }
}

void func_ov001_02222f94(u32 a, u32 b, void *src) {
    Unk_ov001_0222df2c *h = H;
    u16 i;
    if (h->unk_a93 == 1) {
        *(u16 *)h->unk_ab0 = a;
        *((u16 *)H->unk_ab0 + 1) = b;
        func_02116048(src, (u8 *)H->unk_ab0 + 4, 0x40);
    } else {
        h->unk_204 = h->unk_204 + 1;
        *(u16 *)H->unk_ab0 = 0xbc;
        *((u8 *)H->unk_ab0 + 4) = H->unk_a92;
    }
    if (func_ov001_0222230c() != 5) {
        return;
    }
    if (func_ov001_02221ab4(H) == 0) {
        H->unk_204 = H->unk_204 + 4;
        return;
    }
    h = H;
    if (h->unk_a93 == 0) {
        h->unk_204 = h->unk_204 + 1;
    } else {
        h->unk_204 = 0;
        if (func_ov001_02222320() != 3) {
            H->unk_a90 = 0x1b;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        void *s = func_ov001_02221b74(i);
        if (s != 0) {
            func_02116048(s, &H->unk_100[i], 0x44);
            H->unk_208[i] = 1;
        } else {
            H->unk_208[i] = 0;
        }
    }
}

#pragma thumb reset

}
