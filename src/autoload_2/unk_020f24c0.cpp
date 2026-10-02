// mwcc-flags: -nothumb -O4,p
// G008a: autoload_2 0x020f24c0-0x020f3e50 (75 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: second half of the scene-class file
// (31 vtables at 0x0213b2d0-0x0213b8e8: classes 0x0213b338, 0x0213b574, 0x0213b2d0, the mid-level base 0x0213b8b4, the base class
// 0x0213b8e8 with its helpers up to 0x020f3078), then the sound-object file of the SndMgr (data_021f5b80) at 0x020f30fc-0x020f3e14:
// 6 tail-call stubs, the "Chan" (3144) and "Node"/FndList helpers. All functions extern "C" under their symbols.txt names with the
// object first; classes only DECLARE virtuals, no vtable is emitted; all data and callees are extern.
#include "types.h"

class SubObj {
public:
    virtual void vfunc_00();
};

struct Obj {
    /* 0x00 */ u32 *vptr;
    /* 0x04 */ s8 id;
    /* 0x05 */ u8 f5;
    /* 0x06 */ u8 f6;
    /* 0x07 */ u8 pad7[0x15];
    /* 0x1c */ u8 state;
    /* 0x1d */ u8 f1d;
};

struct Bytes4 {
    u8 b0, b1, b2, b3;
};

struct Player {
    /* 0x00 */ u8 pad0[0x15];
    /* 0x15 */ Bytes4 unk_15;
};

struct F30 {
    u8 pad[0x3c];
    u8 f3c;
};

struct Glob {
    /* 0x00 */ u8 pad0[0x28];
    /* 0x28 */ void *f28;
    /* 0x2c */ Obj *f2c;
    /* 0x30 */ F30 *f30;
    /* 0x34 */ u8 pad1[0x19];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad2[0x14];
    /* 0x62 */ u8 f62;
    /* 0x63 */ u8 pad3[0x10];
    /* 0x73 */ u8 f73;
};

extern "C" {
extern Glob data_021f5b80;
extern Player data_021f59f4;
extern Bytes4 data_0213b2c4;
extern u32 data_0213b2d0[];
extern u32 data_0213b338[];
extern u32 data_0213b574[];
extern u32 data_0213b8b4[];
extern u32 data_0213b8e8[];

void _ZdlPv(void *p);
void *func_020edc88(void);
void *func_020ed960(void);
void *func_020ed978(u32 a);
BOOL func_020edd58(Player *o, u32 a, u32 b, Bytes4 s);
void func_0210be44(void *p);
void func_0210bd58(void *a, u32 b);
void *func_0210bd4c(void *a);
void func_0210cc14(s32 a, void *b);
void func_0210a388(s32 a, void *b, u32 c);
void func_0210a460(s32 a, s32 b);
void func_020f0838(Glob *g, s32 v);
void func_020f0df8(Glob *g);
void func_020f2aec(Obj *self);
void func_020f2b34(Obj *self);
void func_020f2b60(Obj *self);
void func_020f2b9c(Obj *self);
void func_020f2be4(Obj *self);
void func_020f2c2c(Obj *self);
void func_020f2c58(Obj *self, s32 v);
void func_020f2ca8(Obj *self);
void func_020f2cd4(Obj *self, u32 a, s32 b);
Obj *func_020f29c8(Obj *self);
Obj *func_020f2a94(Obj *self);
void func_020f2dcc(Obj *self);
void func_020f2dec(Obj *self, s32 v);
void func_020f2fac(Obj *self);
Obj *func_020f2fc8(Obj *self);
Obj *func_020f3078(Obj *self);
void func_020f44f0(s32 v);
void func_020f4468(void);
void func_020f5070(F30 *a, s32 b);
void func_020f831c(void *p);
void func_020f833c(void *p);
void func_020f8290(void *p, s32 v);
void func_020f0980(Glob *g);
void func_020f0dec(Glob *g);
void func_020f443c(void);
void func_020efc84(Glob *g, s32 a, s32 b);
void func_020edd20(Player *p, s32 v);
void func_020efa64(Glob *g);
void func_020f51b4(F30 *v);
void func_0210a310(s32 a, s32 b);
void func_020f2eac(Obj *self, s32 v);
}


