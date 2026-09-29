// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02217e40_E { u8 pad_00[4]; u16 unk_04; };

struct Unk_ov001_0222de94 {
    void *unk_00;
    u8 pad_04[0x10];
    void *unk_14;
    Unk_ov001_02217e40_E *unk_18[7];
    Unk_ov001_02217e40_E *unk_34;
    u8 pad_38[4];
    void *unk_3c;
    u8 pad_40[2];
    u8 unk_42;
    u8 unk_43;
};

extern "C" {
extern Unk_ov001_0222de94 *data_ov001_0222de94;
extern u8 data_ov001_0222de88;
extern s8 data_ov001_0222a0ac[];
extern u16 data_ov001_0222de90;
extern u8 data_ov001_0222a0f0[];
extern u8 data_ov001_0222de98;
extern u8 data_ov001_0222b138[];
extern u8 data_ov001_0222b150[];
extern u8 data_ov001_0222b168[];
extern u8 data_ov001_0222b17c[];

u8 *func_ov001_0221e8b4();
void *func_ov001_02225db0(s32, s32);
void func_ov001_02217bc4();
void func_ov001_02217c24();
s32 func_ov001_0220c5e0();
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208538(s32);
void func_ov001_022088d4();
void func_ov001_0221d660(s32, s32, s32, s32, s32);
void *func_ov001_0222558c(s32, s32);
Unk_ov001_02217e40_E *func_ov001_02224b60(s32, s32);
void *func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02215f0c();
void func_ov001_022158fc();
void func_ov001_02216d8c();
void func_ov001_02215e1c();
void func_ov001_0220c668(void *);
void func_ov001_02217b64();
s32 func_ov001_022250e0(s32);
void func_ov001_02208244();
void func_ov001_02225c58(s32, s32);
void func_ov001_02225cb4(s32, s32);
void func_ov001_0220c654(s32, s32);
void func_ov001_0221aae4();
void func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
void func_ov001_02220778(s32, s32, s32, s32, s32);
void func_ov001_0221e9a0(s32);
void func_ov001_0221e93c();
s32 func_ov001_02208594(void *, void *);
void func_ov001_022088f8();
void func_ov001_0221e25c();
s32 func_ov001_0220d23c();
void func_ov001_02208070();
s32 func_ov001_022080a0();
void func_ov001_022079fc();
void func_ov001_022253d4(s32);
void func_ov001_0220d310();
void func_ov001_0221b318();
void func_ov001_02218d60();
void func_ov001_02208114();
void func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
s32 func_ov001_022261cc(s32);
void func_ov001_022080e0(s32);
s32 func_ov001_02218824();
void func_021132e0(s32);
void func_ov001_02208088();
void func_ov001_022084f8(s32);
void func_0211172c();
void func_02111ec8();
void func_02111a6c();

void func_ov001_02218054();
void func_ov001_022180cc();
void func_ov001_0221811c();
void func_ov001_02218158();
void func_ov001_022181c4();
void func_ov001_02218224();
void func_ov001_02218300();
void func_ov001_02218334();
void func_ov001_02218374();
void func_ov001_02218414();
void func_ov001_02218508();
void func_ov001_02218590();
void func_ov001_022185bc();
void func_ov001_022185fc();
void func_ov001_02218600();
void func_ov001_02218654();
void func_ov001_02218680();
void func_ov001_022186bc();
void func_ov001_02218114();
void func_ov001_02218118();

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

void func_ov001_02217e40() {
    u8 *p = func_ov001_0221e8b4();
    s32 i;
    BOOL z = FALSE;
    u32 b;
    data_ov001_0222de94 = (Unk_ov001_0222de94 *)func_ov001_02225db0(0x48, 4);
    data_ov001_0222de94->unk_43 = p[0xf6];
    data_ov001_0222de94->unk_42 = 0xc;
    func_ov001_02217bc4();
    func_ov001_02217c24();
    if (data_ov001_0222de88 == 0) {
        func_ov001_02208290(0x7c, data_ov001_0222a0ac[func_ov001_0220c5e0()], p[0xf4] + 1);
    } else {
        func_ov001_02208290(0x97, -1, 0);
    }
    func_ov001_02208538(1);
    func_ov001_022088d4();
    func_ov001_0221d660(2, 0x55, 0xf1, 0x41, (data_ov001_0222de90 * 0x37) / 0x91);
    data_ov001_0222de94->unk_14 = func_ov001_0222558c(0, 1);
    i = 0;
    b = data_ov001_0222a0f0[1];
    z = i;
    for (; i < 7; i++) {
        data_ov001_0222de94->unk_18[i] = func_ov001_02224b60(z, b);
    }
    switch (p[0xe7]) {
    case 1:
        data_ov001_0222de94->unk_34 = func_ov001_02224b60(0, 0x50);
        data_ov001_0222de94->unk_34->unk_04 = (data_ov001_0222de94->unk_34->unk_04 & ~0xc00) | 0xc00;
        break;
    case 2:
        data_ov001_0222de94->unk_34 = func_ov001_02224b60(0, 0x51);
        data_ov001_0222de94->unk_34->unk_04 = (data_ov001_0222de94->unk_34->unk_04 & ~0xc00) | 0xc00;
        break;
    }
    data_ov001_0222de94->unk_3c = func_ov001_02227094(1, (void *)func_ov001_02215f0c, 0, 0x6e);
    data_ov001_0222de94->unk_00 = func_ov001_02227094(0, (void *)func_ov001_022158fc, 0, 0x78);
    func_ov001_02216d8c();
    func_ov001_02215e1c();
    func_ov001_0220c668((void *)func_ov001_02217b64);
}

void func_ov001_02218054() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    func_ov001_0220c654(2, 1);
    func_ov001_0220c668((void *)func_ov001_0221aae4);
}

