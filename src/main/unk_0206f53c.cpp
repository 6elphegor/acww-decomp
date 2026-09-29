#include "types.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp)

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    void func_020a8b1c();
    void func_020a8b34(Unk_020e2a08 *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a78;

// buffer interface (destination-side, member at +4)
class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

// buffer interface with write position at +4 and member at +8
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// ---------------------------------------------------------------------------------------------------------------------

// Fixed 0x29 byte string holder
class Unk_020e0470 : public Unk_020e2a60 {
public:
    Unk_020e0470();
    virtual ~Unk_020e0470();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    s32 func_0206f828();

    /* 0x0e */ u8 unk_0e[0x29];
};

// String buffer wrapping a text renderer (Unk_02050288) at +0x3c
class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u32 func_0206fa1c();
    void func_0206f904(u8 a, u8 b, u32 c, u32 d);
    void func_0206fa28(s32 v);
    void func_0206fa4c();
    void func_0206fa74(s32 a, s32 b);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb04(u32 a, u32 b, u8 x, u8 y);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fbe4(u32 id, u8 x, u8 y);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
};

struct Unk_0206fd10_Mtx {
    s32 m[9];
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fde4_Mtx {
    s32 v[12];
};

struct Unk_0206f6fc_Pos {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fd10_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern "C" {
extern u8 data_020de390;
extern u32 data_020de394[];
extern u32 data_021cb410[];
extern u32 data_021ed2f8[];
extern u32 data_021dfd8c[];
extern void *data_021f482c;
extern void *data_020cbb18;
extern u8 data_021eceac[];
extern u8 data_021e7f8c[];
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u8 data_020e416c;
extern u32 data_020c7c1c;
typedef void (*Unk_0206f804_Fn)(u8 *, u32);
extern Unk_0206f804_Fn data_020de3a8[];
extern Unk_02050288_Font data_021c48fc;
extern Unk_02050288_Font data_021c4924;
extern Unk_02050288_Font data_021c4938;
extern Unk_0206fd10_Mtx data_021cb69c;
extern Unk_0206fde4_Mtx data_021cb6cc[];

s32 func_0200402c(u32 a);
void *func_0208a578();
s32 func_0208c134(void *a, u32 b, u32 c);
s32 func_02116048(void *src, void *dst, u32 n);
void func_0206db34(void *a, void *b);
void func_0206dad8();
void func_020795a8(void *a);
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
s32 func_02096a50(void *obj, s32 v);
BOOL func_02096880(void);
void func_020728d4(void *p);
void func_020728a4(void *p, void *d, s32 n);
void func_02072824(void *p, s32 a, s32 b);
void func_02096f44(void *p);
void func_02065c94();
void *func_0208f158(void *p);
void func_02065e70(void *p, void *q);
void func_0208f168(void *p);
void func_0208f1a8(void *p, s32 v);
void func_02076a2c(void *a, void *b, void *c);
s32 func_ov003_022201bc(u8 a, u32 b, void *c);
s32 func_ov003_02224d58(void *a, u8 b);
u8 *func_02095204(u8 x);
BOOL func_ov003_02227434(u8 x);
void func_ov003_02227248(u32 a, u8 b);
s32 func_ov003_0222746c(u8 a, s32 b);
s32 func_02076f88(void *p);
s32 func_020512e0(const u8 *str, s32 len);
s32 func_020512f8(const u8 *str, s32 len);
BOOL func_020a78a4(Unk_020e0470 *buf, const void *src, s32 len);
BOOL func_02050e90(Unk_020e0470 *buf, u8 *dst, s32 size);
void func_020b3270(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
void func_020b35f8(void *a, u8 *b, void *c);
void func_020b3558(void *a, u8 *b, u32 c);
u32 func_020a7fa8(u32 arg);
void _ZdlPv(void *p);
Unk_02050288 *func_020a8008(u32 a, u32 b, u32 c);
Unk_02050288 *func_020a8054(u32 a, u32 b, u32 c);
void func_020a7fd8(Unk_02050288 *obj);
s32 func_02002778(u32 id);
s32 func_020027b4(u32 id);
void func_01ffb46c(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffb94c(void *a, void *b, void *c);
void func_01ffb7cc(void *p);
s32 func_02052c54(u16 *p);
BOOL func_02070358(u32 a, u16 *p);

void func_0206f53c(u32 x);
void func_0206f56c(u8 *p);
void func_0206f5a0(u8 *p);
void func_0206f5ac(u8 *p, u32 code);
void func_0206f604(u32 a, u32 b, ...);
void func_0206f638(u8 v);
u8 func_0206f644();
void func_0206f650();
void func_0206f668(u8 *p);
void func_0206f6b8(u8 *p);
void func_0206f6fc(u8 *p, u32 id);
void func_0206f770(u8 *p, u32 id);
void func_0206f7d0(u8 *p);
void func_0206f804(u8 *p, u32 x);
void func_0206f81c();
BOOL func_0206f88c(Unk_020e2a78 *a, u8 *b, s32 len);
void func_0206f920(Unk_020e2a78 *dst, const void *s, s32 len, BOOL a, u8 b);
void func_0206f964(Unk_020e2a78 *a, u8 *b);
void func_0206f994(Unk_020e2a78 *dst, const void *s, s32 len);
void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
void func_0206f9e4(void *a, void *c, u8 v);
void func_0206f9fc(void *a, u8 v);
void func_0206fa10(void *a, u8 *p);
void func_0206fd10(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w);
void func_0206fd64(void *a);
void func_0206fd84(Unk_0206fd10_Vec *v);
void func_0206fdb4(void *a, Unk_0206fd10_Vec *v);
void func_0206fde4(u32 i);
void func_0206fe0c(u32 i);
s32 func_0206fe34(u32 a, s32 b);
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

void func_0206f53c(u32 x) {
    if (x == 0) {
        func_0200402c(0x67);
    } else {
        func_0200402c(0x66);
    }
    void *r = func_0208a578();
    func_0208c134(r, data_020de394[x], 0);
}

void func_0206f56c(u8 *p) {
    func_02116048(p + 1, data_021cb410, 0x10);
    func_0206db34(data_021ed2f8, data_021cb410);
    func_0206dad8();
    func_020795a8(data_021dfd8c);
}

void func_0206f5a0(u8 *p) { data_020de390 = *p; }

void func_0206f5ac(u8 *p, u32 code) {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0xf4);
    s32 r = 0xb;
    func_02116048(p + 1, buf, 0xf4);
    if (func_02096a50(buf, 1)) {
        if (func_02096880()) {
            r = 9;
        } else {
            r = 0xa;
        }
    }
    func_020e85fc(heap, buf);
    func_0206f604(r, code);
}

void func_0206f604(u32 a, u32 b, ...) {
    void *g = data_020cbb18;
    func_020728d4(g);
    func_020728a4(g, &a, 1);
    func_02072824(g, 0x16, b);
}

void func_0206f638(u8 v) { data_020de390 = v; }

u8 func_0206f644() { return data_020de390; }

void func_0206f650() {
    func_02096f44(data_021eceac);
    func_02065c94();
}

void func_0206f668(u8 *p) {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0xf4);
    func_02116048(p + 1, buf, 0xf4);
    u8 *const g = data_021e7f8c;
    void *t = func_0208f158(g);
    func_02065e70(t, buf);
    func_0208f168(g);
    func_0208f1a8(g, 0);
    func_020e85fc(heap, buf);
}

void func_0206f6b8(u8 *p) {
    u8 tmp[0x1e];
    func_02116048(p + 1, tmp, 0x1e);
    switch (p[0]) {
    case 3:
        func_02116048(tmp, data_021ed210, 0x1e);
        break;
    case 4:
        func_02116048(tmp, data_021ed22e, 0x1e);
        break;
    }
}

void func_0206f6fc(u8 *p, u32 id) {
    u8 buf[5];
    Unk_0206f6fc_Pos pos;
    if (Unk_0206f6fc_IsZero(data_020e416c)) {
        u8 id8 = id;
        func_02116048(p + 2, buf, 5);
        func_02076a2c(buf, &pos.x, &pos.z);
        pos.y = data_020c7c1c;
        if (p[0] == 2) {
            u32 v = p[1];
            u16 x;
            if (v < 0x38) {
                x = v + 0x12e8;
            } else {
                x = 0x12e8;
            }
            func_ov003_022201bc(id8, x, &pos);
        } else {
            func_ov003_02224d58(&pos, id8);
        }
    }
}

void func_0206f770(u8 *p, u32 id) {
    if (Unk_0206f6fc_IsZero(data_020e416c)) {
        u8 id8;
        s16 off;
        u8 *q;
        q = p + 1;
        id8 = id;
        off = (p[2] - 0x1e) * 0xb6;
        u8 *r = func_02095204(id8);
        if (r != NULL) {
            off = off + *(s16 *)(r + 0x8e);
            if (func_ov003_02227434(id8) == 0) {
                func_ov003_02227248(q[0], id8);
                func_ov003_0222746c(id8, off);
            }
        }
    }
}

void func_0206f7d0(u8 *p) {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0xc0);
    func_02116048(p + 1, buf, 0xc0);
    func_02076f88(buf);
    func_020e85fc(heap, buf);
}

void func_0206f804(u8 *p, u32 x) { data_020de3a8[p[0]](p, x); }

void func_0206f81c() { data_020de390 = 0x18; }

s32 Unk_020e0470::func_0206f828() { return func_020512e0(unk_0e, 0x29); }

u8 *Unk_020e0470::vfunc_0c() { return unk_0e; }

u32 Unk_020e0470::vfunc_08() { return 0x29; }

Unk_020e0470::~Unk_020e0470() {}

Unk_020e0470::Unk_020e0470() {}

BOOL func_0206f88c(Unk_020e2a78 *a, u8 *b, s32 len) {
    Unk_020e0470 l;
    l.func_020a77f8(a);
    s32 n = func_020512f8(b, len);
    if (n != func_020512f8(l.unk_0e, len)) {
        return FALSE;
    }
    s32 i = 0;
    while (i < n) {
        u32 x = b[i];
        u32 y = l.unk_0e[i];
        if (x == 0x8d) {
            x = 0xb1;
        }
        if (y == 0x8d) {
            y = 0xb1;
        }
        if (x != y) {
            return FALSE;
        }
        i++;
    }
    return TRUE;
}

void Unk_020e0488::func_0206f904(u8 a, u8 b, u32 c, u32 d) {
    if (unk_3c != NULL) {
        unk_3c->func_02050c04(a, b, c, d);
    }
}

void func_0206f920(Unk_020e2a78 *dst, const void *s, s32 len, BOOL a, u8 b) {
    if (a == 0) {
        b = 0;
    }
    Unk_020e0470 l;
    func_020a78a4(&l, s, len);
    dst->func_020a7aa0(&l, a, b);
}

void func_0206f964(Unk_020e2a78 *a, u8 *b) {
    Unk_020e0470 l;
    l.func_020a77f8(a);
    func_02050e90(&l, b, 0x29);
}

void func_0206f994(Unk_020e2a78 *dst, const void *s, s32 len) {
    Unk_020e0470 l;
    func_020a78a4(&l, s, len);
    dst->func_020a7aa0(&l, 0, 0);
}

void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e) { func_020b3270(o, a, b, c, d, e); }

void func_0206f9e4(void *a, void *c, u8 v) {
    u8 t = v;
    func_020b35f8(a, &t, c);
}

void func_0206f9fc(void *a, u8 v) {
    u8 t = v;
    func_0206fa10(a, &t);
}

void func_0206fa10(void *a, u8 *p) { func_020b3558(a, p, 0); }

u32 Unk_020e0488::func_0206fa1c() { return func_020a7fa8((u32)this + 0x12); }

void Unk_020e0488::func_0206fa28(s32 v) {
    Unk_02050288 *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        unk_3c->unk_30 = v;
        unk_3c->func_02050c90();
    }
}

