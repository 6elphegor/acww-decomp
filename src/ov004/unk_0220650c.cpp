#include "types.h"

// ---------------------------------------------------------------- helper types
struct Unk_02000c8c {
    s32 unk_00, unk_04, unk_08;
    Unk_02000c8c(s32 a, s32 b, s32 c) : unk_00(a), unk_04(b), unk_08(c) {}
    ~Unk_02000c8c();
};

class Unk_0202f048 {
public:
    s32 x, y;
    void func_0202f048(s32 a, s32 b);
    void func_0202efe4(Unk_0202f048 *a, Unk_0202f048 *b);
    s64 func_0202ef84(Unk_0202f048 *p);
    BOOL func_0202ef40();
};

class Unk_020d8ce4 {
public:
    virtual ~Unk_020d8ce4();
    Unk_0202f048 unk_04, unk_0c, unk_14;
    s32 unk_1c;
    BOOL func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    s32 func_0202ebb0(Unk_0202f048 *p);
};

class Unk_020dbe04 {
public:
    u32 unk_04;
    u32 pad[10];
    u8 unk_30;
    u8 unk_31;
    u8 pad2[2];

    virtual ~Unk_020dbe04();
    u32 func_02055014(void *a, void *b, void *c);
    void func_0205516c(void);
    void *func_0205500c(void);
};

struct Unk_ov004_02206744_V3 {
    s32 x, y, z;
    Unk_ov004_02206744_V3() {}
};

struct Unk_ov004_022063d4 {
    u32 unk_00[2];
    u32 unk_08[2];
    u32 unk_10[2];
    u32 unk_18[2];
    u32 unk_20[2];
    u32 unk_28;
    void func_ov004_022063d4(s32 v);
    void func_ov004_022063d8(s32 v, s32 i);
    void func_ov004_022063e4(s32 v, s32 i);
    void func_ov004_022063f0(s32 v, s32 i);
    void func_ov004_022063fc(s32 v, s32 i);
    void func_ov004_02206408(s32 v, s32 i);
};

struct Unk_ov004_0220579c_Obj {
    u8 pad_00[0x8e];
    s16 unk_8e;
};

