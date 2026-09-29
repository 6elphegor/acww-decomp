// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222de7c_Obj {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08[12];
    u8 unk_14;
};

typedef void (*Unk_ov001_02214dd8_Fn)(void *);

struct Unk_ov001_02214dd8_Fns { Unk_ov001_02214dd8_Fn v[5]; };
struct Unk_ov001_02214dd8_Ids { u8 v[5]; };

extern "C" {
extern Unk_ov001_0222de7c_Obj *data_ov001_0222de7c;
extern s32 data_ov001_0222de80;
extern void *data_ov001_0222de1c;
extern u8 data_ov001_0222a080[];
extern u16 data_ov001_0222a088[];
extern u16 data_ov001_0222a090[][2];
extern u16 data_ov001_0222a092[][2];
extern u8 data_ov001_0222af80[];
extern u8 data_ov001_0222af90[];
extern u8 data_ov001_0222afd0[];
extern u8 data_ov001_0222afe4[];
extern u8 data_ov001_0222affc[];
extern u8 data_ov001_0222b014[];
extern u8 data_ov001_0222b02c[];
extern u8 data_ov001_0222b030[];

s32 func_ov001_0221484c();
s32 func_ov001_022147a4();
s32 func_ov001_022147a8(s32);
s32 func_ov001_0220bf98();
s32 func_ov001_0220bfec();
s32 func_ov001_0220bf84(s32);
s32 func_ov001_0220bf5c(s32);
s32 func_ov001_0220bf70(s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_0220c5f0(void *, void *);
s32 func_ov001_0220c5e0();
s32 func_ov001_0220cc10(void *, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_02225db0(s32, s32);
s32 func_ov001_0220891c(s32);
s32 func_ov001_02208290(s32, s32, s32);
s32 func_ov001_02208538(s32);
s32 func_ov001_0222558c(s32, s32);
s32 func_ov001_02224b60(s32, s32);
s32 func_ov001_022080a0();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02208114();
s32 func_ov001_02208070();
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
s32 func_ov001_022261cc(s32);
s32 func_ov001_022080e0(s32);
s32 func_ov001_02208088();
s32 func_ov001_022084f8(s32);
s32 func_ov001_02225290(s32, s32, s32, s32, s32, void *, s32);
s32 func_ov001_02208388();
s32 func_ov001_02225254(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_ov001_0222516c(s32);
s32 func_ov001_022156e0(s32);
s32 func_ov001_02214488();
s32 func_ov001_022144e8();
s32 func_02111df8(void);
s32 func_0211172c(void);
s32 func_02111ec8(void);
s32 func_02111a6c(void);
s32 func_02128930(void *, void *, s32);
s32 func_02115fb4(void *, s32, s32);
s32 func_0212c234(void *, s32, void *, s32);
void func_ov001_0221aae4();
void func_ov001_02217e40();

void func_ov001_02214bc0();
void func_ov001_02214bf4();
void func_ov001_02214c9c();
void func_ov001_02214f60();
void func_ov001_02215044();
void func_ov001_022150a8();
void func_ov001_02215148();
void func_ov001_02215168();
void func_ov001_022151a4();

void func_ov001_02214ba4() {
    func_ov001_0221484c();
    func_ov001_022147a4();
}

void func_ov001_02214bc0() {
    if (func_ov001_0220bf98() == 0x1f) return;
    func_ov001_0220c668((void *)func_ov001_02214ba4);
}

void func_ov001_02214bf4() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220bfec();
    func_ov001_0221e9a0(0x14);
    if (data_ov001_0222de7c->unk_14 == 0) {
        func_ov001_0220bf84(0);
        func_ov001_0220bf5c(0);
    } else {
        if (func_ov001_022147a8(0x1a) != 0) {
            func_ov001_0220bf70(0);
        }
        func_ov001_0220bf5c(0);
    }
    func_ov001_0220c668((void *)func_ov001_02214bc0);
}

void func_ov001_02214c9c() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02214bf4);
}

void func_ov001_02214cfc() {
    func_ov001_02208594(data_ov001_0222afd0, (void *)func_02111df8);
    func_ov001_02208594(data_ov001_0222afe4, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222affc, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222b014, (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 2;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

void func_ov001_02214dd8() {
    Unk_ov001_02214dd8_Fns fns = *(Unk_ov001_02214dd8_Fns *)data_ov001_0222af90;
    Unk_ov001_02214dd8_Ids ids = *(Unk_ov001_02214dd8_Ids *)data_ov001_0222af80;
    s32 idx;
    data_ov001_0222de7c = (Unk_ov001_0222de7c_Obj *)func_ov001_02225db0(0x18, 4);
    func_ov001_0220c5f0(&idx, 0);
    fns.v[idx](data_ov001_0222de7c->unk_08);
    Unk_ov001_0222de7c_Obj *o = data_ov001_0222de7c;
    if (func_02128930(o->unk_08, data_ov001_0222b02c, 3) != 0) {
        o->unk_14 = 3;
    } else {
        func_02115fb4(o->unk_08, 0, 12);
        data_ov001_0222de7c->unk_14 = 0;
    }
    func_ov001_02214cfc();
    func_ov001_0220891c(idx + 0xb);
    func_ov001_02208290(ids.v[idx], -1, 0);
    func_ov001_02208538(2);
    data_ov001_0222de7c->unk_00 = func_ov001_0222558c(0, 0);
    data_ov001_0222de7c->unk_04 = func_ov001_02224b60(0, 0x3f);
    u16 *p = (u16 *)(data_ov001_0222de7c->unk_04 + 4);
    *p = (*p & ~0xc00) | 0xc00;
    func_ov001_02214488();
    func_ov001_022144e8();
    func_ov001_0220c668((void *)func_ov001_02214c9c);
}

void func_ov001_02214f50(s32 a) {
    data_ov001_0222de80 = a;
}

void func_ov001_02214f60() {
    s32 sel;
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c5f0(0, &sel);
    if (sel != 0) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
    } else {
        func_ov001_0220c654(2, 0);
        func_ov001_0220c618(0, 0);
        func_ov001_022156e0(0);
        func_ov001_0220c668((void *)func_ov001_02217e40);
    }
}

void func_ov001_02215044() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02214f60);
}

void func_ov001_022150a8() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02215044);
}

