// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220d1f4_V3 {
    s32 v[3];
};

struct Unk_ov001_0220d23c_Buf {
    u8 unk_00[0x20];
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[0xec - 0x28];
};

extern "C" {
//DEFS
char data_ov001_0222ab10[16] = "msg/ita.bmg.l";
char data_ov001_0222aae0[16] = "msg/ger.bmg.l";
char data_ov001_0222aaf0[16] = "msg/fre.bmg.l";
char data_ov001_0222aac0[16] = "msg/spa.bmg.l";
char data_ov001_0222aad0[16] = "msg/jap.bmg.l";
char data_ov001_0222ab00[16] = "msg/eng.bmg.l";
void *data_ov001_0222ab20[6] = {data_ov001_0222aad0, data_ov001_0222ab00, data_ov001_0222aaf0, data_ov001_0222aae0, data_ov001_0222ab10, data_ov001_0222aac0};
void *data_ov001_0222de1c;
Unk_ov001_0220d1f4_V3 *data_ov001_0222de18;
//ENDDEFS

extern void func_0206d49c();
extern void func_021132e0(s32);
extern void func_02111794();
extern void GXS_LoadBGPltt();
extern void GXS_LoadOBJ();
extern void GXS_LoadOBJPltt();
extern void func_0211172c();
extern void GX_LoadBGPltt();
extern void GX_LoadOBJ();
extern void GX_LoadOBJPltt();
extern void func_02111ad4();

extern s32 func_ov001_02203b38(void *);
extern s32 func_ov001_02203b90();
extern s32 func_ov001_02203c48(s32, s32, void *, void *, void *, u32);
extern void func_ov001_0221e140(void *);
extern u32 func_ov001_0220c5e0();
extern s32 func_ov001_0220c5c8();
extern s32 func_ov001_0220c5a8(s32);
extern void func_ov001_0220c594();
extern void func_ov001_0220c654(s32, s32);
extern void func_ov001_0220c668(void *);
extern void func_ov001_0220cc30(void *);
extern void *func_ov001_0220cc60(void *);
extern void func_ov001_0220ccc8();
extern void func_ov001_0220ccdc();
extern void func_ov001_0220dd94();
extern void func_ov001_0221aae4();
extern void func_ov001_0221e8c8();
extern void func_ov001_0221e8dc();
extern u8 *func_ov001_022085e0(u8 *);
extern s32 func_ov001_02208594(void *, void *);
extern void func_ov001_02208840();
extern void func_ov001_02208864();
extern void func_ov001_0220897c();
extern void func_ov001_02208990();
extern void func_ov001_02208374();
extern s32 func_ov001_022250e0(s32);
extern void func_ov001_02224c40(s32);
extern void func_ov001_02224c6c(s32, void *);
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_02225cb4(s32, s32);
extern void func_ov001_02225d08();
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225db0(s32, s32);
extern void *func_ov001_02225dd8(s32, s32);
extern void func_ov001_02226f68(s32, s32);

#pragma thumb off
void func_ov001_0220d3b0();
void func_ov001_0220d488();
void func_ov001_0220d528();
void func_ov001_0220d570();
void func_ov001_0220d1d8();
void *func_ov001_0220d1e4(s32);
void func_ov001_0220d1f4(Unk_ov001_0220d1f4_V3 *);

void func_ov001_0220d570() {
    func_ov001_0221e8dc();
    func_ov001_0220ccdc();
    func_ov001_02208864();
    func_ov001_02208990();
    func_ov001_02208374();
    if (func_ov001_0220c5e0() == 1 && func_ov001_0220c5a8(2) != 0) {
        data_ov001_0222de1c = func_ov001_0220cc60((void *)"msg/usa.bmg.l");
    } else {
        data_ov001_0222de1c = func_ov001_0220cc60(data_ov001_0222ab20[func_ov001_0220c5e0()]);
    }
    func_ov001_02224c6c(1, func_ov001_022085e0((u8 *)"char/jtMain.nce.l"));
    func_ov001_02224c6c(0, func_ov001_022085e0((u8 *)"char/jbMain.nce.l"));
    func_ov001_02208594((void *)"char/jtBgMain.ncg.l", (void *)func_02111794);
    func_ov001_02208594((void *)"char/jtBgMain.ncl.l", (void *)GXS_LoadBGPltt);
    func_ov001_02208594((void *)"char/jtObjMain.ncg.l", (void *)GXS_LoadOBJ);
    func_ov001_02208594((void *)"char/xtObjMain.ncl.l", (void *)GXS_LoadOBJPltt);
    func_ov001_02208594((void *)"char/jbBgStep1.ncg.l", (void *)func_0211172c);
    func_ov001_02208594((void *)"char/jbBgStep1.ncl.l", (void *)GX_LoadBGPltt);
    func_ov001_02208594((void *)"char/jbObjMain.ncg.l", (void *)GX_LoadOBJ);
    func_ov001_02208594((void *)"char/ybObjMain.ncl.l", (void *)GX_LoadOBJPltt);
    switch (func_ov001_0220c5c8()) {
    case 0:
        func_ov001_02208594((void *)"char/jtTop.nsc.l", (void *)func_02111ad4);
        break;
    case 1:
        func_ov001_02208594((void *)"char/jtStep1.nsc.l", (void *)func_02111ad4);
        break;
    }
    volatile u16 *r1 = (volatile u16 *)0x400100a;
    volatile u16 *r2 = (volatile u16 *)0x400000a;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    func_ov001_02225cb4(1, 2);
    func_ov001_02225cb4(0, 2);
    func_ov001_0220c668((void *)func_ov001_0220d528);
}

void func_ov001_0220d528() {
    func_ov001_02224ff8(2, 1, 2, 0x14);
    func_ov001_02224ff8(2, 0, 2, 0x14);
    func_ov001_0220c668((void *)func_ov001_0220d488);
}

void func_ov001_0220d488() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    switch (func_ov001_0220c5c8()) {
    case 0:
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220dd94);
        break;
    case 1:
        func_ov001_0220c654(1, 1);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
        break;
    }
}

