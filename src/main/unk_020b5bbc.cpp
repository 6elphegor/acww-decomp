#include "types.h"
#include "Unk_020d8c7c.h"

struct Vec3 {
    s32 x, y, z;
};

struct Unk_020d0d28_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[2];
    u32 unk_04;
};

extern "C" {
void func_0209cfb8(u8 *out);
void func_0204eee4(u32 v);
void func_0204ef2c(u32 v);
void func_020040cc(void);
s32 func_ov003_0222ebb0(s32 a);
s32 func_ov004_02213704(s32 a);
s32 func_ov004_0222a2c0(void);
s32 func_ov004_0222864c(void);
s32 func_ov004_02213c40(s32 a);
s32 func_ov004_02204e70(void);
s32 func_ov004_022048c0(s32 a);
s32 func_ov004_0223584c(void);
s32 func_ov004_02235720(s32 a, s32 b);
s32 func_ov003_02218bb0(s32 a);
s32 func_020816f8(void);
s32 func_02081708(void);
s32 func_020951ec(void);
BOOL func_020b705c(u8 v);

extern Unk_020d0d28_Ent data_020d0d28[13];
extern s32 data_020e4184;
extern s32 data_020e417c;
extern s32 data_020e4178;
extern s32 data_020e4180;
extern s32 data_021ef2ec;
extern u8 data_020e41fc[];
extern u32 data_020e41b8[];
extern u8 data_020e416c;
extern s32 data_020e434c[];
extern s32 (*data_020e4470[23])(s32);
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;

u32 func_020b5bbc(void);
void func_020b5c0c(void);
void func_020b5c54(void);
void func_020b5cbc(void);
void func_020b5d00(u8 *obj);
void func_020b5d3c(void);
void func_020b5d4c(void);
}

// Intermediate class (vtable 0x020e2988); its constructor and destructor are inline.
class Unk_020e2988 : public Unk_020d8c7c {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual ~Unk_020e2988() {}
};

class Unk_020e4238 : public Unk_020e2988 {
public:
    Unk_020e4238() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual ~Unk_020e4238();
};

class Unk_020e4428 : public Unk_020e2988 {
public:
    Unk_020e4428() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual ~Unk_020e4428();
};

BOOL Unk_020e4428::vfunc_00() {
    func_020040cc();
    return TRUE;
}
BOOL Unk_020e4428::vfunc_0c() { return TRUE; }
BOOL Unk_020e4428::vfunc_18() { return TRUE; }
BOOL Unk_020e4428::vfunc_24() { return TRUE; }
BOOL Unk_020e4428::vfunc_30() {}
Unk_020e4428::~Unk_020e4428() {}

inline BOOL IsMode0() { return data_020e416c == 0; }
inline BOOL IsBoth() { return data_021ef5d0 && data_021ef5cc; }
inline BOOL IsMode1() { return data_020e416c == 1; }

