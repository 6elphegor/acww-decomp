// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
u32 func_020b50d0(u32);
void func_0209d498(void *);
void func_0209d164(void *, u32);
s32 func_0209cd00(void *, void *);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
void *func_0204da0c();
void func_0204eb30(void *, void *, u32, u32, u32);
void *func_02037558(void *, u32, u32, u32);
BOOL func_0204b14c(void *);
u32 func_0204b124(void *);
void func_0204edf8(u32 *, u32 *, u32, u32, u32, u32);
}

struct Bits;
struct DateTmp {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};
union DateTmpU {
    DateTmp t;
    u32 w[2];
};

class Unk_020af85c {
public:
    Unk_020af85c();
    ~Unk_020af85c();
    s32 func_020af85c();
    u32 func_020af8b4();
    s32 func_020af8bc();
    s32 func_020af914();
    void func_020af96c(u32 a, u32 b, u32 c);
    BOOL func_020afa1c();
    void func_020afa38();

    u16 a0 : 7;
    u16 a1 : 4;
    u16 a2 : 5;
    u16 b0 : 7;
    u16 b1 : 7;
    u16 b2 : 2;
    u8 c4;
    u8 c5;
};

extern "C" {
struct Data021e5890 {
    u8 pad[0x14];
    u8 pad14 : 2;
    u8 f14 : 6;
};
extern Data021e5890 data_021e5890;
BOOL func_020af72c(u32 idx);
}

class Unk_020af53c {
public:
    Unk_020af53c();
    ~Unk_020af53c();
    void func_020af53c(u32 idx);
    BOOL func_020af564();
    BOOL func_020af590(u32 idx, u32 *a, u32 *b, u32 *c, u8 *d, u8 *e, u8 *f);
    s32 func_020af608(u32 a, u32 b, u32 c);
    BOOL func_020af64c(u32 idx);
    void func_020af674();
    void func_020af694();

    Unk_020af85c e[3];
};

struct Cell {
    u8 b[0x28];
};

struct Grid {
    Cell *cells;
    u32 w;
    u32 h;
};

extern "C" {
extern void *data_021eda68;
void func_0202e880(u32, void *, u32, u32);
u64 OS_GetTick();
}

class Unk_020afadc {
public:
    void func_020afadc();
    u8 pad[6];
    u16 unk_06;
};

class Unk_020afbb8;

typedef BOOL (*EntryFn)(Unk_020afbb8 *, u8 *, u32, u32);
extern "C" EntryFn data_020e2ed0[];
extern "C" BOOL func_020afeb4(Unk_020afbb8 *, u8 *, u32, u32);
extern "C" BOOL _ZN12Unk_020afbb813func_020afc48EPhjj(Unk_020afbb8 *, u8 *, u32, u32);
extern "C" BOOL _ZN12Unk_020afbb813func_020afbb8EPhy(Unk_020afbb8 *, u8 *, u32, u32);

class Unk_020afafc;

class Unk_020afbb8 {
public:
    BOOL func_020afbb8(u8 *idx, u64 start);
    BOOL func_020afc48(u8 *idx, u32 lo, u32 hi);

    u8 type;
    u8 count;
    u16 unk_02;
    void *ptr;
};

class Unk_020afafc {
public:
    BOOL func_020afafc(u8 *entryIdx, u8 *subIdx, u64 start);

    u16 count;
    u16 unk_02;
    Unk_020afbb8 *entries;
};

struct EntryPair {
    u16 a;
    u16 b;
};

class Unk_020afaa4 {
public:
    Unk_020afaa4();
    ~Unk_020afaa4();
    BOOL func_020afab8(u8 *entryIdx, u8 *subIdx, u64 start);
    void func_020afad0();

    Unk_020afafc *unk_00;
    void *unk_04;
    Unk_020afadc *unk_08;
    u32 unk_0c;
};

class Unk_020af514 {
public:
    ~Unk_020af514();
    void func_020af514();

    Unk_020afaa4 items[2];
};

struct Vec3 {
    s32 x, y, z;
};

struct Vec3s {
    s16 x, y, z;
};

