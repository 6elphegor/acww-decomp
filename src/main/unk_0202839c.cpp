#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Menu {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_0201d2d0_Key {
    u32 w0, w1;
};

struct Unk_020289f8_S {
    u8 pad_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();

extern "C" {
void *func_0207e310(void *);
void *func_02078578(void *);
void func_0209d498(void *);
s32 func_02072e88(void *, s32);
s32 func_0209ad68(void *);
s32 func_0207dff4(void *, void *);
s32 func_0207e1f0(void *);
s32 func_0201c784(void *);
s32 func_0207fa50(void *, s32, void *);
s32 func_02079f54(s32, void *);
void func_0201c95c(void *, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_0202d120(void *, void *);
void func_020679c0(void *, s32);
void *func_0207e268(void *);
void *func_0209a60c(void *);
void *func_0209a610(void *);
s32 func_0209ac64(void *);
void func_0202d864(void *, void *);
void func_02025ed4(void *, void *, s32);
void func_02025d80(void *, void *, s32);
void *func_0209ac10();
void *func_02099db4(void *, void *);
void *func_0209a4f0(void *);
s32 func_0209b354(void *);
s32 func_0209a49c(s32, s32);
s32 func_02079ab0(void *, void *);
void func_02133ef8(void *, u32);
void *func_020805c4(void *);
s32 func_0207bc44(void *, void *, s32);
void *func_0209750c();
s32 func_02098044(void *, s32);
u32 func_0207a914(void *, void *, void *);
s32 func_0209ad34();
s32 func_0209acb8(s32);
s32 func_02099ed4(void *, void *);
s32 func_0209abc4(void *);
void func_02015848(void *, u32, u32);
void func_02015958(void *, u32, s32, s32, s32, s32);
void func_0201577c(void *, u32, void *, void *, void *);
void *func_0209ab94(void *);
s32 func_0209a940(void *);
void *func_0209a92c(void *);
s32 func_0209a938(void *);
s32 func_02094218(void *);
void *func_0202d114(void *);
void *func_0207cdb0(void *);
void *func_0207f91c(void *, void *);
s32 func_02081364(void *);
s32 func_0202c654(void *, s32, s32, s32);
s32 func_0202c148(void *, s32, s32, s32, s32);
void func_02029948();
void func_020298f8();
}

extern void *data_020cbb18;
extern u8 data_020e416c;
extern u8 data_021dfd8c[];
extern u8 data_021bf8bc[], data_020c74fc[], data_021be668[], data_020c7500[];
extern u8 data_021bf55c[], data_021bf2bc[], data_021be730[], data_021bf94c[];
extern u8 data_020d8ae0[];
extern Unk_0201d2d0_Fn data_020d79f8, data_020d78f8, data_020d78f0, data_020d7938, data_020d7928, data_020d7980, data_020d7900;

static inline BOOL Unk_0202849c_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02028a48_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0202849c_F(BOOL r4) {
    return data_020e416c == 0 ? TRUE : r4;
}

class Unk_0201d2d0 {
public:
    BOOL func_0202839c(void *a, void *b);
    BOOL func_0202849c(void *a);
    BOOL func_020286fc(void *a, void *b);
    s32 func_02028810();
    s32 func_02028848(void *a, void *b);
    BOOL func_020288d4(void *a, void *b, u32 c);
    void func_020289f8(Unk_020289f8_S *p);
    BOOL func_02028a48(void *a, void *b, u32 c);
    BOOL func_02029968(void *a, void *b, u32 c);
    BOOL func_02028e94();
    BOOL func_02029234();
    BOOL func_02029440();
    BOOL func_02029694(void *fn, s32 b, s32 c);
    void func_0202d1c0(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xfc - 0x40];
    Unk_0201d2d0_Parent *unk_fc;
    u8 pad_100[0x120 - 0x100];
    u16 unk_120;
    u8 pad_122[0x15c - 0x122];
    void *unk_15c;
    void *unk_160;
};

BOOL Unk_0201d2d0::func_0202839c(void *a, void *b) {
    void *r6;
    Unk_0201d2d0_Key k;
    s32 t = (s32)func_02078578(func_0207e310(a));
    r6 = (u8 *)b + 0x88;
    k.w0 = 0;
    k.w1 = 0;
    func_0209d498(&k);
    if (func_02072e88(data_020cbb18, *(s32 *)((u8 *)data_020cbb18 + 0x64)) == 0) {
        r6 = (u8 *)r6 + 0xc;
        if (func_0209ad68(r6) == 0 && func_0207dff4(a, b) == 0 && func_0207e1f0(a) == 3 && func_0201c784(unk_fc) == 0xb && func_0207fa50(a, 1, &k) == -1 && func_02079f54(1, &k) == 0xb) {
            Unk_0201d2d0_Menu s;
            func_0201c95c(this, &s);
            func_0201c91c(this, &s, 0, data_020c74fc, data_021bf8bc);
            func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
            func_0202d120(this, (void *)t);
            s.unk_20 = 2;
            s.unk_21 = s.unk_20 - 1;
            func_0201c870(this, &s);
            func_0202d1c0(data_020d79f8);
            func_020679c0(unk_3c, 1);
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_0201d2d0::func_02028810() {
    u32 v;
    func_02133ef8(&v, 4);
    v = (u32)func_020805c4(unk_fc->unk_82c);
    return func_0207bc44(data_021dfd8c, &v, 1);
}

s32 Unk_0201d2d0::func_02028848(void *a, void *b) {
    s32 res;
    u32 r4;
    r4 = (u32)func_0209750c();
    res = 0;
    if (func_02098044((void *)r4, 1) != 0) {
        goto end;
    }
    r4 = func_0207a914(data_021dfd8c, a, (void *)r4);
    if (r4 >= 0x16) {
        goto end;
    }
    switch (func_0209ad34()) {
    case 0:
        res = func_02028a48(a, b, r4);
        break;
    case 1:
        switch (func_0209acb8(r4)) {
        case 0:
            break;
        case 1:
            res = func_02029968(a, b, r4);
            break;
        case 3:
            res = func_020288d4(a, b, r4);
            break;
        }
        break;
    }
end:
    return res;
}

BOOL Unk_0201d2d0::func_020288d4(void *a, void *b, u32 c) {
    Unk_0201d2d0_Menu s;
    u8 *r7 = (u8 *)b + 0x88;
    void *r6 = r7 + 0xc;
    BOOL r4 = FALSE;
    if (func_0201c784(unk_fc) == 0xb && func_0209ad68(r6) != 0 && func_0209ac64(r6) == 0x15 && func_02099ed4(r7, func_020805c4(a)) != 0 && func_0209abc4(r6) == 0) {
        func_0201c95c(this, &s);
        func_0201c938(this, &s, r4, 0x30, 0x30, data_021bf94c);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d7938);
        func_020679c0(unk_3c, 1);
        func_020289f8((Unk_020289f8_S *)(r7 + 0x18));
        r4 = TRUE;
    }
    if (r4 == 0) {
        func_0201c95c(this, &s);
        func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d7928);
        func_020679c0(unk_3c, 1);
        r4 = TRUE;
    }
    return r4;
}

void Unk_0201d2d0::func_020289f8(Unk_020289f8_S *p) {
    u32 r4 = p->unk_02;
    if (r4 >= 12) {
        r4 -= 12;
    }
    if (r4 == 0) {
        r4 = 12;
    }
    func_02015848(this, p->unk_03, 0);
    func_02015958(this, r4, 1, 2, 0, 0);
    func_02015958(this, p->unk_01, 2, 2, 6, 9);
}

BOOL Unk_0201d2d0::func_020286fc(void *a, void *b) {
    Unk_0201d2d0_Menu s;
    Unk_0201d2d0_Key k;
    void *r7 = func_02078578(func_0207e310(a));
    void *r4 = func_02099db4(b, func_0209ac10());
    void *r6 = func_0209a610(func_0207e268(a));
    s32 t;
    k.w0 = 0;
    k.w1 = 0;
    func_0209d498(&k);
    if (r4 != NULL && func_0209ad68(func_0209a4f0(r4)) == 0) {
        t = func_0209ac64(r7);
        if (func_0209a49c(t, func_0209b354(r6)) != 0 && func_0201c784(unk_fc) == 0xb && func_02079ab0(data_021dfd8c, &k) == -1 && func_02028810() != 0) {
            func_0201c95c(this, &s);
            unk_15c = r4;
            func_0201c91c(this, &s, 0, data_020c74fc, data_021bf2bc);
            func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
            func_0202d120(this, r7);
            s.unk_20 = 2;
            s.unk_21 = s.unk_20 - 1;
            func_0201c870(this, &s);
            func_0202d1c0(data_020d78f0);
            func_020679c0(unk_3c, 1);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202849c(void *a) {
    u16 v[8];
    Unk_0201d2d0_Menu s;
    void *r6 = func_02078578(func_0207e310(a));
    BOOL r4;
    v[0] = 0xfff1;
    r4 = FALSE;
    unk_160 = func_0209a60c(func_0207e268(a));
    if (func_0201c784(unk_fc) == 0xb) {
        switch (func_0209ac64(r6)) {
        case 0:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[1], unk_fc);
                if (!Unk_0202849c_R(&v[1], 0x1376, 0x1376)) goto end;
            }
            func_02025ed4(&v[2], this, 0);
            v[0] = v[2];
            {
                BOOL ok = FALSE;
                volatile u16 *pv = &v[0];
                u16 a1 = *pv;
                u16 b1 = *pv;
                if (b1 >= 0x12b0 && a1 <= 0x12e7) ok = TRUE;
                if (ok) {
                    unk_120 = a1;
                    r4 = TRUE;
                }
            }
            break;
        case 1:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[3], unk_fc);
                if (!Unk_0202849c_R(&v[3], 0x1374, 0x1374)) goto end;
            }
            func_02025d80(&v[4], this, 0);
            v[0] = v[4];
            {
                BOOL ok = FALSE;
                volatile u16 *pv = &v[0];
                u16 a1 = *pv;
                u16 b1 = *pv;
                if (b1 >= 0x12e8 && a1 <= 0x131f) ok = TRUE;
                if (ok) {
                    unk_120 = a1;
                    r4 = TRUE;
                }
            }
            break;
        case 2:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[5], unk_fc);
                if (!Unk_0202849c_R(&v[5], 0x1369, 0x1369)) goto end;
            }
            r4 = TRUE;
            break;
        default:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[6], unk_fc);
                if (v[6] != 0xfff1) {
                    func_0202d864(&v[7], unk_fc);
                    if (!Unk_0202849c_R(&v[7], 0x1380, 0x139f)) goto end;
                }
            }
            r4 = TRUE;
            break;
        }
    }
