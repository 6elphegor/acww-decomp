// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" const s8 data_ov001_0222a1f0[8];
extern "C" const s8 data_ov001_0222a1f8[32];
extern "C" const u16 data_ov001_0222a218[32];
extern "C" const u16 data_ov001_0222a258[32];
extern "C" {
s8 data_ov001_0222deb8;
u8 data_ov001_0222dec0;
s8 data_ov001_0222debc;
void *data_ov001_0222dec4;
}

namespace F0221ae34 {

#define R258 ((const u16 (*)[16])data_ov001_0222a258)
#define R25A ((const u16 (*)[16])((const u16 *)data_ov001_0222a258 + 1))
#define R25C ((const u16 (*)[16])((const u16 *)data_ov001_0222a258 + 2))
#define R25E ((const u16 (*)[16])((const u16 *)data_ov001_0222a258 + 3))
extern "C" char data_ov001_0222b2ec[];
extern "C" char data_ov001_0222b304[];
extern "C" const s8 data_ov001_0222a1f0[];

struct Unk_ov001_0221b220_A22 { u8 b[22]; };
struct Unk_ov001_0221b6f8_A12 { u8 b[12]; };

extern "C" {
extern u8 data_ov001_0222dec0;
extern u8 data_ov001_0222dec8;
extern s8 data_ov001_0222debc;
extern s8 data_ov001_0222deb8;
extern void *data_ov001_0222dec4;

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
extern void GX_LoadBG2Char();
extern void GX_LoadBGPltt();
extern void GX_LoadBG2Scr();
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
extern void MI_CpuCopy8(void *, void *, s32);
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
extern void MIi_CpuCopy32(void *, void *, s32);
extern s32 func_ov065_0226b27c(void *);
extern void Fatal_Trap();
extern void func_ov065_0226b0ec(s32, void *);
extern void func_ov001_02227094(s32, void *, s32, s32);
extern void func_ov001_0221b470(s32);

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void func_ov001_0221ae34();
void func_ov001_0221aeac();
void func_ov001_0221aed8();
void func_ov001_0221af40();
void func_ov001_0221af44();
void func_ov001_0221b10c();
void func_ov001_0221b12c();
void func_ov001_0221b168();
void func_ov001_0221b1c0();
void func_ov001_0221b220();
void func_ov001_0221b318();

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
    func_ov001_02208690(R258[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                        R25C[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                        R25A[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                        R25E[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4]);
    func_ov001_0220c668((void *)func_ov001_0221b1c0);
}

void func_ov001_0221b220() {
    char l[22] = "char/ybBgStep21.ncl.l";
    func_ov001_02208594(data_ov001_0222b2ec, (void *)GX_LoadBG2Char);
    func_ov001_02208594(data_ov001_0222b304, (void *)GX_LoadBGPltt);
    func_ov001_02208594((void *)"char/jb3Way.nsc.l", (void *)GX_LoadBG2Scr);
    data_ov001_0222dec4 = func_ov001_02224074(func_ov001_022085e0(l), 0, 4);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x400000a, 3);
    REGSET(0x400000c, 3);
}

void func_ov001_0221b1c0() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_0221b168);
}

void func_ov001_0221b168() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_0221b12c);
}

void func_ov001_0221b12c() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221b10c);
}

void func_ov001_0221b10c() {
    func_ov001_0221af44();
    func_ov001_0221af40();
    func_ov001_0221aed8();
}