extern "C" {

u32 func_020b5bbc(void) {
    u8 buf[2];
    func_0209cfb8(buf);
    u32 a = buf[1];
    u32 b = buf[0];
    for (u32 i = 0; i < 13; i++) {
        u32 t = data_020d0d28[i].unk_00;
        if (a < t) {
            return data_020d0d28[i].unk_04;
        }
        if (a == t && b <= data_020d0d28[i].unk_01) {
            return data_020d0d28[i].unk_04;
        }
    }
    return 0;
}

void func_020b5c0c(void) {
    func_020b5cbc();
    if (data_020e4184 != -1) {
        func_0204eee4(data_020e4184);
        data_020e4184 = -1;
    }
    if (data_020e417c != -1) {
        func_0204eee4(data_020e417c);
        data_020e417c = -1;
    }
}

void func_020b5c54(void) {
    u8 idx = data_020e41fc[data_021ef2ec];
    u32 v = data_020e41b8[idx];
    func_0204ef2c(v);
    data_020e417c = v;
    data_020e416c = idx;
    if (data_020e434c[data_021ef2ec] != -1) {
        func_0204ef2c(data_020e434c[data_021ef2ec]);
        data_020e4184 = data_020e434c[data_021ef2ec];
    }
}

void func_020b5cbc(void) {
    if (data_020e4178 != -1) {
        func_0204eee4(data_020e4178);
        data_020e4178 = -1;
    }
    if (data_020e4180 != -1) {
        func_0204eee4(data_020e4180);
        data_020e4180 = -1;
    }
}

void func_020b5d00(u8 *obj) {
    s32 a = *(s32 *)(obj + 0x10);
    data_020e4178 = a;
    data_020e4180 = *(s32 *)(obj + 0x14);
    if (a != -1) {
        func_0204ef2c(a);
    }
    if (data_020e4180 != -1) {
        func_0204ef2c(data_020e4180);
    }
}

extern u8 data_00000002;
void func_020b5d3c(void) { func_0204eee4((u32)&data_00000002); }
void func_020b5d4c(void) { func_0204ef2c((u32)&data_00000002); }

Unk_020e4238 *func_020b5d5c(void) {
    return new Unk_020e4238();
}

Unk_020e4428 *func_020b5e18(void) {
    return new Unk_020e4428();
}

s32 func_020b5e5c(s32 idx, s32 arg) {
    if (idx < 0x17) {
        return data_020e4470[idx](arg);
    }
    return 0;
}

s32 func_020b5e80(s32 a) {
    if (IsMode0()) {
        return func_ov003_0222ebb0(a);
    }
    return 0;
}
s32 func_020b5ea8(s32 a) {
    if (IsMode1()) {
        return func_ov004_02213704(a);
    }
    return 0;
}
s32 func_020b5ed0(void) {
    if (IsMode1()) {
        return func_ov004_0222a2c0();
    }
    return 0;
}
s32 func_020b5ef8(void) {
    if (IsMode1()) {
        return func_ov004_0222864c();
    }
    return 0;
}
s32 func_020b5f20(s32 a) {
    if (IsMode1()) {
        return func_ov004_02213c40(a);
    }
    return 0;
}
s32 func_020b5f48(void) {
    if (IsMode1()) {
        return func_ov004_02204e70();
    }
    return 0;
}
s32 func_020b5f70(s32 a) {
    if (IsMode0()) {
        return func_ov004_022048c0(a);
    }
    return 0;
}
s32 func_020b5f98(s32 a) {
    if (IsMode1()) {
        return func_ov004_02235720(func_ov004_0223584c(), a);
    }
    return 0;
}
s32 func_020b5fd0(s32 a) {
    if (IsMode0()) {
        return func_ov003_02218bb0(a);
    }
    return 0;
}
s32 func_020b5fc8(s32 a) { return func_020b5fd0(a); }
s32 func_020b5ff8(void) { return func_020816f8(); }
s32 func_020b6000(void) { return func_02081708(); }
s32 func_020b6008(void) { return func_020951ec(); }
s32 func_020b6010(void) { return 0; }

s32 func_020b6048(s32 a, s32 *pa, u8 *pb);
s32 func_020b6014(s32 a, s32 *pa, u8 *pb) {
    if (IsBoth()) {
        return func_020b6048(a, pa, pb);
    }
    return 0;
}

BOOL func_020b6080(u8 *obj, Vec3 *out, s32 *a, u8 *b) {
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

s32 func_020b6048(s32 a, s32 *pa, u8 *pb) {
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

BOOL func_020b60b0(Vec3 *obj, Vec3 *out) {
    if (out) {
        out->x = obj->x;
        out->y = obj->y;
        out->z = obj->z;
    }
    if (obj->x != 0xffed4000) {
        return TRUE;
    }
    return FALSE;
}

void func_020b60d4(void) {}
void func_020b60d8(void) {}
}
