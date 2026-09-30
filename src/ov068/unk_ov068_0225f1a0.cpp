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

// Member at +0x8b4 (0xfc bytes)
class Unk_ov068_0225f1a0_Obj8b4 {
public:
    void func_ov068_02265808();
    u32 pad[0xfc / 4];
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
u32 func_ov068_0226594c(void *);
s32 func_0201c7c0(void *);
s32 func_0201c784(void *);
void *func_0201c7f8(void *);
void func_0201c804(void *, u32);
void func_0201c7ec(void *, u32);
void func_0201c5f0(void *);
s32 func_ov068_02265670(void *, void *);
void func_ov068_022656a8(void *, void *, s32);
void func_ov068_022655b4(void *);
void func_ov068_02265698(void *);
s32 func_ov068_022655a4(void *, s32);
s32 func_ov068_022655c0(void *);
s32 func_ov068_02265918(void *);
void func_ov068_02265994(void *);
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

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov068_0226fb80::~Unk_ov068_0226fb80() {
    unk_9f0.func_ov068_0225f8fc();
    unk_9b0.func_02011f40();
    unk_8b4.func_ov068_02265808();
    unk_894.func_ov068_0225f6ac();
}

void Unk_ov068_0225f23c::func_ov068_0225f23c(Unk_ov068_0226fb80 *o) {
    s32 idx;
    Unk_ov068_0225f23c_Vec buf;
    if (unk_00 == 0) {
        u8 a = unk_08;
        u8 b = o->unk_3b0[0];
        if (a == b) {
            switch (a) {
            case 1:
                if (func_ov068_0226594c(o) <= 1) {
                    if (func_0201a5d0(o->unk_3b0, o) == 0) {
                        s32 r;
                        idx = -1;
                        r = func_ov068_0225f52c(&buf, &idx, &o->unk_5c, 0x5000);
                        if (r != -1) {
                            func_ov068_0225f4c4(o, idx, r, &buf);
                        } else {
                            idx = -1;
                            r = func_ov068_0225f3e4(&buf, &idx, &o->unk_5c, 0x5000);
                            if (r != -1) {
                                func_ov068_0225f384(o, idx, r, &buf);
                            }
                        }
                    }
                }
                break;
            case 3:
                if (func_0201a5d0(o->unk_3b0, o)) {
                    func_ov068_0225f5dc();
                }
                switch (unk_04) {
                case 0:
                    func_ov068_0225f460(o);
                    break;
                case 1:
                    func_ov068_0225f328(o);
                    break;
                default:
                    func_ov068_0225f630(o);
                    break;
                }
                break;
            }
        } else {
            unk_00 = 1;
            unk_04 = 3;
        }
    }
}

void Unk_ov068_0225f23c::func_ov068_0225f328(Unk_ov068_0226fb80 *o) {
    Unk_ov068_0225f23c_Vec buf;
    if (func_ov068_0225f3c0(unk_0c, unk_10)) {
        if (func_ov068_0225f430(&buf, unk_0c, &o->unk_5c, o->unk_40c)) {
            func_0201a720(o->unk_3b0, &buf);
        } else {
            func_ov068_0225f630(o);
        }
    } else {
        func_ov068_0225f630(o);
    }
}

void Unk_ov068_0225f23c::func_ov068_0225f384(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v) {
    unk_0c = a;
    unk_10 = b;
    func_ov068_0225f5a4(o, 3, 0, 0, v, 4, data_020c6d1c, 1);
    unk_04 = 1;
    unk_14 = 0;
}

BOOL Unk_ov068_0225f23c::func_ov068_0225f3c0(s32 a, s32 b) {
    s32 t = func_ov003_0221ffe8(a);
    if (t != -1 && b == t) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov068_0225f23c::func_ov068_0225f3e4(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    s32 i;
    s32 t;
    for (i = 0; i < 6; i++) {
        t = func_ov003_0221ffe8(i);
        if (t != -1) {
            if (func_ov068_0225f430(v, i, p, lim)) {
                *out = i;
                return t;
            }
        }
    }
    return -1;
}

BOOL Unk_ov068_0225f23c::func_ov068_0225f430(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    if (func_ov003_0221ffb8(v, i) && func_020e9650(p, v) < lim) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_0225f23c::func_ov068_0225f460(Unk_ov068_0226fb80 *o) {
    Unk_ov068_0225f23c_Vec buf;
    if (func_ov068_0225f4fc(unk_0c, unk_10)) {
        s32 r = func_ov068_0225f56c(&buf, unk_0c, &o->unk_5c, o->unk_40c);
        if (r != -1 && r == unk_10) {
            func_0201a720(o->unk_3b0, &buf);
        } else {
            func_ov068_0225f630(o);
        }
    } else {
        func_ov068_0225f630(o);
    }
}

void Unk_ov068_0225f23c::func_ov068_0225f4c4(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v) {
    unk_0c = a;
    unk_10 = b;
    func_ov068_0225f5a4(o, 3, 0, 0, v, 4, data_020c6d1c, 1);
    unk_04 = 0;
    unk_14 = 0;
}

BOOL Unk_ov068_0225f23c::func_ov068_0225f4fc(u32 a, s32 b) {
    u8 buf[1];
    if (b != -1) {
        s32 t;
        buf[0] = 0;
        t = func_ov003_02227ed4(buf, a);
        if (t == b) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_ov068_0225f23c::func_ov068_0225f52c(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    s32 i;
    s32 t;
    for (i = 0; i < 8; i++) {
        t = func_ov068_0225f56c(v, i, p, lim);
        if (t != -1) {
            *out = i;
            return t;
        }
    }
    return -1;
}

s32 Unk_ov068_0225f23c::func_ov068_0225f56c(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    s32 t = func_ov003_02227e08(v, i);
    if (t != -1 && func_020e9650(p, v) < lim) {
        return t;
    }
    return -1;
}

void Unk_ov068_0225f23c::func_ov068_0225f5a4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e) {
    func_0201a6c0(o->unk_3b0, idx, a, b, v, c, d, e);
    unk_08 = idx;
}

void Unk_ov068_0225f23c::func_ov068_0225f5dc() {
    unk_14++;
    if (unk_14 > 0x960) {
        unk_14 = 0x960;
    }
}

void Unk_ov068_0225f23c::func_ov068_0225f5f4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e) {
    unk_00 = 1;
    func_ov068_0225f5a4(o, idx, a, b, v, c, d, e);
    unk_04 = 3;
    unk_0c = -1;
    unk_10 = -1;
    unk_14 = 0;
}

void Unk_ov068_0225f23c::func_ov068_0225f630(Unk_ov068_0226fb80 *o) {
    unk_00 = 0;
    func_ov068_0225f5a4(o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    unk_04 = 2;
    unk_0c = -1;
    unk_10 = -1;
    unk_14 = 0;
}

void Unk_ov068_0225f23c::func_ov068_0225f670(Unk_ov068_0226fb80 *o) {
    func_ov068_0225f5f4(o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    unk_04 = 2;
    unk_0c = -1;
    unk_10 = -1;
}

void Unk_ov068_0225f23c::func_ov068_0225f6ac() {
}

void Unk_ov068_0225f23c::func_ov068_0225f6b0() {
}

void Unk_ov068_0225f838::func_ov068_0225f838(u32 v) {
    unk_02 = v;
}

u32 Unk_ov068_0225f838::func_ov068_0225f83c() {
    return unk_02;
}

void Unk_ov068_0225f838::func_ov068_0225f840(Unk_ov068_0226fb80 *o) {
    unk_00 = -1;
    func_0207ce00(o->unk_82c);
}

void Unk_ov068_0225f838::func_ov068_0225f858(Unk_ov068_0226fb80 *o) {
    Unk_ov068_0225f858_Vec buf;
    if (unk_00 > 0) {
        unk_00 = unk_00 - 1;
    }
    if (unk_02 != 0) {
        unk_02 = unk_02 - 1;
    }
    if (unk_00 == 0) {
        buf.a = o->unk_478;
        buf.b = o->unk_47c;
        buf.c = o->unk_480;
        func_020902b0(0x81, &buf, 0, 0);
        if (func_0207ce24(o->unk_82c)) {
            unk_00 = func_02063b8c(0xf) + 0xf;
        } else {
            unk_00 = -1;
        }
    } else if (unk_00 == -1) {
        if (func_0207ce24(o->unk_82c)) {
            unk_00 = func_02063b8c(10) + 0xf;
        }
    }
}

void Unk_ov068_0225f838::func_ov068_0225f8f0() {
    unk_00 = -1;
    unk_02 = 0;
}

void Unk_ov068_0225f838::func_ov068_0225f8fc() {
}

void Unk_ov068_0225f838::func_ov068_0225f900() {
}

void Unk_ov068_0226fb80::vfunc_90() {
    func_0201c5f0(unk_838);
    if (func_ov068_02265670(&unk_8b4, this) == 0) {
        func_ov068_022656a8(&unk_8b4, this, 0);
    }
    func_0201c804(this, 0);
    func_0201c7ec(this, 0);
    func_ov068_022655b4(&unk_8b4);
}

void Unk_ov068_0226fb80::vfunc_8c() {
    func_ov068_022656a8(&unk_8b4, this, 10);
}

BOOL Unk_ov068_0226fb80::vfunc_bc() {
    if (func_0201c7c0(this)) {
        func_ov068_02265994(this);
        if (func_ov068_02265670(&unk_8b4, this) == 0) {
            func_ov068_022656a8(&unk_8b4, this, 0);
        }
        func_ov068_022655b4(&unk_8b4);
        func_0201c804(this, 0);
        func_0201c7ec(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_0226fb80::vfunc_b8(u32 idx) {
    if (vfunc_b4()) {
        func_0201c804(this, idx);
        func_0201c7ec(this, 1);
        func_ov068_02265698(&unk_8b4);
        func_ov068_022656a8(&unk_8b4, this, 9);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_0226fb80::vfunc_b4() {
    void *p = func_ov068_02265f58(this);
    if (func_0209750c()) {
        p = func_ov068_02265f58(this);
    }
    if ((p == NULL && func_0201bcd8(this, 0x6000, 4) == 0) || (p != NULL && func_02080f94(p) != 0)) {
        if (func_02014220(unk_618) == 0) {
            if (func_ov068_022655c0(&unk_8b4) != 0) {
                if (func_0201c7c0(this) == 0) {
                    if (func_0201c784(this) == 0xb) {
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

void Unk_ov068_0226fb80::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        unk_560 = v;
        if (func_0201c7c0(this)) {
            unk_9f8 = 1;
            unk_9f4 = (Unk_ov068_0225f904_Menu *)func_0201c7f8(this);
            unk_9f4->vfunc_8c();
        } else if (func_ov068_022655a4(&unk_8b4, 7)) {
            unk_9f8 = 2;
        } else if (unk_a00) {
            unk_9f8 = 0xe;
        } else {
            switch (func_0201c784(this)) {
            case 1:
                unk_9f8 = 3;
                break;
            case 2:
                unk_9f8 = 4;
                break;
            case 0:
                unk_9f8 = 5;
                break;
            case 3:
                unk_9f8 = 6;
                break;
            case 4:
                unk_9f8 = 7;
                break;
            case 5:
                unk_9f8 = 8;
                break;
            case 6:
                unk_9f8 = 9;
                break;
            case 7:
                unk_9f8 = 10;
                break;
            case 8:
            case 9:
                unk_9f8 = 11;
                break;
            default:
                unk_9f8 = 0;
                break;
            }
        }
        if (unk_9f8 == 0) {
            if (func_ov068_02265918(this)) {
                func_020784a8();
            }
        }
        func_ov068_022656a8(&unk_8b4, this, 8);
        break;
    case 1: {
        s32 r6 = 5;
        switch (unk_a08) {
        case 0:
            r6 = 0xe;
            unk_9f8 = 0xd;
            break;
        case 1:
            r6 = 0x14;
            unk_9f8 = 0xf;
            break;
        case 2:
            r6 = 0x16;
            unk_9f8 = 0x10;
            break;
        }
        func_0202d388(unk_680, this, unk_9f8);
        func_02015ab0(unk_680, func_0201bc4c(this, 4));
        func_ov068_022656a8(&unk_8b4, this, r6);
        break;
    }
    case 0:
        unk_560 = v;
        func_0202d388(unk_680, this, unk_9f8);
        func_02015ab0(unk_680, func_0201bc4c(this, 4));
        if (unk_9f4) {
            func_02015a80(unk_680, unk_9f4);
        }
        func_ov068_022656a8(&unk_8b4, this, 5);
        if (unk_9f8 == 2) {
            if (vfunc_64()) {
                func_0207c20c(vfunc_64());
            }
        }
        unk_9f4 = NULL;
        unk_9f8 = 0;
        break;
    case 5:
        unk_560 = v;
        func_ov068_02265698(&unk_8b4);
        func_ov068_022656a8(&unk_8b4, this, 6);
        break;
    case 8: {
        s32 t;
        void *q;
        s32 sv;
        if (unk_a08 == 0) {
            t = func_0207e278(vfunc_64());
            q = func_0207f170(vfunc_64());
            func_0204ed8c(&unk_5c, ((u8 *)q)[0], ((u8 *)q)[1]);
            { Unk_ov068_0225f23c_Vec *sp = &unk_5c; Unk_ov068_0225f23c_Vec *d = &unk_68; d->x = sp->x; d->y = sp->y; d->z = sp->z; }
            sv = func_02078294();
            if (sv == func_0207e334(vfunc_64()) || (u32)(t - 3) <= 4) {
                func_ov068_022656a8(&unk_8b4, this, 0xc);
            } else {
                func_ov068_022656a8(&unk_8b4, this, 3);
            }
            unk_a08 = 3;
        } else if (unk_a08 == 2) {
            func_ov068_022656a8(&unk_8b4, this, 0);
            unk_a08 = 3;
        } else if (unk_a00) {
            func_ov068_022656a8(&unk_8b4, this, 0x12);
        } else {
            if (func_ov068_02265670(&unk_8b4, this) == 0) {
                func_ov068_022656a8(&unk_8b4, this, 0);
            }
            if (func_ov068_02265918(this)) {
                func_02078498();
            }
        }
        func_0203e450(this);
        if (vfunc_64()) {
            func_0207c190(vfunc_64(), -3);
        }
        break;
    }
    case 4:
        if (unk_a00) {
            func_ov068_022656a8(&unk_8b4, this, 0x12);
        } else {
            if (func_ov068_02265670(&unk_8b4, this) == 0) {
                func_ov068_022656a8(&unk_8b4, this, 0);
            }
        }
        break;
    }
    func_0201b08c(this, idx, v);
}
