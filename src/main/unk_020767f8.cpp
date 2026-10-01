#include "types.h"

extern "C" {
void func_02116048(const void *, void *, u32);
void func_020723a4(void *ctx, const void *p, u32 n);
void *func_0209ada4(void *);
void func_0209ada0(void *);
void *func_0207aa78(s32 i);
void func_0207857c(void *p, u32 v);
void *func_02078578(void *p);
u32 func_02078580(void *p);
u32 func_0209ac64(void *);
u32 func_0209ab94(void *);
void func_0209ad54(void *a, u32 b, u32 c, u32 d);
extern u8 *data_020cbb18;
extern u8 *data_021c6218;
s32 func_020eaf18(void);
s32 func_020eaf90(void);
BOOL func_02072e88(void *g, s32 i);
BOOL func_020729cc(void *g, s32 i);
BOOL func_02072dc4(void *g, s32 i);
void func_020e85fc(void *g, s32 a);
void func_020e8628(void *g, s32 a, s32 b);
void func_0204f054(void *p);
void func_0211a3fc(void *p);
void func_0211a258(void *p);
void func_0211a154(void *p);
void func_020e9d94(void);
void func_020ea3dc(void);
void func_020ea3c4(void);
void func_020ea418(void *p, u32 v);
void func_020ea3d0(void *p, u32 v);
void func_0205125c(void *p, u32 n);
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
s32 func_020e9d7c(void);
u64 func_020ea34c(u32 a);
BOOL func_020ea358(u32 ctx, void *out, u64 key);
void func_02115fb4(void *p, u32 v, u32 n);
s32 func_020e9d88(void *p, void *q);
void func_02077230(void *p);
void *func_020771f0(void *p);
void func_0209cf88(void *p);
void func_02077348(void *p, void *q);
void func_020772cc(void *p);
u8 *func_02077374(void *p);
void func_02077178(void *p);
void func_02077160(void *p);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206f874(void *p);
void func_0206f85c(void *p);
void *func_020a6b9c(void *p, s32 i);
void func_020a7a64(void *p, void *q);
void func_020a77f8(void *p, void *q);
void func_020a7c3c(void *p);
void func_02050e90(void *p, void *q, u32 n);
s32 func_0206f828(void *p);
void func_0203ce60(void *a, void *b, u32 c);
void func_020a791c(void *p);
void func_020a78ac(void *p);
void _ZdlPv(void *);
void func_02076ff0(u32 a, u32 b, u32 c, u32 d, u8 e);
void func_02076f70(void *p);
void func_02076f74(void *p);
void func_02076cf0(void *p);
void func_02076cf4(void *p);
void func_02076f1c(void *p);
void *func_02076d18(void *p, void *q);
void *func_02076d30(void *p);
void *func_02076d40(void *p);
BOOL func_02076f04(void);
void func_02076a8c(u8 *p, u32 *out, u8 *out2);
void func_02076a2c(u8 *p, u32 *out, u32 *x);
void func_02076a6c(u8 *p, s32 v, s32 x);
void func_02076ac8(u8 *p, s32 v, u8 hi);
BOOL func_02077040(void *self, void *p);
BOOL func_02076b40(u32 mask);
u64 func_02133100(u64 a, u64 b);
struct Unk_02076d68_E;
Unk_02076d68_E *func_02076db4(void);
u32 func_02076e1c(void *);
void func_02077118(void *a, u32 b, u32 c);
s32 func_02076eec(void);
}

extern u8 data_021e87d8[];
struct Unk_02076d68_E {
    u8 b[0x1c];
};
extern u8 data_021edb68[];

struct Unk_020767f8_Tag {
    u8 b;
    u16 h;
};

// ---------------------------------------------------------------------------
extern "C" void func_020767f8(u8 *buf) {
    Unk_020767f8_Tag t;
    u8 obj[0x10];
    u32 v;
    u32 z8 = 0, zc = 0, z10 = 0;
    Unk_020767f8_Tag *tp = &t;
    s32 i;
    t.b = 3;
    func_0209ada4(obj);
    for (i = 0; i < 8; i++) {
        void *p = func_0207aa78(i);
        t.b = 3;
        func_02116048(buf, &t.b, 1);
        func_0207857c(p, t.b);
        func_02116048(buf + 1, obj, 12);
        void *q = func_02078578(p);
        u32 a = func_0209ac64(obj);
        u32 b = func_0209ab94(obj);
        func_0209ad54(q, a, b, z8);
        v = zc;
        func_02116048(buf + 13, &v, 4);
        *(u32 *)((u8 *)p + 0x20) = v;
        t.h = z10;
        func_02116048(buf + 17, &t.h, 2);
        *(u16 *)((u8 *)p + 0x24) = t.h;
        buf += 0x13;
    }
    func_0209ada0(obj);
}