inline void SetVec(Vec3 *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

class Unk_020b4948;
extern "C" BOOL func_020b4948(Unk_020b4948 *);
extern "C" u32 func_020b4958(Unk_020b4948 *);
extern "C" s32 func_020b495c(Unk_020b4948 *);
extern "C" Vec3 *func_020b4964(Unk_020b4948 *);

extern "C" {
Unk_020b4948 *func_020b4934();
u32 func_020b50e8();
BOOL func_020b52ac();
BOOL func_020b5184();
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *, ...);
void _ZN12Unk_020cbb1813func_02072e88Ei(void *, u32);
s32 func_020952e0(u32);
BOOL func_020978c8(void *, s32);
u32 func_0209521c();
void func_0209524c(u32, u32);
void func_02094308(u32, Vec3 *, Vec3s *, u32);
void func_020e93a0(Vec3 *, s32);
void func_01ffd070(Vec3 *, Vec3 *, Vec3 *);

struct Data020cbb18 {
    u8 pad[0x64];
    u32 unk_64;
};
extern Data020cbb18 *data_020cbb18;
extern u8 data_021d735c[];
}

class Unk_020afd04 {
public:
    BOOL func_020afd04(u32 i, BOOL mode, Vec3 *pos, Vec3s *rot, u32 *out);
    inline void get(Vec3 *pos, Vec3s *r, u32 *out) {
        Vec3s *q = &rot;
        SetVec(pos, x << 12 >> 4, y << 12 >> 4, z << 12 >> 4);
        r->x = q->x;
        r->y = q->y;
        r->z = q->z;
        *out = unk_10;
    }

    u16 unk_00;
    s16 x;
    s16 y;
    s16 z;
    Vec3s rot;
    u16 unk_0e;
    u32 unk_10;
};


