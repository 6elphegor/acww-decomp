// mwcc-flags: -O4,p -str reuse
#include "types.h"

#pragma thumb off

typedef s32 (*Unk_ov001_0222df28_Fn)(...);

struct Unk_ov001_0222df08_S {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 pad_0e[0x1b140 - 0x0e];
    void *unk_1b140;
    void *unk_1b144;
};

struct Unk_ov001_0222df28_S {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    s32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u8 pad_1a[0x32 - 0x1a];
    u16 unk_32;
    u16 unk_34;
    u16 unk_36;
    u8 pad_38[8];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    Unk_ov001_0222df28_Fn unk_4c;
    u16 unk_50;
    u16 unk_52;
    s32 unk_54;
    u32 unk_58;
    u16 unk_5c;
    u16 unk_5e;
    u16 unk_60;
    u8 pad_62[0xf80 - 0x62];
    u8 unk_f80[0x1060 - 0xf80];
    u8 unk_1060[0x12a0 - 0x1060];
    s32 unk_12a0;
    s32 unk_12a4;
    u8 pad_12a8[0x13a8 - 0x12a8];
    u32 unk_13a8;
    Unk_ov001_0222df28_Fn unk_13ac;
    u32 unk_13b0;
    u8 pad_13b4[0xc];
    u8 unk_13c0[0x20];
    u8 unk_13e0[0x1c00 - 0x13e0];
    u8 unk_1c00[0x1e00 - 0x1c00];
    u8 unk_1e00[4];
};

struct Unk_ov001_02221734_Z { u16 v[7]; };

struct Unk_ov001_02221734_D {
    u8 lo : 4;
    u8 hi : 4;
    u8 b1;
    u8 data[0x14];
    Unk_ov001_02221734_Z z;
};

struct Unk_ov001_02221734_B {
    u8 pad_00[1];
    u8 unk_01;
    u8 pad_02[2];
    u8 unk_04[0x14];
    u16 unk_18;
    u8 pad_1a[0x54 - 0x1a];
};

struct Unk_ov001_02222088_A {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[4];
    u16 unk_08;
    u16 unk_0a;
};

typedef void (*Unk_ov001_0222df24_Fn)(u32, const void *, ...);