void func_ov001_0221af44() {
    u32 i;
    u32 off;
    for (i = 0, off = 0; i < 4; i++, off += 8) {
        if (func_ov001_022260ac((u8 *)data_ov001_0222a218 + (func_ov001_0220c5a8(1) << 5) + off) != 0) {
            func_ov001_022080e0(1);
            data_ov001_0222debc = i;
            func_ov001_02208690(R258[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                                R25C[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                                R25A[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4],
                                R25E[func_ov001_0220c5a8(1)][data_ov001_0222debc * 4]);
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

void func_ov001_0221af40() {
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

void func_ov001_0221aeac() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221ae34);
}

void func_ov001_0221ae34() {
    if (func_ov001_022250e0(1) != 0) return;
    if (data_ov001_0222dec0 != 0) func_ov001_02208114();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_0221acb4);
}

}
}

#undef R258
#undef R25A
#undef R25C
#undef R25E

namespace F0221a40c {

#define R258 ((const Unk_ov001_0221abb4_R *)data_ov001_0222a258)
#define R25A ((const Unk_ov001_0221abb4_R *)((const u16 *)data_ov001_0222a258 + 1))
#define R25C ((const Unk_ov001_0221abb4_R *)((const u16 *)data_ov001_0222a258 + 2))
#define R25E ((const Unk_ov001_0221abb4_R *)((const u16 *)data_ov001_0222a258 + 3))

struct Unk_ov001_0221a40c_G {
    u32 unk_00;
    u32 unk_04[3];
    u32 unk_10[3];
    u8 unk_1c;
    u8 unk_1d;
    u8 pad_1e[2];
};

struct Unk_ov001_0221abb4_R { u16 v[16]; };
struct Unk_ov001_0221ab50_B { u8 b[4]; };
struct Unk_ov001_0221a8a8_P { u16 x, y; };
struct Unk_ov001_0221a9c8_B { u8 b[22]; };

extern "C" {
extern s8 data_ov001_0222debc;
extern s8 data_ov001_0222deb8;
extern u8 data_ov001_0222dec0;
extern void *data_ov001_0222dec4;
extern u8 data_ov001_0222b2d0[];
extern const s8 data_ov001_0222a1f8[];

s32 func_ov001_022250e0(s32);
s32 func_ov001_02208100();
void func_ov001_02208114();
u8 *func_ov001_0221e8b4();
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_0220c668(void *);
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
void func_ov001_0221f09c();
s32 func_ov001_0220c5c8();
void func_ov001_0221e9a0(s32);
u32 func_ov001_0221e434(u32);
void func_ov001_022080cc(s32);
s32 func_ov001_0220c5e0();
void func_ov001_02220778(s32, s32, s32, s32, s32);
void func_ov001_02219ee4();
void func_ov001_0221e348(s32);
void func_ov001_02219c3c();
s32 func_ov001_022260ac(void *);
void func_ov001_022080e0(s32);
void func_ov001_0221a1a8();
s32 func_ov001_022261cc(s32);
s32 func_ov001_022261a8(s32);
void func_ov001_02219f80(s32);
s32 func_ov001_0221ef90();
void func_ov001_02208088();
void func_ov001_022084f8(s32);
void func_ov001_02225cb4(s32, s32);
u32 func_ov001_02224b14(u32, u32, u32);
void func_ov001_02224558(u32, s32, u32, u32);
void func_ov001_022244d8(u32, s32, s32);
s32 func_ov001_02208594(void *, void *);
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();
void GX_LoadOBJPltt();
void *func_ov001_022085e0(void *);
u32 func_ov001_02224074(void *, s32, s32);
u32 func_ov001_02225db0(s32, s32);
void func_ov001_0220891c(s32);
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208538(s32);
void func_ov001_0221ce08(void *, u32, u32);
u32 func_ov001_0220c5a8(s32);
void func_ov001_02208690(u32, u32, u32, u32);
s32 func_ov001_022080a0();
void func_ov001_0220864c();
void func_ov001_02208244();
void func_ov001_02224038(void *);
void func_ov001_02225c58(s32, s32);
void func_ov001_0220c654(s32, s32);
void func_ov001_0220c618(s32, s32);
void func_ov001_022156e0(s32);
void func_ov001_02219bc0();
void func_ov001_0221181c();
void func_ov001_022195a4();
void func_ov001_02217e40();
void func_ov001_0221a238();
void func_ov001_0220d440();
void func_ov001_02219d64();

void func_ov001_0221a40c();
void func_ov001_0221a4ac();
s32 func_ov001_0221a4f4();
void func_ov001_0221a644();
void func_ov001_0221a648();
void func_ov001_0221a780();
void func_ov001_0221a7a0();
void func_ov001_0221a7f0();
void func_ov001_0221a848();
void func_ov001_0221a8a8();
void func_ov001_0221a9c8();
void func_ov001_0221aae4();
void func_ov001_0221ab50();
void func_ov001_0221abb4(s32);
void func_ov001_0221acb4();

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

void func_ov001_0221abb4(s32 p);

void func_ov001_0221acb4() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_0220864c();
    func_ov001_02208244();
    func_ov001_02224038(data_ov001_0222dec4);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    if (data_ov001_0222dec0 == 0) {
        func_ov001_0220c654(2, 0);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
        return;
    }
    switch (data_ov001_0222debc) {
    case 0:
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_02219bc0);
        return;
    case 1:
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221181c);
        return;
    case 2:
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_022195a4);
        return;
    case 3:
        func_ov001_0220c654(2, 0);
        func_ov001_0220c618(0, 0);
        func_ov001_022156e0(1);
        func_ov001_0220c668((void *)func_ov001_02217e40);
        break;
    }
}