extern "C" void func_020768a0(void) {}

extern "C" void func_020768a4(void) {
    Unk_020767f8_Tag t;
    u32 v;
    Unk_020767f8_Tag *tp = &t;
    void *p;
    s32 i;
    void *ctx;
    t.b = 3;
    i = 0;
    ctx = data_020cbb18;
    for (; i < 8; i++) {
        p = func_0207aa78(i);
        if (p != NULL) {
            t.b = (u8)func_02078580(p);
        } else {
            t.b = 3;
        }
        func_020723a4(ctx, &t.b, 1);
        func_020723a4(ctx, func_02078578(p), 12);
        v = *(u32 *)((u8 *)p + 0x20);
        func_020723a4(ctx, &v, 4);
        t.h = *(u16 *)((u8 *)p + 0x24);
        func_020723a4(ctx, &t.h, 2);
    }
}

extern "C" void func_02076918(void) {}

extern "C" u16 func_0207691c(void *src) {
    u16 v;
    func_02116048(src, &v, 2);
    return v;
}

extern "C" void func_02076934(void *dst, u16 v) { func_02116048(&v, dst, 2); }

extern "C" u16 func_0207694c(void *src) {
    u16 v;
    func_02116048(src, &v, 2);
    return v;
}

extern "C" void func_02076964(void *dst, u16 v) { func_02116048(&v, dst, 2); }

extern "C" s16 func_0207697c(void *src) {
    s16 v;
    func_02116048(src, &v, 2);
    return v;
}

extern "C" void func_02076994(void *dst, s16 v) { func_02116048(&v, dst, 2); }

extern "C" s16 func_020769ac(void *src) {
    s16 v;
    func_02116048(src, &v, 2);
    return v;
}

extern "C" void func_020769c4(void *dst, s16 v) { func_02116048(&v, dst, 2); }

extern "C" void func_020769dc(u8 *p, u32 *out, s32 *x, u32 *y, u8 *z) {
    func_02076a2c(p, out, (u32 *)x);
    *x = *x - 0x80000;
    func_02076a8c(p + 5, y, z);
}

extern "C" void func_02076a04(u8 *p, s32 a, s32 x, s32 y, u8 z) {
    func_02076a6c(p, a, x + 0x80000);
    func_02076ac8(p + 5, y, z);
}

extern "C" void func_02076a2c(u8 *p, u32 *out, u32 *x) {
    u8 t;
    func_02076a8c(p + 2, x, &t);
    *out = (p[1] & 0xff) | (((t << 16) & 0xf0000) | ((p[0] << 8) & 0xff00));
}

extern "C" void func_02076a6c(u8 *p, s32 v, s32 x) {
    p[0] = v >> 8;
    p[1] = v;
    func_02076ac8(p + 2, x, (u8)((v >> 16) & 0xf));
}

extern "C" void func_02076a8c(u8 *p, u32 *out, u8 *out2) {
    if (out2 != NULL) {
        *out2 = ((u32)p[0] >> 4) & 0xf;
    }
    *out = (p[2] & 0xff) | (((p[0] << 16) & 0xf0000) | ((p[1] << 8) & 0xff00));
}

extern "C" void func_02076ac8(u8 *p, s32 v, u8 hi) {
    p[0] = ((hi << 4) & 0xf0) | ((v >> 16) & 0xf);
    p[1] = v >> 8;
    p[2] = v;
}

extern "C" void func_02076ae8(u8 *p, u8 *a, u8 *out) {
    if (out != NULL) {
        *out = ((u32)p[0] >> 6) & 3;
    }
    *a = p[0] & 0x3f;
}

extern "C" void func_02076b08(u8 *p, s32 v, s32 w) { p[0] = ((w << 6) & 0xc0) | (v & 0x3f); }

