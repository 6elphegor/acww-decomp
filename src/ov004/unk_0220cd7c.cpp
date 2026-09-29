#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

struct Unk_ov004_02208ba8_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u16 unk_04;
};

struct Unk_ov004_0220ce38_Slot {
    /* 0x00 */ u32 sub[2];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 pad_0c[3];
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
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
    Unk_020d9670();
    virtual ~Unk_020d9670();
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

class Unk_ov004_022488d8 {
public:
    Unk_ov004_022488d8();
    virtual ~Unk_ov004_022488d8();
};

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u32 vfunc_74(u32 a);
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    // Callees outside this range
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    BOOL func_ov004_02209198();
    u32 func_ov004_022091e0();
    u32 func_ov004_02208968();
    void func_ov004_0220878c();
    u32 func_ov004_02208750();

    /* 0x0f0 */ u8 pad_0f0[0x534 - 0xf0];
    /* 0x534 */ u8 f_534[0x590 - 0x534];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[0x7c0 - 0x73c];
    /* 0x7c0 */ Unk_ov004_0220ce38_Slot unk_7c0[4];
    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};

class Unk_ov004_0224ae60 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224ae60();
    virtual ~Unk_ov004_0224ae60();
    virtual BOOL vfunc_7c();
};

class Unk_ov004_0224b1e4 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b1e4();
    virtual ~Unk_ov004_0224b1e4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220ce38();
    BOOL func_ov004_0220cea4();
    void func_ov004_0220cf2c();
    BOOL func_ov004_0220cf5c();
    void func_ov004_0220cfd4();
    BOOL func_ov004_0220d044();
    void func_ov004_0220d0c8();
    BOOL func_ov004_0220d0f0();
    void func_ov004_0220d160();
    void func_ov004_0220d614();
};

