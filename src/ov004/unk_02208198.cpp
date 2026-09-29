#include "types.h"

struct Unk_ov004_02208980_E {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[12];
    s32 *unk_18;
    u8 pad_1c[4];
};

struct Unk_ov004_0224882c {
    u8 pad_00[0x7c0];
    Unk_ov004_02208980_E unk_7c0[4];
};

struct Unk_ov004_02208284_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02208284_M {
    s64 v[6];
};

struct Unk_ov004_02208470_V : Unk_ov004_02208284_V3 {
    inline Unk_ov004_02208470_V(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_ov004_02208470_V();
};

struct Unk_ov004_022081b4_List {
    u32 v[9];
};

struct Unk_ov004_02208a18_Rec {
    u32 unk_00;
    u16 unk_04;
};

typedef Unk_ov004_0224882c Self;

extern "C" {
extern u32 data_ov004_0223fffc[];
extern u32 *data_ov004_022487d0[];
extern Unk_ov004_02208284_M data_021f47e0;
extern s16 data_ov004_0224f600;
extern s16 data_ov004_0224f5fc;
extern u32 data_ov004_02252058[];
extern u32 data_021c47c4;

void func_ov004_022056bc(Self *self, u32 v);
void func_ov004_02206558(Unk_ov004_022081b4_List *l);
void func_ov004_02206554(Unk_ov004_022081b4_List *l);
u32 func_ov004_0220652c(Unk_ov004_022081b4_List *l);
Unk_ov004_02208284_V3 *func_ov004_02206520(Unk_ov004_022081b4_List *l, s32 i);
void func_ov004_02207c40(Self *self, void *l, s32 a, s32 b);
u16 *func_0204ebd8(u32 g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_0204b300(u16 *c);
void func_0204ed8c(void *out, s32 x, s32 y);
s32 func_ov004_02234f80(s32 x, s32 y);
u32 func_020b50b4();
u32 func_020b50e8();
void func_020b6860(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d);
void func_020b68ec(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020b6928(u32 o, void *p);
s32 func_020b52d0();
BOOL func_ov004_02206f8c(Self *self);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffca8c(void *a, void *b, void *c);
void func_01ffb898(void *a, void *b, void *c);
s32 func_02031960(void *o, void *p, s32 a, void *q);
void func_02031908(void *o, s32 a, s32 b, s32 c, void *p, s32 d, void *q);
void func_020318cc(void *o);
void func_ov004_022069a4(void *o);
void func_ov004_022069ac(void *o, void *p);
Self *func_ov004_0223584c();
u32 func_ov004_02235740(Self *a, Self *b);
Self *func_ov004_02235720(Self *a, s32 b);
s32 func_ov004_02205e84(void *o);
s32 func_ov004_02205e8c(void *o);
s32 *func_ov004_02205e80(void *o);
s32 func_ov004_02205e78(void *o);
void func_ov004_02205c54(void *o, s32 a);
s32 func_ov004_02235d10();
void func_ov004_022088c0(Self *self, Unk_ov004_02208284_V3 *out);
void func_ov004_02208470(Self *self, Unk_ov004_02208284_V3 *out);
s32 func_ov004_022087a4(Self *self);
s32 func_ov004_0220865c(Self *self, s32 a, s32 b);
void func_ov004_02208910(Self *self, void *out, s32 i);
void func_ov004_02208938(Self *self, void *out, void *src);
BOOL func_ov004_02208870(Self *self, s32 a, void *p, s32 b);
s32 func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020e8434(void *m, s32 a);
s32 func_020e8404(void *m, s32 a);
s32 func_020e8528(void *m, s32 x, s32 y, s32 z);
s32 func_020e9650(void *a, void *b);
s32 func_02052cbc();
void *func_02095204(s32 i);
s32 func_02081780();
void *func_02081718(s32 i);
s32 func_0209750c();
s32 func_0209888c();
s32 func_02094058();
s32 func_02054584(void *o);
void func_0205439c(void *o);
s32 func_02056654(void *o);
void func_020566bc(void *o);
s32 func_ov004_02206e74(void *o);
u32 func_020554c0(void *o);
void func_02055b00(void *o, u32 a, void *b, s32 c, s32 d, u16 e);
void func_02055aac(void *o, u32 a, void *b, s32 c, s32 d, s32 e, u16 f);
void func_02054720(void *o, void *a, s32 b, s32 c, u16 d, s32 e);
void func_0209c25c(void *a, void *b);
void *func_ov004_02206be4(void *o);
Unk_ov004_02208a18_Rec *func_ov004_022063b0(void *l, s32 k);
Unk_ov004_02208a18_Rec *func_ov004_022063bc(void *l, s32 k);
Unk_ov004_02208a18_Rec *func_ov004_022063a4(void *l, s32 k);
Unk_ov004_02208a18_Rec *func_ov004_02206398(void *l, s32 k);
Unk_ov004_02208a18_Rec *func_ov004_022063c8(void *l, s32 k);
s32 func_ov004_02206a14(void *l);
}

#define B8(o) (*(u8 *)((u8 *)self + (o)))
#define S32(o) (*(s32 *)((u8 *)self + (o)))
#define S16(o) (*(s16 *)((u8 *)self + (o)))
#define PT(o) ((void *)((u8 *)self + (o)))

extern "C" {

void func_ov004_02208198(Self *self) {
    func_ov004_022056bc(self, data_ov004_0223fffc[S32(0x768)]);
}

void func_ov004_022081b4(Self *self) {
    if (B8(0x284) == 0 && S32(0x784) == 1) {
        Unk_ov004_022081b4_List l;
        Unk_ov004_02208284_V3 v;
        u32 grid;
        u32 i;
        func_ov004_02206558(&l);
        func_ov004_02207c40(self, &l, 0, 0);
        grid = data_021c47c4;
        for (i = 0; i < func_ov004_0220652c(&l); i++) {
            s32 x = func_ov004_02206520(&l, i)->x;
            s32 y = func_ov004_02206520(&l, i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *c = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (c) {
                if (func_0204b300(c)) {
                    func_0204ed8c(&v, x, y);
                    v.y = func_ov004_02234f80(x, y);
                    func_020b6860(func_020b50b4(), (u8 *)self + 0x1cc + i * 0x20, &v, 0xccd, 0x100, 10, 0xff);
                }
            }
        }
        func_ov004_02206554(&l);
    }
}

void func_ov004_02208284(Self *self) {
    Unk_ov004_02208284_V3 a;
    s32 b[3];
    Unk_ov004_02208284_V3 c;
    if (!func_ov004_02206f8c(self)) {
        s32 r4;
        s32 t;
        func_ov004_02208470(self, &a);
        t = S32(0x158);
        b[0] = t;
        b[1] = t;
        b[2] = t;
        func_ov004_022088c0(self, &c);
        r4 = 0;
        if (B8(0x788) == 0) {
            if (B8(0x6c0) != 0) {
                r4 = func_02031960(PT(0x628), &c, S16(0x8e), b);
            } else {
                r4 = 1;
            }
        }
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (r4 != 0) {
            u32 r6 = (u8)func_ov004_02235740(func_ov004_0223584c(), self);
            s32 k;
            if (func_020b52d0() != 0) {
                k = 0xf;
            } else {
                k = 8;
            }
            func_020b68ec(func_020b50b4(), PT(0x288), &c, a.x, a.z, a.y, S16(0x8e), k, r6);
        } else {
            func_020b6928(func_020b50b4(), PT(0x288));
        }
    }
}

void func_ov004_02208358(Self *self) {
    if (!func_ov004_02206f8c(self)) {
        if (B8(0x788) == 0) {
            func_020318cc(PT(0x628));
            func_ov004_022069a4(PT(0x628));
        }
    }
}

void func_ov004_0220838c(Self *self) {
    Unk_ov004_02208284_V3 a;
    s32 b[3];
    Unk_ov004_02208284_V3 c;
    if (!func_ov004_02206f8c(self)) {
        u32 r6;
        s32 k;
        func_ov004_02208470(self, &a);
        {
            s32 t = S32(0x158);
            b[0] = t;
            b[1] = t;
            b[2] = t;
        }
        func_ov004_022088c0(self, &c);
        if (B8(0x788) == 0) {
            Self *r4;
            func_ov004_022069ac(PT(0x628), self);
            r4 = func_ov004_0223584c();
            func_ov004_02235720(r4, func_ov004_02205e84(PT(0x178)));
            func_02031908(PT(0x628), a.x, a.z, 0x4000, &c, S16(0x8e), b);
        }
        r6 = (u8)func_ov004_02235740(func_ov004_0223584c(), self);
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (func_020b52d0() != 0) {
            k = 0xf;
        } else {
            k = 8;
        }
        func_020b68ec(func_020b50b4(), PT(0x288), &c, a.x, a.z, a.y, S16(0x8e), k, r6);
    }
}

void func_ov004_02208470(Self *self, Unk_ov004_02208284_V3 *out) {
    static Unk_ov004_02208470_V vs[3] = {Unk_ov004_02208470_V(0x2000, 0x2000, 0x2000),
                                         Unk_ov004_02208470_V(0x4000, 0x2000, 0x2000),
                                         Unk_ov004_02208470_V(0x4000, 0x2000, 0x4000)};
    volatile Unk_ov004_02208284_V3 r;
    func_020b50e8();
    {
        Unk_ov004_02208470_V *q = &vs[S32(0x780)];
        r.x = q->x;
        r.y = q->y;
        r.z = q->z;
    }
    if (S32(0x78c) == 0) {
        r.y = 0x200;
    } else if (func_ov004_02235d10() != 0) {
        r.y = S32(0x78c);
    } else {
        r.y = S32(0x78c) >> 1;
    }
    out->x = r.x;
    out->y = r.y;
    out->z = r.z;
}

void func_ov004_02208554(Self *self) {
    if (func_ov004_02206f8c(self)) {
        func_020e8388(&data_021f47e0, S32(0x5c), S32(0x60), S32(0x64));
        func_020e8434(&data_021f47e0, data_ov004_0224f600);
        func_020e8404(&data_021f47e0, (s16)(S16(0x8e) + data_ov004_0224f5fc));
        if (S32(0x780) == 1) {
            func_020e8528(&data_021f47e0, func_01ffcb0c(S32(0x14c), -0x1000), 0, 0);
        }
        func_ov004_022087a4(self);
        s32 y = func_02052cbc() * 100 - 0x258;
        func_020e8528(&data_021f47e0, 0, y, 0);
        *(Unk_ov004_02208284_M *)PT(0x598) = data_021f47e0;
    } else {
        func_ov004_0220865c(self, 0, 0);
        *(Unk_ov004_02208284_M *)PT(0x250) = data_021f47e0;
        if (S32(0x780) == 1) {
            func_020e8528(&data_021f47e0, func_01ffcb0c(0x1000 - S32(0x14c), 0x1000), 0, 0);
        }
        *(Unk_ov004_02208284_M *)PT(0x598) = data_021f47e0;
    }
}

s32 func_ov004_0220865c(Self *self, s32 a, s32 b) {
    if (func_ov004_02205e8c(PT(0x178))) {
        Self *p = func_ov004_0223584c();
        Self *q = func_ov004_02235720(p, func_ov004_02205e84(PT(0x178)));
        s32 r4, r6;
        if (a != 0 || b != 0) {
            func_ov004_0220865c(q, a, b);
        } else {
            data_021f47e0 = *(Unk_ov004_02208284_M *)((u8 *)q + 0x250);
        }
        r6 = func_ov004_02205e80(PT(0x178))[2];
        r4 = func_ov004_02205e80(PT(0x178))[1];
        s32 x = func_ov004_02205e80(PT(0x178))[0];
        func_020e8528(&data_021f47e0, x, r4, r6);
        func_020e8404(&data_021f47e0, func_ov004_02205e78(PT(0x178)));
    } else {
        Unk_ov004_02208284_V3 v;
        s32 ang;
        v.x = S32(0x5c);
        v.y = S32(0x60);
        v.z = S32(0x64);
        if (a != 0) {
            func_01ffca8c(&v, (void *)a, &v);
        }
        ang = (s16)(S16(0x8e) + b);
        func_020e8388(&data_021f47e0, v.x, v.y, v.z);
        func_020e8404(&data_021f47e0, ang);
        func_020e8528(&data_021f47e0, S32(0x140), S32(0x144), S32(0x148));
    }
}

u8 func_ov004_02208750(Self *self) {
    return B8(0x284);
}

BOOL func_ov004_0220875c(Self *self) {
    if (B8(0x779) == 0) {
        func_ov004_02205c54(PT(0x73c), 1);
        return TRUE;
    }
    return FALSE;
}

s32 func_ov004_02208788() {
    return 0;
}

s32 func_ov004_0220878c(Self *self, s32 a, u8 v) {
    B8(0x778) = v;
    B8(0x779) = 0;
    return 1;
}

s32 func_ov004_022087a4(Self *self) {
    return S32(0x280);
}

Self *func_ov004_022087b0(Self *self) {
    if (func_ov004_02205e8c(PT(0x178))) {
        Self *p = func_ov004_0223584c();
        return func_ov004_02235720(p, func_ov004_02205e84(PT(0x178)));
    }
    return 0;
}

BOOL func_ov004_022087e8(Self *self, s32 a, s32 b, s32 c, s32 d) {
    void *p;
    u32 i;
    u32 j;
    u32 n;
    p = func_02095204(4);
    if (p) {
        for (i = 0; i < 4; i++) {
            void *q = func_02095204(i);
            if (q && p != q) {
                if (func_ov004_02208870(self, a, (u8 *)q + 0x5c, c)) {
                    return FALSE;
                }
            }
        }
        n = func_02081780();
        for (j = 0; j < n; j++) {
            void *q = func_02081718(j);
            if (q) {
                if (func_ov004_02208870(self, b, (u8 *)q + 0x5c, d)) {
                    return FALSE;
                }
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov004_02208870(Self *self, s32 a, void *p, s32 b) {
    if (func_020e9650(self, p) < a + b) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov004_02208894() {
    if (func_0209750c() != 0) {
        if (func_0209888c() != 0) {
            if (func_02094058() == 0) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

void func_ov004_022088c0(Self *self, Unk_ov004_02208284_V3 *out) {
    u32 i = 0;
    Unk_ov004_02208284_V3 v;
    Unk_ov004_02208284_V3 t;
    v.x = i;
    v.y = i;
    v.z = i;
    for (; i < 4; i++) {
        func_ov004_02208910(self, &t, i);
        func_01ffca8c(&v, &t, &v);
    }
    v.x = v.x >> 2;
    v.y = v.y >> 2;
    v.z = v.z >> 2;
    out->x = v.x;
    out->y = v.y;
    out->z = v.z;
}

void func_ov004_02208910(Self *self, void *out, s32 i) {
    u32 *tbl = data_ov004_022487d0[S32(0x780)];
    func_ov004_02208938(self, out, (u8 *)tbl + (i & 3) * 12);
}

void func_ov004_02208938(Self *self, void *out, void *src) {
    data_021f47e0 = *(Unk_ov004_02208284_M *)PT(0x250);
    func_01ffb898(src, &data_021f47e0, out);
}

void func_ov004_02208968(Self *self) {
    func_0209c25c(data_ov004_02252058, (u8 *)self + 0x12e);
}

BOOL func_ov004_02208980(Self *self) {
    BOOL k = TRUE;
    BOOL r4 = TRUE;
    BOOL z = FALSE;
    u32 i;
    void *p;
    if (func_02054584(PT(0x534))) {
        func_0205439c(PT(0x534));
        if (!func_02056654(PT(0x5d0))) {
            r4 = FALSE;
        }
    }
    for (i = z; i < 4; i++) {
        if (func_ov004_02206e74(&self->unk_7c0[i])) {
            p = (Unk_ov004_02208980_E *)PT(0x7c0) + i;
            func_020566bc(p);
            *self->unk_7c0[i].unk_18 = self->unk_7c0[i].unk_08;
            if (!func_02056654(p)) {
                k = z;
            }
        }
    }
    if (k && r4) {
        return TRUE;
    }
    return FALSE;
}

void func_ov004_02208a18(Self *self, u32 a, s32 b, s32 c) {
    s32 k = a & 1;
    Unk_ov004_02208a18_Rec *q;
    if (func_ov004_022063b0(func_ov004_02206be4(PT(0x6c8)), k)) {
        q = func_ov004_022063b0(func_ov004_02206be4(PT(0x6c8)), k);
        func_02055b00(PT(0x820), func_020554c0(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (func_ov004_022063bc(func_ov004_02206be4(PT(0x6c8)), k)) {
        q = func_ov004_022063bc(func_ov004_02206be4(PT(0x6c8)), k);
        func_02055b00(PT(0x7c0), func_020554c0(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (func_ov004_022063a4(func_ov004_02206be4(PT(0x6c8)), k)) {
        q = func_ov004_022063a4(func_ov004_02206be4(PT(0x6c8)), k);
        func_02055b00(PT(0x7e0), func_020554c0(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (func_ov004_02206398(func_ov004_02206be4(PT(0x6c8)), k)) {
        u32 obj;
        q = func_ov004_02206398(func_ov004_02206be4(PT(0x6c8)), k);
        obj = func_020554c0(PT(0x534));
        func_02055aac(PT(0x800), obj, q, func_ov004_02206a14(PT(0x6c8)), b, c, (u16)(q->unk_04 - 1));
    }
    if (func_ov004_022063c8(func_ov004_02206be4(PT(0x6c8)), k)) {
        q = func_ov004_022063c8(func_ov004_02206be4(PT(0x6c8)), k);
        func_02054720(PT(0x534), q, b, c, (u16)(q->unk_04 - 1), 0);
    }
}

}
