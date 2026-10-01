// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 func_ov001_022250e0(s32);
s32 func_ov001_022080a0();
void func_ov001_022079fc();
void func_ov001_022253d4(s32);
void func_ov001_02208244();
void func_ov001_02225c58(s32, s32);
void func_ov001_02225cb4(s32, s32);
void func_ov001_0220d310();
void func_ov001_0220d340();
s32 func_ov001_0220d23c();
void func_ov001_0220c654(s32, s32);
void func_ov001_0220c668(void *);
void func_ov001_02208114();
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
void func_ov001_0221e93c();
void func_ov001_0221e9a0(s32);
s32 func_ov001_022261cc(s32);
void func_ov001_022080e0(s32);
void func_021132e0(s32);
void func_ov001_02208088();
void func_ov001_022084f8(s32);
s32 func_ov001_02208594(void *, void *);
void func_0211172c();
void func_02111ec8();
void func_02111a6c();
void func_ov001_022088f8();
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208538(s32);
void func_ov001_02208478(s32);
void func_ov001_02207a40(s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
void func_ov001_02220728();
void func_ov001_02220778(s32, s32, s32, s32, s32);
void func_ov001_0221b318();
void func_ov001_022187dc();

void func_ov001_02219064();
void func_ov001_02219098();
void func_ov001_022190d8();
void func_ov001_02219178();
void func_ov001_0221926c();
void func_ov001_022192f4();
void func_ov001_02219320();
void func_ov001_02219360();
void func_ov001_02219364();
void func_ov001_022193b8();
void func_ov001_022193e4();
void func_ov001_02219420();
void func_ov001_0221947c();
void func_ov001_022194dc();
void func_ov001_022195a4();
s32 func_ov001_0221960c();
}

extern "C" u8 data_ov001_0222dea4 = 0;

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

extern "C" s32 func_ov001_0221960c() {
    s32 v = *(volatile u16 *)0x27fffa8 & 0x8000;
    v >>= 15;
    if (v != 0) return TRUE;
    return FALSE;
}

extern "C" void func_ov001_022195a4() {
    data_ov001_0222dea4 = 0;
    func_ov001_022194dc();
    func_ov001_022088f8();
    func_ov001_02208290(0x83, -1, 0);
    func_ov001_02208538(2);
    func_ov001_02208478(0x69);
    func_ov001_02207a40(0);
    func_ov001_0221e9a0(0xb);
    func_ov001_0220c668((void *)func_ov001_0221947c);
}

extern "C" void func_ov001_022194dc() {
    func_ov001_02208594((void *)"char/jbBgStep3.ncg.l", (void *)func_0211172c);
    func_ov001_02208594((void *)"char/ybBgStep3.ncl.l", (void *)func_02111ec8);
    func_ov001_02208594((void *)"char/xb4Multi.nsc.l", (void *)func_02111a6c);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x4000008, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

extern "C" void func_ov001_0221947c() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02219420);
}

extern "C" void func_ov001_02219420() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_0220d340();
    func_ov001_022084f8(1);
    func_ov001_0220c668((void *)func_ov001_022193e4);
}

extern "C" void func_ov001_022193e4() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_022193b8);
}

extern "C" void func_ov001_022193b8() {
    func_021132e0(10);
    func_ov001_022190d8();
    func_ov001_02219364();
    func_ov001_02219360();
    func_ov001_02219320();
}

extern "C" void func_ov001_02219364() {
    if (func_ov001_022261cc(2)) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_0221960c() == 0) return;
    func_ov001_022080e0(0);
}

extern "C" void func_ov001_02219360() {}

extern "C" void func_ov001_02219320() {
    if (func_ov001_02208100()) return;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_022192f4);
}

extern "C" void func_ov001_022192f4() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221926c);
}

extern "C" void func_ov001_0221926c() {
    if (func_ov001_022250e0(1)) return;
    if (data_ov001_0222dea4 == 0) {
        func_ov001_02208114();
    }
    if (data_ov001_0222dea4 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_02219178);
}

extern "C" void func_ov001_02219178() {
    if (func_ov001_022250e0(0)) return;
    if (data_ov001_0222dea4 == 0) {
        if (func_ov001_022250e0(1)) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    if (data_ov001_0222dea4 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222dea4 == 0) {
        func_ov001_0220d310();
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221b318);
        return;
    }
    func_ov001_0220c654(0, 0);
    func_ov001_0220c668((void *)func_ov001_022187dc);
}

extern "C" void func_ov001_022190d8() {
    switch (func_ov001_0220d23c()) {
    case 1:
        data_ov001_0222dea4 = 1;
        func_ov001_0220c668((void *)func_ov001_022192f4);
        break;
    case 4:
        data_ov001_0222dea4 = 0;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(9);
        func_ov001_02220778(0x41, 1, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02219098);
        break;
    }
}

extern "C" void func_ov001_02219098() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02219064);
}

extern "C" void func_ov001_02219064() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_022192f4);
}

