#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- helper types
struct Unk_ov003_02218478_V3 {
    s32 x, y, z;
    Unk_ov003_02218478_V3() {}
};

struct Unk_ov003_02218478_Cell {
    u8 pad[0x28];
};

struct Unk_ov003_02218478_Grid {
    Unk_ov003_02218478_Cell *cells;
    u32 w, h;
};

struct Unk_ov003_02217d7c {
    u32 pad[0xec / 4];
    static void *operator new(unsigned long, void *p) { return p; }
    Unk_ov003_02217d7c();
};

struct Unk_ov003_02217fe4 {
    u32 pad[0xf4 / 4];
    Unk_ov003_02217fe4();
    ~Unk_ov003_02217fe4();
};

struct Unk_ov003_02217bd0 {
    u32 pad[0xa0 / 4];
    Unk_ov003_02217bd0();
    ~Unk_ov003_02217bd0();
};

struct Unk_020dbe8c_Mem {
    u32 pad[0x90 / 4];
    Unk_020dbe8c_Mem();
    ~Unk_020dbe8c_Mem();
    BOOL func_02056bf8();
    BOOL func_02056ca4(void *hdr, const char *n1, const char *n2, s32 x, s32 y, s32 flag);
};

struct Unk_ov003_02217948 {
    u32 pad[0xc / 4];
    Unk_ov003_02217948();
    ~Unk_ov003_02217948();
};

struct Unk_ov003_022179b8 {
    u32 pad[0x1c / 4];
    Unk_ov003_022179b8(Unk_ov003_02218478_V3 *v);
    ~Unk_ov003_022179b8();
};

extern "C" {
extern u32 data_ov003_022323e4[];
extern u8 data_ov003_02235490;
extern s32 data_ov003_02235494;
extern s32 data_021ce63c;
extern void *data_021c3070;
extern Unk_ov003_02218478_V3 data_021c309c;
extern void *data_021c620c;
extern Unk_ov003_02218478_Grid *data_021c47c4;
extern char data_ov003_0223246c[];
extern char data_ov003_02232478[];
extern char data_ov003_02232484[];
extern char data_ov003_0223248c[];
extern void *data_021f482c;
extern void *data_021c6204;
extern char data_ov003_02232534[];
extern char data_ov003_02232554[];
extern char data_ov003_02232564[];
extern char data_ov003_02235888[];
extern char data_ov003_02232568[];
extern char data_ov003_02232584[];
extern char data_ov003_022325a0[];
extern u32 data_021ed1a4[];

s32 func_02057110(void *a, u32 b);
s32 func_020ac40c();
s32 func_020abe28();
void *func_02036c58();
s32 func_02036ce0(void *);
s32 func_02036cb0(void *);
s32 func_02036cbc(void *);
s32 func_02036c98(void *);
s32 func_02036ca4(void *);
s32 func_0203bc90(void *);
void func_0203bac4(void *, s32 *, s32 *);
s32 func_0203efec(s32);
void func_0204edf8(s32 *, s32 *, s32, s32, s32, s32);
s32 func_02030bc4(s32, s32);
void func_0204eda4(Unk_ov003_02218478_V3 *, s32, s32, s32, s32);
void *func_020e8608(void *, s32);
void func_020e8558(void *);
void *func_0210629c(...);
void func_02055744(void *, s32);
void *func_0205588c(void *, void *);
void func_02055724(void *, s32);
void *func_02064020(void *, s32, void *, s32);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_020302cc();
s32 func_0204c188(void *, s32);
void *func_020641ec(void *, void *, s32, s32);
s32 func_02101340(char *, char *, void *);
void func_020639e8(char *, char *, ...);
void *func_021012bc(char *);
void *func_021062dc(void *);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void func_02101310(char *);

s32 func_ov003_02218da8();
s32 func_ov003_0221894c(void *);
s32 func_ov003_02217fb4_dummy();
void *func_ov003_02217fb4(void *);
s32 func_ov003_02217fb8(void *);
s32 func_ov003_02217fac(void *);
s32 func_ov003_02217fa4(void *);
s32 func_ov003_02217df0(void *);
s32 func_ov003_02217e10(void *);
s32 func_ov003_02217dbc(void *);
s32 func_ov003_02217e48(void *, Unk_ov003_02218478_V3 *, s32);
s32 func_ov003_02217b10(void *);
s32 func_ov003_02217aec(void *);
s32 func_ov003_02217adc(void *);
s32 func_ov003_02217908(void *);
s32 func_ov003_0221793c(void *);
s32 func_ov003_02217910(void *, void *, u16);
s32 func_ov003_02217960(void *);
s32 func_ov003_0221795c(void *);
s32 func_ov003_02217bb8(void *);
s32 func_ov003_02217b78(void *);
s32 func_ov003_02217be8(void *);
s32 func_ov003_02217bfc(void *);
s32 func_ov003_02217c10(void *);
s32 func_ov003_02217c3c(void *, void *, s32, s32);
}

