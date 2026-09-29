#include "types.h"

// ---- externs ----
// element with out-of-line ctor/dtor (0203442c / 02004b60)
struct Unk_02062f94_Ret {
    u16 v;
    Unk_02062f94_Ret();
};

struct Unk_Elem {
    u16 v;
    Unk_Elem();
    Unk_Elem(u16 x) : v(x) {}
    ~Unk_Elem();
};

struct Unk_02065cd4 {  // local context object (ctor 02065cd4, dtor 02065cc8)
    Unk_02065cd4();
    ~Unk_02065cd4();
    u8 unk_00[0xf4];
};

struct Unk_0206338c {  // 8-byte temp (ctor 0206338c, dtor 02063388)
    Unk_0206338c(u32 a, u32 b);
    ~Unk_0206338c();
    u32 unk_00[2];
};

class Unk_020a7ccc {  // base of Unk_020e2e54
public:
    Unk_020a7ccc();
    virtual ~Unk_020a7ccc();
    void func_020a7c3c();
    u8 unk_04[0x30];
};

extern "C" {
u32 func_0205b504();
s32 func_0205b4e0();
s32 func_0205b4ec();
u32 func_02063b8c(u32 n);
Unk_02062f94_Ret func_02062f94(Unk_0206338c *q, u32 a, u32 b, u32 c, u32 d, u32 e);
u32 func_02063394(void *p, u32 v);
u32 func_02061764();
u32 func_02061770();
void func_020af0c4(void *a, void *b, u32 n);
void func_020af160(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g);
void func_020862f8(void *p);
void func_0209e120(void *p, u32 n);
void func_0209e148(void *p, u32 n);
u32 func_0209e170(void *p, u32 n);
void *func_0209750c();
void *func_0209888c(void *p);
u32 func_02094058(void *p);
u32 func_02072e44(u32 v);
void func_0203ce4c(u32 a, void *b);
void *func_02097868(void *p, u32 i);
u32 func_02098a48();
u32 func_02098044(void *p, u32 n);
u32 func_02097740(void *p, void *q);
void func_020656dc(Unk_02065cd4 *c, u8 *a, const char *s, const u32 *p, const u32 *q, void *r);
u32 func_02096aac(Unk_02065cd4 *c);
void func_02096a50(Unk_02065cd4 *c, u32 i);
u32 func_020b35ac(void *w, u8 *b, const char *s);
u32 func_0204da0c();
u32 func_0204ec8c(u32 a, u32 b);
void func_02135558x();
u32 func_020374f4(u32 a, void *b, void *c, void *d, void *e, u32 f);
void func_0209d498(void *p);
void func_02135558(void *a, void *b, void *c);
void func_02004b60();
u32 func_0204b2d4();
u32 func_0204b25c(void *p);
void *func_020aef80(u32 a, void *b, void *c, u32 d);
void *func_020af034(u32 a, void *b, void *c, u32 d, u32 e);
u32 func_020af070(u32 a, u32 b, void *c);

extern u8 data_021ee15c;
extern u8 data_021d7350[];
extern u8 data_021d735c[];
extern u8 data_021ed284[];
extern u8 data_021ee1f4[];
extern u32 data_020cbb18;
extern const u32 data_020e2e44;
extern const u32 data_020e2e48;
extern const char data_020e2e80[];
extern const char data_020e2e90[];
extern u8 data_020d09a0[][3];
extern u32 data_021ee170;
extern void *data_021ee188x;
extern u16 data_021ee16c;
extern u8 data_021ee188[];
}

// ---- Unk_020e2e54 : Unk_020a7ccc ----
class Unk_020e2e54 : public Unk_020a7ccc {
public:
    Unk_020e2e54();
    virtual ~Unk_020e2e54();
    virtual u32 vfunc_08();
    virtual void *vfunc_0c();
};

Unk_020e2e54::Unk_020e2e54() {
    func_020a7c3c();
}

Unk_020e2e54::~Unk_020e2e54() {}

u32 Unk_020e2e54::vfunc_08() {
    return 0x21;
}

