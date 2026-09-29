#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0205f8d4_Vec {
    s32 x, y, z;
};

// Actor (see Unk_020d9670): virtual at 0x5c fills a position, position at +0x5c.
class Unk_020d9670 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c(Unk_0205f8d4_Vec *out);
    u8 pad_50[0xc];
    Unk_0205f8d4_Vec unk_5c;
};

// Local scratch object filled by func_020339bc and cleaned by func_02033988.
struct Unk_0205f92c_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
};

class Unk_0205f8d4;
class Unk_0205fbc8;

typedef void (Unk_0205f8d4::*Unk_0205f8d4_Fn)();

class Unk_020dbe24 {
public:
    Unk_020dbe24();
    virtual ~Unk_020dbe24();
    void func_02055200(void);
    void func_02055340(void *a, void *b, void *c);
    void func_02055210(void *p);
    u8 pad_04[0x10];
};

class Unk_020dbd34 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    BOOL func_02054b14(void);
    void func_02054b70(void *a);
    u8 pad_04[0x98];
};

class Unk_020e45ec {
public:
    Unk_020e45ec();
    virtual BOOL vfunc_00();
    void func_020b89c8(void);
    void func_020b8b08(void);
    BOOL func_020b89f0(u32 *a, u8 b);
    u8 pad_04[9];
    u8 unk_0d;
    u8 pad_0e[0x0e];
};

struct Unk_020cbb18 {
    u8 pad_00[0x6c];
    u8 unk_6c;
};

extern "C" {
extern Unk_0205fbc8 data_021c7468;
extern Unk_0205f8d4_Fn data_021c7418[];
extern u32 data_021c61b0;
extern Unk_020cbb18 *data_020cbb18;
extern char data_021c7404[];
extern char data_020dc50c[];
extern u8 data_021e6e3c[];
extern u8 data_021e58a8[];

s32 func_020902f8(s32 h);
s32 func_02090330(u32 id, void *a, u32 b, u32 c);
void func_020339bc(Unk_0205f92c_Buf *p, Unk_0205f8d4_Vec *v, s32 a, s32 b);
void func_02033988(Unk_0205f92c_Buf *p);
s32 func_0205f284(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, u32 *c, u32 *d, s32 e);
BOOL func_ov003_02223134(void *p);
void func_ov003_02223310(void *p, s32 a);
void func_ov003_02223498(void *p);
void func_ov003_022234c4(void *p);
BOOL func_ov003_022234fc(void *p);
BOOL func_ov003_02223554(void *p);
void *func_0210629c(void *p);
void func_020641b4(char *name, void *p, u32 size);
s32 func_020639e8(char *buf, char *fmt, ...);
s32 func_020b50e8();
u32 func_020b4928(s32 a);
u32 func_020b491c(s32 a);
u32 func_02084fbc();
void func_020e885c();
void func_020e877c();
void *func_020e8628(u32 heap, u32 size, u32 align);
s32 func_0205ba88();
void func_0205baa4();
void *func_02060550(void *a, s32 b);
void func_020607c8(void *a, u16 *b);
u16 *func_020607d4(void *a);
u32 func_0205ffac();
u32 func_0205ffb0();
u32 func_0205ffb4();
u32 func_0205ffbc();
char *func_0205ffc4(u32 n);
void func_0206007c(u8 *bits, u32 i);
void func_020600d4(u8 *bits, u32 i);
BOOL func_02060130(u8 *bits, u32 i);
BOOL func_02060190(u16 *p);
BOOL func_020601a4(s32 a, u16 *p);
}

class Unk_0205f8d4 {
public:
    void func_0205f8d4();
    void func_0205f92c(s32 state);
    void func_0205fae8(Unk_0205f8d4_Vec *v);
    void func_0205faf8(Unk_0205f8d4_Vec *v);
    void func_0205fb08();
    void func_0205fb20();
    void func_0205fb34();
    void func_0205fb40();
    BOOL func_0205fb70();
    BOOL func_0205fb88();
    BOOL func_0205fba8();
    void *func_0205fbb8();
    void func_0205fbbc(void *p);
    void func_0205fbc0(s32 v);
    u8 func_0205fbc4();
    void func_0205fccc();
    void func_0205fd0c(u32 id, Unk_020d9670 *actor, u32 n);
    void func_0205fd7c();
    void func_0205fd80();

    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    Unk_0205f8d4_Vec unk_08;
    u32 unk_14;
    u32 unk_18;
    Unk_0205f8d4_Vec unk_1c;
    Unk_020d9670 *unk_28;
    void *unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
    u8 pad_39[3];
    s32 unk_3c;
};