void func_ov001_0220d440() {
    func_ov001_02224ff8(3, 1, 0x3f, 0x14);
    func_ov001_02224ff8(3, 0, 0x3f, 0x14);
    func_ov001_0220c668((void *)func_ov001_0220d3b0);
}

void func_ov001_0220d3b0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_02226f68(0, 0);
    func_ov001_02226f68(1, 0);
    func_ov001_02224c40(1);
    func_ov001_02224c40(0);
    func_ov001_0220897c();
    func_ov001_02208840();
    func_ov001_0220cc30(data_ov001_0222de1c);
    func_ov001_0220ccc8();
    func_ov001_0221e8c8();
    func_ov001_0220c594();
}

void func_ov001_0220d340() {
    data_ov001_0222de18 = (Unk_ov001_0220d1f4_V3 *)func_ov001_02225db0(0xc, -4);
    if (func_ov001_02203c48(0xf, 0x40, (void *)func_ov001_0220d1f4, (void *)func_ov001_0220d1e4, (void *)func_ov001_0220d1d8, 0x800) != 1) func_0206d49c();
    func_021132e0(10);
}

void func_ov001_0220d310() {
    if (func_ov001_02203b90() != 1) func_0206d49c();
    func_ov001_02225d58(&data_ov001_0222de18);
}

s32 func_ov001_0220d23c() {
    Unk_ov001_0220d23c_Buf buf;
    s32 r;
    switch (data_ov001_0222de18->v[0]) {
    case 0:
    case 1:
    case 3:
    case 5:
        return 0;
    case 2:
        return 1;
    case 4:
        return 2;
    case 6:
        if (func_ov001_02203b38(&buf) != 1) func_0206d49c();
        if (buf.unk_20 >= 0 && buf.unk_20 <= 3) {
            if (buf.unk_24 == 1) return 3;
        }
        return 5;
    case 7:
        r = 4;
        break;
    }
    return r;
}

void func_ov001_0220d20c() {
    u8 buf[0xec];
    if (func_ov001_02203b38(buf) != 1) func_0206d49c();
    func_ov001_0221e140(buf);
}

void func_ov001_0220d1f4(Unk_ov001_0220d1f4_V3 *p) {
    *data_ov001_0222de18 = *p;
}

void *func_ov001_0220d1e4(s32 a) {
    return func_ov001_02225dd8(a, 0x20);
}

void func_ov001_0220d1d8() {
    func_ov001_02225d08();
}
}
#pragma thumb reset