extern "C" {
extern Unk_ov001_0222df08_S *data_ov001_0222df08;

s32 func_02122eb0(s32, s32);
s32 func_01ffa2ec();
void func_01ffa3d4(s32);
void func_02124a94(s32);
void func_02119d78(void *);
s32 func_02119a28(void *, s32);
s32 func_02123e58(void *);
s32 func_021239ec(void *, void *, u32);
s32 func_02123680(void *, void *);
void func_021199e0(void *);
void func_ov001_02220d2c(u32);
s32 func_02124d50(s32);
void func_0206d49c();
void func_021155c4(void *);
void func_02116048(void *, void *, u32);
s32 func_021251ac(void *, void *, s32, s32, s32);
void func_02125098(u32, u32);
void func_021230a4(void *);
void func_ov001_02220d40();
s32 func_0212026c(void *);
s32 func_021210f0(void *, s32, void *);
void func_02120aa0(void *, void *, s32);
u32 func_0211f698();
s32 func_0211fb68(void *);
s32 func_021202f4(void *, void *, s32);
s32 func_021202b4(void *);
s32 func_0211fbb4(void *, s32);
s32 func_021204a0(void *);
s32 func_02121838(void *);
s32 func_02120060(void *);
s32 func_021218d0(void *, s32, s32, s32, s32);
s32 func_0211f800();
void func_02115640(u16 *);
s32 func_02121844(void *, s32);
s32 func_02121570(void *, s32, s32, s32, s32);
s32 func_021206b4(void *, void *, s32, void *, s32, s32, s32, s32, s32, s32, s32);
s32 func_021200a8(void *);
s32 func_02121b8c(void *, s32, void *);
s32 func_02120164(void *, void *);

s32 func_ov001_022218a4();
void func_ov001_02221908();
void func_ov001_02221a84();
s32 func_ov001_02221ab4(s32 a);
void func_ov001_02221b74(s32 a);
void func_ov001_02221ba0(s32 a);
s32 func_ov001_02221bb4(s32 a, u32 b, u32 c);
void func_ov001_02221d48(u16 *);
void func_ov001_02221e14(Unk_ov001_02222088_A *);
void func_ov001_02222088(Unk_ov001_02222088_A *);
void func_ov001_02222384(Unk_ov001_02222088_A *);
void func_ov001_02222404(Unk_ov001_02222088_A *);
void func_ov001_02222488(Unk_ov001_02222088_A *);
void func_ov001_02222588(Unk_ov001_02222088_A *);
void func_ov001_022225fc(Unk_ov001_02222088_A *);
u16 func_ov001_02222174(u16);
void func_ov001_02222348(Unk_ov001_02222088_A *);
s32 func_ov001_0222251c();
s32 func_ov001_022224d8();
s32 func_ov001_022226b0();
s32 func_ov001_0222266c();
s32 func_ov001_022223c0();
s32 func_ov001_02222d40();
void func_ov001_02222d98(u32);
void func_ov001_02222db8(s32);
void func_ov001_02222e48(Unk_ov001_0222df28_S *);
s32 func_ov001_022226f4();
s32 func_ov001_022228c4();
s32 func_ov001_02222b5c();
s32 func_ov001_02222c30();
void func_ov001_02222744(u16 *);
void func_ov001_02222988(u16 *);
void func_ov001_02222bdc(u16 *);
void func_ov001_02222ca8(u16 *);
s32 func_ov001_0222230c();
s32 func_ov001_022225c0();
s32 func_ov001_0222243c();
s32 func_ov001_0222205c(void *cb, s32 x);
s16 func_ov001_02221ecc(u16 mask);
s32 func_ov001_02221db4();

}
// Declarations for data defined further down (definition order sets the data layout)
extern "C" char data_ov001_0222b4ec[];
extern "C" char data_ov001_0222b508[];
extern "C" Unk_ov001_0222df24_Fn data_ov001_0222df24;
extern "C" char data_ov001_0222b524[];
extern "C" char data_ov001_0222b540[];
extern "C" char data_ov001_0222b55c[];
extern "C" char data_ov001_0222b57c[];
extern "C" char data_ov001_0222b59c[];
extern "C" char data_ov001_0222b5bc[];
extern "C" char data_ov001_0222b5e0[];
extern "C" char data_ov001_0222b604[];
extern "C" char *data_ov001_0222b628[10];
extern "C" Unk_ov001_0222df28_S *data_ov001_0222df28;


#define G (data_ov001_0222df28)
#define LOG (data_ov001_0222df24)

extern "C" void func_ov001_02222e48(Unk_ov001_0222df28_S *p) {
    G = p;
    p->unk_40 = 0;
    G->unk_13a8 = 0;
    G->unk_13ac = 0;
    G->unk_13b0 = 0;
}

extern "C" void func_ov001_02222db8(s32 n) {
    if (LOG) {
        LOG(0x8000000, "%s -> ", data_ov001_0222b628[G->unk_40]);
    }
    G->unk_40 = n;
    if (LOG) {
        LOG(0x8000000, "%s\n", data_ov001_0222b628[G->unk_40]);
    }
}

extern "C" void func_ov001_02222d98(u32 v) {
    Unk_ov001_0222df28_S *g = G;
    if ((u32)(g->unk_40 - 9) > 1) {
        g->unk_54 = v;
    }
}

extern "C" s32 func_ov001_02222d40() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_02120164((void *)func_ov001_02222ca8, G);
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    func_ov001_02222db8(9);
    return FALSE;
}

extern "C" void func_ov001_02222ca8(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        func_ov001_02222db8(9);
        return;
    }
    if (G->unk_13ac != 0) {
        if (func_ov001_02222c30()) {
            return;
        }
        func_ov001_02222db8(9);
        return;
    }
    if (func_ov001_02222b5c()) {
        return;
    }
    func_ov001_02222db8(9);
}