extern "C" {
extern u8 data_ov004_02240058[];

BOOL func_ov004_02205c44(void *, s32, s32);
BOOL func_ov004_02205c6c(void *);
BOOL func_ov004_02205c7c(void *);
BOOL func_ov004_02206e74(void *);
void *func_ov004_02206be4(void *);
Unk_ov004_02208ba8_Rec *func_ov004_022063b0(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_022063bc(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_022063a4(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_02206398(void *, u32);
Unk_ov004_02208ba8_Rec *func_ov004_022063c8(void *, u32);
void *func_ov004_02206a14(void *);
BOOL func_ov004_02234ad4(void);
s32 func_ov004_0220dc5c(void *, void *);

void *func_020554c0(void *);
void func_02055b00(void *, void *, void *, s32, s32, u32);
void func_02055b38(void *, void *, s32, s32, s32);
void func_02055ae4(void *, void *, void *, s32, s32, s32);
void func_02055a9c(void *, void *);
BOOL func_02055b90(void *, u32, u32);
BOOL func_02055bcc(void *, u32, u32);
void func_020566bc(void *);
BOOL func_02056654(void *);
void func_02051cc8(void *, s32, s32, s32);
BOOL func_02054584(void *);
void func_0205439c(void *);
void func_02054720(void *, void *, s32, s32, s32, s32);
void func_02054710(void *);
BOOL func_02054800(void *, u32);
u32 func_0209c348(u32);
u32 func_020b50e8(void);
void func_020515b8(u32, void *, u32);
}

BOOL Unk_ov004_0224ae60::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    vfunc_70(0, 0xff);
    return TRUE;
}

Unk_ov004_0224ae60::~Unk_ov004_0224ae60() {
}

Unk_ov004_0224ae60::Unk_ov004_0224ae60() {
}

extern "C" void func_ov004_0220ce1c() {
    new Unk_ov004_0224ae60;
}

void Unk_ov004_0224b1e4::func_ov004_0220ce38() {
    func_ov004_02205c44(f_73c, 0, 0);
    if (func_ov004_02206e74(&unk_7c0[0])) {
        func_020566bc(&unk_7c0[0]);
        *unk_7c0[0].unk_18 = unk_7c0[0].unk_08;
        if (func_02056654(&unk_7c0[0])) {
            vfunc_70(0, 0xff);
        }
    } else {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220cea4() {
    func_ov004_02205c44(f_73c, 0, 0);
    if (func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0);
        if (func_ov004_02206e74(&unk_7c0[0])) {
            func_02055b00(&unk_7c0[0], func_020554c0(f_534), r, 3, 0x1000, (u16)(r->unk_04 - 1));
        }
    }
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220cf2c() {
    func_ov004_022091e0();
    func_ov004_02209198();
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 3, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220cf5c() {
    func_ov004_02205c44(f_73c, 1, 0);
    if (func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0);
        func_02055b00(&unk_7c0[0], func_020554c0(f_534), r, 1, 0x1000, (u16)(r->unk_04 - 1));
    }
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220cfd4() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02209198();
    if (func_ov004_02206e74(&unk_7c0[0])) {
        func_020566bc(&unk_7c0[0]);
        *unk_7c0[0].unk_18 = unk_7c0[0].unk_08;
        if (func_02056654(&unk_7c0[0])) {
            vfunc_70(2, 0xff);
        }
    } else {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220d044() {
    func_ov004_02205c44(f_73c, 1, 0);
    if (func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0);
        if (func_ov004_02206e74(&unk_7c0[0])) {
            func_02055b00(&unk_7c0[0], func_020554c0(f_534), r, 1, 0x1000, 0);
        }
    }
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220d0c8() {
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220d0f0() {
    func_ov004_02205c44(f_73c, 0, 0);
    if (func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0);
        func_02055b00(&unk_7c0[0], func_020554c0(f_534), r, 3, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220d160() {
    typedef void (Unk_ov004_0224b1e4::*Fn)();
    static Fn tbl[4] = {
        &Unk_ov004_0224b1e4::func_ov004_0220d0c8,
        &Unk_ov004_0224b1e4::func_ov004_0220cfd4,
        &Unk_ov004_0224b1e4::func_ov004_0220cf2c,
        &Unk_ov004_0224b1e4::func_ov004_0220ce38,
    };
    u32 i = unk_840;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224b1e4::vfunc_70(s32 a, s32 b) {
    typedef BOOL (Unk_ov004_0224b1e4::*Fn)();
    func_ov004_0220878c();
    static Fn tbl[4] = {
        &Unk_ov004_0224b1e4::func_ov004_0220d0f0,
        &Unk_ov004_0224b1e4::func_ov004_0220d044,
        &Unk_ov004_0224b1e4::func_ov004_0220cf5c,
        &Unk_ov004_0224b1e4::func_ov004_0220cea4,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224b1e4::vfunc_74(u32 a) {
    if (a < 4) {
        return data_ov004_02240058[a];
    }
    return 0;
}

BOOL Unk_ov004_0224b1e4::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224b1e4::vfunc_80() {
    func_ov004_0220d160();
    if (func_02054584(f_534)) {
        func_0205439c(f_534);
    }
    if (func_ov004_02206e74(&unk_7c0[1])) {
        func_020566bc(&unk_7c0[1]);
        *unk_7c0[1].unk_18 = unk_7c0[1].unk_08;
    }
    if (func_ov004_02206e74(&unk_7c0[2])) {
        func_020566bc(&unk_7c0[2]);
        *unk_7c0[2].unk_18 = unk_7c0[2].unk_08;
    }
    if (func_ov004_02206e74(&unk_7c0[3])) {
        func_020566bc(&unk_7c0[3]);
        *unk_7c0[3].unk_18 = unk_7c0[3].unk_08;
    }
    return TRUE;
}

BOOL Unk_ov004_0224b1e4::vfunc_7c() {
    u32 r4 = func_ov004_02208968();
    if (func_ov004_022063b0(func_ov004_02206be4(f_6c8), 0) != NULL) {
        u32 t = unk_590;
        if (func_02055b90(&unk_7c0[3], t, func_0209c348(r4))) {
            func_02055b38(&unk_7c0[3], func_ov004_022063b0(func_ov004_02206be4(f_6c8), 0), 0, 0x1000, 0);
            func_02055a9c(&unk_7c0[3], func_020554c0(f_534));
        }
    }
    if (func_ov004_022063a4(func_ov004_02206be4(f_6c8), 0) != NULL) {
        u32 t = unk_590;
        if (func_02055bcc(&unk_7c0[1], t, func_0209c348(r4))) {
            func_02055b38(&unk_7c0[1], func_ov004_022063a4(func_ov004_02206be4(f_6c8), 0), 0, 0x1000, 0);
            func_02055a9c(&unk_7c0[1], func_020554c0(f_534));
        }
    }
    if (func_ov004_022063c8(func_ov004_02206be4(f_6c8), 0) != NULL) {
        if (func_02054800(f_534, func_0209c348(r4))) {
            func_02054720(f_534, func_ov004_022063c8(func_ov004_02206be4(f_6c8), 0), 0, 0x1000, 0, 0);
            func_02054710(f_534);
        }
    }
    if (func_ov004_02206398(func_ov004_02206be4(f_6c8), 0) != NULL) {
        u32 t = unk_590;
        if (func_02055bcc(&unk_7c0[2], t, func_0209c348(r4))) {
            Unk_ov004_02208ba8_Rec *r = func_ov004_02206398(func_ov004_02206be4(f_6c8), 0);
            func_02055ae4(&unk_7c0[2], r, func_ov004_02206a14(f_6c8), 0, 0x1000, 0);
            func_02055a9c(&unk_7c0[2], func_020554c0(f_534));
        }
    }
    if (func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0) != NULL) {
        u32 t = unk_590;
        if (func_02055bcc(&unk_7c0[0], t, func_0209c348(r4))) {
            func_02055b38(&unk_7c0[0], func_ov004_022063bc(func_ov004_02206be4(f_6c8), 0), 3, 0x1000, 0);
            func_02055a9c(&unk_7c0[0], func_020554c0(f_534));
        }
    }
    if (func_ov004_02205c7c(f_73c) != 0 && func_ov004_02234ad4() == 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224b1e4::~Unk_ov004_0224b1e4() {
}

Unk_ov004_0224b1e4::Unk_ov004_0224b1e4() {
}

extern "C" void func_ov004_0220d5f8() {
    new Unk_ov004_0224b1e4;
}

void Unk_ov004_0224b1e4::func_ov004_0220d614() {
    s32 v = func_ov004_0220dc5c(this, &unk_5c[0]);
    if (v >= 0) {
        s32 i = v >> 12;
        func_02054720(f_534, func_ov004_022063c8(func_ov004_02206be4(f_6c8), 0), 0, v - (i << 12), (u16)i, 0);
        func_0205439c(f_534);
    }
    if (func_ov004_02205c6c(f_73c)) {
        func_ov004_02205c44(f_73c, 1, 0);
        u32 r4 = func_020b50e8();
        func_020515b8(r4, &unk_5c[0], func_ov004_02208750());
    }
}