// ---------------------------------------------------------------- actor
class Unk_ov003_02232418 : public Unk_020d8c7c {
public:
    /* 0x50 */ Unk_ov003_02217d7c *unk_50;
    /* 0x54 */ Unk_ov003_02217fe4 unk_54;
    /* 0x148 */ s32 unk_148;
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ Unk_ov003_02217bd0 unk_150;
    /* 0x1f0 */ Unk_020dbe8c_Mem unk_1f0;
    /* 0x280 */ Unk_020dbe8c_Mem unk_280;
    /* 0x310 */ Unk_ov003_02217948 unk_310;

    Unk_ov003_02232418();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov003_02232418();
    void func_ov003_022180a8();
};

struct Unk_ov003_02218034_Obj {
    u8 pad_00[0x5c];
    u8 *unk_5c;
};

struct Unk_ov003_0221888c_Res {
    s32 unk_00;
    s32 unk_04[5];
    s32 unk_18;
    u8 unk_1c;
};

struct Unk_ov003_02218794_Obj;
struct Unk_ov003_02218784_Obj {
    u8 pad_00[0x1c];
    void (*unk_1c)(struct Unk_ov003_02218794_Obj *);
    u8 pad_20[0x90 - 0x20];
    u8 unk_90;
};

struct Unk_ov003_02218794_Inner {
    u8 pad_00[0x2c];
    u8 *unk_2c;
};

struct Unk_ov003_02218794_A {
    u8 pad_00[1];
    u8 unk_01;
};

struct Unk_ov003_02218794_B {
    u8 pad_00[0x28];
    u32 unk_28;
};

struct Unk_ov003_02218794_Obj {
    Unk_ov003_02218794_A *unk_00;
    Unk_ov003_02218794_Inner *unk_04;
    u8 pad_08[0xb0 - 0x8];
    struct Unk_ov003_02218794_B *unk_b0;
};

// ---------------------------------------------------------------- in-range functions
extern "C" {
void func_ov003_02218034(Unk_ov003_02218034_Obj *o, s32 flag) {
    u32 i;
    u8 *base = o->unk_5c;
    u8 *r4 = base + *(s32 *)(base + 8);
    for (i = 0; i < 2; i++) {
        u32 t = func_02057110(o->unk_5c, data_ov003_022323e4[i]);
        if (t != (u32)-1) {
            u8 *r1 = r4 + 4;
            u32 hw = *(u16 *)(r4 + 0xa);
            u8 *r2 = r1 + hw;
            u32 st = *(u16 *)(r1 + hw);
            u8 *e = r4 + *(s32 *)(r2 + st * t + 4);
            if (e != 0) {
                *(u32 *)(e + 0x10) |= 0x800;
                if (flag != 0) {
                    *(u32 *)(e + 0xc) |= 0x800;
                } else {
                    *(u32 *)(e + 0xc) &= ~0x800;
                }
            }
        }
    }
}
}

void Unk_ov003_02232418::func_ov003_022180a8() {
    data_ov003_02235490 = 0;
    if (data_021c3070 != 0) {
        Unk_ov003_02218478_V3 v = data_021c309c;
        Unk_ov003_022179b8 q(&v);
        void *r6 = (void *)func_ov003_02217960(&q);
        if (r6 != 0) {
            u32 r4 = 0x80d;
            switch (func_ov003_0221795c(&q)) {
            case 0x11:
                r4 = 0x80b;
                break;
            case 0x12:
                data_ov003_02235490 = 1;
                break;
            case 5:
                r4 = 0x80e;
                break;
            case 0xf:
                r4 = 0x80c;
                break;
            }
            func_ov003_02217910(&unk_310, r6, r4);
        }
    }
}

BOOL Unk_ov003_02232418::vfunc_0c() {
    s32 i, j;
    s32 idx;
    func_ov003_02217dbc(&unk_54);
    idx = 0;
    for (i = 0; i < unk_14c; i++) {
        for (j = 0; j < unk_148; j++) {
            func_ov003_02217be8(unk_50 + idx++);
        }
    }
    func_ov003_02217adc(&unk_150);
    func_ov003_02217908(&unk_310);
    return TRUE;
}