class Unk_0205fbc8 {
public:
    Unk_0205fbc8();
    ~Unk_0205fbc8();
    Unk_0205f8d4 *func_0205fbc8(s32 idx);
    void func_0205fbec(s32 idx, Unk_0205f8d4 *p);
    BOOL func_0205fbfc(s32 idx);
    void func_0205fc48(s32 idx);
    void func_0205fc6c(s32 idx, u32 n);
    void func_0205fc98(s32 idx);
    Unk_020dbd34 *func_0205fd94(s32 idx);
    Unk_020e45ec *func_0205fda4(s32 idx);
    Unk_020dbe24 *func_0205fdb0(s32 idx);
    void *func_0205fdbc(s32 idx);
    void func_0205fdc4();
    void func_0205fe14();

    void *unk_00[9];
    Unk_020dbe24 unk_24[9];
    Unk_020e45ec unk_d8[9];
    Unk_020dbd34 unk_1d4[9];
    Unk_0205f8d4 *unk_750[9];
};

void Unk_0205f8d4::func_0205f8d4()
{
    data_021c7468.func_0205fbfc(unk_00);
    unk_30++;
    unk_38 = 0;
    if (unk_04 >= 10) {
        func_0205f92c(0);
    }
    (this->*data_021c7418[unk_04])();
}

void Unk_0205f8d4::func_0205f92c(s32 state)
{
    Unk_0205f8d4_Vec v;
    Unk_0205f92c_Buf buf;
    s32 old;

    if (unk_34 != -1) {
        func_020902f8(unk_34);
        unk_34 = -1;
    }
    if (unk_28 == 0) {
        unk_04 = 0;
        return;
    }
    old = unk_04;
    unk_04 = state;
    unk_30 = 0;
    func_020339bc(&buf, &unk_08, 1, 1);
    switch (state) {
    case 1:
        if (unk_2c != 0) {
            if (func_ov003_02223134(unk_2c)) {
                unk_2c = 0;
            }
        }
        break;
    case 7: {
        Unk_0205f8d4_Vec a, b;
        if (!unk_28->vfunc_5c(&unk_1c)) {
            Unk_0205f8d4_Vec *pv = &unk_28->unk_5c;
            unk_1c.x = pv->x;
            unk_1c.y = pv->y;
            unk_1c.z = pv->z;
        }
        a.x = unk_1c.x;
        a.y = unk_1c.y;
        a.z = unk_1c.z;
        b.x = unk_08.x;
        b.y = unk_08.y;
        b.z = unk_08.z;
        func_0205f284(&a, &b, &unk_14, &unk_18, 1);
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            func_02090330(0xd, &v, 0, 0);
        }
        break;
    }
    case 8: {
        Unk_0205f8d4_Vec c, d;
        if (!unk_28->vfunc_5c(&unk_1c)) {
            Unk_0205f8d4_Vec *pv = &unk_28->unk_5c;
            unk_1c.x = pv->x;
            unk_1c.y = pv->y;
            unk_1c.z = pv->z;
        }
        c.x = unk_1c.x;
        c.y = unk_1c.y;
        c.z = unk_1c.z;
        d.x = unk_08.x;
        d.y = unk_08.y;
        d.z = unk_08.z;
        func_0205f284(&c, &d, &unk_14, &unk_18, 2);
        break;
    }
    case 5:
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            func_02090330(0x10, &v, 0, 0);
        }
        break;
    case 4:
        if (old == 6) {
            if (buf.unk_30 != 0) {
                v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = buf.unk_3c;
                func_02090330(0xf, &v, 0, 0);
            }
        }
        break;
    case 6:
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            unk_34 = func_02090330(0x11, &v, 0, 0);
        }
        break;
    case 0:
    case 2:
    case 3:
    default:
        break;
    }
    func_02033988(&buf);
}

void Unk_0205f8d4::func_0205fae8(Unk_0205f8d4_Vec *v)
{
    unk_08.x = v->x;
    unk_08.y = v->y;
    unk_08.z = v->z;
}

void Unk_0205f8d4::func_0205faf8(Unk_0205f8d4_Vec *v)
{
    unk_1c.x = v->x;
    unk_1c.y = v->y;
    unk_1c.z = v->z;
}

void Unk_0205f8d4::func_0205fb08()
{
    func_ov003_02223310((void *)unk_3c, 0);
    unk_2c = 0;
}

void Unk_0205f8d4::func_0205fb20()
{
    func_ov003_02223498(unk_2c);
    unk_2c = 0;
}

void Unk_0205f8d4::func_0205fb34()
{
    func_ov003_022234c4(unk_2c);
}

void Unk_0205f8d4::func_0205fb40()
{
    Unk_0205f92c_Buf buf;
    func_020339bc(&buf, &unk_08, 1, 1);
    if (buf.unk_30 != 0) {
        unk_08.y = buf.unk_3c + 0xcd;
    }
    func_02033988(&buf);
}

