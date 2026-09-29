#include "types.h"
#include "text/Unk_02050288.h"

class Unk_020e2a78 {
public:
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 func_020a7bd8(Unk_020e2a78 *other);
    void func_020a7c3c();
};

extern "C" {
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
s32 func_0209c38c(s32 a, s32 b);
void func_020e761c(void *p, s32 a, s32 b);
void func_0200402c(u32 x);
s32 *func_02089240(void *p);
void func_02089258(void *p, s32 a, s32 b);
void func_02089260(void *p, s32 v);
void func_02089264(void *p, s32 v);
void func_02089268(void *p, void *v);
void func_0205113c(StrBuf *buf);
BOOL func_020510d8(StrBuf *dst, StrBuf *src);
s32 func_0206edbc(void);
s32 func_0206ede0(void);
s32 func_01ffcb0c(s32 a, s32 b);
}

extern u8 data_020d467c[];
extern s32 data_021c5384;

class Unk_0203900c {
public:
    Unk_0203900c();
    ~Unk_0203900c();
    void func_0203900c();
    void func_02039028();
    void func_020390c8();
    void func_020390e4();
    void func_02039194();
    void func_02039230();
    void func_02039290();
    void func_0203930c();
    void func_0203934c();
    void func_020393b4();
    void func_020393f8();
    void func_02039498();
    void func_02039508();
    void func_02039534();
    void func_02039544();
    void func_02039584();
    BOOL func_020395bc();
    BOOL func_020395dc();
    void func_020395fc(s32 a, s32 b, s32 c);
    void func_0203960c(StrBuf *a, Unk_020e2a78 *b, s32 c);
    void func_02039630();

    /* 0x00 */ u32 unk_00[3];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u8 unk_1c[0x14];
    /* 0x30 */ u8 unk_30[0x14];
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48[4];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54[0x34];
    /* 0x88 */ u8 unk_88[0x10];
    /* 0x98 */ Unk_02050288 *unk_98;
    /* 0x9c */ Unk_02050288 *unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
};

extern "C" void func_020389a0(s32 idx, Unk_0203900c *p);
extern "C" s32 func_02038b74(void *p);
extern "C" void func_02038a1c(void *p);
extern "C" void func_02038a58(void *p);

class Unk_020d9114 {
public:
    Unk_020d9114();
    virtual ~Unk_020d9114();
    BOOL func_02038d28(Unk_0203900c *p);
    void func_02038d68(s32 idx);
    s32 func_02038dd0(s32 idx);
    s32 func_02038ddc(s32 idx);
    void func_02038dfc(s32 idx, StrBuf *a, Unk_020e2a78 *b);

    /* 0x004 */ Unk_0203900c unk_04[4];
    /* 0x2d4 */ Unk_0203900c *unk_2d4[4];
    /* 0x2e4 */ Unk_0203900c *unk_2e4[4];
};

struct Unk_020cbb18 {
    u8 pad[0x64];
    s32 unk_64;
};
extern Unk_020cbb18 *data_020cbb18;
extern Unk_020d9114 *data_021c3008;

BOOL Unk_020d9114::func_02038d28(Unk_0203900c *p) {
    BOOL ok = FALSE;
    s32 i;
    if (func_02038b74(this)) {
        ok = TRUE;
    } else {
        for (i = 0; i < 4; i++) {
            if (unk_2d4[i] == NULL) {
                unk_2d4[i] = p;
                ok = TRUE;
                break;
            }
        }
    }
    return ok;
}

void Unk_020d9114::func_02038d68(s32 idx) {
    s32 i;
    if (idx <= 4) {
        s32 v = func_02038ddc(idx);
        for (i = 0; i < 4; i++) {
            Unk_0203900c *p = unk_2d4[i];
            if (p != NULL && v == p->unk_0c) {
                unk_2d4[i] = NULL;
                break;
            }
        }
        for (i = 0; i < 4; i++) {
            Unk_0203900c *p = unk_2e4[i];
            if (p != NULL && v == p->unk_0c) {
                p->func_020395bc();
                break;
            }
        }
    }
}

s32 Unk_020d9114::func_02038dd0(s32 idx) {
    if (idx == 4) {
        idx = 0;
    }
    return idx;
}

s32 Unk_020d9114::func_02038ddc(s32 idx) {
    return (idx - data_020cbb18->unk_64 + 4) % 4;
}

void Unk_020d9114::func_02038dfc(s32 idx, StrBuf *a, Unk_020e2a78 *b) {
    if (idx <= 4) {
        Unk_0203900c *p = &unk_04[func_02038ddc(idx)];
        if (func_02038d28(p)) {
            p->func_0203960c(a, b, func_02038dd0(idx));
            if (p->unk_0c == 0) {
                func_020389a0(idx, p);
            }
        }
    }
}

Unk_020d9114::Unk_020d9114() {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_2d4[i] = NULL;
        unk_2e4[i] = NULL;
    }
}

Unk_020d9114::~Unk_020d9114() {}