void func_ov001_0221abb4(s32 p) {
    s32 s = data_ov001_0222debc;
    s32 c = func_ov001_0220c5a8(1);
    const s8 *row = data_ov001_0222a1f8 + c * 16;
    row += s * 4;
    s32 v = *(s8 *)((u32)p + (u32)row);
    if (v == -1) return;
    if (v == 0) {
        data_ov001_0222deb8 = s;
    }
    if (v == -2) {
        data_ov001_0222debc = data_ov001_0222deb8;
    } else {
        data_ov001_0222debc = v;
    }
    func_ov001_0221e9a0(8);
    // the four index calls sit directly in the argument expressions (no locals), and the selector global is re-read
    func_ov001_02208690(R258[func_ov001_0220c5a8(1)].v[data_ov001_0222debc * 4],
                        R25C[func_ov001_0220c5a8(1)].v[data_ov001_0222debc * 4],
                        R25A[func_ov001_0220c5a8(1)].v[data_ov001_0222debc * 4],
                        R25E[func_ov001_0220c5a8(1)].v[data_ov001_0222debc * 4]);
}

void func_ov001_0221ab50() {
    Unk_ov001_0221ab50_B l = *(Unk_ov001_0221ab50_B *)data_ov001_0222b2d0;
    u32 v = l.b[data_ov001_0222debc];
    func_ov001_0221ce08(data_ov001_0222dec4, v, v);
}

}
}
// Declarations for data defined further down (definition order sets the data layout)
extern "C" const s8 data_ov001_0222a1f0[8];
extern "C" u8 data_ov001_0222b2d0[4];
extern "C" const s8 data_ov001_0222a1f8[32];
extern "C" const u16 data_ov001_0222a218[32];
extern "C" const u16 data_ov001_0222a258[32];
extern "C" char data_ov001_0222b2ec[24];
extern "C" char data_ov001_0222b304[24];

extern "C" const s8 data_ov001_0222a1f0[8] = {3, -1, -1, -1, -1, -1, 0, 0};

extern "C" u8 data_ov001_0222b2d0[4] = {1, 2, 3, 4};

extern "C" const s8 data_ov001_0222a1f8[32] = {-1, -2, -1, -2, 3, 0, 3, 0, -1, -1, -1, -1, 1, 0, 1, 0, -1, -2, -1, -2, 3, 0, 2, 0, 1, 0, 3, 0, 2, 0, 1, 0};

extern "C" const u16 data_ov001_0222a258[32] = {6, 0x1e, 0xea, 0x4e, 6, 0x62, 0x70, 0x92, 0, 0, 0, 0, 0x80, 0x62, 0xea, 0x92, 6, 0x1e, 0xea, 0x4e, 6, 0x62, 0x56, 0x92, 0x66, 0x62, 0xb6, 0x92, 0xc6, 0x62, 0xea, 0x92};

extern "C" const u16 data_ov001_0222a218[32] = {8, 0x20, 0xf8, 0x5c, 8, 0x64, 0x7e, 0xa0, 0, 0, 0, 0, 0x83, 0x64, 0xf8, 0xa0, 8, 0x20, 0xf8, 0x5c, 8, 0x64, 0x64, 0xa0, 0x68, 0x64, 0xc4, 0xa0, 0xc8, 0x64, 0xf8, 0xa0};

extern "C" char data_ov001_0222b304[24] = "char/ybBgStep2.ncl.l";

extern "C" char data_ov001_0222b2ec[24] = "char/jbBgStep2.ncg.l";

