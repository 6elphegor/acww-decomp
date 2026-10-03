#include "types.h"
inline void *operator new(unsigned long, void *p) { return p; }

extern "C" {
// Other files
u32 func_02063b8c(u32 n);
}

extern "C" {
u32 func_020b2bac(u32 a);
}

extern "C" {
u32 func_020b2c14(u32 a);
}

extern "C" {
u32 func_020b50e8(void);
}

extern "C" {
BOOL func_020b5268(u32 a);
}

extern "C" {
BOOL func_020b530c(u32 a);
}

extern "C" {
BOOL func_020b52e4(u32 a);
}

extern "C" {
BOOL func_020b5210(u32 a);
}

extern "C" {
BOOL func_020b50bc(void);
}

extern "C" {
BOOL func_020b51b8(u32 a);
}

extern "C" {
u32 func_0202ffdc(void);
}

extern "C" {
u32 func_0203107c(u32 a);
}

extern "C" {
void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *self, void *vec, s32 a, s32 b);
}

extern "C" {
void func_02033988(void *p);
}

extern "C" {
u16 *func_ov004_0222aaa0(void);
}

extern "C" {
u32 func_02061950(u16 *p);
}

extern "C" {
void func_020b16bc(void *p, const void *q);
}

extern "C" {
void func_0206da9c(void *p, s32 a);
}

extern "C" {
void func_02135558(void *obj, void *dtor, void *reg);
}

extern "C" {
BOOL func_02072e44(void *p);
}

extern "C" {
BOOL func_020729cc(void *p, u32 a);
}

extern "C" {
void func_020728d4(void *p);
}

extern "C" {
void func_020728a4(void *p, void *q, u32 n);
}

extern "C" {
void func_02072824(void *p, u32 a, u32 b);
}

extern "C" {
u32 func_020b1690(void *p);
}

extern "C" {
void func_020b16b8(void *p);
}

extern "C" {
BOOL func_020b13e0(u32 a);
}

extern "C" {
void func_02000c8c(void);
}

extern "C" {
extern void *data_020cbb18;
}

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern u32 data_021ee2a0;
}

extern "C" {
extern u8 data_021ee288;
}

extern "C" {
extern u8 data_021ee28c;
}

extern "C" {
extern u8 data_021ee290;
}

extern "C" {
extern u32 data_021ee2a8;
}

extern "C" {
extern u32 data_021ee2e8[3];
}

extern "C" {
extern u32 data_021ee2f4;
}

extern "C" {
extern u16 data_020d0a14[];
}

extern "C" {
extern u8 data_020d0a7c[];
}

extern "C" {
extern u8 data_021ee330[];
}

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}

extern "C" {
void MI_CpuFill8(void *dst, u32 value, u32 size);
}

extern "C" {
void MIi_CpuClearFast(u32 value, u32 dst, u32 size);
}

extern "C" {
void func_020b87d0(void *p);
}

extern "C" {
void func_020b8618(void *p, void *q, u32 a, u32 b, u32 c);
}

extern "C" {
void func_020b8800(void *p);
}

extern "C" {
void func_020a78ac(void *p);
}

extern "C" {
void func_020a7c58(void *p);
}

extern "C" {
void func_0205125c(void *p, u32 n);
}

extern "C" {
u32 func_02094294(void *p);
}

extern "C" {
void func_020942c8(void *p);
}

extern "C" {
void func_020942f8(void *p);
}

extern "C" {
void OS_Init(void);
}

extern "C" {
void OS_InitTick(void);
}

extern "C" {
void func_0210f248(void);
}

extern "C" {
void GX_SetBankForLCDC(u32 a);
}

extern "C" {
void func_0210f554(void);
}

extern "C" {
u32 func_01ffa314(void);
}

extern "C" {
void OS_RestoreInterrupts(u32 a);
}

extern "C" {
void func_020fe5c0(u32 a, void (*cb)(u32, u32), u32 c);
}

extern "C" {
void func_02097428(void);
}

extern "C" {
void FS_Init(u32 a);
}

extern "C" {
void func_0204eeb4(void);
}

extern "C" {
void func_020e914c(void);
}

extern "C" {
void func_0204f054(void *p, void *a);
}

extern "C" {
void DC_FlushRange(u32 a, u32 b);
}