extern "C" s32 func_ov001_02222c30() {
    s32 r;
    func_ov001_02222db8(3);
    r = G->unk_13ac(G->unk_13c0, G);
    r = func_02121b8c((void *)func_ov001_02222bdc, r, G->unk_13c0);
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    func_ov001_02222db8(9);
    return FALSE;
}

extern "C" void func_ov001_02222bdc(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        func_ov001_02222db8(9);
        return;
    }
    if (func_ov001_02222b5c()) {
        return;
    }
    func_ov001_02222db8(9);
}

extern "C" s32 func_ov001_02222b5c() {
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

extern "C" void func_ov001_02222988(u16 *p) {
    u32 sh = p[8];
    u32 mask = (u16)(1 << sh);
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        func_ov001_02222db8(9);
        return;
    }
    switch (p[4]) {
    case 2:
        return;
    case 7: {
        s32 r;
        if (LOG) {
            LOG(0x8000000, "StartParent - new child (aid %x) connected\n", sh);
        }
        if (G->unk_4c != 0 && (r = G->unk_4c(p)) == 0) {
            r = func_0211fbb4(0, p[8]);
            if (r == 2) {
                return;
            }
            func_ov001_02222d98(r);
            func_ov001_02222db8(9);
            return;
        }
        G->unk_52 |= mask;
        return;
    }
    case 9:
        if (LOG) {
            LOG(0x8000000, "StartParent - child (aid %x) disconnected\n", sh);
        }
        G->unk_52 &= ~mask;
        return;
    case 0:
        if (func_ov001_022228c4()) {
            return;
        }
        func_ov001_02222db8(9);
        return;
    default:
        if (LOG) {
            LOG(0x8000000, "unknown indicate, state = %d\n", p[4]);
        }
        return;
    }
}

extern "C" s32 func_ov001_022228c4() {
    s32 r;
    if ((u32)(G->unk_40 - 4) <= 2) {
        return TRUE;
    }
    func_ov001_02222db8(4);
    {
        Unk_ov001_0222df28_S *g = G;
        r = func_021206b4((void *)func_ov001_02222744, g->unk_1060, (u16)g->unk_12a4, g->unk_f80, (u16)g->unk_12a0, 1, 0, 0, 0, 0, 0);
    }
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    return FALSE;
}

extern "C" void func_ov001_02222744(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        func_ov001_02222db8(9);
        return;
    }
    switch (p[2]) {
    case 10: {
        Unk_ov001_0222df28_S *g = G;
        if (g->unk_44 == 2) {
            if (g->unk_40 == 4) {
                if (func_ov001_022226f4()) {
                    return;
                }
                if (LOG) {
                    LOG(0x8000000, "DWCi_MOV_WH_StateInStartParentKeyShare failed\n");
                }
                func_ov001_02222db8(9);
                return;
            } else if (g->unk_40 == 6) {
                return;
            }
        } else if (g->unk_44 == 4) {
            s32 r = func_02121570(g->unk_13e0, 0xd, 7, 0x44, 1);
            if (r != 0) {
                func_ov001_02222d98(r);
                func_ov001_02222db8(9);
                return;
            }
            func_ov001_02222db8(5);
            return;
        }
        func_ov001_02222db8(4);
        return;
    }
    case 11:
        break;
    case 12:
    case 13:
    default:
        if (LOG) {
            LOG(0x8000000, "unknown indicate, state = %d\n", p[2]);
        }
        break;
    }
}

extern "C" s32 func_ov001_022226f4() {
    s32 r;
    func_ov001_02222db8(6);
    r = func_02121844(G->unk_1e00, 0xd);
    if (r == 2) {
        return TRUE;
    }
    func_ov001_02222d98(r);
    return FALSE;
}

extern "C" s32 func_ov001_022226b0() {
    s32 r;
    r = func_02121838((u8 *)data_ov001_0222df28 + 0x1e00);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

extern "C" s32 func_ov001_0222266c() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021204a0((void *)func_ov001_022225fc);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

extern "C" void func_ov001_022225fc(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        func_ov001_02221a84();
        return;
    }
    if (func_ov001_022225c0() != 0) return;
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "DWCi_MOV_WH_StateInEndParent failed\n");
    func_ov001_02221a84();
}