end:
    if (r4) {
        func_0201c95c(this, &s);
        func_0201c91c(this, &s, 0, data_020c74fc, data_021bf55c);
        func_0202d120(this, r6);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d78f8);
        func_020679c0(unk_3c, 1);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02028a48(void *a, void *b, u32 c) {
    u8 cc[2];
    u16 v1, v2, v3, v4, v5, v6, v7, v8;
    Unk_0201d2d0_Key k;
    Unk_0201d2d0_Menu s;
    BOOL r7 = FALSE;
    s32 r5, r6;
    unk_160 = func_0209a60c(func_0207e268(a));
    func_0202d120(this, (void *)func_0209a940(unk_160));
    r5 = func_0209ac64(func_0202d114(this));
    if (func_0201c784(unk_fc) == 0xb) {
        if (func_02094218(func_0209a92c(unk_160)) == 0) {
            r6 = func_0209a938(unk_160);
            v1 = *(u16 *)func_0209ab94(func_0202d114(this));
            r5 = r7;
            k.w0 = r5;
            k.w1 = r5;
            func_0209d498(&k);
            switch (func_0209ac64(func_0202d114(this))) {
            case 0:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v2, unk_fc);
                    if (!Unk_0202849c_R(&v2, 0x1376, 0x1376)) goto done;
                }
                if (r6 == 2) {
                    r5 = 1;
                    goto done;
                }
                if (Unk_0202849c_R(&v1, 0x12b0, 0x12e7) && func_0202c654(&v1, 0, 0x17, ((u8 *)&k)[4]) != 0) {
                    unk_120 = v1;
                } else {
                    func_02025ed4(&v3, this, r6);
                    unk_120 = v3;
                }
                if (Unk_02028a48_R1(&unk_120, 0x12b0, 0x12e7)) r5 = 1;
                break;
            case 1:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v4, unk_fc);
                    if (!Unk_0202849c_R(&v4, 0x1374, 0x1374)) goto done;
                }
                if (r6 == 2) {
                    r5 = 1;
                    goto done;
                }
                if (Unk_0202849c_R(&v1, 0x12e8, 0x131f) && func_0202c148(&v1, 0, 0x17, ((u8 *)&k)[4], ((u8 *)&k)[3]) != 0) {
                    unk_120 = v1;
                } else {
                    func_02025d80(&v5, this, r6);
                    unk_120 = v5;
                }
                if (Unk_02028a48_R1(&unk_120, 0x12e8, 0x131f)) r5 = 1;
                break;
            case 2:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v6, unk_fc);
                    if (!Unk_0202849c_R(&v6, 0x1369, 0x1369)) goto done;
                }
                {
                    volatile u16 *pv = &v1;
                    u16 a1 = *pv;
                    u16 b1 = *pv;
                    if (b1 != 0xfff1) unk_120 = a1;
                }
                r5 = 1;
                break;
            default:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v7, unk_fc);
                    if (v7 != 0xfff1) {
                        func_0202d864(&v8, unk_fc);
                        if (!Unk_0202849c_R(&v8, 0x1380, 0x139f)) goto done;
                    }
                }
                {
                    volatile u16 *pv = &v1;
                    u16 a1 = *pv;
                    u16 b1 = *pv;
                    if (b1 != 0xfff1) unk_120 = a1;
                }
                r5 = 1;
                break;
            }