void func_ov001_022150d4() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_0220c668((void *)func_ov001_022150a8);
}

void func_ov001_02215110() {}

void func_ov001_02215114() {
    if (func_ov001_022261cc(1) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_02215148() {
    func_ov001_02215114();
    func_ov001_02215110();
    func_ov001_022150d4();
}

void func_ov001_02215168() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_02215148);
}

void func_ov001_022151a4() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(4);
    func_ov001_0220c668((void *)func_ov001_02215168);
}

void func_ov001_022151fc() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_022151a4);
}

void func_ov001_0221523c() {
    s32 sel;
    s32 r4;
    u16 buf[8];
    func_ov001_0220c5f0(0, &sel);
    s32 v = data_ov001_0222de80;
    if (v >= -20099) r4 = 0;
    else if (v >= -20100) r4 = 21;
    else if (v >= -20101) r4 = 74;
    else if (v >= -20107) r4 = 21;
    else if (v >= -20108) r4 = 73;
    else if (v >= -20109) r4 = 21;
    else if (v >= -20110) r4 = 24;
    else if (v >= -20999) r4 = 21;
    else if (v >= -22999) r4 = 0;
    else if (v >= -23999) r4 = 74;
    else if (v >= -49999) r4 = 0;
    else if (v >= -50002) r4 = 53;
    else if (v >= -50003) r4 = 38;
    else if (v >= -50098) r4 = 0;
    else if (v >= -50099) { r4 = (sel == 2) ? 0x26 : 0x35; }
    else if (v >= -51098) r4 = 0;
    else if (v >= -51099) { r4 = (sel == 2) ? 0x26 : 0x36; }
    else if (v >= -51102) r4 = 55;
    else if (v >= -51103) r4 = 38;
    else if (v >= -51199) r4 = 0;
    else if (v >= -51299) r4 = 76;
    else if (v >= -51302) r4 = 77;
    else if (v >= -51303) r4 = 37;
    else if (v >= -51999) r4 = 0;
    else if (v >= -52002) r4 = 56;
    else if (v >= -52003) r4 = 78;
    else if (v >= -52099) r4 = 0;
    else if (v >= -52103) r4 = 59;
    else if (v >= -52199) r4 = 0;
    else if (v >= -52203) r4 = 59;
    else if (v >= -52299) r4 = 0;
    else if (v >= -52399) r4 = 21;
    else if (v >= -52999) r4 = 0;
    else if (v >= -53299) r4 = 0x15;
    else r4 = 0;
    s32 r5 = func_ov001_0222558c(0, data_ov001_0222a080[func_ov001_0220c5e0()]);
    s32 r4b = func_ov001_0220cc10(data_ov001_0222de1c, r4);
    func_0212c234(buf, 8, data_ov001_0222b030, -data_ov001_0222de80);
    u32 a = data_ov001_0222a092[func_ov001_0220c5e0()][0];
    u32 b = data_ov001_0222a090[func_ov001_0220c5e0()][0];
    func_ov001_02225290(r5, b, a, 2, 10, buf, 0);
    func_ov001_02225254(r5, data_ov001_0222a088[0], data_ov001_0222a088[1], data_ov001_0222a088[2], data_ov001_0222a088[3], 2, func_ov001_02208388(), r4b);
    func_ov001_0222516c(r5);
}

}