static void func_ov001_dead_unknown() {
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "unknown indicate, state = %d\n", 0);
}

extern "C" s32 func_ov001_022225c0() {
    s32 r;
    r = func_02120060((void *)func_ov001_02222588);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

extern "C" void func_ov001_02222588(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        return;
    }
    func_ov001_02222db8(1);
}

extern "C" s32 func_ov001_0222251c() {
    s32 r;
    if (data_ov001_0222df28->unk_40 != 6) return 0;
    func_ov001_02222db8(3);
    r = func_02121838((u8 *)data_ov001_0222df28 + 0x1e00);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

extern "C" s32 func_ov001_022224d8() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021204a0((void *)func_ov001_02222488);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

extern "C" void func_ov001_02222488(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        func_ov001_02221908();
        return;
    }
    if (func_ov001_0222243c() != 0) return;
    func_ov001_02222db8(9);
}

extern "C" s32 func_ov001_0222243c() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_0211fbb4((void *)func_ov001_02222404, 0);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    func_ov001_02221a84();
    return 0;
}

extern "C" void func_ov001_02222404(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        return;
    }
    func_ov001_02222db8(1);
}

extern "C" s32 func_ov001_022223c0() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021202b4((void *)func_ov001_02222384);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

extern "C" void func_ov001_02222384(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222db8(9);
        func_ov001_02222d98(a->unk_02);
        return;
    }
    func_ov001_02222db8(1);
}

extern "C" void func_ov001_02222348(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222db8(10);
        return;
    }
    func_ov001_02222db8(0);
}

extern "C" void func_ov001_02222334(s32 x) {
    data_ov001_0222df28->unk_08 = x;
}

extern "C" u16 func_ov001_02222320() {
    return data_ov001_0222df28->unk_52;
}

extern "C" s32 func_ov001_0222230c() {
    return data_ov001_0222df28->unk_40;
}

extern "C" s32 func_ov001_02222228() {
    u16 v[3];
    u16 r;
    func_02115640(v);
    u32 m = *(volatile u32 *)0x27ffc3c;
    u32 a = v[0] + m;
    u32 b = v[1] + a;
    data_ov001_0222df28->unk_58 = v[2] + b;
    data_ov001_0222df28->unk_58 = data_ov001_0222df28->unk_58 * 0x10dcd + 0x3039;
    data_ov001_0222df28->unk_5c = 0;
    data_ov001_0222df28->unk_5e = 0x65;
    func_ov001_02222db8(3);
    r = func_ov001_02222174(1);
    if (r == 0x18) {
        func_ov001_02222d98(0x18);
        func_ov001_02222db8(9);
        return 0;
    }
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    func_ov001_02222db8(9);
    return 0;
}

extern "C" u16 func_ov001_02222174(u16 x) {
    s32 r = func_0211f800();
    if (r == 0x8000) {
        func_ov001_02222d98(3);
        func_ov001_02222db8(9);
        return 3;
    }
    if (r == 0) {
        func_ov001_02222d98(0x16);
        func_ov001_02222db8(9);
        return 0x18;
    }
    while ((1 << (x - 1) & r) == 0) {
        x++;
        if (x > 16) return 0x18;
    }
    return func_ov001_0222205c((void *)func_ov001_02222088, x);
}

extern "C" void func_ov001_02222088(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        func_ov001_02222db8(9);
        return;
    }
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "channel %d bratio = %x\n", a->unk_08, a->unk_0a);
    {
        Unk_ov001_0222df28_S *g = data_ov001_0222df28;
        u16 y = a->unk_0a;
        u16 x = a->unk_08;
        u16 w = g->unk_5e;
        u16 r;
        if (w > y) {
            g->unk_5e = y;
            data_ov001_0222df28->unk_60 = 1 << (x - 1);
        } else if (w == y) {
            g->unk_60 = g->unk_60 | (1 << (x - 1));
        }
        r = func_ov001_02222174(x + 1);
        if (r == 0x18) {
            func_ov001_02222db8(7);
            return;
        }
        if (r == 2) return;
        func_ov001_02222db8(9);
    }
}