void *Unk_020e2e54::vfunc_0c() {
    return (u8 *)this + 0x12;
}

struct Unk_020ad700 {
    /* 0x00 */ u32 bits;
    /* 0x04 */ volatile s8 slot;
    /* 0x05 */ u8 flags;

    Unk_020ad700();
    ~Unk_020ad700();
    inline s8 getSlot() { return slot; }
    void func_020ad700();
    void func_020ad444(u32 i);
    BOOL func_020ad45c(u32 i);
    u32 func_020ad474();
    BOOL func_020ad498();
    void func_020ad500(u32 i);
    void func_020ad518(u32 i);
    BOOL func_020ad53c(u32 i);
    void func_020ad568();
    void func_020ad570();
    BOOL func_020ad594();
    u32 func_020ad5c0(void *w);
    u8 func_020ad5f8();
    u32 func_020ad618(void *w);
    BOOL func_020ad650();
    BOOL func_020ad680();
};

class Unk_021ed2c0 {
public:
    /* 0x00 */ Unk_Elem arr[3];
    /* 0x08 */ Unk_020ad700 s;
    /* 0x10 */ u16 tbl[3];

    Unk_021ed2c0();
    ~Unk_021ed2c0();
    void func_020ad040();
    Unk_020ad700 *func_020ad3bc();
    void func_020ad3c8();
    void func_020ad3d8();
};

extern Unk_021ed2c0 data_021ed2c0;

// ---- Unk_020ad700 ----
void Unk_020ad700::func_020ad700() {
    bits = 0;
    slot = -1;
    func_020ad568();
    func_0209e120(data_021d7350, 8);
}

Unk_020ad700::~Unk_020ad700() {}

Unk_020ad700::Unk_020ad700() {
    func_020ad700();
}

void Unk_020ad700::func_020ad444(u32 i) {
    bits |= 1 << (i & 0x1f);
}

BOOL Unk_020ad700::func_020ad45c(u32 i) {
    return (bits & (1 << (i & 0x1f))) != 0;
}

u32 Unk_020ad700::func_020ad474() {
    u32 n = 0;
    u32 i;
    for (i = 0; i < 32; i++) {
        if (!func_020ad45c(i)) {
            n++;
        }
    }
    return n;
}

