#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

// Declaration-only twins (same layout and virtuals as Unk_020e0d08 / Unk_020e0cf4): the original vtable order in .data
// is a heapsort of the class declaration order that cannot be reached with the real bases declared first.
// aliases.txt maps the twins' constructor/destructor/method names onto the real functions.
class Unk_020e0d08b {
public:
    Unk_020e0d08b();
    ~Unk_020e0d08b();
    virtual Vec3 *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    void func_02089078(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g);
    u8 pad[0x3c];
};

class Unk_020e0cf4b : public Unk_020e0d08b {
public:
    Unk_020e0cf4b();
    ~Unk_020e0cf4b();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void func_02088c98(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ u8 *unk_40;
};

class Unk_020e0d30 : public Unk_020e0cf4b {
public:
    Unk_020e0d30();
    ~Unk_020e0d30();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void func_02088bf8(void *p, Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x44 */ Vec3 unk_44;
};

class Unk_020e0d1c : public Unk_020e0d08b {
public:
    Unk_020e0d1c();
    ~Unk_020e0d1c();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void func_02088c64(Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ Vec3 unk_40;
};

class Unk_020e0cf4 : public Unk_020e0d08b {
public:
    Unk_020e0cf4();
    ~Unk_020e0cf4();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void func_02088c98(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ u8 *unk_40;
};

class Unk_020e0d08 {
public:
    Unk_020e0d08();
    ~Unk_020e0d08();
    virtual Vec3 *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    void func_02089040();
    void func_0208905c();
    BOOL func_02088d38(u32 mask);
    BOOL func_02088fe8(Unk_020e0d08 *o);
    void func_02089078(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g);
    s32 func_02089098();
    BOOL func_020890b0(s32 a);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020e0d08 *unk_38;
    /* 0x3c */ u8 unk_3c;
};

struct Unk_02089270_Rec {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0a */ s16 unk_0a;
};

struct Unk_02089270_Tbl {
    /* 0x00 */ Unk_02089270_Rec *unk_00;
    /* 0x04 */ s32 unk_04;
};

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    /* 0x00 */ Unk_02089270_Tbl *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
};

extern "C" {
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 _ZN12Unk_020d5d8413func_02002d74Ej(s32 v);
void _ZN12Unk_020e0cf48vfunc_04Ev(void *p);
void func_02089118(void);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e9688(Vec3 *v);
}

Unk_020e0d08 *data_021ce638;

void Unk_02089270::func_02089140() {
    if (unk_10 == 0) {
        unk_08 = unk_08 + unk_0c;
        s32 f = unk_08 >> 12;
        if (f >= unk_00->unk_00[unk_04].unk_04) {
            unk_08 = 0;
            s32 n = unk_00->unk_04;
            unk_04 = unk_04 + 1;
            if (unk_04 >= n) {
                unk_04 = 0;
            }
        }
    } else {
        unk_08 = unk_08 + unk_0c;
        Unk_02089270_Tbl *t = unk_00;
        s32 f = unk_08 >> 12;
        if (f >= t->unk_00[unk_04].unk_04) {
            s32 n = t->unk_04;
            unk_04 = unk_04 + 1;
            if (unk_04 < n) {
                unk_08 = 0;
            } else {
                unk_04 = n - 1;
            }
        }
    }
}

u32 Unk_020e0d1c::vfunc_04() { return FALSE; }

Vec3 *Unk_020e0d1c::vfunc_00() { return &unk_40; }

u32 Unk_020e0d30::vfunc_04() { _ZN12Unk_020e0cf48vfunc_04Ev(this); }

Vec3 *Unk_020e0d30::vfunc_00() { return &unk_44; }

extern "C" void func_02089124(void) { func_02089118(); }

extern "C" void func_02089118(void) { data_021ce638 = 0; }

Unk_020e0d08::Unk_020e0d08() {
    func_0208905c();
}

Unk_020e0d08::~Unk_020e0d08() {}

void Unk_020e0d08::vfunc_08(u32 a, u32 b, u32 c) {}

BOOL Unk_020e0d08::func_020890b0(s32 a) {
    if (unk_3c != 0) {
        s32 t = func_020e7b98(unk_10, unk_18);
        if (func_020e780c(t, (s16)(a + 0x8000)) <= 0x2000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 Unk_020e0d08::func_02089098() {
    if (unk_2c != 0) {
        return _ZN12Unk_020d5d8413func_02002d74Ej(unk_2c);
    }
    return 0;
}

void Unk_020e0d08::func_02089078(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g) {
    unk_04 = a;
    unk_08 = b;
    unk_1c = c;
    unk_20 = d;
    unk_0c = e;
    unk_0d = f;
    unk_34 = g;
}

void Unk_020e0d08::func_0208905c() {
    unk_38 = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_3c = 0;
    unk_2c = 0;
    unk_28 = 0;
    unk_0e = 0;
    unk_0f = 0xff;
}

void Unk_020e0d08::func_02089040() {
    func_0208905c();
    unk_38 = data_021ce638;
    data_021ce638 = this;
}

BOOL Unk_020e0d08::func_02088fe8(Unk_020e0d08 *o) {
    BOOL r;
    if ((unk_1c & o->unk_20) && (unk_20 & o->unk_1c)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        u32 a = vfunc_04();
        if (a != 0) {
            if (a == o->vfunc_04()) {
                return FALSE;
            }
        }
        if (this != o) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" void func_02088d58() {
    Unk_020e0d08 *o;
    Vec3 *cv;
    Vec3 d;
    s32 len;
    s32 pen;
    s32 t;
    s32 sumM, w1, k, w0;
    for (o = data_021ce638; o; o = o->unk_38) {
        if (o->unk_1c & 1) {
            o->unk_30 = -0x1000;
        }
    }
    while (data_021ce638) {
        cv = data_021ce638->vfunc_00();
        for (o = data_021ce638->unk_38; o; o = o->unk_38) {
            if (!data_021ce638->func_02088fe8(o)) {
                continue;
            }
            func_020e9960(&d, o->vfunc_00(), cv);
            if (d.y < 0) {
                t = o->unk_08 + d.y;
            } else {
                t = data_021ce638->unk_08 - d.y;
            }
            if (t <= 0) {
                continue;
            }
            len = func_020e9688(&d);
            if (len == 0) {
                d.x = 0x1000;
                len = 0x1000;
            }
            pen = data_021ce638->unk_04 + o->unk_04 - len;
            if (pen <= 0) {
                continue;
            }
            o->unk_3c = 1;
            data_021ce638->unk_3c = o->unk_3c;
            if (data_021ce638->unk_1c & 1) {
                if (pen >= data_021ce638->unk_30) {
                    data_021ce638->unk_30 = pen;
                    data_021ce638->unk_28 = o->unk_1c;
                    data_021ce638->unk_2c = o->vfunc_04();
                    data_021ce638->unk_0e = o->unk_0c;
                    data_021ce638->unk_0f = o->unk_0d;
                }
            } else {
                data_021ce638->unk_28 = o->unk_1c;
                data_021ce638->unk_2c = o->vfunc_04();
                data_021ce638->unk_0e = o->unk_0c;
                data_021ce638->unk_0f = o->unk_0d;
            }
            if (o->unk_1c & 1) {
                if (pen >= o->unk_30) {
                    o->unk_28 = data_021ce638->unk_1c;
                    o->unk_2c = data_021ce638->vfunc_04();
                    o->unk_0e = data_021ce638->unk_0c;
                    o->unk_0f = data_021ce638->unk_0d;
                }
            } else {
                o->unk_28 = data_021ce638->unk_1c;
                o->unk_2c = data_021ce638->vfunc_04();
                o->unk_0e = data_021ce638->unk_0c;
                o->unk_0f = data_021ce638->unk_0d;
            }
            data_021ce638->vfunc_08(o->unk_0c, o->unk_0d, o->unk_1c);
            o->vfunc_08(data_021ce638->unk_0c, data_021ce638->unk_0d, data_021ce638->unk_1c);
            if (data_021ce638->unk_1c & 1) {
                continue;
            }
            if (o->unk_1c & 1) {
                continue;
            }
            if (data_021ce638->unk_1c & 2) {
                if (o->unk_1c & 2) {
                    continue;
                }
            }
            if (data_021ce638->unk_1c & 2) {
                o->unk_14 = 0;
                pen = func_01ffc5a4(pen, len);
                o->unk_10 += func_01ffcb0c(d.x, pen);
                o->unk_18 += func_01ffcb0c(d.z, pen);
            } else if (o->unk_1c & 2) {
                data_021ce638->unk_14 = 0;
                pen = func_01ffc5a4(pen, len);
                data_021ce638->unk_10 -= func_01ffcb0c(d.x, pen);
                data_021ce638->unk_18 -= func_01ffcb0c(d.z, pen);
            } else {
                w0 = data_021ce638->unk_34;
                w1 = o->unk_34;
                k = func_01ffc5a4(pen, len) >> 1;
                sumM = w0 + w1;
                s32 f1 = func_01ffcb0c(k, func_01ffc5a4(w1, sumM));
                pen = func_01ffcb0c(k, func_01ffc5a4(w0, sumM));
                o->unk_14 = 0;
                data_021ce638->unk_14 = 0;
                data_021ce638->unk_10 -= func_01ffcb0c(d.x, f1);
                data_021ce638->unk_18 -= func_01ffcb0c(d.z, f1);
                o->unk_10 += func_01ffcb0c(d.x, pen);
                o->unk_18 += func_01ffcb0c(d.z, pen);
            }
        }
        data_021ce638 = data_021ce638->unk_38;
    }
}

BOOL Unk_020e0d08::func_02088d38(u32 mask) {
    if (unk_3c) {
        if (unk_28 & mask) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

Unk_020e0cf4::Unk_020e0cf4() {
    unk_40 = 0;
}

Unk_020e0cf4::~Unk_020e0cf4() {
}

Vec3 *Unk_020e0cf4::vfunc_00() { return (Vec3 *)(unk_40 + 0x5c); }

u32 Unk_020e0cf4::vfunc_04() { return *(u32 *)(unk_40 + 4); }

void Unk_020e0cf4::func_02088c98(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    unk_40 = (u8 *)p;
    func_02089078(a, b, c, d, e, f, g);
}

void Unk_020e0d1c::func_02088c64(Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    unk_40 = *v;
    func_02089078(a, b, c, d, e, f, g);
}

Unk_020e0d30::Unk_020e0d30() {
}

Unk_020e0d30::~Unk_020e0d30() {
}

void Unk_020e0d30::func_02088bf8(void *p, Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    func_02088c98(p, a, b, c, d, e, f, g);
    unk_44 = *v;
}

Unk_020e0d1c::Unk_020e0d1c() {
}

Unk_020e0d1c::~Unk_020e0d1c() {
}