struct Vec3 {
    s32 x, y, z;
};

struct FndList {
    void *head;
    void *tail;
    u16 num;
    u16 offset;
};

struct Handle {
    void *p;
};

struct SndHandle {
    /* 0x00 */ u8 unk_00[0x38];
    /* 0x38 */ u16 unk_38;
    /* 0x3a */ u16 unk_3a;
};

struct InfoB {
    u8 pad[4];
    u8 unk_04;
};

struct Node {
    /* 0x00 */ void *link[2];
    /* 0x08 */ Handle h;
    /* 0x0c */ Vec3 pos;
    /* 0x18 */ u16 id;
    /* 0x1a */ u8 b1a;
    /* 0x1b */ u8 b1b;
};

struct Container {
    /* 0x00 */ FndList list;
    /* 0x0c */ Handle h;
};

struct Chan {
    /* 0x00 */ u32 f0;
    /* 0x04 */ Handle h;
    /* 0x08 */ u16 v;
    /* 0x0a */ u8 flags;
};

struct F4500 {
    u8 pad[0x10];
    s32 w10;
};

static inline BOOL notNull(void *p) {
    return p != NULL;
}

extern "C" {
extern FndList *data_021f5bf8;
extern Handle data_021f5bbc;
extern u16 data_0213b200;
void func_0206d49c(void);
void func_020ee968(void **p);
void *func_020ee928(void **p);
void *func_020ee930(void **p);
void *func_020ee938(void *list, void *obj);
void *func_020ee944(void *list, void *obj);
void func_020ee950(void *list, void *obj);
void func_020ee95c(void *list, void *obj);
void func_020eda30(void *p, u32 a);
void func_020eda60(void *p);
void func_020edad0(u16 a, u16 b, void *out);
void func_02100444(void *list, u16 offset);
void func_02109fd0(void *p, u32 a, s32 b);
void func_0210a0e8(void *p, u32 a, s32 b);
void func_0210a26c(void *p, s32 v);
void func_0210a27c(void *p);
void func_0210a2a0(s32 a, s32 b, u32 c);
InfoB *func_0210b8a0(u32 a, u32 b);
s32 func_020f4904(Vec3 *p, s32 m);
s32 func_020f48d8(s32 x);
s32 func_020f4718(Vec3 *p, s32 m);
void func_020f3144(Chan *c, Vec3 *pos);
F4500 *func_020f4500(void);
void func_020f47ac(s32 z, s32 *a, s32 *b);
void func_020eda80(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0210a1e8(void *p, s32 v);
void func_0210a148(void *p, u32 a, s32 b);
void func_020f3b98(Node *n);
void func_020f3c2c(Node *n);
void func_020f3c78(Node *n);
BOOL func_020f3be8(Node *n);
void func_020f39a0(FndList *list, Node *node);
void func_020f37b4(FndList *list, Node *node);
void func_020f3724(Container *c, s32 v, Vec3 *p);
void func_020f3700(Chan *c);
void func_020f369c(Chan *c, u32 v);
void func_020f365c(Chan *c, u32 v);
}

extern "C" void func_020f3e14(Node *self, FndList *l) {
    data_021f5bf8 = l;
    self->id = 0;
    self->b1a = self->b1b = 0;
    func_020ee968((void **)self);
    func_020eda60(&self->h);
}

extern "C" void func_020f3d54(Node *self, s32 v, Vec3 *p) {
    if (data_021f5b80.f4d != 0) return;
    self->pos = *p;
    if (v > 1001 && v < 1072) {
        self->id = v;
        self->b1a = 1;
        self->b1b = 1;
        func_020f39a0(data_021f5bf8, self);
    } else {
        func_020f3c2c(self);
        func_020f3724((Container *)data_021f5bf8, (u16)v, &self->pos);
        func_020f3b98(self);
    }
}

extern "C" void func_020f3c78(Node *self) {
    BOOL start;
    BOOL stop = FALSE;
    void *p = self->h.p;
    if (notNull(p)) {
        if ((s32)((SndHandle *)p)->unk_3a != (self->id % 1000)) {
            start = TRUE;
            stop = start;
        } else {
            start = FALSE;
            stop = start;
        }
    } else {
        start = TRUE;
    }
    if (stop) func_020eda30(&self->h, 5);
    if (start) func_020edad0(self->id % 1000, 1, &self->h);
    func_020f3b98(self);
}

extern "C" void func_020f3c2c(Node *self) {
    if (data_021f5b80.f4d != 0) {
        func_020eda30(&self->h, 15);
    } else {
        func_020eda30(&self->h, 0);
    }
}

extern "C" BOOL func_020f3be8(Node *self) {
    BOOL r = FALSE;
    if (self->b1b == 0) {
        if (notNull(self->h.p)) {
            if (self->b1a != 0) r = FALSE; else r = TRUE;
        } else {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_020f3b98(Node *self) {
    s32 a = func_020f48d8(func_020f4904(&self->pos, 0));
    s32 b = func_020f4718(&self->pos, 0);
    func_0210a26c(&self->h, a);
    func_0210a0e8(&self->h, 255, b);
}

extern "C" void func_020f3b08(Node *self, u32 v, Vec3 *p) {
    if (data_021f5b80.f4d != 0) return;
    self->id = v;
    self->pos = *p;
    self->b1a = 0;
    self->b1b = 1;
    if (v == 1263) {
        func_020f3c78(self);
    } else {
        func_020f39a0(data_021f5bf8, self);
    }
}

extern "C" void func_020f3af0(Node *self, s32 v) {
    return func_02109fd0(&self->h, 0, v);
}

extern "C" void func_020f3a6c(void *unused, Vec3 *p) {
    s32 a;
    Handle *h = &data_021f5bbc;
    if (!notNull(h->p)) return;
    a = func_020f48d8(func_020f4904(p, 0));
    s32 b = func_020f4718(p, 0);
    if (a < 40) a = 40;
    func_0210a26c(h, a);
    func_0210a0e8(h, data_0213b200, b);
}

extern "C" void func_020f3a34(Node *self) {
    func_020f37b4(data_021f5bf8, self);
    func_020eda30(&self->h, 5);
    func_0210a27c(&self->h);
}

extern "C" Container *func_020f3a18(Container *self) {
    func_0210a27c(&self->h);
    return self;
}

extern "C" void func_020f39f8(Container *self) {
    func_02100444(self, 0);
    func_020eda60(&self->h);
}

extern "C" void func_020f39a0(FndList *list, Node *node) {
    BOOL add = TRUE;
    for (void *p = func_020ee930((void **)list); p != NULL; p = func_020ee944(list, p)) {
        if (p == node) {
            add = FALSE;
            break;
        }
    }
    if (add) func_020ee95c(list, node);
}

extern "C" void func_020f3800(FndList *list) {
    for (void *p = func_020ee930((void **)list); p != NULL; p = func_020ee944(list, p)) {
        if (func_020f3be8((Node *)p)) {
            func_020f3c2c((Node *)p);
            func_020ee950(list, p);
        }
    }
    s32 n = list->num;
    if (n == 1) {
        func_020f3c78((Node *)func_020ee928((void **)list));
    } else if (n == 2) {
        void *t = func_020ee928((void **)list);
        func_020f3c78((Node *)t);
        func_020f3c78((Node *)func_020ee938(list, t));
    } else if (n > 2) {
        void *p = func_020ee930((void **)list);
        s32 i;
        n -= 2;
        for (i = 0; i < n; i++) {
            func_020f3c2c((Node *)p);
            p = func_020ee944(list, p);
        }
        void *t = func_020ee928((void **)list);
        func_020f3c78((Node *)t);
        func_020f3c78((Node *)func_020ee938(list, t));
    }
    for (Node *p = (Node *)func_020ee930((void **)list); p != NULL; p = (Node *)func_020ee944(list, p)) {
        p->b1b = 0;
    }
    if (data_021f5b80.f2c->id != 10) return;
    Handle *h = (Handle *)(void *)&data_021f5bbc;
    if (!h) return;
    u32 id = ((SndHandle *)h->p)->unk_38;
    if (id < 176 || id > 245) func_0210a2a0(1, 0x107, 5);
}

extern "C" void func_020f37b4(FndList *list, Node *node) {
    for (void *p = func_020ee930((void **)list); p != NULL; p = func_020ee944(list, p)) {
        if (p == (void *)node) func_020ee950(list, node);
    }
}

extern "C" void func_020f3724(Container *c, s32 v, Vec3 *p) {
    func_020edad0(v % 1000, 1, &c->h);
    s32 a = func_020f48d8(func_020f4904(p, 0));
    s32 b = func_020f4718(p, 0);
    func_0210a26c(&c->h, a);
    func_0210a0e8(&c->h, 255, b);
}

extern "C" void func_020f3700(Chan *c) {
    func_020eda60(&c->h);
    c->v = 0;
    c->flags = 0;
}

extern "C" void func_020f36dc(Chan *c) {
    func_020eda30(&c->h, 5);
    func_0210a27c(&c->h);
}

extern "C" void func_020f369c(Chan *c, u32 v) {
    if (c->v != v) {
        c->flags |= 4;
    } else {
        c->flags &= ~4;
    }
    c->v = v;
    c->flags |= 2;
    c->flags |= 1;
}

extern "C" void func_020f365c(Chan *c, u32 v) {
    if (c->v != v) {
        c->flags |= 4;
    } else {
        c->flags &= ~4;
    }
    c->v = v;
    c->flags &= ~2;
    c->flags |= 1;
}

extern "C" s32 func_020f35d0(s32 a, s32 b) {
    InfoB *inf = func_0210b8a0(a / 1000, a % 1000);
    if (inf == NULL) func_0206d49c();
    s32 v = b + (inf->unk_04 - 100);
    if (v > 0) {
        if (v >= 127) v = 127;
    } else {
        v = 0;
    }
    return v;
}

extern "C" void func_020f3144(Chan *c, Vec3 *pos) {
    s32 t;
    s32 w;
    s32 a, b;
    if (data_021f5b80.f4d == 1) return;
    if (c->flags & 4) {
        if (notNull(c->h.p)) func_020eda30(&c->h, 0);
        c->flags &= ~4;
    }
    if (c->flags & 1) {
        switch (c->v) {
        case 2061:
            t = func_020f4904(pos, 1);
            break;
        case 2039:
        case 2040:
        case 2043:
        case 2044:
        case 2046:
        case 2047:
            t = func_020f4904(pos, 2);
            break;
        case 1230:
        case 2041:
        case 2042:
        case 2045:
        case 2048:
        case 2049:
        case 2050:
        case 2051:
        case 2052:
        case 2053:
        case 2058:
            t = 0;
            break;
        case 2054:
        case 2055:
        case 2056:
        case 2057:
        case 2059:
        case 2060:
        default:
            t = func_020f4904(pos, 0);
            break;
        }
        if (t > (func_020f4500()->w10 >> 12)) {
            if (notNull(c->h.p)) func_020eda30(&c->h, 0);
            c->flags &= ~1;
            return;
        }
        t = func_020f48d8(t);
        if (t == 0) {
            if (notNull(c->h.p)) func_020eda30(&c->h, 0);
            c->flags &= ~1;
            return;
        }
        if (!notNull(c->h.p) || (u16)(c->v + 0xf7fd) <= 1) {
            if (c->v == 2103) {
                func_020edad0(c->v % 1000, c->v / 1000, &c->h);
            } else {
                w = func_020f35d0(c->v, t);
                func_020eda80(&c->h, -1, -1, w, c->v / 1000, c->v % 1000);
            }
        }
        if (notNull(c->h.p)) {
            if (c->v != 2103) func_0210a1e8(&c->h, func_020f35d0(c->v, t));
            switch (c->v) {
            case 2059:
                w = func_020f4718(pos, 1);
                break;
            case 2053:
            case 2061:
                w = 0;
                break;
            case 2039:
            case 2040:
            case 2041:
            case 2042:
            case 2043:
            case 2044:
            case 2045:
            case 2046:
            case 2047:
            case 2048:
            case 2049:
            case 2050:
            case 2051:
            case 2052:
                w = func_020f4718(pos, 2);
                break;
            case 2054:
            case 2055:
            case 2056:
            case 2057:
            case 2058:
            case 2060:
            default:
                w = func_020f4718(pos, 0);
                break;
            }
            if (c->v == 1230 || c->v == 2058) {
                func_020f47ac(pos->z, &a, &b);
                func_0210a148(&c->h, 3, a);
                func_0210a148(&c->h, 12, b);
            } else {
                func_0210a26c(&c->h, t);
                func_0210a0e8(&c->h, data_0213b200, w);
            }
        }
        c->flags &= ~1;
    } else if (!(c->flags & 2)) {
        if (notNull(c->h.p)) func_020eda30(&c->h, 0);
    }
    c->flags &= ~1;
}

extern "C" void func_020f3138(Chan *c) {
    return func_020f3700(c);
}

extern "C" void func_020f312c(Chan *c) {
    return func_020f3700(c);
}

extern "C" void func_020f3120(Chan *c) {
    return func_020f3700(c);
}

extern "C" void func_020f3114(Chan *c, u32 v) {
    return func_020f369c(c, v);
}

extern "C" void func_020f3108(Chan *c, u32 v) {
    return func_020f365c(c, v);
}

extern "C" void func_020f30fc(Chan *c, Vec3 *b) {
    return func_020f3144(c, b);
}

extern "C" Obj *func_020f3078(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = self;
    data_021f5b80.f4d = 0;
    data_021f5b80.f30->f3c = 0;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 210);
    func_020efc84(&data_021f5b80, 127, 127);
    func_0210a460(15, 100);
    self->id = -1;
    self->f5 = 0;
    self->f6 = 0;
    func_020f44f0(0);
    return self;
}

extern "C" Obj *func_020f3040(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = 0;
    func_0210bd58(data_021f5b80.f28, 0);
    return self;
}

extern "C" Obj *func_020f3000(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = 0;
    func_0210bd58(data_021f5b80.f28, 0);
    _ZdlPv(self);
    return self;
}

extern "C" Obj *func_020f2fc8(Obj *self) {
    self->vptr = data_0213b8e8;
    data_021f5b80.f2c = 0;
    func_0210bd58(data_021f5b80.f28, 0);
    return self;
}

extern "C" void func_020f2fc4(void) {
}

extern "C" void func_020f2fc0(void) {
}

extern "C" void func_020f2fac(Obj *self) {
    return func_020efa64(&data_021f5b80);
}

extern "C" void func_020f2f6c(Obj *self) {
    func_020f51b4(data_021f5b80.f30);
    data_021f5b80.f4d = 1;
    func_020f2eac(self, 15);
    self->f5 = 1;
}

extern "C" void func_020f2eac(Obj *self, s32 v) {
    func_0210a310(11, v);
    func_0210a310(2, v);
    func_0210a310(4, v);
    func_0210a310(5, v);
    func_0210a310(6, v);
    func_0210a310(7, v);
    func_0210a310(8, v);
    func_0210a310(9, v);
    func_0210a310(10, v);
    func_0210a310(12, v);
    func_0210a310(15, v);
    func_0210a310(16, v);
    func_0210a310(17, v);
    func_0210a310(18, v);
    func_0210a310(19, v);
}

extern "C" void func_020f2e58(Obj *self) {
    func_020f443c();
    void *t = func_020edc88();
    func_020edd20(&data_021f59f4, 1);
    if (data_021f5b80.f62 != 0) return;
    func_0210bd58(t, 1);
    func_020f0dec(&data_021f5b80);
}

extern "C" void func_020f2dec(Obj *self, s32 a) {
    s32 r;
    switch (a) {
    case 0:
    case 4:
        r = 133;
        break;
    case 1:
    case 3:
        r = 134;
        break;
    case 2:
        r = 135;
        break;
    }
    func_020f0980(&data_021f5b80);
    func_020f0838(&data_021f5b80, r);
    self->f6 = 1;
}

extern "C" void func_020f2dcc(Obj *self) {
    func_020ed978((u32)func_020ed960());
    self->f6 = 0;
}

extern "C" void func_020f2dc8(void) {
}

extern "C" void func_020f2cd4(Obj *self, u32 a, s32 b) {
    void *t = func_020edc88();
    if (data_021f5b80.f62 == 0) {
        func_020f0df8(&data_021f5b80);
        func_0210a388(0, t, a);
        func_0210be44(t);
    }
    Bytes4 q = data_0213b2c4;
    q.b0 = b;
    data_021f59f4.unk_15 = q;
    func_020edd58(&data_021f59f4, 0, 0, q);
    func_020f4468();
    func_0210be44(t);
}

extern "C" void func_020f2ca8(Obj *self) {
    func_0210a388(4, func_020edc88(), 0x206c);
}

extern "C" void func_020f2c58(Obj *self, s32 n) {
    void *t = func_020edc88();
    for (s32 i = 0; i < n; i++) {
        func_0210a388(11, t, 0x650c);
    }
}

extern "C" void func_020f2c2c(Obj *self) {
    func_0210a388(5, func_020edc88(), 0x31ac);
}

extern "C" void func_020f2be4(Obj *self) {
    void *t = func_020edc88();
    for (s32 i = 0; i < 2; i++) {
        func_0210a388(6, t, 0x7a4c);
    }
}

extern "C" void func_020f2b9c(Obj *self) {
    void *t = func_020edc88();
    for (s32 i = 0; i < 4; i++) {
        func_0210a388(17, t, 0x356c);
    }
}

extern "C" void func_020f2b60(Obj *self) {
    void *t = func_020edc88();
    func_0210a388(18, t, 0x5ecc);
    func_0210a388(19, t, 0x46bc);
}

extern "C" void func_020f2b34(Obj *self) {
    func_0210a388(13, func_020edc88(), 0x1f4c);
}

extern "C" void func_020f2aec(Obj *self) {
    void *t = func_020edc88();
    for (s32 i = 0; i < 2; i++) {
        func_0210a388(12, t, 0x8cc);
    }
}

extern "C" Obj *func_020f2a94(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b8b4;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 1;
    func_020f44f0(1);
    data_021f5b80.f73 = 0;
    return self;
}

extern "C" Obj *func_020f2a3c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b8b4;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 1;
    func_020f44f0(1);
    data_021f5b80.f73 = 0;
    return self;
}

extern "C" Obj *func_020f2a18(Obj *self) {
    self->vptr = data_0213b8b4;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f29ec(Obj *self) {
    self->vptr = data_0213b8b4;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" Obj *func_020f29c8(Obj *self) {
    self->vptr = data_0213b8b4;
    func_020f2fc8(self);
    return self;
}

extern "C" void func_020f2968(Obj *self) {
    func_020f2cd4(self, 0x21ef8, 1);
    func_020f2c58(self, 3);
    func_020f2b34(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    func_020f0838(&data_021f5b80, 143);
    data_021f5b80.f62 = 0;
}

extern "C" void func_020f2938(Obj *self, s32 a) {
    func_020ed978((u32)func_020ed960());
    func_020f2dec(self, a);
}

extern "C" void func_020f2910(Obj *self) {
    func_020f2dcc(self);
    func_020f0838(&data_021f5b80, 143);
}

extern "C" void func_020f28c0(Obj *self, s32 a) {
    func_020ed978((u32)func_020ed960());
    if (a != 0) {
        if (a == 1) {
            func_020f0838(&data_021f5b80, 178);
        }
    } else {
        func_020f0838(&data_021f5b80, 143);
    }
}

extern "C" Obj *func_020f2878(Obj *self) {
    func_020f2a94(self);
    self->vptr = data_0213b2d0;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 2;
    return self;
}

extern "C" Obj *func_020f2854(Obj *self) {
    self->vptr = data_0213b2d0;
    func_020f29c8(self);
    return self;
}

extern "C" Obj *func_020f2828(Obj *self) {
    self->vptr = data_0213b2d0;
    func_020f29c8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f27d0(Obj *self) {
    func_020f2cd4(self, 0x1f340, 2);
    func_020f2c58(self, 2);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    func_020f0838(&data_021f5b80, 143);
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f2788(Obj *self) {
    func_020f2a94(self);
    self->vptr = data_0213b574;
    if (data_021f5b80.f30 != 0) func_020f5070(data_021f5b80.f30, 209);
    self->id = 3;
    return self;
}

extern "C" Obj *func_020f2764(Obj *self) {
    self->vptr = data_0213b574;
    func_020f29c8(self);
    return self;
}

extern "C" Obj *func_020f2738(Obj *self) {
    self->vptr = data_0213b574;
    func_020f29c8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f26d8(Obj *self) {
    func_020f2cd4(self, 0x21ef8, 3);
    func_020f2c58(self, 2);
    func_020f2b34(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    func_020f0838(&data_021f5b80, 143);
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f269c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b338;
    func_020f833c((u8 *)self + 8);
    self->id = 10;
    self->state = 0;
    return self;
}

extern "C" Obj *func_020f266c(Obj *self) {
    self->vptr = data_0213b338;
    func_020f831c((u8 *)self + 8);
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f2634(Obj *self) {
    self->vptr = data_0213b338;
    func_020f831c((u8 *)self + 8);
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f2568(Obj *self) {
    func_020f2cd4(self, 0x10ea0, 5);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2b9c(self);
    func_020f2b60(self);
    void *t = func_020edc88();
    func_0210cc14(9, t);
    func_0210be44(t);
    self->f1d = (u8)(u32)func_0210bd4c(t);
    func_020f0838(&data_021f5b80, 144);
    func_020f2aec(self);
    func_0210be44(t);
    self->state = 1;
    data_021f5b80.f62 = 0;
    func_020f8290((u8 *)self + 8, 1);
    func_0210a460(18, 63);
    func_0210a460(19, 63);
}

extern "C" void func_020f2544(Obj *self) {
    func_020f2fac(self);
    ((SubObj *)((u8 *)self + 8))->vfunc_00();
}

extern "C" void func_020f2534(Obj *self, s32 v) {
    return func_020f8290((u8 *)self + 8, v);
}

extern "C" void func_020f24fc(Obj *self, s32 a) {
    func_020ed978(self->f1d);
    func_020f2dec(self, a);
    self->state = 2;
}

extern "C" void func_020f24c0(Obj *self) {
    func_020f2dcc(self);
    func_020f0838(&data_021f5b80, 144);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    self->state = 1;
}