void Unk_020e0488::func_0206fa4c() {
    Unk_02050288 *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        unk_3c->func_02050c20();
        unk_3c->func_02050c90();
    }
}

void Unk_020e0488::func_0206fa74(s32 a, s32 b) {
    Unk_02050288 *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        if (a != 0) {
            unk_3c->func_02050c44();
        } else {
            unk_3c->unk_30 = 0;
        }
        unk_3c->unk_30 = unk_3c->unk_30 + b;
        unk_3c->func_02050c90();
    }
}

void Unk_020e0488::func_0206fab4(s32 a, s32 b) {
    Unk_02050288 *o = unk_3c;
    if (o != NULL) {
        o->unk_10 = (u32)vfunc_0c();
        if (b != 0) {
            unk_3c->unk_57 = 1;
        } else {
            unk_3c->unk_57 = 0;
        }
        if (a != 0) {
            unk_3c->func_02050c44();
        } else {
            unk_3c->unk_30 = 0;
        }
        unk_3c->func_02050c90();
    }
}

void Unk_020e0488::func_0206fb04(u32 a, u32 b, u8 x, u8 y) {
    if (unk_3c != NULL) {
        func_0206fc44();
    }
    unk_3c = func_020a8008(a, b, 2);
    if (unk_3c != NULL) {
        unk_3c->unk_39 = y;
        unk_3c->unk_38 = x;
        unk_3c->unk_58 = 2;
    }
}

