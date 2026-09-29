#include "types.h"

struct Unk_ov004_02205d8c_Vec {
    s32 x, y, z;
};

struct Unk_ov004_02205eb0_Mtx {
    s64 v[6];
};

struct Unk_ov004_02205c80_Obj {
    u8 pad_00[0x8e];
    s16 unk_8e;
    u8 pad_90[0x284 - 0x90];
    u8 unk_284;
    u8 pad_285[0x598 - 0x285];
    Unk_ov004_02205eb0_Mtx unk_598;
    u8 pad_5c8[0x768 - 0x5c8];
    s32 unk_768;
    u8 pad_76c[0x789 - 0x76c];
    u8 unk_789;
    u8 pad_78a[2];
    s32 unk_78c;
};

struct Unk_02056fd8 {
    s32 func_02057110(s32 a);
};

struct Unk_ov004_02206520_Pair {
    s32 x, y;
};

// list of up to 4 tile positions (ctor/dtor/methods are defined elsewhere)
struct Unk_ov004_02206520 {
    Unk_ov004_02206520();
    ~Unk_ov004_02206520();
    Unk_ov004_02206520_Pair *func_02206520(u32 i);
    u32 func_0220652c();
    u32 unk_00;
    Unk_ov004_02206520_Pair unk_04[4];
};