BOOL Unk_0205f8d4::func_0205fb70()
{
    if (unk_2c == 0) {
        return TRUE;
    }
    return func_ov003_022234fc(unk_2c);
}

BOOL Unk_0205f8d4::func_0205fb88()
{
    if (unk_2c == 0) {
        func_0205f92c(7);
        return FALSE;
    }
    return func_ov003_02223554(unk_2c);
}

BOOL Unk_0205f8d4::func_0205fba8()
{
    if ((u32)(unk_04 - 4) <= 1) {
        return TRUE;
    }
    return FALSE;
}

void *Unk_0205f8d4::func_0205fbb8()
{
    return unk_2c;
}

void Unk_0205f8d4::func_0205fbbc(void *p)
{
    unk_2c = p;
}

void Unk_0205f8d4::func_0205fbc0(s32 v)
{
    unk_3c = v;
}

u8 Unk_0205f8d4::func_0205fbc4()
{
    return unk_00;
}

static inline BOOL Unk_0205fbfc_Is2(u8 v) { return v == 2 ? TRUE : FALSE; }
static inline BOOL Unk_0205fbfc_Is1(u8 v) { return v == 1 ? TRUE : FALSE; }

Unk_0205f8d4 *Unk_0205fbc8::func_0205fbc8(s32 idx)
{
    if (idx >= 4) {
        return 0;
    }
    Unk_0205f8d4 *p = unk_750[idx];
    if (p != 0 && p->unk_04 == 4) {
        return p;
    }
    return 0;
}

void Unk_0205fbc8::func_0205fbec(s32 idx, Unk_0205f8d4 *p)
{
    unk_750[idx] = p;
}


BOOL Unk_0205fbc8::func_0205fbfc(s32 idx)
{
    Unk_020e45ec *p = func_0205fda4(idx);
    u8 t = p->unk_0d;
    if (Unk_0205fbfc_Is2(t)) {
        return TRUE;
    }
    if (!Unk_0205fbfc_Is1(t)) {
        p->func_020b89f0((u32 *)func_0210629c(func_0205fdbc(idx)), 1);
    }
    return FALSE;
}

void Unk_0205fbc8::func_0205fc48(s32 idx)
{
    void *h = func_0210629c(func_0205fdbc(idx));
    func_0205fdb0(idx)->func_02055210(h);
}

void Unk_0205fbc8::func_0205fc6c(s32 idx, u32 n)
{
    char *name = func_0205ffc4(n);
    void *p = func_0205fdbc(idx);
    func_020641b4(name, p, func_0205ffbc());
}

void Unk_0205fbc8::func_0205fc98(s32 idx)
{
    if (Unk_0205fbfc_Is1(unk_d8[idx].unk_0d)) {
        unk_d8[idx].func_020b89c8();
    } else {
        unk_d8[idx].func_020b8b08();
    }
}

void Unk_0205f8d4::func_0205fccc()
{
    data_021c7468.func_0205fd94(func_0205fbc4())->func_02054b14();
    data_021c7468.func_0205fc98(func_0205fbc4());
    data_021c7468.func_0205fbec(func_0205fbc4(), 0);
    unk_00 = 9;
}

void Unk_0205f8d4::func_0205fd0c(u32 id, Unk_020d9670 *actor, u32 n)
{
    unk_00 = id;
    if (n < 3) {
        data_021c7468.func_0205fbec(id, this);
        data_021c7468.func_0205fc6c(id, n);
    } else {
        data_021c7468.func_0205fbec(id, 0);
        data_021c7468.func_0205fc6c(id, 0);
    }
    void *p = data_021c7468.func_0205fdbc(id);
    data_021c7468.func_0205fc48(id);
    data_021c7468.func_0205fd94(id)->func_02054b70(p);
    if (actor) {
        unk_28 = actor;
    }
    unk_04 = 0;
}

void Unk_0205f8d4::func_0205fd7c()
{
}

void Unk_0205f8d4::func_0205fd80()
{
    unk_00 = 9;
    unk_28 = 0;
    unk_2c = 0;
    unk_34 = -1;
    unk_3c = -1;
}

Unk_020dbd34 *Unk_0205fbc8::func_0205fd94(s32 idx)
{
    return &unk_1d4[idx];
}

Unk_020e45ec *Unk_0205fbc8::func_0205fda4(s32 idx)
{
    return &unk_d8[idx];
}

Unk_020dbe24 *Unk_0205fbc8::func_0205fdb0(s32 idx)
{
    return &unk_24[idx];
}

void *Unk_0205fbc8::func_0205fdbc(s32 idx)
{
    return unk_00[idx];
}

