#include "types.h"
#include "Unk_020d8c7c.h"

// Element payload types (defined elsewhere)
struct Unk_020829b0_Y {
    u32 unk_00;
    Unk_020829b0_Y();
    ~Unk_020829b0_Y();
    void func_02077ad8();
};
struct Unk_02082af0_X {
    u32 unk_00;
    Unk_02082af0_X();
    ~Unk_02082af0_X();
    void func_02077b18();
};
struct Unk_02082c54_Z {
    Unk_02082c54_Z();
    ~Unk_02082c54_Z();
    void func_0205c384();
};

struct Unk_02082d68 {
    u8 unk_00;
    Unk_02082d68();
    ~Unk_02082d68();
};

struct Unk_020829b0_Y_dummy;
struct Unk_020829b0 : public Unk_02082d68 {
    Unk_020829b0_Y unk_04;
    Unk_020829b0();
    ~Unk_020829b0();
    void func_020829b0();
};

struct Unk_02082af0 : public Unk_02082d68 {
    Unk_02082af0_X unk_04;
    void func_02082af0(u32 x);
};

struct Unk_02082c54 : public Unk_02082d68 {
    Unk_02082c54_Z unk_01[3];
    void func_02082c54(s32 a, s32 i);
};

class Unk_020e085c {
public:
    Unk_020e085c(s32 n);
    virtual ~Unk_020e085c();
    virtual void vfunc_08(u32 i) = 0;
    virtual void vfunc_0c(u32 i);
    virtual u8 *vfunc_10(u32 i) = 0;
    s32 func_02082cb0();
    void func_02082d04();

    /* 0x04 */ s32 unk_04;
};

class Unk_020e0798 : public Unk_020e085c {
public:
    Unk_020e0798();
    virtual ~Unk_020e0798();
    virtual void vfunc_08(u32 i);
    virtual u8 *vfunc_10(u32 i);
    Unk_02082af0_X *func_020829f4(u32 i);

    /* 0x08 */ Unk_02082af0 unk_08[8];
};

class Unk_020e0840 : public Unk_020e085c {
public:
    Unk_020e0840();
    virtual ~Unk_020e0840();
    virtual u8 *vfunc_10(u32 i);
    virtual void vfunc_08(u32 i);
    Unk_02082c54_Z *func_02082b34(u32 i, u32 off);

    /* 0x08 */ Unk_02082c54 unk_08[5];
};

extern "C" {
Unk_020e0798 *func_02082a50();
Unk_020e0840 *func_02082bb4();
extern Unk_020e0798 data_021cd3d4;
extern Unk_020e0840 data_021cd360;
}

struct Unk_02082d74_M {
    ~Unk_02082d74_M();
};

class Unk_020e09ac : public Unk_020d8c7c {
public:
    virtual ~Unk_020e09ac();
    /* 0x50 */ Unk_02082d74_M unk_50;
};

struct Unk_020cbb18 { u8 pad_00[0x64]; s32 unk_64; BOOL func_02072e88(s32 i); };

struct Unk_02082e80_Cell { u8 pad_00[0x28]; };
struct Unk_02082e80_Grid {
    Unk_02082e80_Cell *unk_00;
    u32 unk_04[2];
};
struct Unk_02082e80_Pos {
    s32 x, y;
    Unk_02082e80_Pos() { x = 0; y = 0; }
};

