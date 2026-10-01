#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

extern "C" s32 func_ov003_0222ebb0(s32 a);
extern "C" s32 func_ov004_02213704(s32 a);
extern "C" s32 func_ov004_0222a2c0(void);
extern "C" s32 func_ov004_0222864c(void);
extern "C" s32 func_ov004_02213c40(s32 a);
extern "C" s32 func_ov004_02204e70(void);
extern "C" s32 func_ov003_022048c0(s32 a);
extern "C" s32 func_ov004_0223584c(void);
extern "C" s32 func_ov003_02218bb0(s32 a);
extern "C" s32 func_020816f8(void);
extern "C" s32 func_02081708(void);
extern "C" s32 func_020951ec(void);
extern "C" BOOL func_020b705c(u8 v);

class Unk_ov004_0223583c {
public:
    s32 func_ov004_02235720(u32 a);
};

extern "C" u8 data_020e416c;
extern "C" u8 data_021ef5d0;
extern "C" u8 data_021ef5cc;

inline BOOL IsMode0() { return data_020e416c == 0; }
inline BOOL IsBoth() { return data_021ef5d0 && data_021ef5cc; }
inline BOOL IsMode1() { return data_020e416c == 1; }

extern "C" BOOL func_020b6080(u8 *obj, Vec3 *out, s32 *a, u8 *b);
extern "C" s32 func_020b6048(s32 a, s32 *pa, u8 *pb);
extern "C" s32 func_020b6014(s32 a, s32 *pa, u8 *pb);
extern "C" s32 func_020b6010(void);
extern "C" s32 func_020b6008(void);
extern "C" s32 func_020b6000(void);
extern "C" s32 func_020b5ff8(void);
extern "C" s32 func_020b5fd0(s32 a);
extern "C" s32 func_020b5fc8(s32 a);
extern "C" s32 func_020b5f98(s32 a);
extern "C" s32 func_020b5f70(s32 a);
extern "C" s32 func_020b5f48(void);
extern "C" s32 func_020b5f20(s32 a);
extern "C" s32 func_020b5ef8(void);
extern "C" s32 func_020b5ed0(void);
extern "C" s32 func_020b5ea8(s32 a);
extern "C" s32 func_020b5e80(s32 a);
extern "C" s32 func_020b5e5c(s32 idx, s32 arg);

typedef s32 (*Unk_020e4470_Fn)(s32);
#define FN(f) ((Unk_020e4470_Fn)(f))

extern "C" Unk_020e4470_Fn data_020e4470[23];
extern "C" Unk_020e4470_Fn data_020e4470[23] = {
    FN(func_020b6010), FN(func_020b6008), FN(func_020b6000), FN(func_020b5ff8),
    FN(func_020b6010), FN(func_020b6010), FN(func_020b5fc8), FN(func_020b5fd0),
    FN(func_020b5f98), FN(func_020b5f70), FN(func_020b6010), FN(func_020b5f48),
    FN(func_020b5ef8), FN(func_020b5ed0), FN(func_020b5f20), FN(func_020b5f98),
    FN(func_020b5ea8), FN(func_020b5e80), FN(func_020b5e80), FN(func_020b6010),
    FN(func_020b6010), FN(func_020b6010), FN(func_020b6010),
};

extern "C" BOOL func_020b6080(u8 *obj, Vec3 *out, s32 *a, u8 *b) {
    if (out) {
        out->x = *(s32 *)(obj + 0xc);
        out->y = *(s32 *)(obj + 0x10);
        out->z = *(s32 *)(obj + 0x14);
    }
    if (a) {
        *a = obj[0x18];
    }
    if (b) {
        *b = obj[0x19];
    }
    return func_020b705c(obj[0x18]);
}

extern "C" s32 func_020b6048(s32 a, s32 *pa, u8 *pb) {
    u8 tb;
    s32 ta;
    Vec3 v;
    if (pa == NULL) {
        pa = &ta;
    }
    if (pb == NULL) {
        pb = &tb;
    }
    if (func_020b6080((u8 *)a, &v, pa, pb)) {
        return func_020b5e5c(*pa, *pb);
    }
    return 0;
}

extern "C" s32 func_020b6014(s32 a, s32 *pa, u8 *pb) {
    if (IsBoth()) {
        return func_020b6048(a, pa, pb);
    }
    return 0;
}

extern "C" s32 func_020b6010(void) { return 0; }

extern "C" s32 func_020b6008(void) { return func_020951ec(); }

extern "C" s32 func_020b6000(void) { return func_02081708(); }

extern "C" s32 func_020b5ff8(void) { return func_020816f8(); }

extern "C" s32 func_020b5fd0(s32 a) {
    if (IsMode0()) {
        return func_ov003_02218bb0(a);
    }
    return 0;
}

extern "C" s32 func_020b5fc8(s32 a) { return func_020b5fd0(a); }

extern "C" s32 func_020b5f98(s32 a) {
    if (IsMode1()) {
        return ((Unk_ov004_0223583c *)func_ov004_0223584c())->func_ov004_02235720(a);
    }
    return 0;
}

extern "C" s32 func_020b5f70(s32 a) {
    if (IsMode0()) {
        return func_ov003_022048c0(a);
    }
    return 0;
}

extern "C" s32 func_020b5f48(void) {
    if (IsMode1()) {
        return func_ov004_02204e70();
    }
    return 0;
}

extern "C" s32 func_020b5f20(s32 a) {
    if (IsMode1()) {
        return func_ov004_02213c40(a);
    }
    return 0;
}

extern "C" s32 func_020b5ef8(void) {
    if (IsMode1()) {
        return func_ov004_0222864c();
    }
    return 0;
}

extern "C" s32 func_020b5ed0(void) {
    if (IsMode1()) {
        return func_ov004_0222a2c0();
    }
    return 0;
}

extern "C" s32 func_020b5ea8(s32 a) {
    if (IsMode1()) {
        return func_ov004_02213704(a);
    }
    return 0;
}

extern "C" s32 func_020b5e80(s32 a) {
    if (IsMode0()) {
        return func_ov003_0222ebb0(a);
    }
    return 0;
}

extern "C" s32 func_020b5e5c(s32 idx, s32 arg) {
    if (idx < 0x17) {
        return data_020e4470[idx](arg);
    }
    return 0;
}