void Unk_0205fbc8::func_0205fdc4()
{
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_24[i].func_02055200();
    }
    for (i = 0; i < 9; i++) {
        unk_00[i] = 0;
        unk_750[i] = 0;
    }
    if (data_021c61b0 != 0) {
        func_020e885c();
    }
}

void Unk_0205fbc8::func_0205fe14()
{
    u32 a = data_020cbb18->unk_6c;
    u32 n = func_020b4928(func_020b50e8());
    u32 i;
    u32 m;
    if (a < n) {
        n = a;
    }
    if (n != 0) {
        a = n;
    } else {
        a = 1;
    }
    m = func_020b491c(func_020b50e8()) + func_02084fbc() - a;
    for (i = 0; i < n; i++) {
        u32 x = func_0205ffb4();
        u32 y = func_0205ffb0();
        unk_24[i].func_02055340((void *)x, (void *)y, (void *)func_0205ffac());
    }
    for (i = 4; i < m + 4; i++) {
        u32 x = func_0205ffb4();
        u32 y = func_0205ffb0();
        unk_24[i].func_02055340((void *)x, (void *)y, (void *)func_0205ffac());
    }
    u32 heap = data_021c61b0;
    for (i = 0; i < n; i++) {
        unk_00[i] = func_020e8628(heap, func_0205ffbc(), 4);
    }
    u32 j = 4;
    a = 4;
    for (; j < m + 4; j++) {
        unk_00[j] = func_020e8628(heap, func_0205ffbc(), a);
    }
}

Unk_0205fbc8::~Unk_0205fbc8()
{
}

Unk_0205fbc8::Unk_0205fbc8()
{
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_00[i] = 0;
        unk_750[i] = 0;
    }
}

extern "C" {

u32 func_0205ffac() { return 0x20; }
u32 func_0205ffb0() { return 0; }
u32 func_0205ffb4() { return 0x200; }
u32 func_0205ffbc() { return 0x4d8; }

char *func_0205ffc4(u32 n)
{
    func_020639e8(data_021c7404, data_020dc50c, n);
    return data_021c7404;
}

Unk_0205f8d4 *func_0205ffe4(s32 idx)
{
    return data_021c7468.func_0205fbc8(idx);
}

void func_0205fff4()
{
    data_021c7468.func_0205fdc4();
    func_0205ba88();
}

void func_0206000c()
{
    func_0205baa4();
    data_021c7468.func_0205fe14();
    if (data_021c61b0 != 0) {
        func_020e877c();
    }
}

void func_02060034(u8 *p)
{
    u32 i = 0;
    s32 z = 0;
    for (; i < 9; i++) {
        p[i] = z;
    }
}

static inline s32 Unk_02060044_Idx(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        return id - 0x1323;
    }
    return -1;
}

void func_02060044(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        func_0206007c(data_021e6e3c, Unk_02060044_Idx(id));
    }
}

void func_0206007c(u8 *bits, u32 i)
{
    if (i < 0x46) {
        bits[i >> 3] &= ~(1 << (i & 7));
    }
}

void func_0206009c(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        func_020600d4(data_021e6e3c, Unk_02060044_Idx(id));
    }
}

void func_020600d4(u8 *bits, u32 i)
{
    if (i < 0x46) {
        bits[i >> 3] |= 1 << (i & 7);
    }
}

BOOL func_020600f4(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        return func_02060130(data_021e6e3c, Unk_02060044_Idx(id));
    }
    return FALSE;
}

BOOL func_02060130(u8 *bits, u32 i)
{
    if (i < 0x46) {
        if ((bits[i >> 3] >> (i & 7)) & 1) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void func_02060150() {}
void func_02060154() {}

BOOL func_02060158()
{
    u16 v = 0xfff1;
    return func_02060190(&v);
}

BOOL func_02060174(s32 a)
{
    u16 v = 0xfff1;
    return func_020601a4(a, &v);
}

BOOL func_02060190(u16 *p)
{
    return func_020601a4(func_020b50e8(), p);
}

BOOL func_020601a4(s32 a, u16 *p)
{
    void *r = func_02060550(data_021e58a8, a);
    if (r != 0) {
        func_020607c8(r, p);
        return TRUE;
    }
    return FALSE;
}

}

struct Unk_020601cc_Dflt {
    u16 v;
    Unk_020601cc_Dflt() { v = 0xfff1; }
    ~Unk_020601cc_Dflt();
};

extern "C" u16 *func_020601cc()
{
    void *r = func_02060550(data_021e58a8, func_020b50e8());
    if (r != 0) {
        return func_020607d4(r);
    }
    static Unk_020601cc_Dflt dflt;
    return &dflt.v;
}