extern "C" {
extern u8 data_020e416c;
extern Unk_020cbb18 *data_020cbb18;
extern Unk_02082e80_Grid *data_021c47c4;
extern u8 data_020cf1d0[], data_020cf208[], data_020cf1d8[], data_020e0a78[];
extern s32 data_020cf1bc[];
extern s32 data_020cf1c8;
extern u8 data_021ed315, data_021eca50;

void func_0205c384(void *p);
void func_0204edd8(void *g, void *v);
void *func_020850e0();
void *func_02085170(void *p);
void *func_0208516c(void *p);
void *func_02085174(void *p);
void *func_02085178(void *p);
void func_02086af0(void *a, void *b, u16 *c, void *d);
void func_020868cc(void *a, void *b);
void func_02086ec4(void *a, void *b);
s32 func_02086e60(void *a);
void func_02086fb8(void *a, void *b);
s32 func_02086fd0(void *a);
s32 func_02063b8c(s32 a);
s32 func_0209750c();
void *func_02098698();
s32 func_02087838(void *a, s32 b);
s32 func_0209ea50(void *a);
s32 func_020b50e8();
s32 func_02083ba4();
s32 func_02083b84();
s32 func_02083bc8(void *tbl, s32 x);
s32 func_02083de8(void *a, void *b, s32 c);
s32 func_02083e10(void *a, void *b, s32 c);
void func_0209d498(void *p);
s32 func_02084de0(s32 a, void *p);
s32 func_0208723c(void *p);
s32 func_0208740c();
s32 func_02087444();
s32 func_020374b0(void *c, s32 v);
s32 func_020374cc(void *c, s32 v);
s32 func_02031194(s32 x, s32 y);
void func_0204edf8(s32 *o1, s32 *o2, s32 a, s32 b, s32 c, s32 d);
void func_0204ed8c(void *a, s32 x, s32 y);
}

static inline BOOL Unk_02083058_IsA() { return data_020e416c == 0 ? TRUE : FALSE; }

static inline Unk_02082e80_Cell *Unk_02082e80_GetCell(Unk_02082e80_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04[0] && y < g->unk_04[1] && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04[0] + x];
    }
    return NULL;
}

void Unk_020829b0::func_020829b0() {
    unk_04.func_02077ad8();
    unk_00 = 1;
}
Unk_020829b0::Unk_020829b0() {}
Unk_020829b0::~Unk_020829b0() {}

Unk_020e0798::Unk_020e0798() : Unk_020e085c(8) {}
Unk_020e0798::~Unk_020e0798() {}

void Unk_020e0798::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 t = 0;
        t += i;
        func_02082a50()->unk_08[i].func_02082af0(t);
    }
}

u8 *Unk_020e0798::vfunc_10(u32 i) {
    Unk_02082af0 *r = NULL;
    if (i < (u32)unk_04) r = &unk_08[i];
    return (u8 *)r;
}

Unk_02082af0_X *Unk_020e0798::func_020829f4(u32 i) {
    Unk_02082af0_X *r = NULL;
    if (i < (u32)unk_04) {
        Unk_02082af0 *e = &func_02082a50()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

void Unk_02082af0::func_02082af0(u32 x) {
    unk_04.func_02077b18();
    unk_00 = 1;
}

Unk_020e0840::Unk_020e0840() : Unk_020e085c(5) {}
Unk_020e0840::~Unk_020e0840() {}

Unk_02082c54_Z *Unk_020e0840::func_02082b34(u32 i, u32 off) {
    Unk_02082c54_Z *r = NULL;
    if (i < (u32)unk_04) r = (Unk_02082c54_Z *)((u8 *)&func_02082bb4()->unk_08[i] + 1 + off);
    return r;
}

u8 *Unk_020e0840::vfunc_10(u32 i) {
    Unk_02082c54 *r = NULL;
    if (i < (u32)unk_04) r = &unk_08[i];
    return (u8 *)r;
}

void Unk_020e0840::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        for (s32 k = 0; k < 3; k++) {
            func_02082bb4()->unk_08[i].func_02082c54(i + data_020cf1bc[k], k);
            Unk_02082c54 *a = func_02082bb4()->unk_08;
            *(u8 *)(i * 4 + (u32)a) = 1;
        }
    }
}

void Unk_02082c54::func_02082c54(s32 a, s32 i) {
    unk_01[i].func_0205c384();
}

s32 Unk_020e085c::func_02082cb0() {
    s32 r = -1;
    for (s32 i = 0; i < unk_04; i++) {
        u8 *p = vfunc_10(i);
        if (p && *p == 0) {
            r = i;
            break;
        }
    }
    return r;
}