extern "C" {
void func_02114b4c(u32 a);
}

extern "C" {
void OS_SetArenaHi(u32 a, u32 b);
}

extern "C" {
void func_0206d49c(void);
}

extern "C" {
void func_01ffcb28(void);
}

extern "C" {
void func_020e99a4(void);
}

extern "C" {
void func_0205b794(void);
}

extern "C" {
void OS_SetIrqFunction(u32 a, void (*cb)(void));
}

extern "C" {
void func_01ffcc30(void);
}

extern "C" {
void func_01ffcc60(void);
}

extern "C" {
void OS_EnableIrqMask(u32 a);
}

extern "C" {
void GX_VBlankIntr(u32 a);
}

extern "C" {
void GX_HBlankIntr(u32 a);
}

extern "C" {
void func_02050170(void);
}

extern "C" {
void func_020376c0(void);
}

extern "C" {
void func_02076c24(void *p, void *a);
}

extern "C" {
void func_02076c50(void *p);
}

extern "C" {
void func_020b7eec(void);
}

extern "C" {
void func_020ec8b0(void);
}

extern "C" {
void func_020e85d8(u32 a, u32 b);
}

extern "C" {
void func_020537a4(void);
}

extern "C" {
void func_02004520(void);
}

extern "C" {
void func_020e7d2c(void);
}

extern "C" {
void func_0209cfe4(void);
}

extern "C" {
void func_02045c88(void);
}

extern "C" {
void func_020380e0(void);
}

extern "C" {
void func_02099214(void);
}

extern "C" {
void func_02060b7c(void);
}

extern "C" {
void func_0206d770(void);
}

extern "C" {
void func_0209cb0c(void);
}

extern "C" {
// This file
void func_020b0b18(void);
}

extern "C" {
void func_020b0b54(void);
}

extern "C" {
void func_020b0b74(u32 a, u32 b);
}

extern "C" {
void func_020b0c80(void);
}

extern "C" {
void func_020b0c84(void);
}

extern "C" {
u32 func_020b0d24(u32 a);
}

extern "C" {
u32 func_020b0d38(u32 a);
}

extern "C" {
u32 func_020b0d60(u32 a);
}

extern "C" {
u32 func_020b0d94(u32 a);
}

extern "C" {
u32 func_020b0f80(u32 a);
}

extern "C" {
u32 func_020b0fb0(u32 a);
}

extern "C" {
u8 func_020b1034(void);
}

extern "C" {
extern u32 OVERLAY_0_ID[];
}

extern "C" {
extern u32 OVERLAY_68_ID[];
}

extern "C" {
extern u32 OVERLAY_69_ID[];
}

volatile u8 data_021ee284;

extern "C" {
extern u8 data_0213af4c[];
}

extern "C" {
extern u8 data_021cc7d0[];
}

extern "C" {
extern u8 data_020e1e2c[];
}

extern "C" {
extern u32 data_021f59e4;
}

extern "C" {
extern u32 data_021cb3e4[2];
}

extern "C" {
extern u32 data_021cb3ec[2];
}

extern "C" {
extern u8 data_021cb3bc;
}

inline BOOL isFlag1() {
    return data_020e416c == 1;
}
inline BOOL isSpecial(u32 b) {
    BOOL r = TRUE;
    if ((u8)(b + 0xf5) > 3 && b != 0x2f) {
        r = FALSE;
    }
    return r;
}
inline BOOL isFlag0() {
    return data_020e416c == 0;
}
extern "C" u32 func_020b0d94(u32 a) {
    u32 b = func_020b50e8();
    u32 r = func_0203107c(a);
    if (r == 0xffff) {
        if (isFlag0()) {
            r = 0xc8;
        } else if (func_020b5268(b)) {
            r = func_020b0d24(5);
        } else if (func_020b530c(b) || func_020b52e4(b)) {
            r = func_020b0d24(6);
        } else if (func_020b5210(b)) {
            r = func_020b0d24(5);
        } else {
            r = 0x4a6;
        }
    }
    if (r == 0xc0) {
        if (func_020b50bc()) {
            if (isFlag0() || isSpecial(b)) {
                r = 0x877;
            }
        }
    }
    return r;
}

extern "C" u32 func_020b0d60(u32 a) {
    if (a == 0x1a) {
        if (isFlag1()) {
            u16 v = *func_ov004_0222aaa0();
            return func_02061950(&v);
        }
    }
    return a;
}