void Unk_020e0488::func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag) {
    if (unk_3c != NULL) {
        func_0206fc44();
    }
    unk_3c = func_020a8054(a, b, 1);
    func_0206fbe4(id, x, y);
    if (flag != 0) {
        unk_3c->unk_28 = &data_021c48fc;
    } else {
        unk_3c->unk_28 = &data_021c4924;
    }
}

void Unk_020e0488::func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag) {
    if (unk_3c != NULL) {
        func_0206fc44();
    }
    unk_3c = func_020a8054(a, b, 2);
    func_0206fbe4(id, x, y);
    if (flag != 0) {
        unk_3c->unk_28 = &data_021c4938;
    }
}

void Unk_020e0488::func_0206fbe4(u32 id, u8 x, u8 y) {
    s32 t = func_02002778(id);
    if (unk_3c != NULL) {
        unk_3c->unk_2c = t;
        if (func_020027b4(id) != 0) {
            unk_3c->unk_50 = 2;
        } else {
            unk_3c->unk_50 = 1;
        }
        if (t == 4) {
            unk_3c->unk_55 = 1;
        } else {
            unk_3c->unk_55 = 0;
        }
        unk_3c->unk_39 = y;
        unk_3c->unk_38 = x;
    }
}

void Unk_020e0488::func_0206fc44() {
    if (unk_3c != NULL) {
        func_020a7fd8(unk_3c);
        unk_3c = NULL;
    }
}