BOOL Unk_ov003_02232418::vfunc_18() {
    Unk_ov003_02217d7c *e;
    s32 i, j;
    func_ov003_02217b10(&unk_150);
    func_ov003_02217e10(&unk_54);
    e = unk_50;
    i = 0;
    goto test0;
loop0:
    {
        j = 0;
        s32 *volatile pw = &unk_148;
        goto test1;
    loop1:
        func_ov003_02217c10(e);
        e++;
        j++;
    test1:
        if (j < *pw) goto loop1;
    }
    i++;
test0:
    if (i < unk_14c) goto loop0;
    unk_1f0.func_02056bf8();
    unk_280.func_02056bf8();
    func_ov003_022180a8();
    data_021ce63c = 0;
    return TRUE;
}

static inline BOOL Unk_ov003_022181bc_Chk(s32 x, s32 y, s32 cx, s32 cy) {
    if (x >= cx - 1 && x <= cx + 1 && y >= cy - 2 && y <= cy + 1) return TRUE;
    return FALSE;
}

BOOL Unk_ov003_02232418::vfunc_24() {
    s32 a, cx, cy, b, cam_r, found;
    s32 x, y, idx;
    void *cam;
    data_ov003_02235494 = 0;
    func_020ac40c();
    func_020abe28();
    a = 0;
    cx = 0;
    cy = 0;
    b = ((s32 *)func_ov003_02217fb4(&unk_54))[2];
    cam_r = 0;
    cam = data_021c3070;
    if (cam != 0) {
        cam_r = func_0203bc90(cam);
        func_0203bac4(cam, &cx, &cy);
        a = func_0203efec(cam_r);
    }
    found = 0;
    for (y = 0; y < unk_14c; y++) {
        for (x = 0; x < unk_148; x++) {
            BOOL r = FALSE;
            r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
            if (r) {
                if (x == func_ov003_02217fac(&unk_54) && y == func_ov003_02217fa4(&unk_54)) {
                    found = 1;
                }
            }
        }
    }
    if (found == 0) {
        func_ov003_02217aec(&unk_150);
    }
    if (found == 0) {
        idx = 0;
        for (y = 0; y < unk_14c; y++) {
            for (x = 0; x < unk_148; x++) {
                BOOL r = FALSE;
                r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                if (r) func_ov003_02217bfc(unk_50 + idx);
                idx++;
            }
        }
    } else {
        if (func_ov003_02217fb8(&unk_54) < cam_r) {
            if (b < a) {
                func_ov003_02217df0(&unk_54);
                func_ov003_02217aec(&unk_150);
            } else {
                func_ov003_02217aec(&unk_150);
                func_ov003_02217df0(&unk_54);
            }
            idx = 0;
            for (y = 0; y < unk_14c; y++) {
                for (x = 0; x < unk_148; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) func_ov003_02217bfc(unk_50 + idx);
                    idx++;
                }
            }
        } else {
            func_ov003_02217aec(&unk_150);
            idx = 0;
            for (y = 0; y < unk_14c; y++) {
                for (x = 0; x < unk_148; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) func_ov003_02217bfc(unk_50 + idx);
                    idx++;
                }
            }
            func_ov003_02217df0(&unk_54);
        }
    }
    return TRUE;
}

BOOL Unk_ov003_02232418::vfunc_00() {
    func_ov003_02217bb8(&unk_150);
    func_ov003_02217b78(&unk_150);
    s32 r6 = func_02036ce0(func_02036c58());
    s32 r4 = func_02036cb0(func_02036c58());
    s32 r0 = func_02036cbc(func_02036c58());
    unk_1f0.func_02056ca4((void *)r6, data_ov003_0223246c, data_ov003_02232478, r4, r0, 0);
    r6 = func_02036ce0(func_02036c58());
    r4 = func_02036c98(func_02036c58());
    r0 = func_02036ca4(func_02036c58());
    unk_280.func_02056ca4((void *)r6, data_ov003_02232484, data_ov003_0223248c, r4, r0, 1);
    Unk_ov003_02218478_Grid *g = data_021c47c4;
    unk_148 = g->w;
    unk_14c = g->h;
    unk_50 = (Unk_ov003_02217d7c *)func_020e8608(data_021c620c, unk_14c * (unk_148 * 0xec));
    {
        Unk_ov003_02217d7c *e = unk_50;
        for (; e < unk_50 + unk_148 * unk_14c; e++) {
            e = new (e) Unk_ov003_02217d7c;
        }
    }
    u32 by, bx;
    u32 tx, ty;
    for (by = 0; by < unk_14c; by++) {
        for (bx = 0; bx < unk_148; bx++) {
            for (ty = 0; ty < 16; ty++) {
                for (tx = 0; tx < 16; tx++) {
                    s32 o1, o2;
                    func_0204edf8(&o1, &o2, bx, by, tx, ty);
                    s32 t = func_02030bc4(o1, o2);
                    if (t != -1) {
                        Unk_ov003_02218478_V3 v;
                        v.x = 0;
                        v.y = 0;
                        v.z = 0;
                        func_0204eda4(&v, bx, by, tx, ty);
                        func_ov003_02217e48(&unk_54, &v, t);
                    }
                }
            }
        }
    }
    s32 idx = 0;
    for (bx = 0; bx < unk_14c; bx++) {
        for (by = 0; by < unk_148; by++) {
            Unk_ov003_02218478_Cell *c;
            if (by < g->w && bx < g->h && g->cells != 0) {
                c = &g->cells[bx * g->w + by];
            } else {
                c = 0;
            }
            func_ov003_02217c3c(unk_50 + idx++, c, by, bx);
        }
    }
    func_ov003_0221793c(&unk_310);
    return TRUE;
}