extern "C" BOOL func_02076b18(void) {
    s32 r = func_020eaf18();
    switch (r) {
    case 3:
    case 4:
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02076b34(void) { func_02076b40(0xf); }

extern "C" BOOL func_02076b40(u32 mask) {
    s32 i = 3;
    void *g = data_020cbb18;
    u32 one = 1;
    for (; i >= 0; i--) {
        if (!func_02072e88(g, i)) continue;
        if (func_020729cc(g, i)) continue;
        u32 t = (u16)(one << i);
        t &= mask;
        if (t == 0) continue;
        if (func_02072dc4(g, i)) continue;
        return FALSE;
    }
    return TRUE;
}

extern "C" void func_02076b9c(s32 a) { func_020e85fc(data_021c6218, a); }

extern "C" void func_02076bb0(s32 a, s32 b) { func_020e8628(data_021c6218, a, b); }

extern "C" u32 func_02076bc8(u8 *p) { return (*p >> 2) & 0x1f; }

extern "C" u32 func_02076bd4(u8 *p) { return *p & 3; }

extern "C" BOOL func_02076bdc(u8 *p) {
    if ((*p & 0x80) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02076bf0(u8 *p, s32 a, s32 b) { *p = ((b & 0x1f) << 2) | 0x80 | (a & 3); }

extern "C" void func_02076c04(u8 *p, s32 a) { *p = a & 3; }

extern "C" s32 func_02076c0c(s32 x) {
    if (x >= func_020eaf90()) {
        x--;
    }
    return x;
}

struct Unk_02076c24_S {
    s32 unk_00;
    u8 unk_04;
    u8 pad[3];
    u8 unk_08[4];
};

extern "C" void func_02076c24(Unk_02076c24_S *s, s32 v) {
    s->unk_04 = 1;
    s->unk_00 = v;
    func_0204f054(s->unk_08);
    func_0211a3fc(s->unk_08);
    func_0211a258(s->unk_08);
    s->unk_04 = 0;
}

extern "C" void func_02076c50(Unk_02076c24_S *s) {
    func_0211a154(s->unk_08);
    s->unk_00 = -1;
}

extern "C" void func_02076c68(void) {}

extern "C" u16 func_02076c6c(u8 *p) { return *(u16 *)(p + 0x4c); }

extern "C" void func_02076c74(u8 *p, u16 v) { *(u16 *)(p + 0x4c) = v; }

extern "C" u8 *func_02076c7c(u8 *p) { return p + 0x40; }

extern "C" void func_02076c80(void) {}

extern "C" void func_02076c84(void) { func_020e9d94(); }
extern "C" void func_02076c8c(void) { func_020ea3dc(); }
extern "C" void func_02076c94(void) { func_020ea3c4(); }

extern "C" void func_02076c9c(u8 *p) {
    func_020ea418(p, 0x41444d45);
    u32 r = func_02076e1c(p + 0x40);
    func_020ea3d0(p, r);
}

extern "C" u8 *func_02076cc0(u8 *p) {
    func_02076f70(p + 0x40);
    return p;
}

extern "C" u8 *func_02076cd4(u8 *p) {
    func_02076f74(p + 0x40);
    return p;
}

extern "C" u8 *func_02076ce8(u8 *p) { return p + 0x14; }
extern "C" u8 *func_02076cec(u8 *p) { return p + 0xc; }
extern "C" void func_02076cf0(void *p) {}


extern "C" void func_02076cf4(void *pp) {
    u8 *p = (u8 *)pp;
    func_02076f1c(p);
    func_0205125c(p + 0xc, 8);
    func_0205125c(p + 0x14, 8);
}

extern "C" void *func_02076d18(void *p, void *q) {
    func_02116048(q, p, 0x1c);
    return p;
}

extern "C" void *func_02076d30(void *p) {
    func_02076f70(p);
    return p;
}

extern "C" void *func_02076d40(void *p) {
    func_02076f74(p);
    return p;
}

extern "C" u16 func_02076d50(u8 *p) { return *(u16 *)(p + 0x380); }
extern "C" void func_02076d5c(u8 *p, u16 v) { *(u16 *)(p + 0x380) = v; }

extern "C" void func_02076d68(void) {
    Unk_02076d68_E *base = func_02076db4();
    s32 i, n;
    n = 0;
    i = n;
    for (; i < 0x20; i++) {
        Unk_02076d68_E *e = &base[i];
        func_02076cf0(e);
        if (func_02076f04()) {
            if (i != n) {
                func_02076d18(&base[n], e);
                func_02076cf4(e);
            }
            n++;
        }
    }
}

extern "C" Unk_02076d68_E *func_02076db4(void) {}

extern "C" void func_02076db8(Unk_02076d68_E *base) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        func_02076cf4(&base[i]);
    }
}

extern "C" void *func_02076dd8(void *p) {
    __cxa_vec_cleanup(p, 0x20, 0x1c, func_02076d30);
    return p;
}

extern "C" void *func_02076df4(void *p) {
    __cxa_vec_ctor(p, 0x20, 0x1c, func_02076d40, func_02076d30);
    return p;
}

extern "C" u32 func_02076e1c(void *) {}

extern "C" BOOL func_02076e20(void) {
    if (func_02076eec() == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02076e38(u32 a, u8 *buf) {
    u64 v;
    s32 i;
    if (func_020e9d7c() != 2) {
        return FALSE;
    }
    v = func_020ea34c(a);
    for (i = 11; i >= 0; i--) {
        buf[i] = (u8)(v % 10);
        v = v / 10;
    }
    return TRUE;
}

extern "C" BOOL func_02076e88(void *out, u8 *data, u32 ctx) {
    u8 tmp[12];
    u64 acc = 0;
    u64 i = 0;
    do {
        u64 m = func_02133100(acc, 10);
        acc = m + (u32)data[i];
        i++;
    } while (i < 12);
    if (!func_020ea358(ctx, tmp, acc)) {
        return FALSE;
    }
    func_02116048(tmp, out, 12);
    return TRUE;
}

extern "C" BOOL func_02076eec(void) {
    if (func_020e9d7c() == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02076f04(void) {
    if (func_020e9d7c() != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02076f1c(void *p) { func_02115fb4(p, 0, 0xc); }

struct Unk_02076f28_T {
    s32 a, b, c;
    ~Unk_02076f28_T() { func_02076f70(this); }
};

extern "C" s32 func_02076f28(void *self, Unk_02076f28_T *src) {
    Unk_02076f28_T t = *src;
    return func_020e9d88(self, &t);
}

extern "C" void *func_02076f58(void *p, void *q) {
    func_02116048(q, p, 12);
    return p;
}

extern "C" void func_02076f70(void *) {}
extern "C" void func_02076f74(void *) {}

extern "C" void func_02076f78(void) { func_02077230(data_021e87d8); }

extern "C" void func_02076f88(void *dst) {
    u32 loc;
    void *r = func_020771f0(data_021e87d8);
    func_0209cf88(&loc);
    func_02077348(r, &loc);
    func_020772cc(r);
    func_02116048(dst, func_02077374(r), 0xc0);
}

struct Unk_02076fc8_D {
    u8 a, b, c;
};

extern "C" void func_02076fc8(u32 a, u32 b) {
    Unk_02076fc8_D d;
    func_0209cf88(&d);
    func_02076ff0(a, b, d.c, d.b, d.a);
}

struct Unk_02076ff0_Obj {
    u32 pad[0xd8 / 4];
    Unk_02076ff0_Obj() { func_02077178(this); }
    ~Unk_02076ff0_Obj() { func_02077160(this); }
};

extern "C" void func_02076ff0(u32 a, u32 b, u32 c, u32 d, u8 e) {
    Unk_02076ff0_Obj o;
    u8 l[3];
    func_02077118(&o, a, b);
    void *r = func_020771f0(data_021e87d8);
    l[2] = c;
    l[1] = d;
    l[0] = e;
    func_02077348(r, l);
    func_02077040(r, &o);
}

struct Unk_02077040_A { u32 pad[0x40 / 4]; Unk_02077040_A() { func_0206fcc8(this); } ~Unk_02077040_A() { func_0206fca8(this); } };
struct Unk_02077040_B { u32 pad[0x3c / 4]; Unk_02077040_B() { func_0206f874(this); } ~Unk_02077040_B() { func_0206f85c(this); } };

extern "C" BOOL func_02077040(void *self, void *r1) {
    Unk_02077040_A o1;
    Unk_02077040_B o2;
    u8 *buf = func_02077374(self);
    s32 n = 0;
    s32 i = n;
    for (; i < 6; i++) {
        void *e = func_020a6b9c((u8 *)r1 + 0x12, i);
        if (e != NULL) {
            func_020a7a64(&o1, e);
            func_020a77f8(&o2, &o1);
            func_02050e90(&o2, buf + n, 0x28);
            n = n + func_0206f828(&o2);
            buf[n] = 0x86;
            n = n + 1;
        } else {
            func_020a7c3c(&o1);
            buf[n] = 0x86;
            n++;
        }
    }
    return TRUE;
}


class Unk_020d9200;
class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 unk_04[10];
};

class Unk_020e055c : public Unk_020e2a60 {
public:
    Unk_020e055c();
    virtual ~Unk_020e055c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_0e[0xb2];
};

Unk_020e055c::Unk_020e055c() {}
Unk_020e055c::~Unk_020e055c() {}
u32 Unk_020e055c::vfunc_08() { return 0xc0; }
u8 *Unk_020e055c::vfunc_0c() { return unk_0e; }

extern "C" void func_02077118(void *a, u32 b, u32 c) {
    volatile u8 v = *data_021edb68;
    v = (u8)b;
    func_0203ce60(a, (void *)&v, c);
}