void func_ov001_022180cc() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_02218054);
}

void func_ov001_0221811c() {
    func_ov001_02218118();
    func_ov001_02218114();
    if (func_ov001_022206f8()) return;
    func_ov001_0220c668((void *)func_ov001_022180cc);
}

void func_ov001_02218158() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_02220778(0x96, 5, 1, -1, 0);
    func_ov001_0220c668((void *)func_ov001_0221811c);
}

void func_ov001_022181c4() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_02218158);
}

void func_ov001_02218224() {
    func_ov001_02208594(data_ov001_0222b138, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222b150, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222b168, (void *)func_02111a6c);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

void func_ov001_022182d4() {
    func_ov001_02218224();
    func_ov001_022088f8();
    func_ov001_0221e25c();
    func_ov001_0220c668((void *)func_ov001_022181c4);
}

void func_ov001_02218300() {
    if (func_ov001_022206f8()) return;
    func_ov001_0220c668((void *)func_ov001_02218590);
}

void func_ov001_02218334() {
    if (func_ov001_02220714()) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02218300);
}

void func_ov001_02218374() {
    switch (func_ov001_0220d23c()) {
    case 2:
        data_ov001_0222de98 = 1;
        func_ov001_0220c668((void *)func_ov001_02218590);
        break;
    case 4:
        data_ov001_0222de98 = 0;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(9);
        func_ov001_02220778(0x41, 1, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02218334);
        break;
    }
}

void func_ov001_02218414() {
    if (func_ov001_022250e0(0)) return;
    if (data_ov001_0222de98 == 0) {
        if (func_ov001_022250e0(1)) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    if (data_ov001_0222de98 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de98 == 0) {
        func_ov001_0220d310();
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221b318);
        return;
    }
    func_ov001_0220c654(0, 0);
    func_ov001_0220c668((void *)func_ov001_02218d60);
}

void func_ov001_02218508() {
    if (func_ov001_022250e0(1)) return;
    if (data_ov001_0222de98 == 0) {
        func_ov001_02208114();
    }
    if (data_ov001_0222de98 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02218414);
}

void func_ov001_02218590() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02218508);
}

void func_ov001_022185bc() {
    if (func_ov001_02208100()) return;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_02218590);
}

void func_ov001_02218600() {
    if (func_ov001_022261cc(2)) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_02218824() == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_02218654() {
    func_021132e0(10);
    func_ov001_02218374();
    func_ov001_02218600();
    func_ov001_022185fc();
    func_ov001_022185bc();
}

void func_ov001_02218680() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_02218654);
}

void func_ov001_022186bc() {
    if (func_ov001_022250e0(0)) return;
    func_ov001_022084f8(1);
    func_ov001_0220c668((void *)func_ov001_02218680);
}

void func_ov001_022186fc() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_022186bc);
}

void func_ov001_0221873c() {
    func_ov001_02208594(data_ov001_0222b17c, (void *)func_02111a6c);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x4000008, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

void func_ov001_02218114() {}
void func_ov001_02218118() {}
void func_ov001_022185fc() {}
}
