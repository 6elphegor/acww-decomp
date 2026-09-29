#include "types.h"
// The base declares vfunc_14() with no parameters, but this overlay class takes one (r1), so widen it locally.
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

struct Unk_ov004_02208ba8_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u16 unk_04;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_ov004_0224882c : public Unk_020d9670 {
public:
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_74();
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    u16 func_ov004_02208ff0(s32 a);
    BOOL func_ov004_022090c0();
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    BOOL func_ov004_02209198();
    u32 func_ov004_022091e0();

    // Callees outside this range
    BOOL func_ov004_02206f8c();
    u32 func_ov004_02208968();
    void func_ov004_022076b0();
    void func_ov004_02208358();
    void func_ov004_02207ac4(s32 a, s32 b);
    void func_ov004_02207004();
    void func_ov004_0220711c(s32 *x, s32 *y, s32 c, s32 d);
    void func_ov004_02207704();
    void func_ov004_022055ec();
    void func_ov004_02208284();
    void func_ov004_02208554();
    BOOL func_ov004_0220579c(s32 a);
    BOOL func_ov004_022057bc();
    BOOL func_ov004_022057b0();
    void func_ov004_022081b4();
    void func_ov004_022088c0(s32 *out);

    /* 0x0ec */ u32 pad_ec[(0x14c - 0xec) / 4];
    /* 0x14c */ u32 unk_14c;
    /* 0x150 */ u32 unk_150;
    /* 0x154 */ u32 unk_154;
    /* 0x158 */ u32 pad_158[(0x188 - 0x158) / 4];
    /* 0x188 */ u32 sub_188[(0x280 - 0x188) / 4];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u32 pad_284[(0x534 - 0x284) / 4];
    /* 0x534 */ u32 sub_534[(0x590 - 0x534) / 4];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u32 pad_594[(0x5d8 - 0x594) / 4];
    /* 0x5d8 */ u32 unk_5d8;
    /* 0x5dc */ u32 pad_5dc[(0x6c8 - 0x5dc) / 4];
    /* 0x6c8 */ u32 sub_6c8[(0x73c - 0x6c8) / 4];
    /* 0x73c */ u32 sub_73c[(0x768 - 0x73c) / 4];
    /* 0x768 */ u32 unk_768;
    /* 0x76c */ u32 pad_76c[(0x778 - 0x76c) / 4];
    /* 0x778 */ u8 unk_778;
    /* 0x779 */ u8 pad_779[3];
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u32 pad_780[(0x794 - 0x780) / 4];
    /* 0x794 */ u32 sub_794[(0x7b4 - 0x794) / 4];
    /* 0x7b4 */ s32 unk_7b4[3];
    /* 0x7c0 */ u32 sub_7c0[2];
    /* 0x7c8 */ u32 unk_7c8;
    /* 0x7cc */ u32 pad_7cc[(0x7e0 - 0x7cc) / 4];
    /* 0x7e0 */ u32 sub_7e0[2];
    /* 0x7e8 */ u32 unk_7e8;
    /* 0x7ec */ u32 pad_7ec[(0x800 - 0x7ec) / 4];
    /* 0x800 */ u32 sub_800[2];
    /* 0x808 */ u32 unk_808;
    /* 0x80c */ u32 pad_80c[(0x820 - 0x80c) / 4];
    /* 0x820 */ u32 sub_820[2];
    /* 0x828 */ u32 unk_828;
};