extern "C" u32 func_020b0d38(u32 a) {
    u8 buf[0x40];
    u32 r;
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, (void *)a, 0, 0);
    r = func_020b0d60(*(u32 *)(buf + 0x34));
    func_02033988(buf);
    return r;
}

extern "C" u32 func_020b0d24(u32 a) {
    return func_020b0d94(func_020b0d60(a));
}

extern "C" void func_020b0cbc(u32 a) {
    if (func_0202ffdc() != (u32)-1) {
        u32 b = func_020b50e8();
        if (func_020b5268(b)) {
            func_020b0d24(5);
            return;
        }
        if (func_020b530c(b) || func_020b52e4(b)) {
            func_020b0d24(6);
            return;
        }
        if (func_020b5210(b)) {
            func_020b0d24(5);
            return;
        }
    }
    func_020b0d24(func_020b0d38(a));
}

extern "C" void func_020b0c84(void) {
    data_021cb3e4[1] = 0;
    data_021cb3e4[0] = 0;
    data_021cb3ec[1] = 0;
    data_021cb3ec[0] = 0;
    OS_SetIrqFunction(1, func_01ffcc60);
    data_021cb3bc = 1;
}

extern "C" void func_020b0c80(void) {}

extern "C" void func_020b0b90(void) {
    func_020b0c80();
    func_01ffcb28();
    func_020e99a4();
    func_0205b794();
    func_020b0c84();
    OS_SetIrqFunction(2, func_01ffcc30);
    OS_EnableIrqMask(3);
    *(vu16 *)0x4000208;
    *(vu16 *)0x4000208 = 1;
    func_01ffa314();
    GX_VBlankIntr(1);
    GX_HBlankIntr(1);
    func_02050170();
    func_020376c0();
    func_02076c24(data_021cc7d0, OVERLAY_69_ID);
    func_02076c50(data_021cc7d0);
    func_020b7eec();
    func_020ec8b0();
    func_020e85d8(0x13fc8, 0);
    func_020537a4();
    func_02004520();
    func_020e7d2c();
    func_0209cfe4();
    func_02045c88();
    func_020380e0();
    data_021f59e4 = (u32)data_020e1e2c;
    func_02099214();
    func_02060b7c();
    *(vu32 *)0x40004c8 = 0x296a5800;
    *(vu32 *)0x40004cc = 0x7fff;
    *(vu32 *)0x40004c0 = 0x7fff;
    *(vu32 *)0x40004c4 = 0;
    func_0206d770();
    func_0209cb0c();
    func_02076c24(data_021cc7d0, OVERLAY_68_ID);
}

extern "C" void func_020b0b74(u32 a, u32 b) {
    if (b != 0) {
        func_0206d49c();
    }
    data_021ee284 = 1;
}

extern "C" void func_020b0b54(void) {
    func_02114b4c(0x23ff017);
    OS_SetArenaHi(0, 0x23ff000);
}

extern "C" void func_020b0b18(void) {
    volatile u32 fill;
    u32 info[12];
    u32 start, size;
    func_0204f054(info, OVERLAY_0_ID);
    start = info[1];
    fill = 0xe7fee7fe;
    size = 0x229bdc0 - start;
    MIi_CpuClearFast(fill, start, size);
    DC_FlushRange(start, size);
}

extern "C" void func_020b0a80(void) {
    vu16 *ime = (vu16 *)0x4000208;
    volatile u32 zero;
    u32 r5;
    u16 old;
    OS_Init();
    OS_InitTick();
    func_0210f248();
    GX_SetBankForLCDC(8);
    zero = 0;
    MIi_CpuClearFast(zero, 0x6800000, 0x20000);
    func_0210f554();
    old = *ime;
    *ime = 1;
    r5 = func_01ffa314();
    data_021ee284 = 0;
    func_020fe5c0(8, func_020b0b74, 0);
    while (data_021ee284 == 0) {
    }
    OS_RestoreInterrupts(r5);
    *ime;
    *ime = old;
    func_020b0b54();
    func_02097428();
    FS_Init(2);
    func_020b0b18();
    func_0204eeb4();
    *(u16 *)data_0213af4c = 1;
    func_020e914c();
}

