#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

// 3 small bitfields returned by func_020874e8
struct Unk_02020cc4_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

struct Unk_02020cc4_Time {
    u8 pad_00[3];
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 pad_06[2];
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void *(Unk_0201d2d0::*Unk_02021048_Fn)(u32 *, s32);
typedef u32 (Unk_0201d2d0::*Unk_02020d90_Fn)(u8 *, s32 *, u8 *, u32 *);

class Unk_020d8938 {
public:
    s32 func_0201c784();
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
};

class Unk_020e2f5c : public Unk_020e2a60 {
public:
    Unk_020e2f5c();
    virtual ~Unk_020e2f5c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_04[0x1c];
};

class Unk_020e2f74 : public Unk_020e2a78 {
public:
    Unk_020e2f74();
    virtual ~Unk_020e2f74();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_04[0x1c];
};

static inline BOOL Unk_02020b38_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

struct Unk_02021048_Sys {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_02020d90_Res {
    u32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202ce44(s32, s32);
s32 func_02063b8c(u32);
u32 func_0209750c();
s32 func_020981ec(u32);
void func_020981c4(u32);
s32 func_02072e44(Unk_02021048_Sys *);
s32 func_02072e88(void *, u32);
s32 func_0207f4a4(void *, void *, void *, u32);
void func_02115fb4(void *, u32, u32);
void func_02094030(void *);
void func_02094018(void *);
u8 func_02080b40(void *);
u32 func_02080e18(void *);
void func_0201577c(void *, u32, void *, void *, void *);
void func_0200303c(void *, s32, u32, u32);
void *func_020b05bc();
s32 func_020b0218();
s32 func_020b0980(void *, s32);
s32 func_02094218(void *);
void *func_0209888c(void *);
s32 func_02128930(void *, void *, s32);
s32 func_020941e8(void *, void *);
s32 func_02094058(void *);
s32 func_02094048(void *);
u32 func_0209409c(void *);
void func_020157e8(void *, u32, u32);
void func_02015818(void *, u32, u32);
BOOL func_020a78a4(void *, const void *, s32);
s32 func_02067a3c(void *, u32, void *);
void func_0209d498(void *);
s32 func_020874e8(u32, u32, u32, void *);
void func_02133ef8(void *, u32);
void func_02116048(void *, void *, u32);
s32 func_0203f2e0(u32, void *, u32);
s32 func_0207bcfc(u32, u32, u32);
s32 func_0207e334(void *);
void *func_0207bf60(void *, s32);
void *func_0207fae4(void *);
s32 func_020030b4(void *);
void func_020157b8(void *, u32, u32);
void func_02015848(void *, u32, u32);
void func_02015878(void *, u32, u32);
}

extern u8 data_020e416c;
extern Unk_0201d2d0_Data data_020c7738;
extern Unk_0201d2d0_Data data_020c7750;
extern Unk_0201d2d0_Data data_020c7770;
extern Unk_0201d2d0_Data data_020c7620;
extern u32 data_020c77d8;
extern Unk_02021048_Sys *data_020cbb18;
extern Unk_0201d2d0_Data data_020c7858;
extern u8 data_020d8aa8[];
extern u8 data_020c750c[];
extern u32 data_020c7bb0[];
extern u32 data_020c7be0[];
extern u32 data_020c7618;
extern u8 data_021dfd8c[];
extern Unk_0201d2d0_Fn data_020d7bd0;
extern Unk_0201d2d0_Fn data_020d7fd8;
extern Unk_0201d2d0_Fn data_020d7c50;
extern Unk_0201d2d0_Fn data_020d7c48;

class Unk_0201d2d0 {
public:
    s32 func_02020a00(s32 a, s32 b);
    BOOL func_02020a1c();
    BOOL func_02020a90();
    BOOL func_02020b38();
    u32 func_02020cc4();
    BOOL func_02020d90();
    BOOL func_02021048();
    void *func_02021340(u32 *a, s32 n);
    void *func_020213b0(u32 *a, s32 n);
    void *func_020213f0(u32 *a, s32 n);
    void *func_02021448(u32 *a, s32 n);
    void *func_020214ec(u32 *a, s32 n);
    void *func_02021564(u32 *a, s32 n);
    void *func_02021610(u32 *a, s32 n);
    void *func_02021684(u32 *a, s32 n);
    u32 func_02020ea4(u8 *a, s32 *b, u8 *c, u32 *d);
    u32 func_02020f44(u8 *a, s32 *b, u8 *c, u32 *d);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xfc - 0x40];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x134 - 0x11f];
    void *unk_134;
    u8 pad_138[0x168 - 0x138];
    Unk_0201d2d0_Fn unk_168;
    Unk_0201d2d0_Fn unk_170;
    Unk_0201d2d0_Fn unk_178;
};

s32 Unk_0201d2d0::func_02020a00(s32 a, s32 b) {
    s32 r = func_0202ce44(a, b);
    if (r == -1) {
        r = 4;
    }
    return r;
}

