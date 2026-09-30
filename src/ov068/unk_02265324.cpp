#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov068_0226fb80;

struct Unk_ov068_0225f23c_Vec {
    s32 x, y, z;
};

// Sub-object at +0x894 of Unk_ov068_0226fb80 (0x20 bytes)
class Unk_ov068_0225f23c {
public:
    void func_ov068_0225f23c(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f328(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f384(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v);
    BOOL func_ov068_0225f3c0(s32 a, s32 b);
    s32 func_ov068_0225f3e4(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim);
    BOOL func_ov068_0225f430(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim);
    void func_ov068_0225f460(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f4c4(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v);
    BOOL func_ov068_0225f4fc(u32 a, s32 b);
    s32 func_ov068_0225f52c(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim);
    s32 func_ov068_0225f56c(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim);
    void func_ov068_0225f5a4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e);
    void func_ov068_0225f5dc();
    void func_ov068_0225f5f4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e);
    void func_ov068_0225f630(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f670(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f6ac();
    void func_ov068_0225f6b0();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad_09[3];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u16 unk_14;
    /* 0x16 */ u8 pad_16[10];
};

// Small timer object at +0x9f0
class Unk_ov068_0225f838 {
public:
    void func_ov068_0225f838(u32 v);
    u32 func_ov068_0225f83c();
    void func_ov068_0225f840(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f858(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f8f0();
    void func_ov068_0225f8fc();
    void func_ov068_0225f900();

    /* 0x00 */ s8 unk_00;
    /* 0x01 */ u8 pad_01;
    /* 0x02 */ u16 unk_02;
};

// State-machine member at +0x8b4 of Unk_ov068_0226fb80 (0xfc bytes)
class Unk_ov068_0225f1a0_Obj8b4;
typedef void (Unk_ov068_0225f1a0_Obj8b4::*Unk_ov068_0225f1a0_Fn)(Unk_ov068_0226fb80 *);

struct Unk_ov068_0225f1a0_Ent {
    Unk_ov068_0225f1a0_Fn a;
    Unk_ov068_0225f1a0_Fn b;
};

class Unk_ov068_0225f1a0_Obj8b4 {
public:
    Unk_ov068_0225f1a0_Obj8b4 *func_ov068_02265808();
    Unk_ov068_0225f1a0_Obj8b4 *func_ov068_0226581c();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_ov068_0225f1a0_Ent *unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 pad_2e[6];
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 unk_3a;
    /* 0x3c */ u8 unk_3c[0xd8 - 0x3c];
    /* 0xd8 */ s16 unk_d8;
    /* 0xda */ s16 unk_da;
    /* 0xdc */ s16 unk_dc;
    /* 0xde */ s16 unk_de;
    /* 0xe0 */ u8 unk_e0;
    /* 0xe1 */ u8 pad_e1[3];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u8 pad_e8[0xf4 - 0xe8];
    /* 0xf4 */ s32 unk_f4;
    /* 0xf8 */ s32 unk_f8;
};

// Member at +0x9b0 (0x40 bytes)
class Unk_ov068_0225f1a0_Obj9b0 {
public:
    void func_02011f40();
    u32 pad[0x40 / 4];
};

// Menu object referenced from +0x9f4
class Unk_ov068_0225f904_Menu {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
};

extern "C" {
extern s32 data_020c6d1c;
extern u8 data_021f4880[];

s32 func_ov003_0221ffe8(s32);
s32 func_ov003_0221ffb8(void *, s32);
s32 func_ov003_02227ed4(u8 *, u8);
s32 func_ov003_02227e08(void *, u8);
s32 func_020e9650(void *, void *);
s32 func_0201a5d0(void *, void *);
void func_0201a6c0(void *, u32, s32, s32, void *, s32, s32, u8);
void func_0201a720(void *, void *);
s32 func_0201c7c0(void *);
s32 func_0201c784(void *);
void *func_0201c7f8(void *);
void func_0201c804(void *, u32);
void func_0201c7ec(void *, u32);
void func_0201c5f0(void *);
void *func_ov068_02265f58(void *);
void *func_0209750c();
s32 func_02080f94(void *);
s32 func_0201bcd8(void *, s32, u32);
s32 func_02014220(void *);
s32 func_0202d388(void *, void *, s32);
void *func_0201bc4c(void *, s32);
void func_02015ab0(void *, void *);
void func_02015a80(void *, void *);
void func_020784a8();
void func_0207c20c(void *);
s32 func_0207e278(void *);
void *func_0207f170(void *);
void func_0204ed8c(void *, u32, u32);
s32 func_02078294();
s32 func_0207e334(void *);
s32 func_02078498();
void func_0207c190(void *, s32);
s32 func_0203e450(void *);
s32 func_0201b08c(void *, u32, u32);
void func_0207ce00(void *);
s32 func_0207ce24(void *);
s32 func_02063b8c(s32);
void func_020902b0(s32, void *, s32, s32);
}

struct Unk_ov068_0225f858_Vec {
    s32 a, b, c;
};

// Owner base (Unk_020d89c8), size 0x894
class Unk_020d89c8 : public Unk_020d8c7c_Base {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ Unk_ov068_0225f23c_Vec unk_5c;
    /* 0x068 */ Unk_ov068_0225f23c_Vec unk_68;
    /* 0x074 */ u8 pad_74[0x3b0 - 0x74];
    /* 0x3b0 */ u8 unk_3b0[0x5c];
    /* 0x40c */ s32 unk_40c;
    /* 0x410 */ u8 pad_410[0x478 - 0x410];
    /* 0x478 */ s32 unk_478;
    /* 0x47c */ s32 unk_47c;
    /* 0x480 */ s32 unk_480;
    /* 0x484 */ u8 pad_484[0x560 - 0x484];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 pad_561[0x618 - 0x561];
    /* 0x618 */ u8 unk_618[0x28];
    /* 0x640 */ u8 pad_640[0x680 - 0x640];
    /* 0x680 */ u8 unk_680[0x1a4];
    /* 0x824 */ u8 pad_824[0x82c - 0x824];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[8];
    /* 0x838 */ u8 unk_838[0x5b];
    /* 0x893 */ u8 unk_893;
};

// Vtable 0x0226fb80
class Unk_ov068_0226fb80 : public Unk_020d89c8 {
public:
    virtual ~Unk_ov068_0226fb80();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();
    virtual BOOL vfunc_68();

    /* 0x894 */ Unk_ov068_0225f23c unk_894;
    /* 0x8b4 */ Unk_ov068_0225f1a0_Obj8b4 unk_8b4;
    /* 0x9b0 */ Unk_ov068_0225f1a0_Obj9b0 unk_9b0;
    /* 0x9f0 */ Unk_ov068_0225f838 unk_9f0;
    /* 0x9f4 */ Unk_ov068_0225f904_Menu *unk_9f4;
    /* 0x9f8 */ s32 unk_9f8;
    /* 0x9fc */ u32 unk_9fc;
    /* 0xa00 */ u8 unk_a00;
    /* 0xa01 */ u8 pad_a01[7];
    /* 0xa08 */ s32 unk_a08;
};

struct Unk_ov068_02265324_Flags {
    u8 pad_00[0x1d];
    u8 unk_1d_0 : 1;
    u8 unk_1d_1 : 1;
};

struct Unk_ov068_0226546c_Rect {
    s32 x0, w, z0, h;
};

struct Unk_ov068_02265434_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02265bcc_Vec {
    s32 x, y, z;
    Unk_ov068_02265bcc_Vec() {}
    ~Unk_ov068_02265bcc_Vec() {}
};

struct Unk_ov068_02265bcc_Src {
    s32 x, y, z;
};

struct Unk_ov068_02265a40_Buf {
    u8 b[8];
};

struct Unk_ov068_0226fa68_Pair {
    s32 a, b;
};

struct Unk_ov068_0226fa68_Nest {
    Unk_ov068_0226fa68_Pair p;
};

extern "C" {
extern s32 data_ov068_0226f16c[];
extern u32 data_021c3070;
extern Unk_ov068_02265434_Vec data_021c309c;
extern Unk_ov068_0226fa68_Pair data_ov068_0226fa68;
extern u16 data_020c6cc8;
extern s32 data_ov068_0226f0fc;
extern s16 data_ov068_02270c24;
extern Unk_ov068_0225f1a0_Ent data_ov068_02270e44[];
extern u8 data_ov068_0226f11c[];
extern u8 data_ov068_0226f134[];
extern u8 data_021ed24c[];
extern u32 data_021c47c4;

void *func_0207e310(void *);
s32 func_02098044(void *, s32);
void func_0209d498(void *);
void *func_020805c4(void *);
s32 func_02003098(void *);
s32 func_02081288(s32, void *);
s32 func_020030b4(void *);
s32 func_02078574(void *);
s32 func_02013300(void *, void *, s32, s32, void *);
s32 func_0201324c(void *);
s32 func_02063b8c(s32);
s32 func_02012cb8(void *);
void func_02019614(void *, s32, u32);
void func_020135c4(void *);
void func_0201325c(void *, u32);
void func_0202d8d4(void *);
void func_0201c56c(void *);
void func_020133a4(void *);
void func_020133a8(void *);
void func_02013374(void *);
void *func_020951ec(s32);
s32 func_0207c22c(void *, s32);
s32 func_020b5164();
s32 func_0201bd38(void *, void *);
s32 func_0201bc58(void *, void *);
s32 func_ov068_02264a64(void *, u32);
s32 func_02014220(void *);
void func_020784b8(void *, s32);
void func_ov068_02265e6c(void *);
void func_0201c078(void *, void *);
s32 func_020784f4(void *);
s32 func_0207856c(void *);
s32 func_020197a8(void *);
s32 func_020197a0(void *);
s32 func_02018984(s32);
void func_0201a040(void *, s32);
s32 func_0203d64c();
s32 func_0201c784(void *);
void func_ov068_0225f630(void *, void *);
s32 func_0207e268(void *);
s32 func_0209a610(s32);
s32 func_0209b354(s32);
s32 func_0202ce44(void *, s32);
s32 func_0202c35c(void *, s32, s32, s32, s32, s32, s32);
s32 func_0202c84c(void *, s32, s32, s32, s32, s32);
s32 func_02085618(void *);
s32 func_02085810(void *);
void func_02085870(void *, void *);
void func_02085814(void *, s32);
void func_02085820(void *, void *);
s32 func_0204ec14(u32, s32, s32, s32);
s32 func_020b8fe8();
void *func_0207850c(void *);
void func_02078504(void *, void *);
void func_0209adbc(void *, s32);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
void func_0207fd18(void *, void *);
}


extern "C" {
void func_ov068_022656a8(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o, s32 idx);
void *func_ov068_02265918(Unk_ov068_0226fb80 *o);
void func_ov068_02265994(Unk_ov068_0226fb80 *o);
}

extern "C" {
s32 func_ov068_022653ec(Unk_ov068_0225f1a0_Obj8b4 *self);
s32 func_ov068_0226546c(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b);
void func_ov068_02265690(Unk_ov068_0225f1a0_Obj8b4 *self);
void func_ov068_022656a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v);
void func_ov068_022656f4(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o);
void func_ov068_02265a40(Unk_ov068_0226fb80 *o, u8 *b);
void func_ov068_02265b0c(Unk_ov068_0226fb80 *o, u8 *b);
s32 func_ov068_02265bcc(Unk_ov068_0226fb80 *o);
}

extern "C" {

void func_ov068_02265324(Unk_ov068_0225f1a0_Obj8b4 *self, s32 a, Unk_ov068_0226fb80 *o) {
    void *x = o->vfunc_64();
    s32 r4 = 7;
    if (x != 0) {
        Unk_ov068_02265324_Flags *f = (Unk_ov068_02265324_Flags *)func_0207e310(x);
        if (f->unk_1d_1 != 0) {
            r4 = 3;
        } else {
            s32 r6;
            void *t = func_0209750c();
            if (t != 0) {
                r6 = func_02098044(t, 1);
            } else {
                r6 = 0;
            }
            u32 buf[2];
            buf[0] = 0;
            buf[1] = 0;
            func_0209d498(buf);
            if (!(r6 != 0 ? TRUE : FALSE)) {
                if (func_02081288(func_02003098(func_020805c4(x)), buf) != 0) {
                    r4 = 3;
                    goto done;
                }
            }
            r6 = 7;
            if (func_020030b4(func_020805c4(x)) != 0) {
                if (func_0207e310(x) != 0) {
                    r6 = func_02078574(func_0207e310(x));
                }
            }
            if (r6 == 6) {
                r4 = 6;
            }
        }
    }
done:
    if (r4 == 7) {
        r4 = func_ov068_022653ec(self);
    }
    func_02013300(self->unk_3c, &o->unk_5c, r4, a, o);
}

s32 func_ov068_022653ec(Unk_ov068_0225f1a0_Obj8b4 *self) {
    s32 k;
    if (func_0201324c(self->unk_3c) != 0) {
        k = 2;
    } else {
        k = 3;
    }
    s32 i = func_02063b8c(k);
    s32 r5 = data_ov068_0226f16c[i];
    if (r5 == func_02012cb8(self->unk_3c)) {
        s32 n = i + 1;
        if (n >= 3) {
            n = 0;
        }
        r5 = data_ov068_0226f16c[n];
    }
    return r5;
}

s32 func_ov068_02265434(Unk_ov068_0226546c_Rect *r, Unk_ov068_0226fb80 *o) {
    Unk_ov068_02265434_Vec *pb = (Unk_ov068_02265434_Vec *)&o->unk_5c;
    s32 res = 0;
    if (data_021c3070 != 0) {
        Unk_ov068_02265434_Vec v;
        v.x = data_021c309c.x;
        v.y = data_021c309c.y;
        v.z = data_021c309c.z;
        res = func_ov068_0226546c(r, &v, pb);
    }
    return res;
}

s32 func_ov068_0226546c(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b) {
    s32 ret = 0;
    BOOL k2 = FALSE;
    BOOL k1 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - r->x0 && bx < ax + r->w) {
        k1 = TRUE;
    }
    if (k1) {
        if (b->z > a->z - r->z0) {
            k2 = TRUE;
        }
    }
    if (k2) {
        if (b->z < a->z + r->h) {
            ret = 1;
        }
    }
    return ret;
}

s32 func_ov068_022654c0(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    func_ov068_02265994(o);
    *(Unk_ov068_0226fa68_Nest *)((u8 *)o + 0x8ac) = *(Unk_ov068_0226fa68_Nest *)&data_ov068_0226fa68;
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    func_020135c4((u8 *)o + 0x558);
    func_ov068_0225f630((u8 *)o + 0x894, o);
    if (func_0201324c(self->unk_3c) != 0) {
        func_0201325c(self->unk_3c, 0);
    } else {
        func_ov068_02265324(self, 0, o);
        self->unk_d8 = -1;
        self->unk_da = 0;
    }
    func_0202d8d4(o);
    *(u8 *)((u8 *)o + 0x561) = 1;
    *(u8 *)((u8 *)o + 0x562) = 1;
    self->unk_f8 = -1;
    *(u8 *)((u8 *)o + 0x9ec) = 1;
    func_0201c56c((u8 *)o + 0x838);
    return TRUE;
}

void func_ov068_02265588(Unk_ov068_0225f1a0_Obj8b4 *self) {
    self->unk_34 = func_02063b8c(0x1770);
    self->unk_36 = -1;
}

s32 func_ov068_022655a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v);

void func_ov068_022655b4(Unk_ov068_0225f1a0_Obj8b4 *self) {
    self->unk_24 = data_ov068_0226f0fc;
}

s32 func_ov068_022655c0(Unk_ov068_0225f1a0_Obj8b4 *self) {
    if (func_ov068_022655a4(self, 0) != 0 && self->unk_24 == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov068_022655a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v) {
    if (self->unk_10 == v) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov068_022655e0(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    void *p = func_020951ec(4);
    BOOL k;
    s32 kr;
    if (o->vfunc_64() != 0) {
        kr = func_0207c22c(o->vfunc_64(), 0);
    } else {
        kr = 0;
    }
    if (kr != 0) {
        k = TRUE;
    } else {
        k = FALSE;
    }
    s32 res = 0;
    if (func_020b5164() == 0) {
        if (self->unk_f4 <= 0 && k != 0 && p != 0) {
            if (func_0201bd38(o, p) <= 0x7000) {
                s32 d = func_0201bc58(o, p);
                s32 lim = data_ov068_02270c24;
                if (d >= -lim && d <= lim) {
                    res = 1;
                }
            }
        }
    }
    return res;
}

s32 func_ov068_02265670(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    s32 r = 0;
    if (self->unk_18 < 0x18) {
        func_ov068_022656a8(self, o, self->unk_18);
        func_ov068_02265690(self);
        r = 1;
    }
    return r;
}

void func_ov068_02265690(Unk_ov068_0225f1a0_Obj8b4 *self) {
    self->unk_18 = 0x18;
}

void func_ov068_02265698(Unk_ov068_0225f1a0_Obj8b4 *self) {
    func_ov068_022656a4(self, self->unk_10);
}

void func_ov068_022656a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v) {
    self->unk_18 = v;
}

void func_ov068_022656a8(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o, s32 idx) {
    if (idx >= 0 && idx < 0x18) {
        self->unk_10 = idx;
        self->unk_14 = &data_ov068_02270e44[self->unk_10];
        self->unk_1c = 0;
        if (self->unk_14 != 0) {
            if (self->unk_14->a != 0) {
                (self->*(self->unk_14->a))(o);
            }
        }
    }
}

void func_ov068_022656f4(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    if (self->unk_e0 != 0) {
        if (func_ov068_02264a64(self, self->unk_e0) == 0) {
            self->unk_e0 = 0;
        }
    }
    if (self->unk_14 != 0) {
        (self->*(self->unk_14->b))(o);
    }
    if (self->unk_20 > 0) {
        self->unk_20--;
    }
    if (self->unk_d8 > 0) {
        self->unk_d8--;
    }
    if (self->unk_da > 0) {
        self->unk_da--;
    }
    if (self->unk_dc > 0) {
        self->unk_dc--;
    }
    if (self->unk_de > 0) {
        self->unk_de--;
    }
    if (self->unk_24 > 0) {
        self->unk_24--;
    }
    if (self->unk_3a != 0) {
        self->unk_3a--;
    }
    if (func_02014220((u8 *)o + 0x618) == 0) {
        if (self->unk_f4 > 0) {
            self->unk_f4--;
        } else if (self->unk_f8 > 0) {
            self->unk_f8--;
        }
        if (self->unk_34 > 0) {
            self->unk_34--;
        }
        if (self->unk_36 > 0) {
            self->unk_36--;
        }
    }
    if (self->unk_2c > 0) {
        self->unk_2c--;
    }
}

}

Unk_ov068_0225f1a0_Obj8b4 *Unk_ov068_0225f1a0_Obj8b4::func_ov068_02265808() {
    func_020133a4(unk_3c);
    return this;
}

Unk_ov068_0225f1a0_Obj8b4 *Unk_ov068_0225f1a0_Obj8b4::func_ov068_0226581c() {
    func_020133a8(unk_3c);
    unk_e4 = 0;
    unk_18 = 0x18;
    unk_00 = 0x10000;
    unk_04 = 0x10000;
    unk_08 = 0x1a000;
    unk_0c = 0xa000;
    unk_24 = 0;
    func_02013374(unk_3c);
    unk_20 = 0;
    unk_d8 = -1;
    unk_da = 0;
    unk_f4 = 0;
    unk_f8 = 0;
    unk_28 = 0;
    unk_34 = 0;
    unk_36 = -1;
    unk_2c = 0;
    unk_38 = 0;
    unk_3a = 0;
    unk_dc = 0;
    unk_de = 0;
    unk_e0 = 0;
    return this;
}

BOOL Unk_ov068_0226fb80::vfunc_68() {
    func_ov068_02265e6c(this);
    void *p = func_ov068_02265918(this);
    if (p != 0) {
        func_020784b8(p, func_02014220((u8 *)this + 0x618));
    }
    func_ov068_022656f4(&unk_8b4, this);
    unk_9f0.func_ov068_0225f858(this);
    func_0201c078(unk_838, this);
    unk_894.func_ov068_0225f23c(this);
    *(u8 *)((u8 *)this + 0xa01) = 0;
    return TRUE;
}

extern "C" {

void *func_ov068_02265918(Unk_ov068_0226fb80 *o) {
    void *p = o->vfunc_64();
    void *q;
    void *r;
    if (p != 0 && func_020030b4(func_020805c4(p)) != 0 && (q = func_0207e310(p)) != 0) {
        r = (void *)func_020784f4(q);
    } else {
        r = 0;
    }
    return r;
}

}

extern "C" {

u32 func_ov068_0226594c(Unk_ov068_0226fb80 *o) {
    void *p;
    void *q;
    s32 r;
    if (o->vfunc_64() != 0 && func_020030b4(func_020805c4(o->vfunc_64())) != 0) {
        q = func_0207e310(o->vfunc_64());
    } else {
        q = 0;
    }
    if (q != 0) {
        r = func_0207856c(q);
    } else {
        r = 0;
    }
    return (u8)r;
}

void func_ov068_02265994(Unk_ov068_0226fb80 *o) {
    if (func_020197a8((u8 *)o + 0x564) == 8) {
        if (func_020197a0((u8 *)o + 0x564) != 0) {
            s32 r = func_02018984(0);
            if (r != 0) {
                *(u8 *)((u8 *)o + 0x445) = 0;
                func_0201a040((u8 *)o + 0x420, r);
            }
        }
    }
}

void func_ov068_022659dc(Unk_ov068_0226fb80 *o) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    func_0209d498(buf);
    if (*(u8 *)((u8 *)o + 0xa04) != ((u8 *)buf)[1]) {
        if (func_0203d64c() == 0) {
            if (func_ov068_02265bcc(o) != 0) {
                s32 r = func_0201c784(o);
                if (r != 3) {
                    if (r == 4) {
                        func_ov068_02265b0c(o, (u8 *)buf);
                    }
                } else {
                    func_ov068_02265a40(o, (u8 *)buf);
                }
            }
        }
        *(u8 *)((u8 *)o + 0xa04) = ((u8 *)buf)[1];
    }
}

static inline BOOL Unk_ov068_02265a40_R(volatile u16 *p, u32 lo, u32 hi) {
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

void func_ov068_02265a40(Unk_ov068_0226fb80 *o, u8 *b) {
    u8 *t = data_ov068_0226f11c;
    u8 *g = data_021ed24c;
    if (func_0209b354(func_0209a610(func_0207e268(o->vfunc_64()))) == 1) {
        t = data_ov068_0226f134;
    }
    s32 idx = func_0202ce44(t, 5);
    if ((u32)idx < 4) {
        u16 v = 0xfff1;
        if (func_0202c35c(&v, idx, idx + 1, b[4], b[3], b[2], b[2]) != 0) {
            BOOL k = FALSE;
            u32 v0 = v;
            if (*(volatile u16 *)&v >= 0x12e8 && v0 <= 0x131f) {
                k = TRUE;
            }
            if (k) {
                s32 x = func_02085618(&v);
                s32 ty = func_02085810(g) * 10;
                s32 tx = x * 10;
                if ((tx >> 12) > (ty >> 12)) {
                    void *w = func_020805c4(o->vfunc_64());
                    func_02085870(g, w);
                    func_02085814(g, x);
                    func_02085820(g, &v);
                }
            }
        }
    }
}

void func_ov068_02265b0c(Unk_ov068_0226fb80 *o, u8 *b) {
    u8 *t = data_ov068_0226f11c;
    u8 *g = data_021ed24c;
    if (func_0209b354(func_0209a610(func_0207e268(o->vfunc_64()))) == 0) {
        t = data_ov068_0226f134;
    }
    s32 idx = func_0202ce44(t, 5);
    if ((u32)idx < 4) {
        u16 v = 0xfff1;
        if (func_0202c84c(&v, idx, idx + 1, b[2], b[2], b[4]) != 0) {
            BOOL k = FALSE;
            u32 v0 = v;
            if (*(volatile u16 *)&v >= 0x12b0 && v0 <= 0x12e7) {
                k = TRUE;
            }
            if (k) {
                s32 x = func_02085618(&v);
                s32 y = func_02085810(g);
                if ((x >> 12) > (y >> 12)) {
                    void *w = func_020805c4(o->vfunc_64());
                    func_02085870(g, w);
                    func_02085814(g, x);
                    func_02085820(g, &v);
                }
            }
        }
    }
}

s32 func_ov068_02265bcc(Unk_ov068_0226fb80 *o) {
    s32 t = func_0201c784(o);
    if ((u8)(t + 0xfd) <= 1) {
        u8 *p = (u8 *)func_020951ec(4);
        u32 g = data_021c47c4;
        if (p != 0 && g != 0) {
            Unk_ov068_02265bcc_Vec v;
            Unk_ov068_02265bcc_Src *pv = (Unk_ov068_02265bcc_Src *)(p + 0x5c);
            v.x = *(s32 *)(p + 0x5c);
            v.y = pv->y;
            v.z = pv->z;
            if (func_0204ec14(g, v.x >> 17, v.z >> 17, 0x200) == 0) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

static inline BOOL Unk_ov068_02265c24_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

void func_ov068_02265c24(Unk_ov068_0226fb80 *o) {
    void *p = o->vfunc_64();
    if (p != 0 && func_020030b4(func_020805c4(p)) != 0) {
        u16 v;
        u16 w;
        u32 z;
        void *r4 = func_0207e310(p);
        s32 r5 = func_02078574(r4);
        s32 r7 = func_020b8fe8();
        if (r7 != 1) {
            if (Unk_ov068_02265c24_R((u16 *)func_0207850c(r4), 0x1380, 0x139f)) {
                w = 0xfff1;
                func_02078504(r4, &w);
            }
        }
        if (!Unk_ov068_02265c24_R((u16 *)func_0207850c(r4), 0x1380, 0x139f)) {
            func_0209adbc(&v, r5);
            u16 *q = (u16 *)func_0207850c(r4);
            BOOL eq;
            if (func_0204b2d4(q) != 0) {
                s32 x = func_0204b25c(q);
                if (x == func_0204b25c(&v)) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            } else {
                if (*q == v) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            }
            if (eq == 0) {
                func_02078504(r4, &v);
            }
        }
        if (Unk_ov068_02265c24_R((u16 *)func_0207850c(r4), 0x1378, 0x1378) && r7 == 1) {
            func_0207fd18(&z, p);
            func_02078504(r4, &z);
        }
    }
}

}