u8 *Unk_020e0488::vfunc_0c() { return (u8 *)this + 0x12; }

u32 Unk_020e0488::vfunc_08() { return 0x2a; }

Unk_020e0488::~Unk_020e0488() { func_0206fc44(); }

Unk_020e0488::Unk_020e0488() {
    func_020a7c3c();
    unk_3c = NULL;
}

void func_0206fd10(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    if (w == NULL) {
        m.x = v->x;
        m.y = v->y;
        m.z = v->z;
    } else {
        m.x = func_01ffcb0c(v->x, w->x);
        m.y = func_01ffcb0c(v->y, w->y);
        m.z = func_01ffcb0c(v->z, w->z);
    }
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

void func_0206fd64(void *a) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

void func_0206fd84(Unk_0206fd10_Vec *v) {
    Unk_0206fd10_Mtx m;
    func_01ffb7cc(&m);
    m.x = v->x;
    m.y = v->y;
    m.z = v->z;
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

void func_0206fdb4(void *a, Unk_0206fd10_Vec *v) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    m.x = v->x;
    m.y = v->y;
    m.z = v->z;
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

void func_0206fde4(u32 i) {
    *(Unk_0206fde4_Mtx *)&data_021cb69c = data_021cb6cc[i];
}

void func_0206fe0c(u32 i) {
    data_021cb6cc[i] = *(Unk_0206fde4_Mtx *)&data_021cb69c;
}

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}

s32 func_0206fe34(u32 a, s32 b) {
    s32 cnt = 0;
    u32 i;
    for (i = 0; i < 0x34; i++) {
        u16 v = Unk_0206fe34_Id(i);
        if (b == func_02052c54(&v)) {
            if (func_02070358(a, &v)) {
                cnt++;
            }
        }
    }
    return cnt;
}