Unk_ov003_02232418::~Unk_ov003_02232418() {
}

Unk_ov003_02232418::Unk_ov003_02232418() {
}

extern "C" {
Unk_ov003_02232418 *func_ov003_022187dc() {
    return new Unk_ov003_02232418;
}
}

extern "C" {
void func_ov003_02218794(Unk_ov003_02218794_Obj *o);
void func_ov003_02218784(Unk_ov003_02218784_Obj *o) {
    o->unk_1c = func_ov003_02218794;
    o->unk_90 = 2;
}

void func_ov003_02218794(Unk_ov003_02218794_Obj *o) {
    if (data_ov003_02235494 == 0) {
        Unk_ov003_02218794_Inner *in = o->unk_04;
        u8 *r3 = in->unk_2c;
        u8 b = o->unk_00->unk_01;
        if (r3 != 0) {
            if (*(s8 *)(r3 + 0xe8) == b) {
                func_01ffc5a4(o->unk_b0->unk_28 + 0xda2, 0xda2);
                func_020302cc();
                data_ov003_02235494 = 1;
            }
        }
    }
}

s32 func_ov003_022187f8(s32 *p) {
    return *p;
}

void func_ov003_022187fc() {
}

s32 func_ov003_02218800(void **out) {
    void *r4 = data_021f482c;
    s32 r3 = func_ov003_02218da8();
    void *t = func_02064020(r4, -4, data_ov003_02232534, r3);
    if (t != 0) {
        *out = func_0210629c();
        func_02055744(*out, 0);
        *out = func_0205588c(*out, data_021c6204);
        func_020e8558(t);
        return 1;
    }
    return 0;
}

void func_ov003_0221885c() {
}

void func_ov003_02218860(s32 *p) {
    *p = 0;
}

u8 func_ov003_02218868(Unk_ov003_0221888c_Res *r) {
    return r->unk_1c;
}

s32 func_ov003_0221886c(Unk_ov003_0221888c_Res *r) {
    return r->unk_18;
}

s32 func_ov003_02218870(Unk_ov003_0221888c_Res *r, u32 idx) {
    if (idx < 5) {
        return r->unk_04[idx];
    }
    return 0;
}

s32 func_ov003_02218880(s32 *p) {
    return *p;
}

s32 func_ov003_02218884(void *p) {
    return func_ov003_0221894c(p);
}
}

extern "C" {
s32 func_ov003_0221888c(Unk_ov003_0221888c_Res *r) {
    u32 buf[0x6c / 4];
    u32 i;
    BOOL z;
    func_ov003_0221894c(r);
    s32 c = func_0204c188(data_021ed1a4, 0x11);
    z = FALSE;
    if (c == ~z) {
        return z;
    }
    void *t = func_020641ec(data_ov003_02232554, data_021c6204, 4, z);
    if (func_02101340((char *)buf, data_ov003_02232564, t) != 0) {
        for (i = 0; i < 5; i++) {
            func_020639e8(data_ov003_02235888, data_ov003_02232568, i);
            u8 *p = (u8 *)func_021062dc(func_021012bc(data_ov003_02235888));
            r->unk_04[i] = (s32)(p + *(s32 *)(p + *(u16 *)(p + 0xe) + 0xc));
        }
        r->unk_00 = (s32)func_0210629c(func_021012bc(data_ov003_02232584));
        func_02055724((void *)r->unk_00, 0);
        r->unk_18 = (s32)func_021066ac(func_02106690(func_021012bc(data_ov003_022325a0)), 0);
        r->unk_1c = 1;
        func_02101310((char *)buf);
    }
    return 1;
}
}