BOOL Unk_0201d2d0::func_02020a1c() {
    s32 r = func_02063b8c(2);
    if (((Unk_020d8938 *)unk_fc)->func_0201c784() == 10 && r == 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7738.unk_00, data_020c7738.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02020a90() {
    s32 r = func_020981ec(func_0209750c());
    if (func_02072e44(data_020cbb18) != 0) {
        r = 10;
    }
    if (r < 10) {
        func_0200303c(&unk_100, 30, data_020c77d8, func_02003098(func_020805c4(unk_fc->unk_82c)));
        unk_11e = r;
        func_020981c4(func_0209750c());
        unk_168 = data_020d7bd0;
        unk_170 = data_020d7fd8;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02020b38() {
    void *base;
    s32 r4;
    void *r7;
    u8 *p14;
    u8 *p18;
    s32 r5;
    BOOL result;
    u8 *rec;
    void *q;
    if (!Unk_02020b38_IsZero(data_020e416c)) {
        return FALSE;
    }
    base = func_020b05bc();
    r4 = func_020b0218();
    r7 = (void *)func_0209750c();
    p14 = 0;
    p18 = 0;
    r5 = -1;
    result = FALSE;
    if (r4 != -1 && func_020b0980(base, r4) != 0 && r7 != 0) {
        rec = (u8 *)base + r4 * 0x46;
        if (func_02094218(rec) != 0) {
            q = func_0209888c(r7);
            if (*(u16 *)rec == *(u16 *)q && func_02128930(rec + 2, (u8 *)q + 2, 8) == 0 && func_020941e8(rec, q) != 0) {
                r5 = 0;
            } else if (func_02094058(rec) == 0) {
                if (func_02094048(rec) != -1) {
                    r5 = 1;
                }
            } else if (func_020941e8(rec, func_0209888c(r7)) == 0) {
                r5 = 2;
            }
            if (r5 != -1) {
                p14 = rec;
                p18 = rec + 0x16;
            }
        }
    }
    if (r5 != -1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7750.unk_00, data_020c7750.unk_04, r5, 0);
        result = TRUE;
        if (p18 != 0) {
            Unk_020e2f5c s;
            Unk_020e2f74 t;
            func_020a78a4(&s, p18, 0x10);
            t.func_020a7aa0(&s, 0, 0);
            func_02067a3c(unk_3c, 0, &t);
        }
        if (p14 != 0) {
            func_020157e8(this, (u32)p14, 1);
            func_02015818(this, func_0209409c(p14), 2);
        }
    }
    return result;
}

u32 Unk_0201d2d0::func_02020cc4() {
    u32 r5 = data_020c7770.unk_04;
    u32 r6 = 0;
    u32 t[2];
    Unk_02020cc4_Bits bits;
    s32 r4;
    u32 flag;
    t[0] = 0;
    t[1] = 0;
    r4 = -1;
    flag = 0;
    func_0209d498(t);
    if (func_020874e8(((u8 *)t)[5], ((u8 *)t)[4], ((u8 *)t)[3], &bits) != 0) {
        if (bits.a == 2 && bits.b == 3) {
            r4 = 1;
        } else {
            r4 = 0;
        }
    }
    switch (r4) {
    case 0: {
        u32 i = bits.a;
        if (i >= 4) {
            i = 0;
        }
        r6 = data_020c750c[i];
        flag = 1;
        break;
    }
    case 1:
        r5 = 1;
        r6 = bits.c + 12;
        flag = 1;
        break;
    }
    if (flag == 1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7770.unk_00, r5, r6, 0);
    }
    return flag;
}

u32 Unk_0201d2d0::func_02020ea4(u8 *a, s32 *b, u8 *c, u32 *d) {
    u32 result = 0;
    s32 idx = -1;
    s32 i;
    u32 buf[2];
    for (i = 0; i < 12; i++) {
        func_02116048(d, buf, 8);
        if (func_0203f2e0(data_020c7bb0[i], buf, result) != 0 ? TRUE : result) {
            idx = i;
            break;
        }
    }
    if ((u32)idx < 12) {
        if (idx % 3 == 2) {
            *b = (idx / 3 + 1) * 5 - 1;
            *c = 1;
        } else {
            *b = idx * 2 - idx / 3;
            *c = 2;
        }
        *a = 1;
        result = data_020c7618;
    }
    return result;
}

u32 Unk_0201d2d0::func_02020f44(u8 *a, s32 *b, u8 *c, u32 *d) {
    u32 result = 0;
    u32 mask = 0;
    s32 count = 0;
    s32 i;
    u32 buf[2];
    s32 v;
    s32 r;
    for (i = 0; i < 14; i++) {
        func_02116048(d, buf, 8);
        if (func_0203f2e0(data_020c7be0[i], buf, result) != 0 ? TRUE : result) {
            mask = (u16)(mask | (1 << i));
            count++;
        }
    }
    if (count > 0) {
        r = func_0207bcfc(mask, count, 14);
        v = -1;
        if (r >= 5) {
            if (r <= 12) {
                s32 k = r - 5;
                if (k != func_0207e334(unk_fc->unk_82c)) {
                    void *p = func_0207bf60(data_021dfd8c, k);
                    if (p != 0 && func_020030b4(func_020805c4(p)) != 0) {
                        u8 *e = (u8 *)func_0207fae4(p);
                        if (e != 0) {
                            v = 5;
                            func_020157b8(this, (u32)func_020805c4(p), 0);
                            func_02015878(this, e[0], 1);
                            func_02015848(this, e[1], 2);
                        }
                    }
                }
            } else {
                v = 6;
            }
        } else {
            v = r;
        }
        if (v != -1) {
            *b = v;
            *a = data_020c7620.unk_04;
            *c = 0;
            result = data_020c7620.unk_00;
        }
    }
    return result;
}

BOOL Unk_0201d2d0::func_02020d90() {
    static Unk_02020d90_Fn tbl[2] = {&Unk_0201d2d0::func_02020f44, &Unk_0201d2d0::func_02020ea4};
    Unk_02020d90_Res res[2];
    u32 t[2];
    s32 i;
    Unk_02020d90_Res *p;
    func_02133ef8(res, 0x18);
    p = 0;
    t[0] = 0;
    t[1] = 0;
    func_0209d498(t);
    for (i = 0; i < 2; i++) {
        res[i].unk_00 = (this->*tbl[i])(&res[i].unk_08, &res[i].unk_04, &res[i].unk_09, t);
    }
    if (res[0].unk_00 != 0) {
        if (res[1].unk_00 != 0 && func_02063b8c(2) == 0) {
            p = &res[1];
        } else {
            p = &res[0];
        }
    } else if (res[1].unk_00 != 0) {
        p = &res[1];
    }
    if (p != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), p->unk_00, p->unk_08, p->unk_04, p->unk_09);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02021048() {
    void *r14;
    void *p18;
    void *r4;
    s32 idx;
    s32 n2;
    s32 n1;
    s32 i;
    s32 j;
    s32 k;
    s32 rnd;
    u8 buf[2];
    u8 flags[5];
    u32 arr[8];
    u32 obj[7];
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0) {
        return FALSE;
    }
    static Unk_02021048_Fn tbl[10] = {
        &Unk_0201d2d0::func_02021684, &Unk_0201d2d0::func_02021610, &Unk_0201d2d0::func_02021564,
        &Unk_0201d2d0::func_020214ec, &Unk_0201d2d0::func_020213f0, &Unk_0201d2d0::func_020213b0,
        &Unk_0201d2d0::func_020214ec, &Unk_0201d2d0::func_02021448, &Unk_0201d2d0::func_02021448,
        &Unk_0201d2d0::func_02021340,
    };
    if (func_0209750c() != 0) {
        r14 = func_0209888c((void *)func_0209750c());
    } else {
        r14 = 0;
    }
    p18 = unk_fc->unk_82c;
    r4 = 0;
    idx = 0;
    if (r14 != 0) {
        for (i = 0; i < 8; i++) {
            arr[i] = 0;
        }
        n1 = func_0207f4a4(p18, arr, r14, 1);
        if (n1 > 0) {
            func_02115fb4(flags, 0, 5);
            for (k = 5; k > 0; k--) {
                rnd = func_02063b8c(k);
                for (j = 0; j < 5; j++) {
                    if (flags[j] == 0) {
                        if (rnd == 0) {
                            r4 = (this->*tbl[j])(arr, n1);
                            if (r4 != 0) {
                                idx = j + 1;
                            }
                            flags[j] = 1;
                            break;
                        }
                        rnd--;
                    }
                }
                if (r4 != 0) {
                    break;
                }
            }
        }
        if (r4 == 0) {
            for (i = 0; i < 8; i++) {
                arr[i] = 0;
            }
            n2 = func_0207f4a4(p18, arr, r14, 0);
            if (n2 > 0) {
                func_02115fb4(flags, 0, 5);
                for (k = 5; k > 0; k--) {
                    rnd = func_02063b8c(k);
                    for (j = 0; j < 5; j++) {
                        if (flags[j] == 0) {
                            if (rnd == 0) {
                                r4 = (this->*tbl[j + 5])(arr, n2);
                                if (r4 != 0) {
                                    idx = j + 6;
                                }
                                flags[j] = 1;
                                break;
                            }
                            rnd--;
                        }
                    }
                    if (r4 != 0) {
                        break;
                    }
                }
            }
        }
    }
    if (r4 != 0) {
        func_02094030(obj);
        buf[0] = func_02080b40(r4);
        buf[1] = 0;
        func_0201577c(this, 2, buf, data_020d8aa8, &buf[1]);
        func_020157e8(this, func_02080e18(r4), 10);
        func_02094018(obj);
    }
    unk_134 = r4;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7858.unk_00, data_020c7858.unk_04, idx, 0);
    unk_170 = data_020d7c50;
    unk_178 = data_020d7c48;
    return TRUE;
}