struct Unk_020b22ac {
    Unk_020b22ac();
    ~Unk_020b22ac();
    BOOL func_020b22c4(BOOL on, s32 a, s32 b, u32 param);
    BOOL func_020b2374(BOOL on);
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

extern "C" {
void *func_ov004_02235718();
Unk_ov004_02205c80_Obj *func_ov004_022355d8(void *mgr, s32 a, s32 b, s32 c);
void *func_ov004_0223584c();
s32 func_ov004_02235740(void *mgr, Unk_ov004_02205c80_Obj *o);
BOOL func_ov004_02206f8c(Unk_ov004_02205c80_Obj *o);
BOOL func_ov004_0220711c(Unk_ov004_02205c80_Obj *o, s32 *a, s32 *b, s32 c, s32 d);
void func_ov004_0220865c(Unk_ov004_02205c80_Obj *o, s32 a, s32 b);
void func_ov004_02207c40(Unk_ov004_02205c80_Obj *o, Unk_ov004_02206520 *l, s32 a, s32 b);
void func_ov004_0222c4d8(u32 a, void *b, void *c, s32 d, s32 e, s32 f);
void func_0204ed8c(Unk_ov004_02205d8c_Vec *v, s32 x, s32 y);
void func_0204ee10(s32 *a, s32 *b, Unk_ov004_02205d8c_Vec *v);
void func_01ffbb6c(Unk_ov004_02205eb0_Mtx *a, Unk_ov004_02205eb0_Mtx *b);
void func_01ffb898(Unk_ov004_02205d8c_Vec *v, Unk_ov004_02205eb0_Mtx *m, Unk_ov004_02205d8c_Vec *out);
void func_020e8528(Unk_ov004_02205eb0_Mtx *m, s32 x, s32 y, s32 z);
void *func_020b50e8();
void func_02052554(s32 x, s32 y, u32 a, u32 b, void *mgr);
s32 func_02052580(s32 x, s32 y, u32 a, void *mgr);
void func_02051784(void *mgr, s32 x, s32 y, u16 *p, s32 a);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_0204b288(u16 *p);
BOOL func_0204b300(u16 *p);
BOOL func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
s32 func_0210629c(s32 p);
extern void *data_021c47c4;
extern Unk_ov004_02205eb0_Mtx data_021f47e0;
}

struct Unk_ov004_02205bcc : public Unk_020b22ac {
    Unk_ov004_02205bcc();
    ~Unk_ov004_02205bcc();
    void func_ov004_02205bcc(BOOL on, s32 a, s32 b);
    BOOL func_ov004_02205be4(Unk_02056fd8 *res, s32 idx, BOOL on);
    s8 unk_14;
    Unk_02056fd8 *unk_18;
};

void Unk_ov004_02205bcc::func_ov004_02205bcc(BOOL on, s32 a, s32 b) {
    func_020b22c4(on, a, b, 0x800);
}

BOOL Unk_ov004_02205bcc::func_ov004_02205be4(Unk_02056fd8 *res, s32 idx, BOOL on) {
    if (res != NULL) {
        unk_14 = res->func_02057110(idx);
        if (unk_14 != -1) {
            func_020b2374(on);
            unk_18 = res;
            return TRUE;
        }
    }
    return FALSE;
}

Unk_ov004_02205bcc::~Unk_ov004_02205bcc() {
}

Unk_ov004_02205bcc::Unk_ov004_02205bcc() {
    unk_14 = -1;
    unk_18 = NULL;
}

struct Unk_ov004_02205c44 {
    ~Unk_ov004_02205c44();
    void func_ov004_02205c44(u32 v, s32 flag);
    void func_ov004_02205c54(s32 flag);
    BOOL func_ov004_02205c6c();
    u8 func_ov004_02205c7c();
    void func_ov004_02205c80(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205cc4(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205cdc(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205d50();
    u8 unk_00;
    u8 unk_01;
};

void Unk_ov004_02205c44::func_ov004_02205c44(u32 v, s32 flag) {
    if (flag != 0) {
        unk_01 = v;
    } else {
        unk_00 = v;
        unk_01 = unk_00;
    }
}

void Unk_ov004_02205c44::func_ov004_02205c54(s32 flag) {
    func_ov004_02205c44(((unk_01 + 1) & 1) != 0 ? TRUE : FALSE, flag);
}

BOOL Unk_ov004_02205c44::func_ov004_02205c6c() {
    if (unk_00 != unk_01) {
        return TRUE;
    }
    return FALSE;
}

u8 Unk_ov004_02205c44::func_ov004_02205c7c() {
    return unk_01;
}

void Unk_ov004_02205c44::func_ov004_02205c80(Unk_ov004_02205c80_Obj *o) {
    if (func_ov004_02206f8c(o) == 0) {
        s32 x, y;
        if (func_ov004_0220711c(o, &x, &y, 0, 0)) {
            func_02052554(x, y, o->unk_284, unk_01, func_020b50e8());
        }
    }
}

void Unk_ov004_02205c44::func_ov004_02205cc4(Unk_ov004_02205c80_Obj *o) {
    if (func_ov004_02206f8c(o) == 0) {
        unk_00 = unk_01;
    }
}

void Unk_ov004_02205c44::func_ov004_02205cdc(Unk_ov004_02205c80_Obj *o) {
    s32 r = 0;
    s32 x, y;
    if (o->unk_768 == 1 || func_ov004_02206f8c(o) != 0) {
        if (o->unk_789 == 0) {
            r = 1;
        } else {
            r = 0;
        }
    } else {
        if (func_ov004_0220711c(o, &x, &y, r, r)) {
            void *mgr = func_020b50e8();
            r = func_02052580(x, y, o->unk_284, mgr);
        }
    }
    func_ov004_02205c44(r, 0);
}

void Unk_ov004_02205c44::func_ov004_02205d50() {
    unk_01 = 0;
    unk_00 = unk_01;
}

struct Unk_ov004_02205d5c {
    ~Unk_ov004_02205d5c();
    void func_ov004_02205d5c(s32 a, s32 b);
    void func_ov004_02205d7c();
    s8 unk_00;
    s8 unk_01;
    u8 unk_02;
};

void Unk_ov004_02205d5c::func_ov004_02205d5c(s32 a, s32 b) {
    unk_00 = a;
    unk_01 = b;
    if (unk_00 == -1 && unk_01 == -1) {
    } else {
        unk_02 = 1;
    }
}

void Unk_ov004_02205d5c::func_ov004_02205d7c() {
    unk_01 = -1;
    unk_00 = unk_01;
    unk_02 = 0;
}

struct Unk_ov004_02205e58 {
    ~Unk_ov004_02205e58();
    BOOL func_ov004_02205e20(s32 x, s32 y, s16 z);
    BOOL func_ov004_02205e58(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang);
    s32 func_ov004_02205e78();
    Unk_ov004_02205d8c_Vec *func_ov004_02205e80();
    s32 func_ov004_02205e84();
    BOOL func_ov004_02205e8c();
    void func_ov004_02205ea0();
    s16 unk_00;
    s16 unk_02;
    Unk_ov004_02205d8c_Vec unk_04;
};

extern "C" BOOL func_ov004_02205d8c(s32 *idx, Unk_ov004_02205d8c_Vec *pos, s16 *ang, s32 x, s32 a, s16 b) {
    void *mgr = func_ov004_02235718();
    Unk_ov004_02205c80_Obj *e = func_ov004_022355d8(mgr, x, a, 0);
    s32 i = func_ov004_02235740(func_ov004_0223584c(), e);
    if (e != NULL && i != -1) {
        Unk_ov004_02205d8c_Vec t;
        Unk_ov004_02205d8c_Vec d;
        func_0204ed8c(&t, x, a);
        t.y = e->unk_78c;
        func_ov004_0220865c(e, 0, 0);
        func_01ffbb6c(&data_021f47e0, &data_021f47e0);
        func_01ffb898(&t, &data_021f47e0, &d);
        *idx = i;
        pos->x = d.x;
        pos->y = d.y;
        pos->z = d.z;
        *ang = b - e->unk_8e;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_02205e58::func_ov004_02205e20(s32 x, s32 y, s16 z) {
    s32 idx;
    Unk_ov004_02205d8c_Vec pos;
    s16 ang;
    if (func_ov004_02205d8c(&idx, &pos, &ang, x, y, z)) {
        return func_ov004_02205e58(idx, &pos, ang);
    }
    return FALSE;
}

BOOL Unk_ov004_02205e58::func_ov004_02205e58(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang) {
    if (idx >= 0 && (u32)idx < 0x1c) {
        unk_00 = idx;
        unk_04.x = pos->x;
        unk_04.y = pos->y;
        unk_04.z = pos->z;
        unk_02 = ang;
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov004_02205e58::func_ov004_02205e78() {
    return unk_02;
}

Unk_ov004_02205d8c_Vec *Unk_ov004_02205e58::func_ov004_02205e80() {
    return &unk_04;
}

s32 Unk_ov004_02205e58::func_ov004_02205e84() {
    return unk_00;
}

BOOL Unk_ov004_02205e58::func_ov004_02205e8c() {
    BOOL r = FALSE;
    if (unk_00 != -1) {
        r = TRUE;
    }
    return r;
}

void Unk_ov004_02205e58::func_ov004_02205ea0() {
    unk_00 = -1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
    unk_02 = 0;
}

struct Unk_ov004_022062f4 {
    Unk_ov004_022062f4();
    ~Unk_ov004_022062f4();
    BOOL func_ov004_022062c8(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    u16 *func_ov004_022062f4();
    Unk_ov004_02205d8c_Vec *func_ov004_022062f8();
    void func_ov004_022062fc();
    BOOL func_ov004_02206310();
    void func_ov004_02206234(Unk_ov004_02205c80_Obj *o);
    u16 unk_00;
    u16 unk_02;
    Unk_ov004_02205d8c_Vec unk_04;
};

struct Unk_ov004_02205f58_S {
    Unk_ov004_02205f58_S() {
        unk_00 = 0xfff1;
    }
    ~Unk_ov004_02205f58_S();
    u16 unk_00;
};

static inline BOOL Unk_ov004_0220607c_IsEmpty(u16 *p) {
    BOOL r;
    if (func_0204b2d4(p)) {
        u16 t = 0xfff1;
        r = (func_0204b25c(p) == func_0204b25c(&t)) ? TRUE : FALSE;
    } else {
        r = (*p == 0xfff1) ? TRUE : FALSE;
    }
    return r;
}

struct Unk_ov004_022061b4 {
    Unk_ov004_022061b4();
    ~Unk_ov004_022061b4();
    void func_ov004_02205eb0(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_02205f58(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_0220607c(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_0220614c(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    void func_ov004_02206190(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_022062f4 *func_ov004_022061b4(u32 i);
    void func_ov004_022061c4();
    u32 unk_00;
    Unk_ov004_022062f4 unk_04[4];
};

void Unk_ov004_022062f4::func_ov004_022062fc() {
    unk_02 = 0xfff1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
}

Unk_ov004_022062f4::~Unk_ov004_022062f4() {
}

Unk_ov004_022062f4::Unk_ov004_022062f4() {
    unk_02 = 0xfff1;
    func_ov004_022062fc();
}

BOOL Unk_ov004_022062f4::func_ov004_02206310() {
    BOOL r;
    if (func_0204b2d4(&unk_02)) {
        u16 t = 0xfff1;
        if (func_0204b25c(&unk_02) == func_0204b25c(&t)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (unk_02 == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    if (r) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov004_022062f4::func_ov004_022062c8(u16 *id, Unk_ov004_02205d8c_Vec *pos) {
    if (func_ov004_02206310() == 0) {
        unk_02 = *id;
        unk_04.x = pos->x;
        unk_04.y = pos->y;
        unk_04.z = pos->z;
        return TRUE;
    }
    return FALSE;
}

u16 *Unk_ov004_022062f4::func_ov004_022062f4() {
    return &unk_02;
}

Unk_ov004_02205d8c_Vec *Unk_ov004_022062f4::func_ov004_022062f8() {
    return &unk_04;
}

void Unk_ov004_022062f4::func_ov004_02206234(Unk_ov004_02205c80_Obj *o) {
    if (func_ov004_02206310()) {
        Unk_ov004_02205d8c_Vec z, d, p, s;
        data_021f47e0 = o->unk_598;
        s32 x, y, c;
        c = func_ov004_022062f8()->z;
        y = func_ov004_022062f8()->y;
        x = func_ov004_022062f8()->x;
        func_020e8528(&data_021f47e0, x, y, c);
        z.x = 0;
        z.y = 0;
        z.z = 0;
        func_01ffb898(&z, &data_021f47e0, &d);
        p.x = d.x;
        p.y = d.y;
        p.z = d.z;
        s.x = 0x1000;
        s.y = 0x1000;
        s.z = 0x1000;
        func_ov004_0222c4d8(*func_ov004_022062f4(), &p, &s, 0, 0, 0);
    }
}

Unk_ov004_022061b4::~Unk_ov004_022061b4() {
}

Unk_ov004_022061b4::Unk_ov004_022061b4() {
    func_ov004_022061c4();
}

Unk_ov004_022062f4 *Unk_ov004_022061b4::func_ov004_022061b4(u32 i) {
    if (i < 4) {
        return &unk_04[i];
    }
    return &unk_04[0];
}

void Unk_ov004_022061b4::func_ov004_022061c4() {
    u32 i;
    for (i = 0; i < 4; i++) {
        func_ov004_022061b4(i)->func_ov004_022062fc();
    }
}

void Unk_ov004_022061b4::func_ov004_02206190(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        func_ov004_022061b4(i)->func_ov004_02206234(o);
    }
}

BOOL Unk_ov004_022061b4::func_ov004_0220614c(u16 *id, Unk_ov004_02205d8c_Vec *pos) {
    u32 i;
    for (i = 0; i < 4; i++) {
        if (func_ov004_022061b4(i)->func_ov004_02206310() == 0) {
            func_ov004_022061b4(i)->func_ov004_022062c8(id, pos);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_022061b4::func_ov004_02205eb0(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        Unk_ov004_022062f4 *e = func_ov004_022061b4(i);
        if (e->func_ov004_02206310()) {
            Unk_ov004_02205d8c_Vec z, d;
            s32 a, b;
            z.x = 0;
            z.y = 0;
            z.z = 0;
            data_021f47e0 = o->unk_598;
            s32 x, y, c;
            c = e->func_ov004_022062f8()->z;
            y = e->func_ov004_022062f8()->y;
            x = e->func_ov004_022062f8()->x;
            func_020e8528(&data_021f47e0, x, y, c);
            func_01ffb898(&z, &data_021f47e0, &d);
            func_0204ee10(&a, &b, &d);
            void *mgr = func_020b50e8();
            func_02051784(mgr, a, b, e->func_ov004_022062f4(), 1);
        }
    }
    func_ov004_022061c4();
}

struct Unk_ov004_02206398 {
    ~Unk_ov004_02206398();
    s32 func_ov004_02206380();
    void *func_ov004_02206398(u32 i);
    void *func_ov004_022063a4(u32 i);
    void *func_ov004_022063b0(u32 i);
    void *func_ov004_022063bc(u32 i);
    void *func_ov004_022063c8(u32 i);
    void func_ov004_022063d4(s32 v);
    void func_ov004_022063d8(void *v, u32 i);
    void func_ov004_022063e4(void *v, u32 i);
    void func_ov004_022063f0(void *v, u32 i);
    void func_ov004_022063fc(void *v, u32 i);
    void func_ov004_02206408(void *v, u32 i);
    void func_ov004_02206418();
    void *unk_00[2];
    void *unk_08[2];
    void *unk_10[2];
    void *unk_18[2];
    void *unk_20[2];
    s32 unk_28;
};

s32 Unk_ov004_02206398::func_ov004_02206380() {
    if (unk_28 != 0) {
        return func_0210629c(unk_28);
    }
    return 0;
}

void *Unk_ov004_02206398::func_ov004_02206398(u32 i) {
    return unk_20[i & 1];
}

void *Unk_ov004_02206398::func_ov004_022063a4(u32 i) {
    return unk_18[i & 1];
}

void *Unk_ov004_02206398::func_ov004_022063b0(u32 i) {
    return unk_10[i & 1];
}

void *Unk_ov004_02206398::func_ov004_022063bc(u32 i) {
    return unk_08[i & 1];
}

void *Unk_ov004_02206398::func_ov004_022063c8(u32 i) {
    return unk_00[i & 1];
}

void Unk_ov004_02206398::func_ov004_022063d4(s32 v) {
    unk_28 = v;
}

void Unk_ov004_02206398::func_ov004_022063d8(void *v, u32 i) {
    unk_20[i & 1] = v;
}

void Unk_ov004_02206398::func_ov004_022063e4(void *v, u32 i) {
    unk_18[i & 1] = v;
}

void Unk_ov004_02206398::func_ov004_022063f0(void *v, u32 i) {
    unk_10[i & 1] = v;
}

void Unk_ov004_02206398::func_ov004_022063fc(void *v, u32 i) {
    unk_08[i & 1] = v;
}

void Unk_ov004_02206398::func_ov004_02206408(void *v, u32 i) {
    unk_00[i & 1] = v;
}

void Unk_ov004_02206398::func_ov004_02206418() {
    u32 i;
    unk_28 = 0;
    for (i = 0; i < 2; i++) {
        *(void **)((u8 *)this + i * 4) = NULL;
        unk_08[i] = NULL;
        unk_18[i] = NULL;
        unk_20[i] = NULL;
    }
}

struct Unk_ov004_02206434 {
    Unk_ov004_02206434();
    Unk_ov004_02206434(Unk_ov004_02206520 *l, s32 flag);
    BOOL func_ov004_02206434(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_02205c80_Obj *func_ov004_02206474(u32 i);
    u32 func_ov004_02206480();
    void func_ov004_022064b4(Unk_ov004_02206520 *l, s32 flag);
    void func_ov004_0220650c();
    u32 unk_00;
    Unk_ov004_02205c80_Obj *unk_04[4];
};

BOOL Unk_ov004_02206434::func_ov004_02206434(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    u32 n;
    if (o == NULL) {
        return FALSE;
    }
    n = unk_00;
    if (n >= 4) {
        return FALSE;
    }
    for (i = 0; i < n; i++) {
        if (unk_04[i] == o) {
            return FALSE;
        }
    }
    unk_00 = unk_00 + 1;
    unk_04[n] = o;
    return TRUE;
}

Unk_ov004_02205c80_Obj *Unk_ov004_02206434::func_ov004_02206474(u32 i) {
    return unk_04[i & 3];
}

u32 Unk_ov004_02206434::func_ov004_02206480() {
    return unk_00;
}

Unk_ov004_02206434::Unk_ov004_02206434() {
    func_ov004_0220650c();
}

Unk_ov004_02206434::Unk_ov004_02206434(Unk_ov004_02206520 *l, s32 flag) {
    func_ov004_0220650c();
    func_ov004_022064b4(l, flag);
}

void Unk_ov004_02206434::func_ov004_022064b4(Unk_ov004_02206520 *l, s32 flag) {
    u32 i;
    if (flag == 0) {
        for (i = 0; i < l->func_0220652c(); i++) {
            void *mgr = func_ov004_02235718();
            Unk_ov004_02206520_Pair *a = l->func_02206520(i);
            Unk_ov004_02206520_Pair *b = l->func_02206520(i);
            Unk_ov004_02205c80_Obj *o = func_ov004_022355d8(mgr, a->x, b->y, 1);
            if (o != NULL) {
                func_ov004_02206434(o);
            }
        }
    }
}

BOOL Unk_ov004_022061b4::func_ov004_02205f58(Unk_ov004_02205c80_Obj *o) {
    static Unk_ov004_02205f58_S dflt;
    BOOL res = TRUE;
    Unk_ov004_02206520 list;
    func_ov004_02207c40(o, &list, 0, 0);
    void *grid = data_021c47c4;
    if (func_ov004_0220607c(o)) {
        func_ov004_022061c4();
        func_ov004_0220865c(o, 0, 0);
        func_01ffbb6c(&data_021f47e0, &data_021f47e0);
        u32 i;
        for (i = 0; i < list.func_0220652c(); i++) {
            s32 x = list.func_02206520(i)->x;
            s32 y = list.func_02206520(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell != NULL && func_0204b300(cell)) {
                Unk_ov004_02205d8c_Vec v, d;
                func_0204ed8c(&v, x, y);
                v.y = o->unk_78c;
                func_01ffb898(&v, &data_021f47e0, &d);
                res &= func_ov004_0220614c(cell, &d);
                if (res != 0) {
                    res = 1;
                } else {
                    res = 0;
                }
            }
        }
        if (res == 0) {
            func_ov004_022061c4();
        }
    }
    return res;
}

BOOL Unk_ov004_022061b4::func_ov004_0220607c(Unk_ov004_02205c80_Obj *o) {
    Unk_ov004_02206520 list;
    func_ov004_02207c40(o, &list, 0, 0);
    void *grid = data_021c47c4;
    u32 i;
    for (i = 0; i < list.func_0220652c(); i++) {
        s32 y = list.func_02206520(i)->y;
        s32 x = list.func_02206520(i)->x;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
        if (cell != NULL && !func_0204b288(cell) && !func_0204b300(cell)) {
            if (Unk_ov004_0220607c_IsEmpty(cell) == 0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

Unk_ov004_02205c44::~Unk_ov004_02205c44() {
}

Unk_ov004_02205d5c::~Unk_ov004_02205d5c() {
}

Unk_ov004_02205e58::~Unk_ov004_02205e58() {
}

Unk_ov004_02206398::~Unk_ov004_02206398() {
}
