// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov009_0225ddbc_Vec3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225ddbc_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225ddbc_Vec3 *vfunc_50();
    virtual void vfunc_60(u32 a, void *b);
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual void vfunc_9c();
    virtual s32 vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x1f0 - 0x138];
    /* 0x1f0 */ u8 unk_1f0[0x234 - 0x1f0];
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
    /* 0x278 */ u8 pad_278[0x28e - 0x278];
    /* 0x28e */ u8 unk_28e[0x2b0 - 0x28e];
};

// 0x50-byte record of the static array data_ov009_0225e674 (0x22 entries)
struct Unk_ov009_0225dff4_Elem {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20[4];
    /* 0x30 */ u8 pad_30[0x10];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
};

struct Unk_ov009_0225df84_Obj {
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ void *unk_24;
    /* 0x28 */ u8 pad_28[0x92 - 0x28];
    /* 0x92 */ u8 unk_92;
};

struct Unk_ov009_0225df94_Target {
    /* 0x00 */ u8 pad_00[0x2c];
    /* 0x2c */ Unk_ov009_0225e29c *unk_2c;
};

struct Unk_ov009_0225df94_Arg {
    /* 0x00 */ u8 *unk_00;
    /* 0x04 */ Unk_ov009_0225df94_Target *unk_04;
};

extern "C" {
extern u8 data_ov009_0225e674[];

void func_020548d0(void *);
void func_020548a0(void *);
void func_020b2034(void *);
void func_020b200c(void *);
void func_ov009_0225b94c(void *);
void func_ov009_0225b934(void *);
void func_0209c370(void *);
void func_0209c364(void *);

void *func_021065dc();
u32 func_021065f8(void *, u32);
void *func_021062dc();
void func_01ffb898(s32, s32, Unk_ov009_0225ddbc_Vec3 *);
void func_0203ee38(void *, Unk_ov009_0225ddbc_Vec3 *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(Unk_ov009_0225dff4_Elem *));
}

// ================================================================
// class Unk_ov009_0225e29c

Unk_ov009_0225e29c::~Unk_ov009_0225e29c() {
    func_0209c364(unk_28e);
    func_ov009_0225b934(unk_234);
    func_020b200c(unk_1f0);
    func_020548a0(unk_138);
}

extern "C" {

void func_ov009_0225e040() {
    Unk_ov009_0225e29c *p = new Unk_ov009_0225e29c();
}

}

Unk_ov009_0225e29c::Unk_ov009_0225e29c() {
    unk_132 = 0xfff1;
    func_020548d0(unk_138);
    func_020b2034(unk_1f0);
    func_ov009_0225b94c(unk_234);
    func_0209c370(unk_28e);
}

void Unk_ov009_0225e29c::vfunc_60(u32 a, void *b) {
}

extern "C" {

void *func_ov009_0225df58() {
    void *p = func_021065dc();
    return (void *)func_021065f8(p, 0);
}

void *func_ov009_0225df6c() {
    u8 *p = (u8 *)func_021062dc();
    return p + *(s32 *)(p + *(u16 *)(p + 0xe) + 0xc);
}

void func_ov009_0225df94(Unk_ov009_0225df94_Arg *a) {
    Unk_ov009_0225e29c *o = a->unk_04->unk_2c;
    if (o != NULL) {
        o->vfunc_60(a->unk_00[1], a);
    }
}

void func_ov009_0225df84(Unk_ov009_0225df84_Obj *o) {
    o->unk_24 = (void *)func_ov009_0225df94;
    o->unk_92 = 2;
}

BOOL func_ov009_0225dfb8(Unk_ov009_0225dff4_Elem *e) {
    if (e->unk_00 != 0 || e->unk_04 != 0 || e->unk_14 != 0 || e->unk_18 != 0 || e->unk_1c != 0 || e->unk_08 != 0 ||
        e->unk_0c != 0 || e->unk_10 != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov009_0225dff0(Unk_ov009_0225dff4_Elem *e) {
}

void func_ov009_0225dff4(Unk_ov009_0225dff4_Elem *e) {
    u32 i;
    e->unk_00 = 0;
    e->unk_04 = 0;
    e->unk_14 = 0;
    e->unk_18 = 0;
    e->unk_1c = 0;
    e->unk_08 = 0;
    e->unk_0c = 0;
    e->unk_10 = 0;
    e->unk_40 = 0;
    e->unk_44 = 0;
    e->unk_48 = 0;
    e->unk_4c = 0;
    for (i = 0; i < 4; i++) {
        e->unk_20[i] = 0;
    }
}

void func_ov009_0225e020(void *p, s32 a, s32 b) {
    Unk_ov009_0225ddbc_Vec3 v;
    func_01ffb898(a, b, &v);
    func_0203ee38(p, &v);
}

void func_ov009_0225e05c() {
    __cxa_vec_cleanup(data_ov009_0225e674, 0x22, 0x50, func_ov009_0225dff0);
}

}