BOOL Unk_020ad700::func_020ad498() {
    if (slot != -1) {
        if (func_02094058(func_0209888c(func_0209750c())) == 1) {
            data_021ee15c = 1;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_020ad4cc() {
    if (func_02094058(func_0209888c(func_0209750c())) == 1) {
        return data_021ee15c;
    }
    return FALSE;
}

extern "C" void func_020ad4f4() {
    data_021ee15c = 0;
}

void Unk_020ad700::func_020ad500(u32 i) {
    flags &= ~(1 << (i & 3));
}

void Unk_020ad700::func_020ad518(u32 i) {
    if (slot != -1) {
        flags |= 1 << (i & 3);
    }
}

BOOL Unk_020ad700::func_020ad53c(u32 i) {
    if (slot != -1) {
        return ((flags >> (i & 3)) & 1) != 0;
    }
    return FALSE;
}

void Unk_020ad700::func_020ad568() {
    flags = 0;
}

void Unk_020ad700::func_020ad570() {
    if (slot != -1) {
        func_0209e148(data_021d7350, 8);
    }
}

BOOL Unk_020ad700::func_020ad594() {
    if (slot != -1) {
        if (func_0209e170(data_021d7350, 8) == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_020ad700::func_020ad5c0(void *w) {
    if (slot != -1) {
        u8 b = ((slot & 0x1f) << 1) + 1;
        return func_020b35ac(w, &b, data_020e2e90);
    }
    return 0;
}

u8 Unk_020ad700::func_020ad5f8() {
    if (slot != -1) {
        return slot * 2 + 1;
    }
    return 0;
}

u32 Unk_020ad700::func_020ad618(void *w) {
    if (slot != -1) {
        u8 b = (slot & 0x1f) << 1;
        return func_020b35ac(w, &b, data_020e2e90);
    }
    return 0;
}

BOOL Unk_020ad700::func_020ad650() {
    slot = -1;
    if (func_020ad474() == 0) {
        bits = 0;
    }
    func_020ad568();
    func_0209e120(data_021d7350, 8);
    return TRUE;
}

BOOL Unk_020ad700::func_020ad680() {
    if (slot == -1) {
        u32 cnt = func_020ad474();
        if (cnt != 0) {
            u32 target = func_02063b8c(cnt);
            u32 n = 0;
            u32 i;
            for (i = 0; i < 32; i++) {
                if (!func_020ad45c(i)) {
                    if (target == n) {
                        slot = i;
                        func_020ad444(i);
                        func_020862f8(data_021ed284);
                        data_021ed2c0.func_020ad040();
                        func_020ad568();
                        func_0209e120(data_021d7350, 8);
                        return TRUE;
                    }
                    n++;
                }
            }
        }
        return FALSE;
    }
    return TRUE;
}

// ---- Unk_021ed2c0 ----
Unk_020ad700 *Unk_021ed2c0::func_020ad3bc() {
    return &s;
}

void Unk_021ed2c0::func_020ad3c8() {
    func_020af0c4(this, tbl, 3);
}

void Unk_021ed2c0::func_020ad3d8() {
    func_020ad3c8();
    s.func_020ad700();
}

extern "C" void func_020ad3c0(Unk_021ed2c0 *g) {
    g->func_020ad3d8();
}

Unk_021ed2c0::~Unk_021ed2c0() {}

Unk_021ed2c0::Unk_021ed2c0() {}

void Unk_021ed2c0::func_020ad040() {
    u16 buf[3];
    u16 *p;
    u32 a, b;
    u32 i;
    func_020ad3c8();
    a = func_0205b504() / 10 + 0x32;
    if (func_02063b8c(100) < a) {
        Unk_0206338c q(0, 0x26);
        arr[0].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
    } else {
        Unk_0206338c q(0, 0x27);
        arr[0].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
    }
    b = (func_0205b4e0() + func_0205b4ec()) / 10 + 0x32;
    for (i = 1; i < 3; i++) {
        if (func_02063b8c(100) < b) {
            Unk_0206338c q(0, 5);
            arr[i].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
        } else {
            Unk_0206338c q(0, 0);
            arr[i].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
        }
    }
    buf[0] = 0xfff1;
    buf[1] = 0xfff1;
    buf[2] = 0xfff1;
    for (i = 0; i < 3; i++) {
        buf[i] = arr[i].v;
    }
    u32 r = func_02063b8c(6);
    for (i = 0; i < 3; i++) {
        arr[i].v = buf[data_020d09a0[r][i]];
    }
}

// ---- misc ----
extern "C" void func_020ad194() {
    data_021ed2c0.func_020ad3bc()->func_020ad680();
    if (data_021ed2c0.func_020ad3bc()->func_020ad594()) {
        if (func_02072e44(data_020cbb18) == 0) {
            Unk_02065cd4 ctx;
            u8 r = func_02063b8c(3);
            Unk_020e2e54 w;
            data_021ed2c0.func_020ad3bc()->func_020ad5c0(&w);
            func_0203ce4c(2, &w);
            s32 i;
            for (i = 0; i < 4; i++) {
                void *p = func_02097868(data_021d735c, i);
                if (p != NULL && func_02098a48() != 0 && func_02098044(p, 12) != 0) {
                    func_020656dc(&ctx, &r, data_020e2e80, &data_020e2e44, &data_020e2e48, func_0209888c(p));
                    if (func_02096aac(&ctx) == 0) {
                        func_02096a50(&ctx, 0);
                    }
                }
            }
            data_021ed2c0.func_020ad3bc()->func_020ad570();
        }
    }
}

extern "C" BOOL func_020ad274() {
    void *p = func_0209750c();
    if (p != NULL) {
        void *q = func_0209888c(p);
        if (func_02094058(q) == 1) {
            return data_021ed2c0.func_020ad3bc()->func_020ad498();
        }
        u8 v = func_02097740(data_021d735c, q) & 3;
        data_021ed2c0.func_020ad3bc()->func_020ad518(v);
        return TRUE;
    }
    return FALSE;
}

// ---- Unk_020acf38 group (u16 at +0) ----
struct Unk_020acf38 {
    u16 v;
};

extern "C" {
void func_020acf38(Unk_020acf38 *p);
void func_020acf40(Unk_020acf38 *p);
Unk_020acf38 *func_020acf44(Unk_020acf38 *p);
void func_020acf58(Unk_020acf38 *p);
void func_020acf60(Unk_020acf38 *p);
}

extern "C" void func_020acf38(Unk_020acf38 *p) {
    p->v = 0;
}

extern "C" void func_020acf40(Unk_020acf38 *p) {}

extern "C" Unk_020acf38 *func_020acf44(Unk_020acf38 *p) {
    func_020acf38(p);
    return p;
}

extern "C" void func_020acf54(Unk_020acf38 *p) {}

extern "C" void func_020acf58(Unk_020acf38 *p) {
    func_020acf60(p);
}

extern "C" void func_020acf60(Unk_020acf38 *p) {
    func_020acf38(p);
}

extern "C" Unk_020acf38 *func_020acf68(Unk_020acf38 *p) {
    func_020acf40(p);
    return p;
}

extern "C" Unk_020acf38 *func_020acf78(Unk_020acf38 *p) {
    func_020acf44(p);
    func_020acf58(p);
    return p;
}

extern "C" void func_020acf90(Unk_021ed2c0 *g, u32 a) {
    func_020aef80(a, g, g->tbl, 3);
}

extern "C" void *func_020acfa8(Unk_021ed2c0 *g, u32 a, u32 b) {
    return func_020af034(a, g, g->tbl, 3, b);
}

extern "C" u32 func_020ad030(Unk_021ed2c0 *g, u32 a) {
    return func_020af070(a, 3, g->tbl);
}

extern "C" void func_020ad79c(void *a, void *b) {
    func_020af160(a, b, 5, 0x1d, 1, 6, 1);
}

extern "C" void func_020ad7b8(void *a, void *b) {
    u32 x = func_02061770();
    u32 y = func_02061764();
    if (func_02063394(data_021ee1f4, x + y) < func_02061770()) {
        func_020af160(a, b, 6, 0x1d, 1, 6, 1);
    } else {
        func_020af160(a, b, 8, 0x1d, 1, 6, 1);
    }
}

extern "C" BOOL func_020ad2c8() {
    void *p = func_0209750c();
    if (p != NULL) {
        void *q = func_0209888c(p);
        if (func_02094058(q) == 1) {
            return func_020ad4cc();
        }
        u8 v = func_02097740(data_021d735c, q) & 3;
        return data_021ed2c0.func_020ad3bc()->func_020ad53c(v);
    }
    return FALSE;
}

extern "C" void func_020ad314(u32 i) {
    data_021ed2c0.func_020ad3bc()->func_020ad500((u8)i);
}

extern "C" void func_020ad798() {}

extern "C" BOOL func_020ad330() {
    u32 v[4];
    u32 a = func_0204da0c();
    if (a != 0) {
        u32 b = func_0204ec8c(a, 0x200);
        if (b != 0) {
            static Unk_Elem tmp(0x5012);
            if (func_020374f4(b, &v[0], &v[1], &tmp, &tmp, 0) != 0) {
                v[2] = 0;
                v[3] = 0;
                func_0209d498(&v[2]);
                if (((u8 *)v)[0xa] >= 6) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" u32 func_020acfc4(Unk_021ed2c0 *g, u16 *ptr) {
    u32 i;
    for (i = 0; i < 3; i++) {
        u16 *p = (u16 *)func_020acfa8(g, i, 0);
        BOOL eq;
        if (func_0204b2d4() != 0) {
            eq = func_0204b25c(p) == func_0204b25c(ptr);
        } else {
            eq = *p == *ptr;
        }
        if (eq) {
            return func_020ad030(g, i);
        }
    }
    return 0;
}
