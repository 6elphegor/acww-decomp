// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0221b220_A22 { u8 b[22]; };
struct Unk_ov001_0221b6f8_A12 { u8 b[12]; };

extern "C" {
extern u8 data_ov001_0222dec0;
extern u8 data_ov001_0222dec8;
extern s8 data_ov001_0222debc;
extern s8 data_ov001_0222deb8;
extern void *data_ov001_0222dec4;
extern u8 data_ov001_0222a218[];
extern u16 data_ov001_0222a258[][16];
extern u16 data_ov001_0222a25a[][16];
extern u16 data_ov001_0222a25c[][16];
extern u16 data_ov001_0222a25e[][16];
extern s8 data_ov001_0222a1f0[];
extern u8 data_ov001_0222b2d4[];
extern u8 data_ov001_0222b2ec[];
extern u8 data_ov001_0222b304[];
extern u8 data_ov001_0222b31c[];
extern u8 data_ov001_0222a298[];

extern s32 func_ov001_022250e0(s32);
extern void func_ov001_02208114();
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_0220c668(void *);
extern void func_ov001_0221acb4();
extern void func_ov001_02208070();
extern void func_ov001_02224e4c(s32);
extern s32 func_ov001_02208100();
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0221ab50();
extern u32 func_ov001_0220c5a8(s32);
extern s32 func_ov001_022260ac(void *);
extern void func_ov001_022080e0(s32);
extern void func_ov001_02208690(u32, u32, u32, u32);
extern s32 func_ov001_022261cc(s32);
extern s32 func_ov001_022261a8(s32);
extern void func_ov001_0221abb4(s32);
extern void func_ov001_02208088();
extern void func_ov001_022084f8(s32);
extern void func_ov001_02225cb4(s32, s32);
extern void func_ov001_02208594(void *, void *);
extern u8 *func_ov001_022085e0(void *);
extern void *func_ov001_02224074(void *, s32, s32);
extern void func_0211172c();
extern void func_02111ec8();
extern void func_02111a6c();
extern u8 *func_ov001_0221e8b4();
extern u8 *func_ov001_0221e014();
extern s32 func_ov001_0220c5e0();
extern void func_ov001_022088f8();
extern void func_ov001_02208290(s32, s32, s32);
extern void func_ov001_02208538(s32);
extern void func_ov001_0221b1c0();
extern void func_ov001_02225d08(s32);
extern void func_ov001_02225dd8(s32, s32);
extern s32 func_ov065_0226b1e0();
extern void func_ov001_02208af8();
extern void func_ov001_0221e93c();
extern void func_ov065_0226b16c();
extern void func_ov001_02214f50();
extern void func_ov001_0221b5d0();
extern void func_ov001_02226fdc(s32, s32);
extern s32 func_ov065_0226b110();
extern void *func_020fe848();
extern void func_02116048(void *, void *, s32);
extern void func_ov001_022079fc();
extern void func_ov001_022253d4(s32);
extern void func_ov001_02225c58(s32, s32);
extern void func_ov001_0220c654(s32, s32);
extern void func_ov001_022156b8();
extern void func_ov001_0221bbd4();
extern void func_ov001_0221b4f0();
extern void func_ov001_0221b598();
extern void func_ov001_0221b610();
extern void func_ov001_0221b630();
extern void func_ov001_0221b168();
extern void func_ov001_0221b12c();
extern void func_ov001_0221b10c();
extern void func_ov001_0221ae34();
extern void func_ov001_0221aeac();
extern void func_ov001_0221aed8();
extern void func_ov001_0221af40();
extern void func_ov001_0221af44();
extern void func_ov001_0221b604();
extern void func_ov001_0221b608();
extern void func_ov001_0221b60c();
extern void func_ov001_0220c5f0(s32, void *);
extern void func_02115e78(void *, void *, s32);
extern s32 func_ov065_0226b27c(void *);
extern void func_0206d49c();
extern void func_ov065_0226b0ec(s32, void *);
extern void func_ov001_02227094(s32, void *, s32, s32);
extern void func_ov001_0221b470(s32);

#pragma thumb off

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void func_ov001_0221ae34() {
    if (func_ov001_022250e0(1) != 0) return;
    if (data_ov001_0222dec0 != 0) func_ov001_02208114();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_0221acb4);
}

void func_ov001_0221aeac() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221ae34);
}

void func_ov001_0221aed8() {
    switch (func_ov001_02208100()) {
    case 0:
        func_ov001_0221e9a0(7);
        break;
    case 1:
        func_ov001_0221e9a0(6);
        func_ov001_0221ab50();
        data_ov001_0222dec0 = 1;
        break;
    default:
        return;
    }
    func_ov001_0220c668((void *)func_ov001_0221aeac);
}

void func_ov001_0221af40() {
}