extern "C" {
extern s32 data_021f47e0[];
extern void *data_021f482c;
extern s32 data_ov004_0224870c;
extern char data_ov004_02248950[];
extern char data_ov004_02248954[];
extern char data_ov004_02248964[];
extern char data_ov004_02248974[];
extern char data_ov004_02248984[];
extern char data_ov004_02248994[];
extern char data_ov004_0224f864[];
extern char data_ov004_0224f83c[];
extern char data_ov004_022489a4[];
extern char data_ov004_022489bc[];
void func_02055724(void *a, s32 b);
void *func_0205588c(void *a, s32 b);

void *func_02095204(s32 a);
s32 func_ov004_0220579c(void *p, s32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_01ffc538(s64 a);
s32 func_01ffcb0c(s32 a, s32 b);
void func_02033078(Unk_0202f048 *out, Unk_020d8ce4 *p);
void func_020e8300(void *a, s32 b);
void func_01ffb898(void *a, void *b, void *c);
void func_01ffca58(void *a, void *b, void *c);
void func_01ffca8c(void *a, void *b, void *c);
void *func_ov004_02208938(void *p, void *out, void *c);
s32 func_020e96a4(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
void *func_ov004_0223584c();
void *func_ov004_02235740(void *a, void *b);
s32 func_ov004_02208750(void *p);
void func_ov004_022088c0(void *p, void *out);
void *func_ov004_02235718();
void *func_ov004_022355b0(void *a, void *b, s32 c);
s32 func_ov004_02205e78(void *p);
s32 func_ov004_02207c04(s32 a);
void *func_ov004_022354d8();
void func_ov004_02235120(void *a, void *b, void *c, void *d, s32 e, void *f, void *g, s32 h, s32 i);

void func_02135558(void *obj, void *dtor, void *reg);

void func_02031bd8();
void func_02031cb0();

s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
u16 func_0204b248(s32 a, s32 b);
void *func_0210629c(void *p);
s32 func_0209c344(void *p);
s32 func_0209c348(void *p);
void *func_020641ec(void *path, void *heap, s32 mode, u32 *size);
s32 func_020639e8(char *buf, char *fmt, ...);
void *func_020e8608(void *a, u32 b);
void func_02116048(void *dst, void *src, u32 n);
s32 func_02101340(void *buf, char *fmt, void *arg);
struct Unk_ov004_02206be8_Blk {
    u32 pad[26];
};
void func_02101310(void *buf);
s32 func_021012bc(s32 a);
void *func_021062dc(s32 a);
s32 func_021065dc(s32 a);
s32 func_021065f8(s32 a, s32 b);
s32 func_02106618(s32 a);
s32 func_02106634(s32 a, s32 b);
s32 func_02106788(s32 a);
s32 func_021067a4(s32 a, s32 b);
s32 func_02106654(s32 a);
s32 func_02106670(s32 a, s32 b);
s32 func_02106690(s32 a);
s32 func_021066ac(s32 a, s32 b);
void func_020e8558(void *p);
}

// ---------------------------------------------------------------- Unk_ov004_0220650c
struct Unk_ov004_0220650c {
    u32 unk_00;
    u32 unk_04[4];
    void func_ov004_0220650c();
};

void Unk_ov004_0220650c::func_ov004_0220650c() {
    u32 i;
    unk_00 = 0;
    for (i = 0; i < 4; i++) {
        unk_04[i] = 0;
    }
}

// ---------------------------------------------------------------- Unk_ov004_02206520
struct Unk_ov004_02206520_Ent {
    u32 a, b;
    Unk_ov004_02206520_Ent() {
        a = 0;
        b = 0;
    }
};

struct Unk_ov004_02206520 {
    u32 unk_00;
    Unk_ov004_02206520_Ent unk_04[4];
    Unk_ov004_02206520_Ent *func_ov004_02206520(s32 i);
    u32 func_ov004_0220652c();
    BOOL func_ov004_02206530(u32 a, u32 b);
    void func_ov004_02206554();
    Unk_ov004_02206520();
};

Unk_ov004_02206520_Ent *Unk_ov004_02206520::func_ov004_02206520(s32 i) {
    return &unk_04[i & 3];
}

u32 Unk_ov004_02206520::func_ov004_0220652c() {
    return unk_00;
}

BOOL Unk_ov004_02206520::func_ov004_02206530(u32 a, u32 b) {
    if (unk_00 < 4) {
        unk_04[unk_00].a = a;
        unk_04[unk_00].b = b;
        unk_00++;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_02206520::func_ov004_02206554() {}

Unk_ov004_02206520::Unk_ov004_02206520() {
    unk_00 = 0;
}

// ---------------------------------------------------------------- Unk_ov004_022487cc : Unk_020d8cf4
struct Unk_ov004_02206570_Act {
    u8 pad_00[0x5c];
    Unk_ov004_02206744_V3 unk_5c;
    Unk_ov004_02206744_V3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
};

struct Unk_020d8cf4 {
    virtual void vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    u8 pad_04[0x98];
    Unk_020d8cf4();
    ~Unk_020d8cf4();
};

struct Unk_ov004_022487cc : Unk_020d8cf4 {
    void *unk_9c;
    Unk_ov004_022487cc();
    ~Unk_ov004_022487cc();
    void vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    void func_ov004_02206570(Unk_ov004_02206570_Act *b);
    void func_ov004_022069a4();
    void func_ov004_022069ac(void *p);
};

void Unk_ov004_022487cc::func_ov004_02206570(Unk_ov004_02206570_Act *b) {
    Unk_ov004_02206570_Act *o;
    Unk_ov004_02206744_V3 tmp[2];
    o = (Unk_ov004_02206570_Act *)unk_9c;
    if (*(s32 *)((u8 *)o + 0x780) == 1) {
        static Unk_02000c8c tbl0[2] = {Unk_02000c8c(0, 0, 0), Unk_02000c8c(-0x2000, 0, 0)};
        static Unk_02000c8c tbl1[2] = {Unk_02000c8c(0, 0, 0), Unk_02000c8c(0x2000, 0, 0)};
        static Unk_02000c8c one(0x2000, 0, 0);
        s32 r6;
        func_020e8300(data_021f47e0, ((Unk_ov004_02206570_Act *)unk_9c)->unk_8e);
        func_01ffb898(&one, data_021f47e0, &tmp[0]);
        func_ov004_02208938(unk_9c, &tmp[1], &tbl1[0]);
        r6 = func_020e96a4(&b->unk_5c, &tmp[1]);
        func_ov004_02208938(unk_9c, &tmp[1], &tbl1[1]);
        if (r6 < func_020e96a4(&b->unk_5c, &tmp[1])) {
            if (func_020e96ec((u8 *)unk_9c + 0x140, &tbl0[0])) {
                Unk_ov004_02206744_V3 *d = (Unk_ov004_02206744_V3 *)((u8 *)unk_9c + 0x140);
                Unk_02000c8c *s = &tbl0[0];
                d->x = s->unk_00;
                d->y = s->unk_04;
                d->z = s->unk_08;
                func_01ffca58(&((Unk_ov004_02206570_Act *)unk_9c)->unk_5c, &tmp[0], &((Unk_ov004_02206570_Act *)unk_9c)->unk_5c);
            }
        } else {
            if (func_020e96ec((u8 *)unk_9c + 0x140, &tbl0[1])) {
                Unk_ov004_02206744_V3 *d = (Unk_ov004_02206744_V3 *)((u8 *)unk_9c + 0x140);
                d->x = ((u32 *)tbl0)[3];
                d->y = ((u32 *)tbl0)[4];
                d->z = ((u32 *)tbl0)[5];
                func_01ffca8c(&((Unk_ov004_02206570_Act *)unk_9c)->unk_5c, &tmp[0], &((Unk_ov004_02206570_Act *)unk_9c)->unk_5c);
            }
        }
    }
}

Unk_ov004_022487cc::~Unk_ov004_022487cc() {}

Unk_ov004_022487cc::Unk_ov004_022487cc() {
    func_ov004_022069a4();
}

void Unk_ov004_022487cc::func_ov004_022069a4() {
    unk_9c = 0;
}

void Unk_ov004_022487cc::func_ov004_022069ac(void *p) {
    unk_9c = p;
}

void Unk_ov004_022487cc::vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c) {
    Unk_0202f048 v0, v1, v2, mid, d1, d2;
    volatile Unk_ov004_02206744_V3 pos;
    Unk_ov004_02206744_V3 w1, w2, buf;
    s32 t18, t1c, t20, t24, len2;
    s32 r7;
    s32 r5;
    s32 px, pz;
    void *chk = func_02095204(4);
    if (b != NULL && (void *)b == chk) {
        if (unk_9c != NULL && func_ov004_0220579c(unk_9c, 1)) {
            Unk_ov004_02206744_V3 *pv;
            t20 = func_020e7b98(a->unk_14.x, a->unk_14.y);
            t24 = t20 + 0x8000;
            r7 = (u16)(t24 - b->unk_8e);
            pv = &b->unk_68;
            px = b->unk_68.x;
            pos.x = px;
            pos.y = pv->y;
            pz = pv->z;
            pos.z = pz;
            v0.func_0202f048(px, pz);
            v1.func_0202f048(pos.x + a->unk_14.x, pos.z + a->unk_14.y);
            v2.func_0202f048(0, 0);
            if ((u32)r7 < 0x1700 || (u32)r7 > 0xe900) {
                if (a->func_0202ece8(&v2, &v0, &v1)) {
                    r7 = func_01ffc538(a->unk_04.func_0202ef84(&v2));
                    len2 = func_01ffc538(a->unk_04.func_0202ef84(&a->unk_0c));
                    if (r7 >= 0x666) {
                        if (r7 <= len2 - 0x666) {
                            if (a->func_0202ebb0(&v2)) {
                                func_02033078(&mid, a);
                                t1c = mid.y + func_01ffcb0c(a->unk_14.y, c);
                                s32 x = mid.x + func_01ffcb0c(a->unk_14.x, c);
                                w1.x = x;
                                w1.y = 0;
                                w1.z = t1c;
                                w2.x = x;
                                w2.y = 0;
                                w2.z = t1c;
                                if (len2 > 0x3000) {
                                    if (r7 < 0x1000) {
                                        d1.func_0202efe4(&a->unk_0c, &a->unk_04);
                                        d1.func_0202ef40();
                                        v2.x = a->unk_04.x + func_01ffcb0c(d1.x, 0x1000);
                                        v2.y = a->unk_04.y + func_01ffcb0c(d1.y, 0x1000);
                                    } else if (r7 > 0x3000) {
                                        d2.func_0202efe4(&a->unk_0c, &a->unk_04);
                                        d2.func_0202ef40();
                                        v2.x = a->unk_04.x + func_01ffcb0c(d2.x, 0x3000);
                                        v2.y = a->unk_04.y + func_01ffcb0c(d2.y, 0x3000);
                                    }
                                    r7 = v2.y + func_01ffcb0c(a->unk_14.y, c);
                                    w2.x = v2.x + func_01ffcb0c(a->unk_14.x, c);
                                    w2.y = 0;
                                    w2.z = r7;
                                }
                                func_ov004_02206570(b);
                                t18 = (s32)func_ov004_02235740(func_ov004_0223584c(), unk_9c);
                                r5 = (s16)(t20 - ((Unk_ov004_02206570_Act *)unk_9c)->unk_8e);
                                if (func_ov004_02208750(unk_9c) == 1) {
                                    void *q;
                                    func_ov004_022088c0(unk_9c, &buf);
                                    q = func_ov004_022355b0(func_ov004_02235718(), &buf, 0);
                                    if (q != NULL) {
                                        r5 = (s16)(t20 - ((Unk_ov004_02206570_Act *)q)->unk_8e - func_ov004_02205e78((u8 *)unk_9c + 0x178));
                                    }
                                }
                                r5 = func_ov004_02207c04(r5);
                                func_ov004_02235120(func_ov004_022354d8(), (void *)t18, &b->unk_68, &b->unk_5c, c, &w1, &w2, (s16)t24, r5);
                            }
                        }
                    }
                }
            }
        }
    }
}

// ---------------------------------------------------------------- Unk_ov004_022069ec (model file loader, no vtable)
struct Unk_ov004_022069ec {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    Unk_020dbe04 unk_10;
    Unk_ov004_022063d4 unk_44;
    u16 unk_70;
    u8 unk_72;

    void func_ov004_022069ec();
    void *func_ov004_02206a14();
    void *func_ov004_02206a2c();
    BOOL func_ov004_02206a44(void *obj, s32 a, s32 flag);
    BOOL func_ov004_02206b64(void *obj, s32 a, s32 flag);
    void func_ov004_02206bcc();
    Unk_ov004_022063d4 *func_ov004_02206be4();
    BOOL func_ov004_02206be8(void *obj, s32 id);
    char *func_ov004_02206db4(s32 id);
    char *func_ov004_02206de0(s32 id);
    BOOL func_ov004_02206e0c();
};

void Unk_ov004_022069ec::func_ov004_022069ec() {
    unk_70 = 0xfff1;
    func_ov004_02206bcc();
    unk_10.func_0205516c();
    unk_72 = 0;
}

void *Unk_ov004_022069ec::func_ov004_02206a14() {
    if (func_ov004_02206e0c()) {
        return unk_0c;
    }
    return 0;
}

void *Unk_ov004_022069ec::func_ov004_02206a2c() {
    if (func_ov004_02206e0c()) {
        return unk_08;
    }
    return 0;
}

static inline BOOL Unk_ov004_02206a44_IsInvalid(u16 *a) {
    if (func_0204b2d4(a)) {
        u16 t = 0xfff1;
        if (func_0204b25c(a) == func_0204b25c(&t)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02206a44_Same(u16 *a, u16 *b) {
    if (func_0204b2d4(a)) {
        if (func_0204b25c(a) == func_0204b25c(b)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == *b) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_022069ec::func_ov004_02206a44(void *obj, s32 a, s32 flag) {
    if (func_ov004_02206e0c()) {
        return TRUE;
    }
    u16 t2;
    if (Unk_ov004_02206a44_IsInvalid(&unk_70)) {
        unk_70 = func_0204b248(a, 0);
        unk_72 = flag;
    } else {
        t2 = func_0204b248(a, 0);
        if (!Unk_ov004_02206a44_Same(&t2, &unk_70)) {
            return FALSE;
        }
    }
    func_ov004_02206be8(obj, a);
    if (unk_0c == 0) {
        void *p = func_0210629c(unk_00);
        s32 x = func_0209c344(obj);
        s32 y = func_0209c348(obj);
        if (unk_10.func_02055014(p, (void *)x, (void *)y) == 3) {
            unk_0c = unk_10.func_0205500c();
            func_ov004_022069ec();
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_022069ec::func_ov004_02206b64(void *obj, s32 a, s32 flag) {
    void *h;
    unk_72 = flag;
    if (func_ov004_02206e0c()) {
        return TRUE;
    }
    unk_70 = func_0204b248(a, 0);
    func_ov004_02206be8(obj, a);
    h = func_0210629c(unk_00);
    func_02055724(h, func_0209c344(obj));
    unk_0c = func_0205588c(h, func_0209c348(obj));
    func_ov004_022069ec();
    return TRUE;
}

void Unk_ov004_022069ec::func_ov004_02206bcc() {
    if (unk_00 != 0) {
        func_020e8558(unk_00);
        unk_00 = 0;
    }
}

Unk_ov004_022063d4 *Unk_ov004_022069ec::func_ov004_02206be4() {
    return &unk_44;
}

BOOL Unk_ov004_022069ec::func_ov004_02206be8(void *obj, s32 id) {
    u32 size0;
    u32 size1;
    char name[0x20];
    Unk_ov004_02206be8_Blk blk;
    if (unk_00 == 0) {
        unk_00 = func_020641ec(func_ov004_02206db4(id), data_021f482c, -4, &size0);
        if (unk_72 != 0) {
            void *r7 = func_020e8608((void *)func_0209c348(obj), size0);
            func_02116048(unk_00, r7, size0);
            unk_44.func_ov004_022063d4((s32)r7);
        }
    }
    if (unk_04 == 0) {
        char *p = func_ov004_02206de0(id);
        unk_04 = func_020641ec(p, (void *)func_0209c348(obj), 4, &size1);
    }
    if (unk_08 == 0 && unk_04 != 0) {
        if (func_02101340(&blk, data_ov004_02248950, unk_04)) {
            u8 *pb = (u8 *)func_021062dc(func_021012bc(data_ov004_0224870c));
            unk_08 = pb + *(u32 *)(pb + *(u16 *)(pb + 0xe) + 0xc);
            u32 i = 0;
            s32 z0 = 0, z1 = 0, z2 = 0, z3 = 0, z4 = 0;
            do {
                s32 h;
                func_020639e8(name, data_ov004_02248954, i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_02206408(func_021065f8(func_021065dc(h), z0), i);
                }
                func_020639e8(name, data_ov004_02248964, i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063fc(func_02106634(func_02106618(h), z1), i);
                }
                func_020639e8(name, data_ov004_02248974, i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063f0(func_021067a4(func_02106788(h), z2), i);
                }
                func_020639e8(name, data_ov004_02248984, i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063e4(func_02106670(func_02106654(h), z3), i);
                }
                func_020639e8(name, data_ov004_02248994, i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063d8(func_021066ac(func_02106690(h), z4), i);
                }
                i++;
            } while (i < 2);
            func_02101310(&blk);
        }
    }
    if (unk_00 != 0 && unk_08 != 0) {
        return TRUE;
    }
    return FALSE;
}

char *Unk_ov004_022069ec::func_ov004_02206db4(s32 id) {
    func_020639e8(data_ov004_0224f864, data_ov004_022489a4, id >> 8, (id & 0xff) >> 4, id);
    return data_ov004_0224f864;
}

char *Unk_ov004_022069ec::func_ov004_02206de0(s32 id) {
    func_020639e8(data_ov004_0224f83c, data_ov004_022489bc, id >> 8, (id & 0xff) >> 4, id);
    return data_ov004_0224f83c;
}

BOOL Unk_ov004_022069ec::func_ov004_02206e0c() {
    if (unk_0c != 0) {
        return TRUE;
    }
    return FALSE;
}