static inline BOOL Unk_02038f10_Pos(s32 v) {
    if (v > 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02038f10(void) {
    BOOL r = FALSE;
    s32 i = 0;
    Unk_0203900c *p = data_021c3008->unk_04;
    for (; i < 4; i++) {
        if ((p[i].unk_0c == 0 && p[i].unk_a0 != 0) || Unk_02038f10_Pos(p[i].unk_a8)) {
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" BOOL func_02038f60(void) {
    BOOL r = FALSE;
    s32 i = 0;
    Unk_0203900c *p = data_021c3008->unk_04;
    for (; i < 4; i++) {
        if ((p[i].unk_0c != 0 && p[i].unk_a0 != 0) || Unk_02038f10_Pos(p[i].unk_a8)) {
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" void func_02038ef0(void) { func_02038a1c(data_021c3008); }
extern "C" void func_02038f00(void) { func_02038a58(data_021c3008); }

extern "C" void func_02038fb0(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        data_021c3008->func_02038d68(i);
    }
}

extern "C" void func_02038fd4(s32 idx) { data_021c3008->func_02038d68(idx); }
extern "C" void func_02038fe8(s32 idx, StrBuf *a, Unk_020e2a78 *b) { data_021c3008->func_02038dfc(idx, a, b); }

void Unk_0203900c::func_0203900c() {
    if (unk_9c != NULL) {
        func_020a7fd8(unk_9c);
        unk_9c = NULL;
    }
}

void Unk_0203900c::func_02039028() {
    if (unk_9c == NULL) {
        unk_9c = func_020a8054((unk_0c << 6) + 0xc0, 0x14, 2);
        if (unk_9c != NULL) {
            unk_9c->unk_2c = 4;
            Unk_02050288 *t = unk_9c;
            t->unk_10 = (u32)((Unk_020e2a78 *)unk_54)->vfunc_0c();
            if (data_021c5384 == 0) {
                unk_9c->unk_50 = 3;
            } else {
                unk_9c->unk_50 = 2;
            }
            unk_9c->unk_58 = 1;
            unk_9c->unk_55 = 1;
            unk_9c->unk_39 = 0xf;
            unk_9c->unk_38 = 0xd;
            unk_9c->func_02050c90();
        }
    }
}

void Unk_0203900c::func_020390c8() {
    if (unk_98 != NULL) {
        func_020a7fd8(unk_98);
        unk_98 = NULL;
    }
}

void Unk_0203900c::func_020390e4() {
    if (unk_0c != 0 && unk_98 == NULL) {
        unk_98 = func_020a8054((*(volatile s32 *)&unk_0c << 3) + 0x1c0, 8, 2);
        if (unk_98 != NULL) {
            unk_98->unk_2c = 4;
            Unk_02050288 *t = unk_98;
            t->unk_10 = (u32)((StrBuf *)unk_88)->data();
            if (data_021c5384 == 0) {
                unk_98->unk_50 = 3;
            } else {
                unk_98->unk_50 = 2;
            }
            unk_98->unk_58 = 1;
            unk_98->unk_55 = 1;
            unk_98->unk_39 = 0xe;
            unk_98->unk_38 = 0xd;
            unk_98->func_02050c90();
        }
    }
}

void Unk_0203900c::func_02039194() {
    u32 w, n, w2, n2;
    s32 pad, hi, lo;
    if (unk_98 != NULL) {
        w = unk_98->func_0c();
        n = (w + 7) >> 3;
        pad = n * 8 - w;
        hi = func_02089240(unk_1c)[1] - 1;
        lo = n - 1;
        if (lo < 0) {
            hi = 0;
        } else if (lo <= hi) {
            hi = lo;
        }
        func_02089258(unk_1c, hi, 0);
        unk_98->unk_30 = pad;
    }
    w2 = unk_9c->func_0c();
    n2 = (w2 + 7) >> 3;
    hi = func_02089240(unk_30)[1] - 1;
    lo = n2 - 1;
    if (lo < 0) {
        hi = 0;
    } else if (lo <= hi) {
        hi = lo;
    }
    func_02089258(unk_30, hi, 0);
    if (unk_0c == 0 && unk_9c != NULL) {
        unk_9c->unk_30 = (n2 * 8 - w2) >> 1;
    }
}

void Unk_0203900c::func_02039230() {
    u8 *t = data_020d467c + unk_18 * 8;
    if (unk_0c != 0) {
        func_02089268(unk_1c, data_020d467c + unk_14 * 8);
        func_02089264(unk_1c, 1);
        func_02089260(unk_1c, 0);
    }
    func_02089268(unk_30, t);
    func_02089264(unk_30, 1);
    func_02089260(unk_30, 0);
}

void Unk_0203900c::func_02039290() {
    s32 t;
    if (unk_0c == 0) {
        t = func_0209c38c(0x138, 3) + 0xb;
    } else {
        t = func_0209c38c(0x12e, 3) - 0xb;
    }
    unk_4c += t;
    unk_a4--;
    if (unk_a4 <= 0) {
        func_020390c8();
        func_0203900c();
        func_02039534();
        if (unk_0c == 0) {
            t = func_0209c38c(0x138, 4);
        } else {
            t = func_0209c38c(0x12e, 4) + 0xa;
        }
        unk_a8 = t;
    }
}

void Unk_0203900c::func_0203930c() {
    s32 t;
    unk_a0 = 3;
    unk_b0 = 1;
    if (unk_0c == 0) {
        t = func_0209c38c(0x138, 2) + 2;
    } else {
        t = func_0209c38c(0x12e, 2) + 2;
    }
    unk_a4 = t;
}

void Unk_0203900c::func_0203934c() {
    s32 t;
    if (unk_0c == 0) {
        t = func_0209c38c(0x137, 3) + 6;
    } else {
        t = func_0209c38c(0x12d, 3) + 6;
    }
    func_020e761c(unk_48, unk_44, t);
    unk_a4--;
    if (unk_a4 <= 0) {
        unk_ac = 0;
    }
    if (unk_ac == 0) {
        func_0203930c();
    }
}

void Unk_0203900c::func_020393b4() {
    s32 t;
    unk_a0 = 2;
    unk_b0 = 1;
    if (unk_0c == 0) {
        t = func_0209c38c(0x137, 2) + 0x258;
    } else {
        t = func_0209c38c(0x12d, 2) + 0x258;
    }
    unk_a4 = t;
}

void Unk_0203900c::func_020393f8() {
    s32 a, b, c;
    if (unk_0c == 0) {
        a = func_0209c38c(0x136, 4) + 2;
    } else {
        a = func_0209c38c(0x12c, 4) + 2;
    }
    if (unk_0c == 0) {
        b = func_0209c38c(0x136, 5) - 6;
    } else {
        b = func_0209c38c(0x12c, 5) + 6;
    }
    if (unk_0c == 0) {
        c = func_0209c38c(0x136, 6) + 2;
    } else {
        c = func_0209c38c(0x12c, 6) - 2;
    }
    if (unk_a4 > a) {
        unk_4c += b;
    } else {
        unk_4c += c;
    }
    unk_a4--;
    if (unk_a4 <= 0) {
        unk_4c = 0;
        func_020393b4();
    }
}

void Unk_0203900c::func_02039498() {
    s32 a, b;
    unk_a0 = 1;
    unk_b0 = 1;
    if (unk_0c == 0) {
        a = func_0209c38c(0x136, 2) + 3;
    } else {
        a = func_0209c38c(0x12c, 2) + 3;
    }
    if (unk_0c == 0) {
        b = func_0209c38c(0x136, 3) + 5;
    } else {
        b = func_0209c38c(0x12c, 3) - 5;
    }
    unk_a4 = a;
    unk_4c = b;
    if (unk_0c != 0) {
        func_0200402c(0x3f);
    }
}

void Unk_0203900c::func_02039508() {
    if (unk_ac != 0) {
        func_020390e4();
        func_02039028();
        func_02039194();
        func_02039498();
    }
}

void Unk_0203900c::func_02039534() {
    unk_a0 = 0;
    unk_b0 = 0;
}

void Unk_0203900c::func_02039544() {
    ((Unk_020e2a78 *)unk_54)->func_020a7c3c();
    func_0205113c((StrBuf *)unk_88);
    func_020390c8();
    func_0203900c();
    unk_a4 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    func_02039534();
}

void Unk_0203900c::func_02039584() {
    if (unk_98 != NULL) {
        unk_98->unk_50 = 3;
        unk_98->func_02050c90();
    }
    if (unk_9c != NULL) {
        unk_9c->unk_50 = 3;
        unk_9c->func_02050c90();
    }
}

BOOL Unk_0203900c::func_020395bc() {
    BOOL r = unk_a0 != 0 ? TRUE : FALSE;
    if (r) {
        unk_ac = 0;
    }
    return r;
}

BOOL Unk_0203900c::func_020395dc() {
    BOOL r = unk_a0 == 0 ? TRUE : FALSE;
    if (r) {
        unk_ac = 2;
    }
    return r;
}

void Unk_0203900c::func_020395fc(s32 a, s32 b, s32 c) {
    unk_0c = a;
    unk_14 = b;
    unk_18 = c;
    func_02039230();
}

void Unk_0203900c::func_0203960c(StrBuf *a, Unk_020e2a78 *b, s32 c) {
    func_020510d8((StrBuf *)unk_88, a);
    ((Unk_020e2a78 *)unk_54)->func_020a7bd8(b);
    unk_10 = c + 5;
}

void Unk_0203900c::func_02039630() {
    s32 a, t, t2;
    if (unk_0c == 0) {
        a = func_0206edbc();
        t = func_01ffcb0c(0x4c000, a);
        t2 = func_01ffcb0c(0xc0000, 0x1000 - a);
        unk_50 = (t + t2) >> 12;
    } else {
        a = func_0206ede0();
        t = func_01ffcb0c(-0x5c000, a);
        t2 = func_01ffcb0c(0x30000, 0x1000 - a);
        unk_50 = (t + t2) >> 12;
    }
}