void func_ov001_0221af44() {
    u32 i;
    u32 off;
    for (i = 0, off = 0; i < 4; i++, off += 8) {
        if (func_ov001_022260ac(data_ov001_0222a218 + (func_ov001_0220c5a8(1) << 5) + off) != 0) {
            func_ov001_022080e0(1);
            data_ov001_0222debc = i;
            func_ov001_02208690(data_ov001_0222a258[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                                data_ov001_0222a25c[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                                data_ov001_0222a25a[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                                data_ov001_0222a25e[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4]);
            return;
        }
    }
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
        return;
    }
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_022261a8(0x40) != 0) {
        func_ov001_0221abb4(1);
        return;
    }
    if (func_ov001_022261a8(0x80) != 0) {
        func_ov001_0221abb4(3);
        return;
    }
    if (func_ov001_022261a8(0x20) != 0) {
        func_ov001_0221abb4(0);
        return;
    }
    if (func_ov001_022261a8(0x10) != 0) {
        func_ov001_0221abb4(2);
    }
}

void func_ov001_0221b10c() {
    func_ov001_0221af44();
    func_ov001_0221af40();
    func_ov001_0221aed8();
}

void func_ov001_0221b12c() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221b10c);
}

void func_ov001_0221b168() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_0221b12c);
}

void func_ov001_0221b1c0() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_0221b168);
}

void func_ov001_0221b220() {
    Unk_ov001_0221b220_A22 l;
    l = *(Unk_ov001_0221b220_A22 *)data_ov001_0222b2d4;
    func_ov001_02208594(data_ov001_0222b2ec, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222b304, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222b31c, (void *)func_02111a6c);
    data_ov001_0222dec4 = func_ov001_02224074(func_ov001_022085e0(l.b), 0, 4);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x400000a, 3);
    REGSET(0x400000c, 3);
}

void func_ov001_0221b318() {
    u8 *o = func_ov001_0221e8b4();
    s32 t = data_ov001_0222deb8;
    data_ov001_0222dec0 = 0;
    if (t == 0) data_ov001_0222deb8 = 1;
    if (func_ov001_0220c5e0() != 0) {
        if (data_ov001_0222debc == 2) data_ov001_0222debc = 0;
        if (data_ov001_0222deb8 == 2) data_ov001_0222deb8 = 1;
    }
    func_ov001_0221b220();
    func_ov001_022088f8();
    func_ov001_02208290(0x7e, data_ov001_0222a1f0[func_ov001_0220c5e0()], o[0xf4] + 1);
    func_ov001_02208538(1);
    func_ov001_02208690(data_ov001_0222a258[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                        data_ov001_0222a25c[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                        data_ov001_0222a25a[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                        data_ov001_0222a25e[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4]);
    func_ov001_0220c668((void *)func_ov001_0221b1c0);
}

void func_ov001_0221b44c(s32 a, s32 b) {
    func_ov001_02225d08(b);
}

void func_ov001_0221b45c(s32 a, s32 b) {
    func_ov001_02225dd8(b, 0x20);
}

void func_ov001_0221b470(s32 a) {
    s32 r = func_ov065_0226b1e0();
    if (r == 0) return;
    func_ov001_02208af8();
    func_ov001_0221e93c();
    if (r > 0) {
        data_ov001_0222dec8 = 1;
        func_ov001_0221e9a0(0x11);
    } else {
        func_ov065_0226b16c();
        func_ov001_02214f50();
        func_ov001_0221e9a0(0x12);
    }
    func_ov001_0220c668((void *)func_ov001_0221b5d0);
    func_ov001_02226fdc(0, a);
}

void func_ov001_0221b4f0() {
    u8 *o = func_ov001_0221e014();
    if (func_ov065_0226b110() == 0) return;
    func_02116048(func_020fe848(), o + 0xf0, 0xe);
    func_02116048(func_020fe848(), o + 0x1f0, 0xe);
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222dec8 == 0) {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_022156b8);
    } else {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0221bbd4);
    }
}

void func_ov001_0221b598() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_0221b4f0);
}

void func_ov001_0221b5d0() {
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0221b598);
}

void func_ov001_0221b604() {
}

void func_ov001_0221b608() {
}

void func_ov001_0221b60c() {
}

void func_ov001_0221b610() {
    func_ov001_0221b60c();
    func_ov001_0221b608();
    func_ov001_0221b604();
}

void func_ov001_0221b630() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_0221b610);
}

void func_ov001_0221b680() {
    u32 l;
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c5f0(0, &l);
    if (l == 0) {
        func_ov001_02224ff8(2, 1, 1, 8);
        func_ov001_02225cb4(1, 1);
    }
    func_ov001_0220c668((void *)func_ov001_0221b630);
}

void func_ov001_0221b6f8() {
    u32 l;
    Unk_ov001_0221b6f8_A12 m;
    u8 *o = func_ov001_0221e8b4();
    func_02115e78(data_ov001_0222a298, &m, 12);
    func_ov001_0220c5f0(0, &l);
    if (l == 2) m.b[10] = 4;
    else m.b[10] = o[0xf4] + 1;
    if (func_ov065_0226b27c(&m) == 0) func_0206d49c();
    if (l == 0) func_ov065_0226b0ec(o[0xf4], o);
    func_ov001_02227094(0, (void *)func_ov001_0221b470, 0, 0x78);
}

#pragma thumb reset
}
