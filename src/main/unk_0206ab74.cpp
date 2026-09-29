#include "types.h"
#include "text/Unk_02050288.h"

class Unk_020ddccc;

extern "C" {
extern u8 data_0213a740[];
u8 func_020682a8(u32 x);
u32 func_020501e8(u32 key);
void func_02067708(void *p);
void func_0206773c(void *p, u32 c);
void func_02067a84(void *self, u8 *p, s32 z);
void func_02067a60(void *self);
u8 *func_020a72a0(s32 i);
u8 *func_020b3078(u8 *p);
void *func_0209750c(void);
s32 func_0209888c(void *p);
s32 func_0209411c(s32 p);
}

class Unk_020a72b0 {
public:
    Unk_020a72b0();
    void func_020a72f0(char **a, char **b, char **c);
    void func_020a7338(char **a, char **b);
    void func_020a777c(u8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a832c();
    void func_020a8348(u8 *p);
    void func_020a8368(u8 *p);
    void func_020a84bc();

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_020e2b4c : public Unk_020e2b08 {
public:
    Unk_020e2b4c() {}
    virtual ~Unk_020e2b4c() {}
    virtual BOOL vfunc_18();
    u8 *func_020a82ec(BOOL arg);
};

// Entries of the owner (0x34 bytes)
class Unk_0206ad58_Ent {
public:
    virtual ~Unk_0206ad58_Ent();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_04[0x30];
};

// Owner is Unk_02067c70
struct Unk_02067c70 {
    /* 0x0000 */ u8 pad_0000[0x13c0];
    /* 0x13c0 */ Unk_0206ad58_Ent unk_13c0[11];
    /* 0x15fc */ Unk_0206ad58_Ent unk_15fc[4];
    /* 0x16cc */ u8 *unk_16cc[4];
    /* 0x16dc */ u8 pad_16dc[0x1d];
    /* 0x16f9 */ u8 unk_16f9;
    /* 0x16fa */ u8 unk_16fa;
    /* 0x16fb */ u8 pad_16fb[9];
    /* 0x1704 */ s32 unk_1704;
};

// Text buffer (0x490 bytes), constructed elsewhere
class Unk_0206b754 {
public:
    void func_0206b434();
    void func_0206b454();
    void func_0206b458();
    void func_0206b5c0(u8 *p);
    void func_0206b628(u32 c);
    void func_0206b6d0(s32 v);
    void func_0206b72c();

    /* 0x000 */ u8 pad_000[0x400];
    /* 0x400 */ s32 unk_400;
    /* 0x404 */ s32 unk_404[3];
    /* 0x410 */ u32 unk_410;
    /* 0x414 */ s32 unk_414[3];
    /* 0x420 */ Unk_02050288 *unk_420[3];
    /* 0x42c */ s32 unk_42c[3];
    /* 0x438 */ u8 unk_438[3];
};

// Sub-object (0x3c bytes)
class Unk_020ddc84 : public Unk_020e2b4c {
public:
    Unk_020ddc84(Unk_02067c70 *owner, Unk_0206b754 *buf);
    virtual ~Unk_020ddc84();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    void func_0206b268();
    BOOL func_0206b2f4();
    void func_0206b304();
    void func_0206b338(u8 *p, u32 v, u8 flag);
    void func_0206b374(u8 *p, s32 n, u8 flag);

    /* 0x24 */ Unk_02067c70 *unk_24;
    /* 0x28 */ Unk_0206b754 *unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
};

struct Unk_0206b1dc_State {
    /* 0x4c */ u8 unk_4c, unk_4d, unk_4e, unk_4f;
    /* 0x50 */ s32 unk_50, unk_54, unk_58, unk_5c;
    Unk_0206b1dc_State() {
        unk_4c = 0;
        unk_4d = 0;
        unk_4e = 0;
        unk_4f = 0;
        unk_50 = 0;
        unk_54 = 0;
        unk_58 = 0;
        unk_5c = 0;
    }
};

class Unk_020ddccc : public Unk_020e2b4c {
public:
    Unk_020ddccc(Unk_02067c70 *owner, Unk_0206b754 *buf);
    virtual ~Unk_020ddccc();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    void func_02069fa4();
    void func_0206a024();
    void func_0206a198();
    void func_0206a1f8();
    void func_0206a2d8();
    void func_0206a358();
    void func_0206a380();
    void func_0206a498();
    void func_0206a55c();
    void func_0206a7a8();
    void func_0206a844();
    void func_0206a93c();
    void func_0206aa84();
    void func_0206ab74();
    void func_0206ac98(u8 *p);
    void func_0206acb0(u8 *p);
    void func_0206ad0c();
    void func_0206ad58(s32 idx);
    void func_0206adb8(s32 idx);
    void func_0206adf0(Unk_0206ad58_Ent *ent, BOOL flag);
    BOOL func_0206ae70();
    void func_0206af60();
    BOOL func_0206af78();
    void func_0206afa0();
    void func_0206b110();
    void func_0206b120();
    void func_0206b128();
    void func_0206b13c(s32 v);
    void func_0206b140();

    /* 0x24 */ Unk_02067c70 *unk_24;
    /* 0x28 */ Unk_0206b754 *unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020a72b0 unk_38;
    /* 0x4c */ Unk_0206b1dc_State unk_4c;
    /* 0x60 */ Unk_020ddc84 unk_60;
    /* 0x9c */ Unk_020ddc84 unk_9c;
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    /* 0xdc */ u8 *unk_dc;
    /* 0xe0 */ s32 unk_e0;
};

// ---------------------------------------------------------------------------
void Unk_020ddccc::func_0206ab74() {
    typedef void (Unk_020ddccc::*Fn)();
    static Fn tbl[12] = {
        &Unk_020ddccc::func_0206aa84, &Unk_020ddccc::func_0206a93c, &Unk_020ddccc::func_0206a844,
        &Unk_020ddccc::func_0206a7a8, &Unk_020ddccc::func_0206a55c, &Unk_020ddccc::func_0206a498,
        &Unk_020ddccc::func_0206a380, &Unk_020ddccc::func_0206a358, &Unk_020ddccc::func_0206a2d8,
        &Unk_020ddccc::func_0206a1f8, &Unk_020ddccc::func_0206a198, &Unk_020ddccc::func_0206a024,
    };
    s32 id = unk_38.unk_00;
    Fn fn = *(Fn *)data_0213a740;
    if (id == 0xff) {
        fn = &Unk_020ddccc::func_02069fa4;
    } else if (id < 12) {
        fn = tbl[id];
    }
    (this->*fn)();
}

void Unk_020ddccc::func_0206ac98(u8 *p) {
    func_02067a84(unk_24, p, 0);
    func_02067a60(unk_24);
}

void Unk_020ddccc::func_0206acb0(u8 *p) {
    char *a, *b, *c;
    unk_38.func_020a72f0(&a, &b, &c);
    s32 k = ((s32 *)p)[3];
    if (k == 0) {
        if (a != 0) func_020a8348((u8 *)a);
    } else if (k == 1) {
        if (b != 0) func_020a8348((u8 *)b);
    } else if (k == 2) {
        if (c != 0) {
            unk_dc = unk_04;
            func_020a8348((u8 *)c);
        }
    }
}

void Unk_020ddccc::func_0206ad0c() {
    char *a, *b;
    unk_38.func_020a7338(&a, &b);
    if (func_0209411c(func_0209888c(func_0209750c())) == 0) {
        if (a != 0) func_020a8348((u8 *)a);
    } else {
        if (b != 0) {
            unk_dc = unk_04;
            func_020a8348((u8 *)b);
        }
    }
}

void Unk_020ddccc::func_0206ad58(s32 idx) {
    Unk_0206ad58_Ent *ent = &unk_24->unk_15fc[idx];
    u8 *s = unk_24->unk_16cc[idx];
    func_020a8348(func_020a72a0(unk_4c.unk_5c));
    func_020a8348(ent->vfunc_0c());
    func_020a8348(func_020a72a0((s32)s));
    func_0206adf0(ent, 0);
}

void Unk_020ddccc::func_0206adb8(s32 idx) {
    Unk_0206ad58_Ent *ent = &unk_24->unk_13c0[idx];
    func_020a8348(ent->vfunc_0c());
    func_0206adf0(ent, 1);
}

void Unk_020ddccc::func_0206adf0(Unk_0206ad58_Ent *ent, BOOL flag) {
    u8 *q = ent->unk_04 + 4;
    u8 *r = 0;
    if (unk_e0 == 0) {
        r = func_020b3078(q + 8);
    } else if (unk_e0 == 1) {
        r = func_020b3078(q + 9);
    }
    if (r != 0) {
        if (flag) {
            func_020a8348(func_020a72a0(unk_4c.unk_5c));
            func_020a8348(((Unk_0206ad58_Ent *)r)->vfunc_0c());
            func_020a8348(func_020a72a0(0));
        } else {
            func_020a8348(((Unk_0206ad58_Ent *)r)->vfunc_0c());
        }
    }
    unk_e0 = 0;
}

BOOL Unk_020ddccc::func_0206ae70() {
    BOOL r = TRUE;
    BOOL f = r;
    if (unk_34 != 1 && unk_4c.unk_4e == 0) f = FALSE;
    if (unk_4c.unk_4d != 0) {
        r = FALSE;
        unk_4c.unk_4d = 0;
        goto end;
    }
    if (f) {
        unk_4c.unk_50 = 0;
        unk_4c.unk_54 = 0;
        unk_4c.unk_58 = 0;
        while (!func_0206af78()) {
            func_0206af60();
        }
        goto end;
    }
    BOOL t;
    if (unk_34 != 2 && unk_4c.unk_4f == 0 && unk_4c.unk_4c != 0) {
        t = TRUE;
    } else {
        t = FALSE;
    }
    if (t) unk_4c.unk_58 = 0;
    s32 v = unk_4c.unk_58;
    if (v > 0) {
        unk_4c.unk_58 = v - 0x1800;
        r = FALSE;
        goto end;
    }
    s32 n;
    if (unk_4c.unk_54 == 0) n = 1;
    else n = 2;
    if (t) n = 3;
    if (unk_4c.unk_50 >= n) {
        unk_4c.unk_50 = 0;
        unk_4c.unk_54 = unk_4c.unk_54 + 1;
        if (unk_4c.unk_54 >= 2) unk_4c.unk_54 = 0;
        r = FALSE;
        goto end;
    }
    while (!func_0206af78()) {
        func_0206af60();
        unk_4c.unk_50 = unk_4c.unk_50 + 1;
        if (unk_4c.unk_50 >= n) {
            unk_4c.unk_50 = 0;
            unk_4c.unk_54 = unk_4c.unk_54 + 1;
            if (unk_4c.unk_54 >= 2) unk_4c.unk_54 = 0;
            r = FALSE;
            goto end;
        }
    }
end:
    return r;
}

void Unk_020ddccc::func_0206af60() {
    unk_60.func_0206b304();
    unk_9c.func_0206b304();
}

BOOL Unk_020ddccc::func_0206af78() {
    if (unk_60.func_0206b2f4() && unk_9c.func_0206b2f4()) return TRUE;
    return FALSE;
}

void Unk_020ddccc::func_0206afa0() {}

BOOL Unk_020ddccc::vfunc_18() {
    BOOL r = TRUE;
    s32 s = unk_30;
    if (s == 2 || s == 5) {
        r = FALSE;
        unk_4c.unk_50 = r;
        unk_4c.unk_54 = r;
        unk_4c.unk_58 = r;
    } else if (s == 4) {
        r = FALSE;
        unk_4c.unk_50 = r;
        unk_4c.unk_54 = r;
    } else if (s == 1) {
        if (!func_0206ae70()) r = FALSE;
    }
    return r;
}

void Unk_020ddccc::vfunc_14(u8 *p) {
    unk_38.func_020a777c(p);
    func_0206ab74();
}

void Unk_020ddccc::vfunc_10(u32 c) {
    if (unk_d9 != 0) {
        c = func_020501e8(c);
        unk_d9 = 0;
    }
    BOOL nl = (c == 10) ? TRUE : FALSE;
    BOOL sp = (c == 0x20) ? TRUE : FALSE;
    unk_28->func_0206b628(c);
    if (nl) {
        unk_28->func_0206b5c0(unk_04);
        unk_2c++;
        if (unk_2c >= 3) unk_30 = 2;
    }
    func_0206773c(unk_24, c);
    unk_24->unk_16fa = 0;
    if (!sp && !nl) unk_4c.unk_50++;
    if (unk_04 == unk_dc) {
        unk_dc = 0;
        func_020a832c();
    }
}

void Unk_020ddccc::vfunc_0c() {
    unk_30 = 3;
    unk_28->func_0206b454();
}

void Unk_020ddccc::vfunc_08() {
    unk_30 = 1;
    unk_2c = 0;
    unk_4c.unk_4c = 0;
    unk_4c.unk_4d = 0;
    unk_4c.unk_4e = 0;
    unk_4c.unk_4f = 0;
    unk_4c.unk_50 = 0;
    unk_4c.unk_54 = 0;
    unk_4c.unk_58 = 0;
    unk_28->func_0206b72c();
    unk_28->func_0206b5c0(unk_04);
    func_02067708(unk_24);
    unk_d9 = 0;
    unk_dc = 0;
    unk_e0 = 0;
    unk_24->unk_16f9 = 0;
    unk_24->unk_16fa = 0;
}

void Unk_020ddccc::func_0206b110() {
    unk_4c.unk_5c = 0;
    unk_24->unk_1704 = 0;
}

void Unk_020ddccc::func_0206b120() {
    unk_4c.unk_4c = 0;
}

void Unk_020ddccc::func_0206b128() {
    if (unk_4c.unk_4f == 0) unk_4c.unk_4c = 1;
}

void Unk_020ddccc::func_0206b13c(s32 v) {
    unk_34 = v;
}

void Unk_020ddccc::func_0206b140() {
    unk_2c = 0;
    unk_28->func_0206b454();
    unk_28->func_0206b6d0(unk_4c.unk_5c);
    unk_28->func_0206b5c0(unk_04);
    unk_d9 = 0;
    unk_e0 = 0;
}

Unk_020ddccc::Unk_020ddccc(Unk_02067c70 *owner, Unk_0206b754 *buf)
    : unk_24(owner), unk_28(buf), unk_2c(0), unk_30(0), unk_34(0), unk_60(owner, buf), unk_9c(owner, buf) {
    unk_d8 = 0;
    unk_d9 = 0;
    unk_dc = 0;
    unk_e0 = 0;
}

// ---------------------------------------------------------------------------
void Unk_020ddc84::func_0206b268() {
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_39 = 0;
    func_020a84bc();
}

BOOL Unk_020ddc84::vfunc_18() {
    return unk_38;
}

void Unk_020ddc84::vfunc_14(u8 *) {}

void Unk_020ddc84::vfunc_10(u32 c) {
    if (unk_39 != 0) unk_28->func_0206b628(c);
    unk_38 = 0;
    if (unk_2c == 1) {
        unk_34 = unk_34 - 1;
        if (unk_34 <= 0) func_0206b268();
    } else if (unk_2c == 2) {
        func_0206773c(unk_24, c);
    }
}

void Unk_020ddc84::vfunc_0c() {
    if (unk_2c == 2) func_0206b268();
}

void Unk_020ddc84::vfunc_08() {}

BOOL Unk_020ddc84::func_0206b2f4() {
    if (unk_2c == 0) return TRUE;
    return FALSE;
}

void Unk_020ddc84::func_0206b304() {
    s32 s = unk_2c;
    if (s == 1) {
        unk_38 = 1;
        func_020a82ec(FALSE);
    } else if (s == 2) {
        unk_38 = 1;
        func_020a82ec((BOOL)unk_30);
    }
}

void Unk_020ddc84::func_0206b338(u8 *p, u32 v, u8 flag) {
    if (v > (u32)p) {
        func_020a84bc();
        func_020a8368(p);
        unk_30 = v;
        unk_34 = 0;
        unk_39 = flag;
        unk_38 = 0;
        unk_2c = 2;
    }
}

void Unk_020ddc84::func_0206b374(u8 *p, s32 n, u8 flag) {
    if (n > 0) {
        func_020a84bc();
        func_020a8368(p);
        unk_30 = 0;
        unk_34 = n;
        unk_39 = flag;
        unk_38 = 0;
        unk_2c = 1;
    }
}

Unk_020ddc84::Unk_020ddc84(Unk_02067c70 *owner, Unk_0206b754 *buf)
    : unk_24(owner), unk_28(buf), unk_2c(0), unk_30(0), unk_34(0) {
    unk_38 = 0;
    unk_39 = 0;
}

// ---------------------------------------------------------------------------
void Unk_0206b754::func_0206b434() {
    s32 i = unk_410;
    if (i != 0 && (u32)i <= 3) *((u8 *)this + i + 0x437) = 1;
}

void Unk_0206b754::func_0206b458() {
    u32 i;
    for (i = 0; i < unk_410; i++) {
        Unk_02050288 *e = unk_420[i];
        if (e != 0 && unk_438[i] != 0) {
            e->unk_10 = unk_404[i];
            e->unk_14 = 0;
            e->unk_30 = unk_42c[i];
            e->unk_38 = func_020682a8(unk_414[i]);
            e->func_02050c90();
        }
    }
    if (unk_410 < 3) {
        Unk_02050288 *e = unk_420[unk_410];
        if (e != 0) e->unk_14 = (u32)this + unk_400;
    }
}

void Unk_0206b754::func_0206b454() {}

Unk_020ddccc::~Unk_020ddccc() {}
Unk_020ddc84::~Unk_020ddc84() {}
