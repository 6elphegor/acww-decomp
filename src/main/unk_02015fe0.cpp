#include "types.h"

struct Unk_02015fe0_Vec {
    s32 x, y, z;
};

// Big scene object (Unk_020d77a4-like); only the fields used here.
struct Unk_02015fe0_Obj {
    u8 unk_00[0x5c];
    s32 unk_5c;
    u8 unk_60[4];
    s32 unk_64;
    u8 unk_68[0x8e - 0x68];
    s16 unk_8e;
    u8 unk_90[4];
    s16 unk_94;
    u8 unk_96[0xec - 0x96];
    u8 unk_ec[0x2a0 - 0xec];
    u8 unk_2a0[0xc];
    u8 unk_2ac[0x334 - 0x2ac];
    u8 unk_334[0x1c];
    u8 unk_350[0x3a8 - 0x350];
    u8 unk_3a8[0x418 - 0x3a8];
    u8 unk_418[8];
};

extern "C" {
BOOL func_0204bae0(u16 *p);
s32 func_0205c570(void *p);
s32 func_0205c57c(s32 a);
s32 func_0205c588(s32 a, s32 b);
s32 func_0205c5ac(s32 a, s32 b);
s32 func_0205c5d0(void);
s32 func_0205ed30(u16 *p);
void func_02053e70(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_02053848(void *a, s32 b, s32 c);
void func_02053e28(void *a, s32 b, s32 c);
void func_02053980(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02053900(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
s32 func_0201ad28(void *p);
s32 func_0201ad24(void *p);
s32 func_0201ad20(void *p);
void func_02015b8c(void *a, void *b);
s32 func_02015e48(void *a, s32 b);
s32 func_0201a15c(void *a);
void func_02019a38(void *a, s32 b, s32 c, s32 d);
void *func_020820a0(void *a, s32 b);
void func_0205c2dc(void *a, s32 b, s32 c, s32 d);
void *func_0205c254(void *a);
void *func_021065dc(void *a);
void *func_021065f8(void *a, s32 b);
void func_02015ec4(void *a, s32 b);
BOOL func_02082140(void *a);
void func_02054710(void *a);
void func_020554a0(void *a, void *b, s32 c, s32 d, void *e, s32 f);
s32 func_02015fc0(void *a);
void func_02015f9c(void *a);
void func_0201c050(void);
void func_020820ec(void *a);
void func_02082104(void *a);
BOOL func_0201b888(void *o, Unk_02015fe0_Vec *v, s16 *a);
void func_0201ab30(void *a);
void func_0201ab4c(void *a, void *b, s32 c, s32 d, u32 e);
s32 func_0201ab48(void *a);
void func_0201a99c(void *a, s32 b);
s32 func_0201a994(void *a);
void func_0201a9ec(void *a, Unk_02015fe0_Vec *v);
void func_0201a97c(void *a, Unk_02015fe0_Vec *v);
BOOL func_0201bd84(s16 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
extern u16 data_020c6cc8;
extern Unk_02015fe0_Vec data_021f4880;
}

static inline BOOL Unk_02015fe0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

class Unk_02016350 {
public:
    u8 unk_00[0xc];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    u8 unk_18[4];

    Unk_02016350();
    ~Unk_02016350();
    void func_02015fe0(Unk_02015fe0_Obj *o, u16 *p, void *q, u16 x);
    void func_0201610c(Unk_02015fe0_Obj *o, s32 kind, s32 a3, s32 a4, s32 a5, u16 a6, s32 mode);
    BOOL func_0201622c(s32 mode, void *p);
    s32 func_02016254(s32 mode, void *p);
    void *func_0201628c(s32 a, s32 b);
    BOOL func_020162c4(Unk_02015fe0_Obj *o, s32 a);
};

Unk_02016350::~Unk_02016350() {
    func_020820ec(this);
}

Unk_02016350::Unk_02016350() {
    func_02082104(this);
}

void Unk_02016350::func_02015fe0(Unk_02015fe0_Obj *o, u16 *p, void *q, u16 x) {
    if (func_0204bae0(p)) {
        if (func_0205c570(q) != 3) {
            if (Unk_02015fe0_R(p, 0x1369, 0x1369)) {
                void *r = func_0201628c(0x13f, 1);
                if (r) {
                    func_02053e70(o->unk_ec, r, x, 0, 0x1000, 0, 0, 0);
                    func_02053848(o->unk_ec, 0xc, 0xe);
                }
            } else {
                s32 id = func_0205ed30(p);
                if (id != 0x144) {
                    void *r = func_0201628c(id, 1);
                    if (r) {
                        func_02053e70(o->unk_ec, r, x, 0, 0x1000, 0, 0, 0);
                        s32 t = func_0205c57c(id);
                        if (t < 4) {
                            u32 n = func_0205c5d0();
                            for (u32 i = 0; i < n; i++) {
                                s32 a = func_0205c5ac(t, i);
                                func_02053848(o->unk_ec, a, func_0205c588(t, i));
                            }
                        } else {
                            func_02053e28(o->unk_ec, 0, 0);
                        }
                    }
                } else {
                    func_02053e28(o->unk_ec, 0, 0);
                }
            }
        } else {
            func_02053e28(o->unk_ec, 0, 0);
        }
    } else {
        func_02053e28(o->unk_ec, 0, 0);
    }
}

void Unk_02016350::func_0201610c(Unk_02015fe0_Obj *o, s32 kind, s32 a3, s32 a4, s32 a5, u16 a6, s32 mode) {
    u32 v;
    if (a6 == 0) {
        switch (a4) {
        case 2:
        case 3:
            v = 0xffff;
            goto vdone;
        }
    }
    v = a6;
vdone:
    if (mode >= 0 && mode < 3)
    switch (mode) {
    case 0: {
        s32 size = func_02016254(kind, o->unk_2a0);
        if (size != func_0201ad28(o->unk_2a0) || !func_0201622c(size, o->unk_2a0)) {
            void *r = func_0201628c(size, mode);
            if (r) {
                func_02053980(o->unk_ec, r, a3, a4, a5, v, 0);
            }
        }
        func_02015b8c(this, o);
        s32 t = func_02015e48(this, 0);
        s32 u = func_0201a15c(o->unk_418);
        func_02019a38(o->unk_2ac, t, a4, u);
        break;
    }
    case 1: {
        void *r = func_0201628c(kind, mode);
        if (r) {
            func_02053e70(o->unk_ec, r, a3, a4, a5, v, 0, 0);
        }
        break;
    }
    case 2: {
        void *r = func_0201628c(kind, mode);
        if (r) {
            func_02053900(o->unk_ec, r, a3, a4, a5, v, 0, 0);
        }
        break;
    }
    }
}

BOOL Unk_02016350::func_0201622c(s32 mode, void *p) {
    s32 a = func_02016254(mode, p);
    s32 b = func_02015e48(this, 0);
    if (a == b) return TRUE;
    return FALSE;
}

s32 Unk_02016350::func_02016254(s32 mode, void *p) {
    switch (mode) {
    case 0:
        mode = func_0201ad28(p);
        break;
    case 1:
        mode = func_0201ad24(p);
        break;
    case 2:
        mode = func_0201ad20(p);
        break;
    }
    return mode;
}

void *Unk_02016350::func_0201628c(s32 a, s32 b) {
    void *p = func_020820a0(this, b);
    void *r = 0;
    if (p) {
        func_0205c2dc(p, a, 0, 0);
        void *q = func_0205c254(p);
        q = func_021065dc(q);
        r = func_021065f8(q, 0);
    }
    return r;
}

BOOL Unk_02016350::func_020162c4(Unk_02015fe0_Obj *o, s32 a) {
    func_02015ec4(this, 0);
    unk_14 = a;
    if (!func_02082140(this)) return FALSE;
    func_0201610c(o, 0, 0, 0, 0x1000, 0, 0);
    func_02054710(o->unk_ec);
    func_020554a0(o->unk_ec, (void *)func_0201c050, 6, 1, o, 0);
    unk_0c = 2;
    if (!func_02015fc0(this)) func_02015f9c(this);
    unk_10 = 0;
    return TRUE;
}

class Unk_02016360;
typedef void (Unk_02016360::*Unk_02016360_Fn)(Unk_02015fe0_Obj *);

class Unk_02016360 {
public:
    s32 unk_00;
    u8 pad_04[0x94];
    u8 unk_98;

    void func_02016360(Unk_02015fe0_Obj *o);
    void func_020163f0(Unk_02015fe0_Obj *o);
    void func_020165a4(Unk_02015fe0_Obj *o);
    void func_02016714(Unk_02015fe0_Obj *o);
    void func_020168d8(Unk_02015fe0_Obj *o);
};

void Unk_02016360::func_02016360(Unk_02015fe0_Obj *o) {
    static Unk_02016360_Fn tbl[4] = {
        &Unk_02016360::func_020168d8,
        &Unk_02016360::func_02016714,
        &Unk_02016360::func_020165a4,
        &Unk_02016360::func_020163f0,
    };
    if (unk_98 < 4) {
        (this->*tbl[unk_98])(o);
    }
}

void Unk_02016360::func_020163f0(Unk_02015fe0_Obj *o) {
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    func_0201ab30(o->unk_350);
    if (func_0201b888(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d == 0) {
            o->unk_94 = o->unk_8e;
            if (ang != o->unk_8e) {
                func_0201ab4c(o->unk_350, o, 3, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, ang);
                unk_98 = 2;
            } else {
                func_0201ab4c(o->unk_350, o, 0, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, ang);
                func_0201a9ec(o->unk_350, &data_021f4880);
                func_0201a97c(o->unk_350, &data_021f4880);
                unk_98 = 0;
            }
        } else if (d >= 0x29) {
            s32 a = func_020e7b98(dx, dz);
            if (func_0201bd84(a - ang)) {
                if (unk_00 == 2) {
                    func_0201ab4c(o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    func_0201ab4c(o->unk_350, o, 1, 0, data_020c6cc8);
                }
                o->unk_94 = o->unk_8e;
                func_0201a99c(o->unk_350, ang);
                unk_98 = 1;
            } else {
                func_0201a99c(o->unk_350, a);
            }
            func_0201a9ec(o->unk_350, &pos);
            func_0201a97c(o->unk_350, &pos);
        }
    } else {
        func_0201ab4c(o->unk_350, o, 0, 0, data_020c6cc8);
        func_0201a99c(o->unk_350, ang);
        func_0201a9ec(o->unk_350, &data_021f4880);
        func_0201a97c(o->unk_350, &data_021f4880);
        unk_98 = 0;
    }
}

void Unk_02016360::func_020165a4(Unk_02015fe0_Obj *o) {
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    if (func_0201b888(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            s16 a = ang;
            if (a != func_0201a994(o->unk_350)) {
                func_0201a99c(o->unk_350, a);
            } else {
                s32 c = func_0201a994(o->unk_350);
                if (c == o->unk_8e) unk_98 = 0;
            }
        } else {
            s32 a = func_020e7b98(dx, dz);
            if (func_0201bd84(a - ang)) {
                if (unk_00 == 2) {
                    func_0201ab4c(o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    func_0201ab4c(o->unk_350, o, 1, 0, data_020c6cc8);
                }
                func_0201a99c(o->unk_350, ang);
                unk_98 = 1;
            } else {
                func_0201ab4c(o->unk_350, o, 4, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, a);
                unk_98 = 3;
            }
            func_0201a9ec(o->unk_350, &pos);
            func_0201a97c(o->unk_350, &pos);
        }
    } else {
        func_0201ab4c(o->unk_350, o, 0, 0, data_020c6cc8);
        func_0201a99c(o->unk_350, ang);
        func_0201a9ec(o->unk_350, &data_021f4880);
        func_0201a97c(o->unk_350, &data_021f4880);
        unk_98 = 0;
    }
}

void Unk_02016360::func_02016714(Unk_02015fe0_Obj *o) {
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    func_0201ab30(o->unk_350);
    if (func_0201b888(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->unk_8e) {
                func_0201ab4c(o->unk_350, o, 3, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, ang);
                unk_98 = 2;
            } else {
                func_0201ab4c(o->unk_350, o, 0, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, ang);
                func_0201a9ec(o->unk_350, &data_021f4880);
                func_0201a97c(o->unk_350, &data_021f4880);
                unk_98 = 0;
            }
        } else {
            if (!func_0201bd84(func_020e7b98(dx, dz) - ang)) {
                func_0201ab4c(o->unk_350, o, 3, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, ang);
                unk_98 = 2;
            } else {
                if (func_0201ab48(o->unk_350) == 1) {
                    if (unk_00 == 2) {
                        func_0201ab4c(o->unk_350, o, 2, 0, data_020c6cc8);
                    }
                } else if (func_0201ab48(o->unk_350) == 2) {
                    if (unk_00 == 1) {
                        func_0201ab4c(o->unk_350, o, 1, 0, data_020c6cc8);
                    }
                }
                func_0201a9ec(o->unk_350, &pos);
                func_0201a97c(o->unk_350, &pos);
            }
        }
    } else {
        func_0201ab4c(o->unk_350, o, 0, 0, data_020c6cc8);
        func_0201a99c(o->unk_350, ang);
        func_0201a9ec(o->unk_350, &data_021f4880);
        func_0201a97c(o->unk_350, &data_021f4880);
        unk_98 = 0;
    }
}

void Unk_02016360::func_020168d8(Unk_02015fe0_Obj *o) {
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    if (func_0201b888(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->unk_8e) {
                func_0201ab4c(o->unk_350, o, 3, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, ang);
                unk_98 = 2;
            } else if (func_0201ab48(o->unk_350)) {
                func_0201ab4c(o->unk_350, o, 0, 0, data_020c6cc8);
                func_0201a9ec(o->unk_350, &data_021f4880);
                func_0201a97c(o->unk_350, &data_021f4880);
            }
        } else {
            s32 a = func_020e7b98(dx, dz);
            if (func_0201bd84(a - ang)) {
                if (unk_00 == 2) {
                    func_0201ab4c(o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    func_0201ab4c(o->unk_350, o, 1, 0, data_020c6cc8);
                }
                func_0201a99c(o->unk_350, ang);
                unk_98 = 1;
            } else {
                func_0201ab4c(o->unk_350, o, 4, 0, data_020c6cc8);
                func_0201a99c(o->unk_350, a);
                unk_98 = 3;
            }
            func_0201a9ec(o->unk_350, &pos);
            func_0201a97c(o->unk_350, &pos);
        }
    }
}
