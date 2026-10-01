// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 func_02111a6c();
s32 func_0211172c();
s32 func_02111ec8();
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0220891c(s32);
s32 func_ov001_02208478(s32);
s32 func_ov001_02208290(s32, s32, s32);
s32 func_ov001_02208538(s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_022080a0();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02208114();
s32 func_ov001_02208070();
s32 func_ov001_02208100();
s32 func_ov001_02208088();
s32 func_ov001_022261cc(s32);
s32 func_ov001_022080e0(s32);
s32 func_ov001_022084f8(s32);

void func_ov001_0221c180();
void func_ov001_0221c26c();
void func_ov001_0221c2e4();
void func_ov001_0221c310();
void func_ov001_0221c374();
void func_ov001_0221c378();
void func_ov001_0221c3c4();
void func_ov001_0221c3e4();
void func_ov001_0221c420();
void func_ov001_0221c478();
void func_ov001_0221c4d8();
void func_ov001_0221c5a0();
void func_ov001_0221aae4();
void func_ov001_0221ccb4();
}

extern "C" u8 data_ov001_0222ded4 = 0;

extern "C" void func_ov001_0221c5a0() {
    data_ov001_0222ded4 = 0;
    func_ov001_0221c4d8();
    func_ov001_0220891c(8);
    func_ov001_02208290(0x85, -1, 0);
    func_ov001_02208538(1);
    func_ov001_02208478(0x6c);
    func_ov001_0220c668((void *)func_ov001_0221c478);
}

extern "C" void func_ov001_0221c4d8() {
    func_ov001_02208594((void *)"char/jbBgStep2.ncg.l", (void *)func_0211172c);
    func_ov001_02208594((void *)"char/ybBgStep2.ncl.l", (void *)func_02111ec8);
    func_ov001_02208594((void *)"char/xb3Multi.nsc.l", (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

extern "C" void func_ov001_0221c478() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0221c420);
}

extern "C" void func_ov001_0221c420() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(6);
    func_ov001_0220c668((void *)func_ov001_0221c3e4);
}

extern "C" void func_ov001_0221c3e4() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221c3c4);
}

extern "C" void func_ov001_0221c3c4() {
    func_ov001_0221c378();
    func_ov001_0221c374();
    func_ov001_0221c310();
}

extern "C" void func_ov001_0221c378() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    }
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
    }
}

extern "C" void func_ov001_0221c374() {
}

extern "C" void func_ov001_0221c310() {
    switch (func_ov001_02208100()) {
    case 0:
        func_ov001_0221e9a0(7);
        break;
    case 1:
        func_ov001_0221e9a0(6);
        data_ov001_0222ded4 = 1;
        break;
    default:
        return;
    }
    func_ov001_0220c668((void *)func_ov001_0221c2e4);
}

extern "C" void func_ov001_0221c2e4() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221c26c);
}

extern "C" void func_ov001_0221c26c() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222ded4 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0221c180);
}

extern "C" void func_ov001_0221c180() {
    if (func_ov001_022250e0(0) != 0) return;
    if (data_ov001_0222ded4 == 0) {
        if (func_ov001_022250e0(1) != 0) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    if (data_ov001_0222ded4 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222ded4 == 0) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
    } else {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221ccb4);
    }
}