done:
            if (r5 != 0) {
                func_0201c95c(this, &s);
                func_0201c91c(this, &s, 0, data_020c74fc, data_021bf55c);
                func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
                s.unk_20 = 2;
                s.unk_21 = s.unk_20 - 1;
                func_0201c870(this, &s);
                func_0202d1c0(data_020d7980);
                func_020679c0(unk_3c, 1);
                r7 = TRUE;
            }
        } else {
            switch (r5) {
            case 0:
                r7 = func_02029694((void *)func_02029948, 0x28, 0x19);
                break;
            case 1:
                r7 = func_02029694((void *)func_020298f8, 0x29, 0x18);
                break;
            case 2:
                r7 = func_02028e94();
                break;
            case 3:
                r7 = func_02029234();
                break;
            case 4:
                r7 = func_02029440();
                if (r7 == 1) {
                    void *p = unk_fc->unk_82c;
                    cc[0] = func_02081364(func_0207f91c(p, func_0207cdb0(p)));
                    cc[1] = 0;
                    func_0201577c(this, 0, cc, data_020d8ae0, cc + 1);
                }
                break;
            }
        }
    }
    if (r7 == 0) {
        func_0201c95c(this, &s);
        func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d7900);
        func_020679c0(unk_3c, 1);
        r7 = TRUE;
    }
    return r7;
}
