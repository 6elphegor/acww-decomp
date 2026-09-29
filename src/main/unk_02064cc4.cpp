#include "types.h"
#include "Unk_020d8c7c.h"

// Element of the 3-entry array at +0x58 of Unk_020dd408 (0x44 bytes).
struct Unk_020652ac {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15[7];
    /* 0x1c */ u8 unk_1c[0x28];
};

struct Unk_0206513c_Def {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
};

struct Unk_0206513c_DefList {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_0206513c_Def **unk_04;
};

struct Unk_02065078_Rec {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

struct Unk_02064fa8_Data {
    /* 0x00 */ u8 unk_00[0x24];
};

struct Unk_020652c0_Node {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_020652c0_Node *unk_04;
    /* 0x08 */ s32 unk_08;
};

struct Unk_020652c0_List {
    /* 0x00 */ Unk_020652c0_Node *unk_00;
    /* 0x04 */ Unk_020652c0_Node *unk_04;
};

struct Unk_020652ec_Node {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_020652ec_Node *unk_04;
    /* 0x08 */ u8 unk_08;
};

struct Unk_020652ec_List {
    /* 0x00 */ Unk_020652ec_Node *unk_00;
    /* 0x04 */ Unk_020652ec_Node *unk_04;
};

class Unk_020dd408 : public Unk_020d8c7c {
public:
    inline Unk_020dd408();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    void func_02064d6c();
    void func_0206513c();

    /* 0x050 */ s32 unk_50;
    /* 0x054 */ s32 unk_54;
    /* 0x058 */ Unk_020652ac unk_58[3];
    /* 0x124 */ u8 unk_124[0x44];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u16 unk_16a;
    /* 0x16c */ u16 unk_16c;
    /* 0x16e */ u16 unk_16e;
    /* 0x170 */ u16 unk_170;
    /* 0x174 */ void *unk_174;
    /* 0x178 */ u8 unk_178;
};

extern "C" {
extern Unk_020dd408 *data_021c9f44;
extern u8 data_020e416c;
extern u8 data_020cb7d8[];
extern Unk_02065078_Rec data_020cb80c[];
extern Unk_0206513c_DefList *data_020dd3ec[];
extern Unk_02064fa8_Data data_0213c7e0;

s32 func_020b22ac(s32 a);
u16 func_020baa04(s32 a);
s32 func_020b50e8(void);
s32 func_020b52f8(void);
void func_02064ab0(void *p);
void func_02064abc(void *p, void *q);
void func_02064b10(void *p);
void func_02064b88(void *p);
void func_0206449c(void *p, void *q);
void func_020644e8(void *p);
void func_020648d8(void *p);
void func_02064460(s32 a, s32 b);
void func_02064478(s32 a, s32 b, s32 c);
void func_0206444c(void *p);
void func_020b2374(void *p, s32 a);
void func_020b2394(void *p);
void func_01ffc714(void *a, void *b);
void *func_02135714(void *p, s32 n, s32 size, void *ctor, void *dtor);

Unk_020652ac *func_020652ac(Unk_020652ac *p);
void func_020e7968(void);
void func_020e7a10(void *list, void *node, void *prev);
void func_02115fb4(void *p, s32 v, s32 n);
void func_02051268(void *src, void *dst, s32 n);
void func_0205125c(void *p, s32 n);
s32 func_02051320(void *p, s32 n, s32 z);
s32 func_020512e0(void *p, s32 n);
void func_02065610(void *p, void *q);
s32 func_020655d8(void *p);
void *func_0209750c(void);
void *func_02098750(void *p);
void *func_02097e00(void *p);
void *func_0206fcc8(void *p);
void *func_0206f874(void *p);
void *func_0206f85c(void *p);
void *func_0206fca8(void *p);
void func_020b3558(void *dst, void *code, void *z);
void func_020a77f8(void *dst, void *src);
void func_020653cc(u8 *code, u8 *dst, u8 *lenOut, u8 *extra);
}

// Object filled by func_02065388 (0x52 bytes).
struct Unk_02065388_Obj {
    /* 0x00 */ u8 unk_00[0x18];
    /* 0x18 */ u8 unk_18[0x18];
    /* 0x30 */ u8 unk_30[0x20];
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 unk_51;
};

// Object with the byte/halfword state accessed by func_02065554 and friends.
class Unk_02065554 {
public:
    BOOL func_02065554();
    void func_02065564(u32 v);
    u8 func_02065578();
    u32 func_02065588(u16 v, u32 w);
    void func_020655ac(u32 v);
    u8 func_020655c0();
    u16 func_020655d0();
    void func_02065518();