BOOL Unk_020afd04::func_020afd04(u32 i, BOOL mode, Vec3 *pos, Vec3s *rot_, u32 *out) {
    if (mode) {
        s32 idx = func_020952e0(i);
        if (idx < 4 && func_020978c8(data_021d735c, func_020952e0(i))) {
            if (!_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, i) || func_020b4948(func_020b4934())) {
                (this + idx)->get(pos, rot_, out);
            } else {
                Vec3 *v = func_020b4964(func_020b4934());
                pos->x = v->x;
                pos->y = v->y;
                pos->z = v->z;
                s32 t = func_020b495c(func_020b4934());
                rot_->x = 0;
                rot_->y = t;
                rot_->z = 0;
                *out = func_020b4958(func_020b4934());
            }
            return TRUE;
        }
    } else {
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18)) {
            if (func_020b4948(func_020b4934())) {
                get(pos, rot_, out);
            } else {
                Vec3 v;
                v.x = 0;
                v.y = 0;
                v.z = 0;
                if (!func_020b5184() && func_020b4958(func_020b4934()) == 0x800000) {
                    i &= 3;
                    v.x = (i << 10) - 0x800;
                    v.y = 0;
                    v.z = 0;
                    func_020e93a0(&v, func_020b495c(func_020b4934()));
                }
                Vec3 t;
                func_01ffd070(&t, func_020b4964(func_020b4934()), &v);
                pos->x = t.x;
                pos->y = t.y;
                pos->z = t.z;
                s32 u = func_020b495c(func_020b4934());
                rot_->x = 0;
                rot_->y = u;
                rot_->z = 0;
                *out = func_020b4958(func_020b4934());
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020afbb8::func_020afc48(u8 *idx, u32 lo, u32 hi) {
    Unk_020afd04 *items = (Unk_020afd04 *)ptr;
    if (items != NULL && func_020b50e8() != 0xd && func_020b50e8() != 0xe && func_020b50e8() != 0x2f) {
        if (func_020b52ac()) {
            _ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64);
            for (u32 i = 0; i < 4; i++) {
                Vec3s rot;
                u32 v;
                Vec3 pos;
                if (items->func_020afd04(i, TRUE, &pos, &rot, &v)) {
                    func_02094308(i, &pos, &rot, v);
                }
            }
        } else {
            for (u32 i = 0; i < 4; i++) {
                Vec3s rot;
                u32 v;
                Vec3 pos;
                if (items->func_020afd04(i, FALSE, &pos, &rot, &v)) {
                    func_0209524c(i, func_0209521c());
                    func_02094308(i, &pos, &rot, v);
                }
            }
        }
    }
    func_0202e880(0xb, data_021eda68, 0, 0);
    return TRUE;
}

BOOL Unk_020afbb8::func_020afbb8(u8 *idx, u64 start) {
    u32 i = idx != NULL ? *idx : 0;
    EntryPair *p = (EntryPair *)ptr + i;
    BOOL ok = TRUE;
    for (;;) {
        func_0202e880(p->a, data_021eda68, p->b, 0);
        p++;
        i = (u8)(i + 1);
        if (idx != NULL) {
            (*idx)++;
        }
        if (i >= count) {
            break;
        }
        if (idx != NULL) {
            u32 ms = ((OS_GetTick() - start) * 64) / 0x82ea;
            if (ms > 0x28) {
                ok = FALSE;
                break;
            }
        }
    }
    if (ok) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020afafc::func_020afafc(u8 *entryIdx, u8 *subIdx, u64 start) {
    s32 i = entryIdx != NULL ? *entryIdx : 0;
    Unk_020afbb8 *e = entries + i;
    BOOL result = TRUE;
    for (; i < count;) {
        BOOL r = result;
        EntryFn f = data_020e2ed0[e->type];
        if (f != NULL) {
            r = f(e, subIdx, (u32)start, (u32)(start >> 32));
        }
        if (r) {
            e++;
            i++;
            if (subIdx != NULL) {
                *subIdx = 0;
            }
            if (entryIdx != NULL) {
                (*entryIdx)++;
            }
            if (i >= count) {
                break;
            }
            if (entryIdx != NULL) {
                u32 ms = ((OS_GetTick() - start) * 64) / 0x82ea;
                if (ms > 0x28) {
                    result = FALSE;
                    break;
                }
            }
        } else {
            result = FALSE;
            break;
        }
    }
    if (result) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020afadc::func_020afadc() {
    func_0202e880(0xc, data_021eda68, unk_06, 0);
}

void Unk_020afaa4::func_020afad0() {
    unk_08->func_020afadc();
}

BOOL Unk_020afaa4::func_020afab8(u8 *entryIdx, u8 *subIdx, u64 start) {
    return unk_00->func_020afafc(entryIdx, subIdx, start);
}

Unk_020afaa4::Unk_020afaa4() {
    unk_00 = NULL;
    unk_04 = NULL;
    unk_08 = NULL;
    unk_0c = 0x800;
}

Unk_020afaa4::~Unk_020afaa4() {}

Unk_020af514::~Unk_020af514() {}

Unk_020af85c::Unk_020af85c() {}

Unk_020af85c::~Unk_020af85c() {}

void Unk_020af85c::func_020afa38() {
    a0 = 0;
    a1 = 0;
    a2 = 0;
    b0 = 0;
    b1 = 0;
    b2 = 0;
    c5 = 0;
}

BOOL Unk_020af85c::func_020afa1c() {
    if (b0 != 0 && b1 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020af85c::func_020af96c(u32 x, u32 y, u32 z) {
    b0 = x >> 7;
    b1 = y >> 7;
    b2 = z;
    c4 = 0;
    DateTmp d;
    ((u32 *)&d)[0] = 0;
    ((u32 *)&d)[1] = 0;
    func_0209d498(&d);
    if (d.b2 < 6) {
        func_0209d164(&d, 1);
    }
    a0 = d.b5;
    a1 = d.b4;
    a2 = d.b3;
    c5 = 1;
}

s32 Unk_020af85c::func_020af914() {
    s32 t = b0 << 7;
    if (t == 0) {
        t = 0x1000;
    }
    s32 u = 0x1000;
    if (c4 == 1) {
        u = FX_Div(0x3000, 0x4000);
    } else if (c4 == 2) {
        u = FX_Div(u, 0x2000);
    }
    if (u > 0x1000) {
        u = 0x1000;
    }
    return func_01ffcb0c(t, u);
}

s32 Unk_020af85c::func_020af8bc() {
    s32 t = b1 << 7;
    if (t == 0) {
        t = 0x1000;
    }
    s32 u = 0x1000;
    if (c4 == 1) {
        u = FX_Div(0x3000, 0x4000);
    } else if (c4 == 2) {
        u = FX_Div(u, 0x2000);
    }
    if (u > 0x1000) {
        u = 0x1000;
    }
    return func_01ffcb0c(t, u);
}

u32 Unk_020af85c::func_020af8b4() {
    return b2;
}

s32 Unk_020af85c::func_020af85c() {
    DateTmp d;
    ((u32 *)&d)[0] = 0;
    ((u32 *)&d)[1] = 0;
    u8 e[4];
    u8 f[4];
    func_0209d498(&d);
    if (d.b2 < 6) {
        func_0209d164(&d, 1);
    }
    e[2] = d.b5;
    e[1] = d.b4;
    e[0] = d.b3;
    f[2] = a0;
    f[1] = a1;
    f[0] = a2;
    return func_0209cd00(e, f);
}

Unk_020af53c::Unk_020af53c() {}

Unk_020af53c::~Unk_020af53c() {}

extern "C" BOOL func_020af768(u32 *a, u32 *b, u32 idx) {
    Cell *cell;
    Grid *g = (Grid *)func_0204da0c();
    for (s32 y = 1; y <= 4; y++) {
        for (s32 x = 1; x <= 4; x++) {
            if ((u32)x < g->w && (u32)y < g->h && g->cells != NULL) {
                cell = &g->cells[y * g->w + x];
            } else {
                cell = NULL;
            }
            if (cell != NULL) {
                for (s32 j = 0; j < 16; j++) {
                    for (s32 i = 0; i < 16; i++) {
                        void *o = func_02037558(cell, i, j, 0);
                        if (o != NULL && func_0204b14c(o) && idx == func_0204b124(o)) {
                            func_0204edf8(a, b, x, y, i, j);
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_020af72c(u32 idx) {
    u32 a, b;
    if (func_020af768(&a, &b, idx)) {
        void *p = func_0204da0c();
        u16 h = 0xfff1;
        func_0204eb30(p, &h, a, b, 0);
        return TRUE;
    } else {
        return TRUE;
    }
}

void Unk_020af53c::func_020af694() {
    BOOL flag = FALSE;
    u32 v = func_020b50d0(data_021e5890.f14);
    for (u32 i = 0; i < 3; i++) {
        if (v == 0) {
            if (func_020af72c(i)) {
                e[i].func_020afa38();
            }
        } else {
            Unk_020af85c *r = &e[i];
            if (r->func_020afa1c()) {
                s32 n = r->func_020af85c();
                BOOL x = r->c5 ? TRUE : flag;
                if (!x) {
                    if (n != 0) {
                        r->func_020afa38();
                    }
                } else if (n >= 3 || n < 0) {
                    if (func_020af72c(i)) {
                        r->func_020afa38();
                    }
                } else {
                    r->c4 = n;
                }
            }
        }
    }
}

void Unk_020af53c::func_020af674() {
    u32 i = 0;
    do {
        e[i].func_020afa38();
        i++;
    } while (i < 3);
}

BOOL Unk_020af53c::func_020af64c(u32 idx) {
    if (idx < 3) {
        Unk_020af85c *r = &e[idx];
        if (r->func_020afa1c()) {
            r->func_020afa38();
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_020af53c::func_020af608(u32 a, u32 b, u32 c) {
    for (u32 i = 0; i < 3; i++) {
        Unk_020af85c *r = &e[i];
        if (!r->func_020afa1c()) {
            r->func_020af96c(a, b, c);
            return i;
        }
    }
    return -1;
}

BOOL Unk_020af53c::func_020af590(u32 idx, u32 *a, u32 *b, u32 *c, u8 *d, u8 *ee, u8 *f) {
    if (idx < 3) {
        Unk_020af85c *r = &e[idx];
        if (r->func_020afa1c()) {
            if (a != NULL) {
                *a = r->func_020af914();
            }
            if (b != NULL) {
                *b = r->func_020af8bc();
            }
            if (c != NULL) {
                *c = r->func_020af8b4();
            }
            if (d != NULL) {
                *d = r->a0;
            }
            if (ee != NULL) {
                *ee = r->a1;
            }
            if (f != NULL) {
                *f = r->a2;
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020af53c::func_020af564() {
    for (u32 i = 0; i < 3; i++) {
        if (!e[i].func_020afa1c()) {
            return FALSE;
        }
    }
    return TRUE;
}

void Unk_020af53c::func_020af53c(u32 idx) {
    if (idx < 3) {
        if (e[idx].func_020afa1c()) {
            e[idx].c5 = 0;
        }
    }
}

void Unk_020af514::func_020af514() {
    for (u32 i = 0; i < 2; i++) {
        items[i].unk_00 = NULL;
        items[i].unk_04 = NULL;
        items[i].unk_08 = NULL;
        items[i].unk_0c = 0x800;
    }
}

EntryFn data_020e2ed0[3] = {func_020afeb4, _ZN12Unk_020afbb813func_020afc48EPhjj, _ZN12Unk_020afbb813func_020afbb8EPhy};

Unk_020af514 data_021ee25c;
