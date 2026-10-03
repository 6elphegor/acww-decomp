// mwcc-flags: -nothumb -O4,p
// G002c: network file (WFC / GameSpy stats glue calling overlays 65, 66, 67), autoload_2 0x020ea34c-0x020ea960
// (21 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined, everything extern. Continues at 0x020ea960.
#include "types.h"

extern "C" {
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
void MI_CpuCopy8(const void *src, void *dst, u32 n); // MI_CpuCopy8

s64 func_020ea3c4(void *p);
s64 func_020ffc40(void *p);
s32 func_020ffbd0(void *p, void *q);
s32 func_020ffdfc(void *p);
u64 func_020ffcc4(u32 a);
s32 func_02100050(u32 ctx, u32 lo, u32 hi);
void func_020ffc18(void *out, u32 lo, u32 hi);
s32 func_020ffc60(u32 ctx, void *out);
BOOL func_020ffd20(void *p);
void func_020ffce8(void *p);
void func_020ffdd0(void *p, u32 v);
void func_ov065_02270710(u32 a, void *b, u32 c, void *d, u32 e);
void func_ov065_022776c8(void *p);
void func_ov065_022776b4(void *p);
void func_ov065_022706f8(void *p, u32 v);
void func_ov065_0227083c(u32 a, void *b, u32 c, void *d, u32 e);
s32 func_ov065_02271ed8(u32 a);
s32 func_ov065_02271e8c(u32 a);
s32 func_ov066_0225ffcc(void);
s32 func_ov066_02260cac(void *p, u32 a, u32 b);
void *func_ov066_02260144(u32 a, u32 b);
s32 func_ov066_0225f63c(void *p);
s32 func_ov066_0225f688(void *p);
s32 func_ov066_0225f64c(void *p);
s32 func_ov066_02261ff8(void);
s32 func_ov065_02270e60(void);
s32 func_ov065_02270e7c(u32 *p);
s32 func_020ea5d0(u32 a);
u32 func_020ea960(void);
u32 func_020ea7c4(void);
void func_020ec3c4(void);
void func_020ec30c(void);
void func_020ec3a4(void);
void func_020ec370(void);
void func_020ec3c0(void);
void func_020ec310(void);
extern u8 data_021f488c;
extern u8 data_021f49e0[];
extern u32 data_021f4910[];
extern u32 data_021f48bc;
struct Ent {
    u16 a;
    u8 b;
    u8 c;
};
extern Ent data_021f4990[];
struct HexTable {
    u8 c[17];
};

extern u16 data_021f4894;
extern u8 data_021f4890;
extern u8 *data_021f48d4;
}

extern "C" u32 func_020ea7c4(void) {
    u32 err = func_ov065_02270e7c(&data_021f48bc);
    u32 i;
    if (err != 0) {
        switch (err) {
        case 1:
            return 0x4001;
        case 2:
            return 0x4002;
        case 3:
            return 0x4003;
        case 4:
            return 0x4004;
        case 5:
            return 0x4005;
        case 6:
            return 0x4006;
        case 9:
            return 0x4009;
        case 10:
            return 0x400a;
        case 7:
            return 0x4007;
        case 11:
            return 0x400b;
        case 8:
            return 0x4008;
        default:
            return 0xffff;
        }
    }
    for (i = 0; i < 16; i++) {
        if (data_021f4990[i].b > 30) {
            data_021f48bc = 1000000;
            return 0x4007;
        }
    }
    return 0;
}

extern "C" u32 func_020ea748(void) {
    u32 st = data_021f4890;
    data_021f48bc = 0;
    if ((u8)(st + 255) <= 1) return func_020ea960();
    if ((u8)(st + 253) <= 1) return func_020ea7c4();
    if (st != 5) return 0xffff;
    return 0;
}

extern "C" u32 func_020ea738(void) {
    return data_021f48bc;
}

extern "C" s32 func_020ea72c(void) {
    return func_ov065_02270e60();
}

extern "C" s32 func_020ea720(void) {
    return func_ov066_02261ff8();
}

extern "C" s32 func_020ea6f4(void *p) {
    if (p == NULL) return 0;
    return func_ov066_0225f64c(p);
}

extern "C" s32 func_020ea6c8(void *p) {
    if (p == NULL) return 0;
    return func_ov066_0225f688(p);
}

extern "C" u32 *func_020ea65c(void) {
    u32 i;
    u32 n;
    MI_CpuFill8(data_021f4910, 0, 32);
    if (func_ov066_0225ffcc() == 7) {
        n = i = 0;
        for (; i < 8; i++) {
            void *r = func_ov066_02260144(0, i & 0xff);
            if (func_ov066_0225f63c(r) != 0) data_021f4910[n++] = (u32)r;
        }
    }
    return data_021f4910;
}

extern "C" s32 func_020ea608(void *p) {
    if (func_ov066_0225ffcc() == 7 && p != NULL) {
        MI_CpuCopy8(p, data_021f49e0, 0xe0);
        return func_ov066_02260cac(data_021f49e0, 0, 0);
    }
    return 0;
}

extern "C" s32 func_020ea5d0(u32 a) {
    if (data_021f4894 < 4) return -1;
    return func_ov065_02271e8c(a);
}

extern "C" s32 func_020ea598(u32 a) {
    if (data_021f4894 < 4) return -1;
    return func_ov065_02271ed8(a);
}

extern "C" u8 *func_020ea574(void) {
    if (data_021f4894 < 4) return NULL;
    return data_021f48d4;
}

extern "C" BOOL func_020ea4dc(void) {
    if (data_021f4894 < 4) return FALSE;
    data_021f4890 = 3;
    func_ov065_0227083c(data_021f488c, (void *)func_020ec310, 0, (void *)func_020ec30c, 0);
    func_ov065_022776c8((void *)func_020ec3a4);
    func_ov065_022776b4((void *)func_020ec370);
    func_ov065_022706f8((void *)func_020ec3c0, 0);
    return TRUE;
}

extern "C" BOOL func_020ea434(u32 a) {
    u32 r;
    if (data_021f4894 != 4) return FALSE;
    data_021f4890 = 4;
    r = func_020ea5d0(a);
    if (r == (u32)-1) return FALSE;
    func_ov065_02270710(r, (void *)func_020ec3c4, 0, (void *)func_020ec30c, 0);
    func_ov065_022776c8((void *)func_020ec3a4);
    func_ov065_022776b4((void *)func_020ec370);
    func_ov065_022706f8((void *)func_020ec3c0, 0);
    return TRUE;
}

extern "C" void func_020ea418(void *p, u32 v) {
    func_020ffdd0(p, v);
    func_020ffce8(p);
}

extern "C" BOOL func_020ea3e8(void *p) {
    if (func_020ffd20(p) == 0) return FALSE;
    func_020ffce8(p);
    return TRUE;
}

extern "C" s32 func_020ea3dc(void *p) {
    return func_020ffdfc(p);
}

extern "C" s32 func_020ea3d0(void *p, void *q) {
    return func_020ffbd0(p, q);
}

extern "C" s64 func_020ea3c4(void *p) {
    return func_020ffc40(p);
}

extern "C" BOOL func_020ea358(u32 ctx, void *out, u64 key) {
    if (func_02100050(ctx, (u32)key, (u32)(key >> 32)) != 0) {
        func_020ffc18(out, (u32)key, (u32)(key >> 32));
        if (func_020ffc60(ctx, out) > 0) return TRUE;
    }
    return FALSE;
}

extern "C" u64 func_020ea34c(u32 a) {
    return func_020ffcc4(a);
}