    /* 0x00 */ u8 unk_00[0x1a];
    /* 0x1a */ u8 unk_1a;
    /* 0x1b */ u8 unk_1b[0x15];
    /* 0x30 */ u8 unk_30[4];
    /* 0x34 */ u8 unk_34[0x18];
    /* 0x4c */ u8 unk_4c[0x80];
    /* 0xcc */ u8 unk_cc[0x20];
    /* 0xec */ u8 unk_ec;
    /* 0xed */ u8 unk_ed;
    /* 0xee */ u8 unk_ee;
    /* 0xef */ u8 unk_ef;
    /* 0xf0 */ u16 unk_f0;
};

class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020dd468 : public Unk_020e2a60 {
public:
    Unk_020dd468();
    virtual ~Unk_020dd468();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_02064d6c_Rgb {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};
inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

inline Unk_020dd408::Unk_020dd408() {
    func_02135714(unk_58, 3, sizeof(Unk_020652ac), (void *)func_020652ac, (void *)func_0206444c);
}

extern "C" s16 func_02064cc4(void) {
    struct {
        volatile u16 a;
        u16 c;
        volatile u16 b;
        u16 d;
    } l;
    l.c = 0;
    Unk_020dd408 *o = data_021c9f44;
    if (o == NULL) {
        return l.c;
    }
    switch (o->unk_50) {
    case 2:
    case 3: {
        s32 t = func_020b22ac((s32)o->unk_174);
        Unk_02064d6c_Rgb *x = (Unk_02064d6c_Rgb *)&data_021c9f44->unk_170;
        Unk_02064d6c_Rgb *y = (Unk_02064d6c_Rgb *)&data_021c9f44->unk_16e;
        s32 b = x->b + (((y->b - x->b) * t) >> 12);
        s32 r = x->r + (((y->r - x->r) * t) >> 12);
        s32 g = x->g + (((y->g - x->g) * t) >> 12);
        l.d = (b << 10) | (r | (g << 5));
        break;
    }
    default:
        l.a = func_020baa04(2);
        l.b = l.a;
        l.d = l.b;
    }
    return l.d;
}

extern "C" s16 func_02064f18(void) {
    return data_021c9f44->unk_168;
}

extern "C" s16 func_02064f2c(void) {
    volatile s16 v = 0;
    Unk_020dd408 *o = data_021c9f44;
    if (o != NULL) {
        if (*(s32 *)((u8 *)o + 0x124) != 9) {
            v = *(u16 *)((u8 *)o + 0x128);
        }
    }
    return v;
}

extern "C" s32 func_02064f60(void) {
    s32 r = 15;
    u8 t = data_020cb7d8[func_020b50e8()];
    switch (t) {
    case 2:
    case 3:
        r = 1;
    }
    return r;
}

extern "C" s32 func_02064f84(void) {
    s32 r = 15;
    u8 t = data_020cb7d8[func_020b50e8()];
    switch (t) {
    case 2:
    case 3:
        r = 1;
    }
    return r;
}

extern "C" void func_02064fa8(void *a, void *b) {
    func_01ffc714(a, b);
    func_01ffc714((u8 *)a + 0xc, (u8 *)b + 0xc);
    func_01ffc714((u8 *)a + 0x18, (u8 *)b + 0x18);
}

BOOL Unk_020dd408::vfunc_0c() {
    func_02064ab0(unk_124);
    data_021c9f44 = NULL;
    return TRUE;
}

BOOL Unk_020dd408::vfunc_24() {
    u8 l[0x24];
    s32 i;
    Unk_020652ac *p;
    func_02064fa8(&data_0213c7e0, l);
    for (p = unk_58, i = 0; i < unk_54; p++, i++) {
        func_0206449c(p, l);
    }
    func_02064abc(unk_124, l);
    return TRUE;
}

BOOL Unk_020dd408::vfunc_18() {
    Unk_020652ac *p;
    s32 i;
    for (p = unk_58, i = 0; i < unk_54; p++, i++) {
        func_020644e8(p);
    }
    func_02064b10(unk_124);
    func_02064d6c();
    return TRUE;
}

BOOL Unk_020dd408::vfunc_00() {
    data_021c9f44 = this;
    s32 id = func_020b50e8();
    unk_50 = data_020cb7d8[id];
    if (id == 0x21) {
        unk_16a = 0x3e99;
        unk_16c = 0x3caa;
        unk_16e = 0x494a;
        unk_170 = 0x518c;
        unk_178 = 0xb;
    } else {
        Unk_02065078_Rec *rec = &data_020cb80c[id];
        unk_16a = rec->unk_00;
        unk_16c = 0;
        unk_16e = rec->unk_02;
        unk_170 = 0;
        unk_178 = rec->unk_08;
    }
    func_0206513c();
    Unk_020652ac *p;
    s32 i;
    for (p = unk_58, i = 0; i < unk_54; p++, i++) {
        func_020648d8(p);
        func_020644e8(p);
    }
    func_02064b88(unk_124);
    return TRUE;
}

void Unk_020dd408::func_0206513c() {
    s32 id;
    s32 i = 0;
    id = func_020b50e8();
    if (IsOne(data_020e416c)) {
        if (func_020b52f8() == 0) i = 1;
    }
    if (i) {
        func_02064478(0, 2, 0);
    } else {
        func_02064460(0, 1);
    }
    func_02064460(1, 1);
    Unk_0206513c_DefList *dl = data_020dd3ec[unk_50];
    Unk_0206513c_Def **list = dl->unk_04;
    s32 count = dl->unk_00;
    unk_54 = count;
    i = 0;
    Unk_02065078_Rec *rec = &data_020cb80c[id];
    for (; i < count; i++) {
        Unk_0206513c_Def d = *list[i];
        unk_58[i].unk_00 = d.unk_00;
        unk_58[i].unk_04 = d.unk_04;
        unk_58[i].unk_08 = d.unk_08;
        unk_58[i].unk_0c = d.unk_0c;
        unk_58[i].unk_10 = d.unk_10;
        unk_58[i].unk_12 = d.unk_12;
        switch (list[i]->unk_00) {
        case 3:
        case 4:
        case 5:
            unk_58[i].unk_10 = rec->unk_04;
            unk_58[i].unk_12 = rec->unk_06;
            Unk_020652ac *e = &unk_58[i];
            e->unk_14 = 0;
            func_020b2374(e->unk_1c, 0);
            unk_174 = e->unk_1c;
        }
    }
}

extern "C" Unk_020dd408 *func_02065260(void) {
    return new Unk_020dd408();
}

extern "C" Unk_020652ac *func_020652ac(Unk_020652ac *p) {
    func_020b2394(p->unk_1c);
    return p;
}

extern "C" Unk_020652c0_Node *func_020652c0(Unk_020652c0_List *list, s32 key) {
    if (key == 0) return NULL;
    Unk_020652c0_Node *p;
    for (p = list->unk_00; p != NULL; p = p->unk_04) {
        if (key == p->unk_08) return p;
    }
    return NULL;
}

extern "C" BOOL func_020652dc(void) {
    func_020e7968();
    return TRUE;
}

extern "C" BOOL func_020652ec(Unk_020652ec_List *list, Unk_020652ec_Node *node) {
    Unk_020652ec_Node *prev = list->unk_00;
    if (prev == NULL) {
        list->unk_00 = node;
        list->unk_04 = node;
        return TRUE;
    }
    Unk_020652ec_Node *cur = prev->unk_04;
    while (cur != NULL) {
        if (cur->unk_08 > node->unk_08) {
            func_020e7a10(list, node, prev);
            return TRUE;
        }
        prev = cur;
        cur = cur->unk_04;
    }
    func_020e7a10(list, node, prev);
    return TRUE;
}

extern "C" void func_02065328(Unk_020652c0_List *list) {
    list->unk_00 = NULL;
    list->unk_04 = NULL;
}

u8 *Unk_020dd468::vfunc_0c() {
    return (u8 *)this + 0xe;
}

u32 Unk_020dd468::vfunc_08() {
    return 0x80;
}

Unk_020dd468::~Unk_020dd468() {
}

Unk_020dd468::Unk_020dd468() {
}

extern "C" void func_02065388(Unk_02065388_Obj *o) {
    u8 code[2];
    func_02115fb4(o, 0, 0x52);
    code[0] = 0x23;
    func_020653cc(&code[0], (u8 *)o, &o->unk_50, NULL);
    code[1] = 0x26;
    func_020653cc(&code[1], o->unk_18, &o->unk_51, NULL);
}

struct Unk_020653cc_Buf {
    /* 0x00 */ u32 unk_00[3];
    /* 0x0c */ u8 unk_0c[2];
    /* 0x0e */ u8 unk_0e[0x2e];
};

extern "C" void func_020653cc(u8 *code, u8 *dst, u8 *lenOut, u8 *extra) {
    u32 src[16];
    Unk_020653cc_Buf out;
    s32 n;
    s32 m;
    func_0206fcc8(src);
    func_0206f874(&out);
    func_020b3558(src, code, NULL);
    func_020a77f8(&out, src);
    n = func_02051320(out.unk_0e, 0x29, 0);
    *lenOut = n;
    if (n != 0) {
        func_02051268(out.unk_0e, dst, n);
    }
    m = n;
    if (extra != NULL) {
        s32 t = func_020512e0(extra, 8);
        func_02051268(extra, dst + n, t);
        m = n + t;
    }
    if (out.unk_0e[n] == 0x86) {
        s32 off = n + 1;
        u8 *p = out.unk_0e + off;
        s32 k = func_02051320(p, 0x29 - off, 0);
        if (k != 0) {
            func_02051268(p, dst + m, k);
        }
    }
    func_0206f85c(&out);
    func_0206fca8(src);
}

extern "C" void func_02065470(Unk_02065388_Obj *a, Unk_02065554 *b) {
    func_02051268(b->unk_cc, a->unk_30, 0x20);
    if (func_020655d8(b) == 0) {
        u8 *dst;
        if (b->func_02065554()) {
            dst = a->unk_18;
            a->unk_51 = b->unk_ec;
        } else {
            dst = a->unk_00;
            a->unk_50 = b->unk_ec;
        }
        func_02051268(b->unk_34, dst, 0x18);
    }
}

extern "C" void func_020654c8(Unk_02065554 *o, u8 *p) {
    u8 buf[0x10];
    if (p[0] != 0) {
        func_02051268(p, o->unk_cc, 0x20);
    } else {
        func_0205125c(buf + 2, 8);
        func_02065610(o, buf + 2);
        buf[0] = 0x24;
        func_020653cc(buf, o->unk_cc, buf + 1, buf + 2);
    }
}

void Unk_02065554::func_02065518() {
    if ((u8)(unk_1a + 0xfe) <= 1) return;
    u8 *p = (u8 *)func_02097e00(func_02098750(func_0209750c()));
    func_02051268(p, unk_34, 0x18);
    unk_ec = p[0x50];
}

BOOL Unk_02065554::func_02065554() {
    if (unk_1a == 1) return TRUE;
    return FALSE;
}

void Unk_02065554::func_02065564(u32 v) {
    unk_ee = (unk_ee & 0xc0) | v;
}

u8 Unk_02065554::func_02065578() {
    return unk_ee & 0x3f;
}

u32 Unk_02065554::func_02065588(u16 v, u32 w) {
    u16 old = unk_f0;
    if (w == 0xff) w = 0;
    unk_f0 = v;
    func_020655ac(w);
    return old;
}

void Unk_02065554::func_020655ac(u32 v) {
    unk_ee = (unk_ee & 0x3f) | (v << 6);
}

u8 Unk_02065554::func_020655c0() {
    return (u8)((unk_ee & 0xc0) >> 6);
}

u16 Unk_02065554::func_020655d0() {
    return unk_f0;
}

static inline void Unk_02064d6c_Adjust(Unk_02064d6c_Rgb *c) {
    s32 r = c->r + 10;
    s32 g = c->g + 10;
    s32 b = c->b + 7;
    if (r > 31) {
        c->r = 31;
    } else {
        c->r = r;
    }
    if (g > 31) {
        c->g = 31;
    } else {
        c->g = g;
    }
    if (b > 31) {
        c->b = 31;
    } else {
        c->b = b;
    }
}

void Unk_020dd408::func_02064d6c() {
    struct {
        volatile u16 a;
        Unk_02064d6c_Rgb c;
        volatile u16 b;
        u16 pad;
    } l;
    l.a = func_020baa04(3);
    l.b = l.a;
    *(u16 *)&l.c = l.b;
    if (func_020b52f8()) {
        if (unk_58[2].unk_14 != 0) {
            Unk_02064d6c_Adjust(&l.c);
        }
    } else if (IsOne(data_020e416c)) {
        switch (func_020b50e8()) {
        case 0xb:
            Unk_02064d6c_Adjust(&l.c);
            break;
        case 0x27:
        case 0x28:
            break;
        default:
            l.c.r = 31;
            l.c.g = 31;
            l.c.b = 31;
        }
    }
    unk_168 = *(u16 *)&l.c;
}