extern "C" s32 func_ov001_0222205c(void *cb, s32 x) {
    return func_021218d0(cb, 3, 0x11, x, 0x1e);
}

extern "C" u16 func_ov001_02221fd0() {
    if (data_ov001_0222df28->unk_40 != 7) func_0206d49c();
    func_ov001_02222db8(1);
    data_ov001_0222df28->unk_5c = func_ov001_02221ecc(data_ov001_0222df28->unk_60);
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "decided channel = %d\n", data_ov001_0222df28->unk_5c);
    return data_ov001_0222df28->unk_5c;
}

extern "C" s16 func_ov001_02221ecc(u16 mask) {
    s16 i;
    s16 last = 0;
    u16 count = 0;
    u16 r;
    for (i = 0; i < 16; i++) {
        if (mask & (1 << i)) {
            last = i + 1;
            count++;
        }
    }
    if (count <= 1) return last;
    data_ov001_0222df28->unk_58 = data_ov001_0222df28->unk_58 * 0x10dcd + 0x3039;
    r = (count * (data_ov001_0222df28->unk_58 & 0xff)) >> 8;
    for (i = 0; i < 16; i++) {
        if (mask & 1) {
            if (r == 0) return i + 1;
            r--;
        }
        mask >>= 1;
    }
    return 0;
}

extern "C" BOOL func_ov001_02221e48() {
    Unk_ov001_0222df28_S **g = &data_ov001_0222df28;
    (*g)->unk_12a4 = 0;
    (*g)->unk_12a0 = 0;
    (*g)->unk_48 = 0;
    (*g)->unk_50 = 0;
    (*g)->unk_52 = 1;
    (*g)->unk_54 = 0;
    (*g)->unk_00 = 0;
    (*g)->unk_04 = 0;
    (*g)->unk_4c = 0;
    if (func_ov001_02221db4() != 0) return TRUE;
    return FALSE;
}

extern "C" void func_ov001_02221e14(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 8) return;
    func_ov001_02222db8(9);
    func_0206d49c();
}

extern "C" s32 func_ov001_02221db4() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021202f4((u8 *)data_ov001_0222df28 + 0x80, (void *)func_ov001_02221d48, 2);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    func_ov001_02222db8(10);
    return 0;
}

extern "C" void func_ov001_02221d48(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        func_ov001_02222db8(0xa);
        return;
    }
    s32 r = func_0211fb68((void *)func_ov001_02221e14);
    if (r != 0) {
        func_ov001_02222d98(r);
        func_ov001_02222db8(0xa);
        return;
    }
    func_ov001_02222db8(1);
}

extern "C" s32 func_ov001_02221bb4(s32 a, u32 b, u32 c) {
    if (data_ov001_0222df28->unk_40 != 1) func_0206d49c();
    data_ov001_0222df28->unk_12a4 = 0x180;
    data_ov001_0222df28->unk_12a0 = 0xe0;
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "recv buffer size = %d\n", data_ov001_0222df28->unk_12a4);
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "send buffer size = %d\n", data_ov001_0222df28->unk_12a0);
    data_ov001_0222df28->unk_44 = a;
    func_ov001_02222db8(3);
    data_ov001_0222df28->unk_0c = b;
    data_ov001_0222df28->unk_32 = c;
    data_ov001_0222df28->unk_18 = func_0211f698();
    data_ov001_0222df28->unk_34 = 0xd0;
    data_ov001_0222df28->unk_36 = 0x44;
    data_ov001_0222df28->unk_10 = 2;
    data_ov001_0222df28->unk_16 = 0;
    data_ov001_0222df28->unk_12 = 0;
    data_ov001_0222df28->unk_0e = 1;
    data_ov001_0222df28->unk_14 = (a == 2) ? 1 : 0;
    if (a == 0 || a == 2 || a == 4) return func_ov001_02222d40();
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "unknown connect mode %d\n", a);
    return 0;
}

extern "C" void func_ov001_02221ba0(s32 a) {
    data_ov001_0222df28->unk_4c = (Unk_ov001_0222df28_Fn)a;
}

extern "C" void func_ov001_02221b74(s32 a) {
    Unk_ov001_0222df28_S *g = data_ov001_0222df28;
    func_02120aa0(g->unk_13e0, g->unk_1c00, a);
}