void Unk_020e085c::vfunc_0c(u32 i) {
    if (i < (u32)unk_04) {
        u8 *p = vfunc_10(i);
        if (p) *p = 0;
    }
}

void Unk_020e085c::func_02082d04() {
    for (s32 i = 0; i < unk_04; i++) {
        u8 *p = vfunc_10(i);
        if (p) *p = 0;
    }
}

Unk_020e085c::Unk_020e085c(s32 n) { unk_04 = n; }
Unk_020e085c::~Unk_020e085c() {}

Unk_02082d68::Unk_02082d68() { unk_00 = 0; }
Unk_02082d68::~Unk_02082d68() {}

Unk_020e09ac::~Unk_020e09ac() {}


extern "C" {
Unk_020e0798 *func_02082a50() { return &data_021cd3d4; }
Unk_020e0840 *func_02082bb4() { return &data_021cd360; }
}

struct Unk_02082dd0_V { s32 x, y, z; };

extern "C" {

BOOL func_02082dd0(void *self, void *g, u16 *out, s32 *a) {
    Unk_02082dd0_V v;
    s32 z = a[2] + 0x6000;
    s32 x = a[0] - 0x4000;
    v.x = x;
    v.y = 0;
    v.z = z;
    func_0204edd8(g, &v);
    out[1] = 0;
    return TRUE;
}

BOOL func_02082e08(void *self, void *b, u16 *out, void *d) {
    func_02086af0(func_02085170(func_020850e0()), b, out + 1, d);
    return TRUE;
}

BOOL func_02082e2c(void *self, void *b, u16 *out) {
    func_020868cc(func_0208516c(func_020850e0()), b);
    out[1] = func_02063b8c(0xffff);
    return TRUE;
}

BOOL func_02082e58(void *self, void *b, u16 *out) {
    void *p = func_02085174(func_020850e0());
    func_02086ec4(p, b);
    out[1] = func_02086e60(p);
    return TRUE;
}

BOOL func_02082e80(void *self, void *p1) {
    static Unk_02082e80_Pos list[32];
    Unk_02082e80_Cell *c;
    Unk_02082e80_Grid *m;
    s32 w;
    s32 count;
    s32 x;
    s32 y;
    s32 bx;
    s32 h;
    s32 x1;
    s32 y1;
    s32 xx;
    s32 yy;
    s32 by;
    u32 *sz;
    if (!Unk_02083058_IsA()) goto fail;
    m = data_021c47c4;
    if (m == NULL) return FALSE;
    sz = &m->unk_04[0];
    w = sz[0];
    h = sz[1];
    count = 0;
    y = 0;
    goto ytest;
yloop:
    x = 0;
    goto xtest;
xloop:
    if ((u32)x < m->unk_04[0] && (u32)y < m->unk_04[1] && m->unk_00 != NULL) {
        c = &m->unk_00[y * m->unk_04[0] + x];
    } else {
        c = NULL;
    }
    if (c != NULL && func_020374b0(c, 0x7f000) && func_020374cc(c, 8)) {
        bx = 0;
        by = 0;
        func_0204edf8(&bx, &by, x, y, 0, 0);
        x1 = bx + 0x10;
        yy = by;
        y1 = by + 0x10;
        goto ytest2;
    yloop2:
        xx = bx;
        goto xtest2;
    xloop2:
        if (func_02031194(xx, yy)) {
            list[count].x = xx;
            list[count].y = yy;
            count++;
        }
        if (count >= 32) goto xbreak2;
        xx++;
    xtest2:
        if (xx < x1) goto xloop2;
    xbreak2:
        if (count >= 32) goto ybreak2;
        yy++;
    ytest2:
        if (yy < y1) goto yloop2;
    ybreak2:
        if (count >= 32) goto xbreak;
    }
    x++;
xtest:
    if (x < w) goto xloop;
xbreak:
    if (count >= 32) goto ybreak;
    y++;
ytest:
    if (y < h) goto yloop;
ybreak:
    if (count > 0) {
        s32 i = func_02063b8c(count);
        func_0204ed8c(p1, list[i].x, list[i].y);
        return TRUE;
    }
fail:
    return FALSE;
}

BOOL func_02082ff4() {
    if (func_0209750c()) {
        if (func_02087838(func_02098698(), 0x18) == 0) return TRUE;
    }
    return FALSE;
}

BOOL func_02083058(void *tbl, void *fn, s32 x, BOOL flag) {
    s32 r7 = func_0209ea50(&data_021ed315);
    s32 idx;
    if (flag) {
        if (!Unk_02083058_IsA()) goto fail;
        if (func_020b50e8() == 0x2c) goto fail;
    }
    if (r7 != 0) goto fail;
    if (func_02083ba4() != 0) goto fail;
    if (func_02083b84() != 0) goto fail;
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) goto fail;
    idx = func_02083bc8(tbl, x);
    if (idx == -1) goto fail;
    if (fn != NULL) {
        BOOL (*f)() = ((BOOL (**)())fn)[idx];
        if (f != NULL) {
            if (f() == 0) goto fail;
        }
    }
    return func_02083de8((u8 *)tbl + idx * 8 + 4, data_020e0a78, data_020cf1c8);
fail:
    return FALSE;
}