extern "C" {
extern u16 data_ov004_022486f8;
extern u8 data_ov004_02252058[];
extern u32 *data_021c47c4;
extern u8 data_027e00c8[];
extern s16 data_02135f44[];

void *func_ov004_02206be4(void *);
Unk_ov004_02208ba8_Rec *func_ov004_022063b0(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_022063bc(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_022063a4(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_02206398(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_022063c8(void *, u32);
void *func_ov004_02206a14(void *);
void func_ov004_022069ec(void *);
void func_ov004_02206190(void *, void *);
void func_ov004_02205c80(void *, void *);
BOOL func_ov004_02205c6c(void *);
void func_ov004_02205c54(void *, u32);
void func_ov004_02205cc4(void *, void *);
u32 func_ov004_022330f8(u32);
u32 func_ov004_02233108(u32);
u32 func_ov004_02233118(u32);
u32 func_ov004_02233128(u32);
void func_ov004_0223591c(void *, u32, void *);
void func_ov004_02235908(void *, u32, void *);
void func_ov004_02235930(void *);
void func_ov004_02235948(void *);
BOOL func_ov004_02235d10(void);
void *func_ov004_0223584c(void);
void func_ov004_022357b0(void *, void *);

void *func_020554c0(void *);
void func_02055b00(void *, void *, void *, s32, s32, u32);
void func_02055aac(void *, void *, void *, void *, s32, s32, u32);
BOOL func_02055b90(void *, u32, u32);
BOOL func_02055bcc(void *, u32, u32);
void func_02055b38(void *, void *, s32, s32, s32);
void func_02055a9c(void *, void *);
void func_02055ae4(void *, void *, void *, s32, s32, s32);
BOOL func_02054800(void *, u32);
s32 func_02054720(void *, void *, s32, s32, u32, s32);
void func_02054710(void *);
void func_020547cc(void *, void *);
u32 func_0209c348(u32);
void func_0209c224(void *, void *);
u32 func_02052e0c(u32);
void *func_02095204(u32);
u32 func_020b50e8(void);
BOOL func_020b51b8(u32);
BOOL func_020b530c(u32);
void func_0204eb30(void *, u16 *, s32, s32, s32);
BOOL func_02002ec0(void *, s32);
BOOL func_02002d9c(void *);
BOOL func_0203e650(void *);
}

void Unk_ov004_0224882c::func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d) {
    u32 i = a & 1;
    if (func_ov004_022063b0(func_ov004_02206be4(sub_6c8), i)) {
        Unk_ov004_02208ba8_Rec *rec = func_ov004_022063b0(func_ov004_02206be4(sub_6c8), i);
        u32 v;
        if (d == 0xffff) {
            v = (unk_828 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        func_02055b00(sub_820, func_020554c0(sub_534), rec, b, c, v);
    }
    if (func_ov004_022063bc(func_ov004_02206be4(sub_6c8), i)) {
        Unk_ov004_02208ba8_Rec *rec = func_ov004_022063bc(func_ov004_02206be4(sub_6c8), i);
        u32 v;
        if (d == 0xffff) {
            v = (unk_7c8 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        func_02055b00(sub_7c0, func_020554c0(sub_534), rec, b, c, v);
    }
    if (func_ov004_022063a4(func_ov004_02206be4(sub_6c8), i)) {
        Unk_ov004_02208ba8_Rec *rec = func_ov004_022063a4(func_ov004_02206be4(sub_6c8), i);
        u32 v;
        if (d == 0xffff) {
            v = (unk_7e8 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        func_02055b00(sub_7e0, func_020554c0(sub_534), rec, b, c, v);
    }
    if (func_ov004_02206398(func_ov004_02206be4(sub_6c8), i)) {
        Unk_ov004_02208ba8_Rec *rec = func_ov004_02206398(func_ov004_02206be4(sub_6c8), i);
        u32 v;
        if (d == 0xffff) {
            v = (unk_808 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        void *p = func_020554c0(sub_534);
        func_02055aac(sub_800, p, rec, func_ov004_02206a14(sub_6c8), b, c, v);
    }
    if (func_ov004_022063c8(func_ov004_02206be4(sub_6c8), i)) {
        Unk_ov004_02208ba8_Rec *rec = func_ov004_022063c8(func_ov004_02206be4(sub_6c8), i);
        u32 v;
        if (d == 0xffff) {
            v = (unk_5d8 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            if (d >= n) {
                d = n - 1;
            }
            v = (u16)d;
        }
        func_02054720(sub_534, rec, b, c, v, 0);
    }
}

void Unk_ov004_0224882c::func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d) {
    u32 m = func_ov004_02208968();
    u32 i = a & 1;
    if (func_ov004_022063b0(func_ov004_02206be4(sub_6c8), i)) {
        u32 t = unk_590;
        if (func_02055b90(sub_820, t, func_0209c348(m))) {
            func_02055b38(sub_820, func_ov004_022063b0(func_ov004_02206be4(sub_6c8), i), b, c, d);
            func_02055a9c(sub_820, func_020554c0(sub_534));
        }
    }
    if (func_ov004_022063bc(func_ov004_02206be4(sub_6c8), i)) {
        u32 t = unk_590;
        if (func_02055bcc(sub_7c0, t, func_0209c348(m))) {
            func_02055b38(sub_7c0, func_ov004_022063bc(func_ov004_02206be4(sub_6c8), i), b, c, d);
            func_02055a9c(sub_7c0, func_020554c0(sub_534));
        }
    }
    if (func_ov004_022063a4(func_ov004_02206be4(sub_6c8), i)) {
        u32 t = unk_590;
        if (func_02055bcc(sub_7e0, t, func_0209c348(m))) {
            func_02055b38(sub_7e0, func_ov004_022063a4(func_ov004_02206be4(sub_6c8), i), b, c, d);
            func_02055a9c(sub_7e0, func_020554c0(sub_534));
        }
    }
    if (func_ov004_02206398(func_ov004_02206be4(sub_6c8), i)) {
        u32 t = unk_590;
        if (func_02055bcc(sub_800, t, func_0209c348(m))) {
            Unk_ov004_02208ba8_Rec *rec = func_ov004_02206398(func_ov004_02206be4(sub_6c8), i);
            func_02055ae4(sub_800, rec, func_ov004_02206a14(sub_6c8), b, c, d);
            func_02055a9c(sub_800, func_020554c0(sub_534));
        }
    }
    if (func_ov004_022063c8(func_ov004_02206be4(sub_6c8), i)) {
        if (func_02054800(sub_534, func_0209c348(m))) {
            func_02054720(sub_534, func_ov004_022063c8(func_ov004_02206be4(sub_6c8), i), b, c, d, 0);
            func_02054710(sub_534);
        }
    }
}

u16 Unk_ov004_0224882c::func_ov004_02208ff0(s32 a) {
    u32 i = a & 1;
    if (func_ov004_022063c8(func_ov004_02206be4(sub_6c8), i)) {
        return func_ov004_022063c8(func_ov004_02206be4(sub_6c8), i)->unk_04;
    }
    if (func_ov004_022063bc(func_ov004_02206be4(sub_6c8), i)) {
        return func_ov004_022063bc(func_ov004_02206be4(sub_6c8), i)->unk_04;
    }
    if (func_ov004_022063a4(func_ov004_02206be4(sub_6c8), i)) {
        return func_ov004_022063a4(func_ov004_02206be4(sub_6c8), i)->unk_04;
    }
    if (func_ov004_02206398(func_ov004_02206be4(sub_6c8), i)) {
        return func_ov004_02206398(func_ov004_02206be4(sub_6c8), i)->unk_04;
    }
    if (func_ov004_022063b0(func_ov004_02206be4(sub_6c8), i)) {
        return func_ov004_022063b0(func_ov004_02206be4(sub_6c8), i)->unk_04;
    }
    return 0;
}

BOOL Unk_ov004_0224882c::func_ov004_022090c0() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_022330f8(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_0223591c(sub_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02209108() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_02233108(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_0223591c(sub_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02209150() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_02233118(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_0223591c(sub_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02209198() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_02233128(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_02235908(sub_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224882c::func_ov004_022091e0() {
    return func_02052e0c(unk_280);
}

u8 Unk_ov004_0224882c::vfunc_78() {
    return unk_778;
}

Unk_ov004_022091fc_Vec *Unk_ov004_0224882c::vfunc_50() {
    static Unk_ov004_022091fc_Vec v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    u8 *o = (u8 *)func_02095204(4);
    if (o) {
        s32 i = *(u16 *)(o + 0x8e) >> 4;
        s32 k = i * 2;
        v.x = *(s32 *)(o + 0x5c) + data_02135f44[k];
        v.y = *(s32 *)(o + 0x60);
        v.z = *(s32 *)(o + 0x64) + data_02135f44[k + 1];
    }
    return &v;
}

void Unk_ov004_0224882c::vfunc_9c() {}
void Unk_ov004_0224882c::vfunc_98() {}
void Unk_ov004_0224882c::vfunc_94() {}
void Unk_ov004_0224882c::vfunc_90() {}
BOOL Unk_ov004_0224882c::vfunc_88() { return TRUE; }
BOOL Unk_ov004_0224882c::vfunc_8c() { return FALSE; }

BOOL Unk_ov004_0224882c::vfunc_14(s32 a) {
    if (a == 2) {
        func_ov004_02235930(sub_794);
        func_ov004_022076b0();
        func_ov004_02208358();
        if (func_ov004_022057bc() == 0) {
            if (func_ov004_022057b0() == 0) {
                func_ov004_02205c80(sub_73c, this);
            }
        }
        func_ov004_022069ec(sub_6c8);
        func_0209c224(data_ov004_02252058, (u8 *)this + 0x12e);
        if (func_ov004_022057bc()) {
            s32 x, y;
            func_ov004_0220711c(&x, &y, 0, 0);
            u32 r = func_020b50e8();
            if (func_ov004_02235d10() && !func_020b51b8(r) && !func_020b530c(r)) {
                u32 *g = data_021c47c4;
                func_ov004_02207ac4(0, 0);
                if (g) {
                    u16 v = 0x1547;
                    func_0204eb30(g, &v, x, y, 0);
                }
            } else {
                func_ov004_02207ac4(1, 0);
            }
            func_ov004_02207004();
        }
        func_ov004_022357b0(func_ov004_0223584c(), this);
    }
    return func_02002ec0(this, a);
}

BOOL Unk_ov004_0224882c::vfunc_10() {
    if (Unk_020d9670::vfunc_10()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::vfunc_84() { return TRUE; }
BOOL Unk_ov004_0224882c::vfunc_80() { return TRUE; }

BOOL Unk_ov004_0224882c::vfunc_28() {
    if (Unk_020d5d84::vfunc_28() == 0) {
        return FALSE;
    }
    if (vfunc_88() == 0) {
        return FALSE;
    }
    if (unk_14c != 0 || unk_150 != 0 || unk_154 != 0) {
        u32 saved[4];
        u32 i;
        if (func_ov004_02206f8c()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)((u8 *)saved + o) = *(u32 *)(q + 0xa8);
                *(u32 *)(q + 0xa8) = (i << 30) | 0x7fff;
            }
        }
        func_020547cc(sub_534, &unk_14c);
        if (func_ov004_02206f8c()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)(q + 0xa8) = *(u32 *)((u8 *)saved + o);
            }
        }
    }
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02206190((u8 *)this + 0x188, this);
    }
    return TRUE;
}

BOOL Unk_ov004_0224882c::vfunc_18() {
    s32 v[4];
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02235948(sub_794);
        func_ov004_022088c0(v);
        unk_7b4[0] = v[0];
        unk_7b4[1] = v[1];
        unk_7b4[2] = v[2];
    }
    func_ov004_022055ec();
    func_ov004_02208284();
    func_ov004_02208554();
    if (func_ov004_0220579c(0) == 0 && func_ov004_0220579c(5) == 0) {
        if (unk_77c == 0) {
            func_ov004_022091e0();
        }
        vfunc_80();
    } else {
        vfunc_84();
        if (func_ov004_02205c6c(sub_73c)) {
            func_ov004_02205c54(sub_73c, 0);
        }
    }
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02207704();
        func_ov004_02205cc4(sub_73c, this);
        func_ov004_022081b4();
    }
    return TRUE;
}