extern "C" s32 func_ov001_02221ab4(s32 a) {
    Unk_ov001_0222df28_S *g = data_ov001_0222df28;
    s32 r = func_021210f0(g->unk_13e0, a, g->unk_1c00);
    if (r == 7) {
        if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "DWCi_MOV_WH_StepDataSharing - Warning No Child\n");
        return 0;
    }
    if (r == 5) {
        if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "DWCi_MOV_WH_StepDataSharing - Warning No DataSet\n");
        func_ov001_02222d98(r);
        return 0;
    }
    if (r == 0) return 1;
    func_ov001_02222d98(r);
    return 0;
}

extern "C" void func_ov001_02221a84() {
    if (func_ov001_022223c0() != 0) return;
    func_ov001_02222db8(0xa);
}

extern "C" void func_ov001_02221908() {
    s32 st = data_ov001_0222df28->unk_40;
    if (st == 1) {
        if (data_ov001_0222df24 == 0) return;
        data_ov001_0222df24(0x8000000, "already DWCi_MOV_WH_SYSSTATE_IDLE\n");
        return;
    }
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, "DWCi_MOV_WH_Finalize, state = %d\n", st);
    st = data_ov001_0222df28->unk_40;
    if (st != 6 && st != 5 && st != 4) {
        func_ov001_02222db8(3);
        func_ov001_02221a84();
        return;
    }
    func_ov001_02222db8(3);
    switch (data_ov001_0222df28->unk_44) {
    case 3:
        if (func_ov001_0222251c() != 0) return;
        func_ov001_02221a84();
        return;
    case 1:
    case 5:
        if (func_ov001_022224d8() != 0) return;
        func_ov001_02221a84();
        return;
    case 2:
        if (func_ov001_022226b0() != 0) return;
        func_ov001_02221a84();
        return;
    case 0:
    case 4:
        if (func_ov001_0222266c() != 0) return;
        func_ov001_02221a84();
        return;
    }
}

extern "C" s32 func_ov001_022218a4() {
    if (data_ov001_0222df28->unk_40 != 1) func_0206d49c();
    func_ov001_02222db8(3);
    if (func_0212026c((void *)func_ov001_02222348) == 2) return 1;
    func_ov001_02222db8(9);
    return 0;
}

extern "C" char data_ov001_0222b4ec[] = "DWCi_MOV_WH_SYSSTATE_STOP";

extern "C" char data_ov001_0222b508[] = "DWCi_MOV_WH_SYSSTATE_IDLE";

extern "C" Unk_ov001_0222df24_Fn data_ov001_0222df24 = 0;

extern "C" char data_ov001_0222b524[] = "DWCi_MOV_WH_SYSSTATE_BUSY";

extern "C" char data_ov001_0222b540[] = "DWCi_MOV_WH_SYSSTATE_ERROR";

extern "C" char data_ov001_0222b55c[] = "DWCi_MOV_WH_SYSSTATE_SCANNING";

extern "C" char data_ov001_0222b57c[] = "DWCi_MOV_WH_SYSSTATE_CONNECTED";

extern "C" char data_ov001_0222b59c[] = "DWCi_MOV_WH_SYSSTATE_KEYSHARING";

extern "C" char data_ov001_0222b5bc[] = "DWCi_MOV_WH_SYSSTATE_DATASHARING";

extern "C" char data_ov001_0222b5e0[] = "DWCi_MOV_WH_SYSSTATE_CONNECT_FAIL";

extern "C" char data_ov001_0222b604[] = "DWCi_MOV_WH_SYSSTATE_MEASURECHANNEL";

extern "C" char *data_ov001_0222b628[10] = {data_ov001_0222b4ec, data_ov001_0222b508, data_ov001_0222b55c, data_ov001_0222b524, data_ov001_0222b57c, data_ov001_0222b5bc, data_ov001_0222b59c, data_ov001_0222b604, data_ov001_0222b5e0, data_ov001_0222b540};

extern "C" Unk_ov001_0222df28_S *data_ov001_0222df28 = 0;
