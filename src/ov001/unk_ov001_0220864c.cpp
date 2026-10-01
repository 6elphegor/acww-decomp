// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern void func_ov001_022247e0(void *);
extern void *func_ov001_02224b14(s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void func_ov001_02224558(void *, s32, s32, s32);
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225db0(s32, s32);
void func_ov001_0220864c();
}

extern "C" const u8 data_ov001_02229bc4[8] = {0x0a, 0x0b, 0x04, 0x05, 0x02, 0x03, 0x0c, 0x0d};
extern "C" {
void **data_ov001_0222ddd0;
}

#pragma thumb off

extern "C" void func_ov001_02208864() {
    data_ov001_0222ddd0 = (void **)func_ov001_02225db0(0x10, 4);
}

extern "C" void func_ov001_02208840() {
    func_ov001_0220864c();
    func_ov001_02225d58(&data_ov001_0222ddd0);
}

extern "C" void func_ov001_02208780(s32 idx, s32 a, s32 b, s32 c) {
    s32 i;
    const u8 *p;
    func_ov001_0220864c();
    p = &data_ov001_02229bc4[idx * 2];
    for (i = 0; i < 2; i++, p++) {
        data_ov001_0222ddd0[i] = func_ov001_02224b14(0, *p, 1);
        func_ov001_022244d8(data_ov001_0222ddd0[i], -1, 1);
    }
    func_ov001_02224558(data_ov001_0222ddd0[0], -1, a, c);
    func_ov001_02224558(data_ov001_0222ddd0[1], -1, b, c);
}

extern "C" void func_ov001_02208690(s32 a, s32 b, s32 c, s32 d) {
    s32 k = 6;
    s32 i;
    func_ov001_0220864c();
    for (i = 0; i < 4; i++, k++) {
        data_ov001_0222ddd0[i] = func_ov001_02224b14(0, k, 1);
        func_ov001_022244d8(data_ov001_0222ddd0[i], -1, 1);
    }
    func_ov001_02224558(data_ov001_0222ddd0[0], -1, a, c);
    func_ov001_02224558(data_ov001_0222ddd0[1], -1, b, c);
    func_ov001_02224558(data_ov001_0222ddd0[2], -1, a, d);
    func_ov001_02224558(data_ov001_0222ddd0[3], -1, b, d);
}

extern "C" void func_ov001_0220864c() {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_ov001_0222ddd0[i] != 0) {
            func_ov001_022247e0(data_ov001_0222ddd0[i]);
            data_ov001_0222ddd0[i] = 0;
        }
    }
}

#pragma thumb reset