BOOL func_0208301c() {
    return func_02083058(data_020cf1d0, NULL, 1, 1);
}

BOOL func_02083038() {
    return func_02083058(data_020cf208, data_020cf1d8, 4, 1);
}

BOOL func_0208310c(BOOL flag);

BOOL func_02083100() {
    return func_0208310c(1);
}

BOOL func_0208310c(BOOL flag) {
    u16 v;
    s32 loc[2];
    loc[0] = 0;
    loc[1] = 0;
    func_0209d498(loc);
    if (func_02083ba4() != 0) goto fail;
    if (func_02083b84() != 0) goto fail;
    if (flag) {
        if (!Unk_02083058_IsA()) goto fail;
        if (func_020b50e8() == 0x2c) goto fail;
    }
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) goto fail;
    if (func_02084de0(0x3b, loc) != 0) goto fail;
    if (func_02084de0(0x3c, loc) != 0) goto fail;
    if (func_02084de0(0x3d, loc) != 0) goto fail;
    if (func_02084de0(0x3e, loc) != 0) goto fail;
    if (func_02084de0(0x3f, loc) != 0) goto fail;
    if (func_02084de0(0x40, loc) != 0) goto fail;
    if (func_02084de0(0x41, loc) != 0) goto fail;
    if (func_02084de0(0x42, loc) != 0) goto fail;
    if (func_02084de0(0x43, loc) != 0) goto fail;
    if (func_02084de0(0x44, loc) != 0) goto fail;
    if (func_0208723c(&data_021eca50) == 0) goto fail;
    v = 0xd020;
    return func_02083e10(&v, data_020e0a78, data_020cf1c8);
fail:
    return FALSE;
}

BOOL func_02083214(void *self, void *b) {
    func_02086fb8(func_02085178(func_020850e0()), b);
    return TRUE;
}

BOOL func_0208323c(BOOL flag);

BOOL func_02083230() {
    return func_0208323c(1);
}

BOOL func_0208323c(BOOL flag) {
    u16 v;
    if (func_0208740c() == 0) goto fail;
    if (func_02083ba4() != 0) goto fail;
    if (func_02083b84() != 0) goto fail;
    if (flag) {
        if (!Unk_02083058_IsA()) goto fail;
        if (func_020b50e8() == 0x2c) goto fail;
    }
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) goto fail;
    if (func_02084de0(0x3d, NULL) != 0) goto fail;
    v = 0xd023;
    return func_02083e10(&v, data_020e0a78, data_020cf1c8);
fail:
    return FALSE;
}

void func_020832c4() {
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) {
        if (func_02083ba4() == 0) {
            if (func_02087444() != 0) {
                if (Unk_02083058_IsA()) {
                    func_02086fd0(func_02085178(func_020850e0()));
                }
            }
        }
    }
}

}
