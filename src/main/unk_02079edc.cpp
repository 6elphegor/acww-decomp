#include "types.h"

class Unk_02002fc8 {
public:
    u32 func_02002fc8(u32 arg);
    void func_0200301c(void *buf, u32 size, u32 arg);
    u32 func_02003070();
    void func_0200309c(u32 id, u32 type, void *s);
    u32 func_020030b4();

    /* 0x00 */ u8 unk_00[0xa];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    u32 func_02072e88(s32 i);
    BOOL func_02072e44();
};

struct Unk_02079f54_Date {
    u32 v[2];
};

struct Unk_0207a104_Date {
    u8 b[16];
};

struct Unk_0207a550_Rec {
    u8 pad_00[0x20];
    u8 unk_20 : 3;
};

struct Unk_0207a3b8_Item {
    u16 unk_00;
    u8 pad_02[10];
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u32 data_020cc0a8[];
extern u16 data_020cc048[];
extern u8 data_021d735c[];
extern u8 data_021cc8c0[];
extern u8 data_021cc854[];
extern u8 data_020cbfd8[];

void *func_020805c4(void *p);
void func_0207c1c8(void *p);
void func_0207c354(void *p, void *q);
void func_0209d498(void *d);
void func_02116048(void *src, void *dst, s32 n);
void func_02115fb4(void *dst, s32 v, s32 n);
s32 func_0203f508(void *buf, void *d);
s32 func_0209d2c0(void *d, s32 n);
s32 func_0203f2e0(u32 a, void *d, s32 z);
u32 func_02040c70();
void *func_0207e310(void *p);
s32 func_02078580(void *p);
s32 func_02078578(void *p);
s32 func_0207bcfc(u32 mask, s32 cnt, s32 n);
u8 *func_020783f8();
s32 func_0207e1f0(void *p);
void func_0209cf88(void *d);
s32 func_0209cdc0(void *d, void *e);
void func_02099790(void *p);
s32 func_02099668(void *p);
s32 func_02099624(void *p, void *d);
s32 func_0209cd00(void *d, void *e);
s32 func_0209cffc(void *d, void *e, s32 a, s32 b, s32 c);
s32 func_0209d164(void *d, s32 n);
BOOL func_0207a3a0(void *p);
s32 func_0207a3b8(void *p, u32 idx);
void *func_0207bf60(void *p, s32 i);
void func_02099724(void *p, void *q, void *d);
void func_02079228(void *p);
s32 func_02099690(void *p);
void *func_02099710(void *p, u32 i);
void func_02094294(void *p);
s32 func_0207bb7c(void *p);
s32 func_0207cd48(void *p);
s32 func_0207fa50(void *p, s32 a, void *d);
u8 *func_0207f948();
s32 func_02063b8c(s32 n);
s32 func_0209978c(void *p);
s32 func_0209ad68(s32 p);
s32 func_02099788(void *p);
s32 func_0207bfb4(void *p, s32 i);
s32 func_02070fbc(s32 a, s32 b);
void func_0207fd90(void *p, void *d);
void func_0207c7bc(void *p);
s32 func_0207e268(void *p);
s32 func_0209a60c(s32 p);
s32 func_0209a940(s32 p);
s32 func_0209abc4(s32 p);
s32 func_0209a92c(s32 p);
void func_0207e4f4(void *p);
void *func_02097868(void *t, s32 i);
s32 func_0209888c(void *p);
BOOL func_02094218(s32 p);
void *func_0209865c(void *p);
s32 func_0209ac64(void *p);
s32 func_0209ac44(void *p);
s32 func_0209d3a4(void *p, s32 q);
void func_02099f1c(void *p);
void func_0209abb4(void *p, s32 v);
BOOL func_020594dc(u32 a, s32 b, void *c);
BOOL func_0207a834(void *p);
s32 func_0209750c(void *p);
s32 func_0209acf8(u32 *o, u32 v);
u32 func_0207a8b8(void *b, void *p, s32 a);
s32 func_0209ad34();
s32 func_0209a610(s32 p);
s32 func_0209b3a4(s32 p);
s32 func_0209b328(s32 p);
s32 func_0209b354(s32 p);
s32 func_0209ad54(s32 a, s32 b, void *c, s32 d);
s32 func_0207a4b8(void *p);
s32 func_0207a484(void *p);
void func_0207a310(void *p);
void func_0207a63c(void *p);
}

extern "C" void func_02079edc(u8 *p) {
    s32 i;
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) == 0) {
        for (i = 0; i < 8; i++) {
            if (((Unk_02002fc8 *)func_020805c4(p))->func_020030b4()) {
                func_0207c1c8(p);
            }
            p += 0x700;
        }
    }
}

extern "C" void func_02079f1c(u8 *p, void *q) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((Unk_02002fc8 *)func_020805c4(p))->func_020030b4()) {
            func_0207c354(p, q);
        }
        p += 0x700;
    }
}

extern "C" s32 func_02079f54(u32 n, void *src) {
    Unk_02079f54_Date a;
    Unk_02079f54_Date b;
    Unk_0207a3b8_Item buf[7];
    u32 i;
    a.v[0] = 0;
    a.v[1] = 0;
    if (src == NULL) {
        func_0209d498(&a);
    } else {
        func_02116048(src, &a, 8);
    }
    for (i = 0; i <= n; i++) {
        s32 cnt, k;
        Unk_0207a3b8_Item *e;
        e = buf;
        func_02116048(&a, &b, 8);
        cnt = func_0203f508(buf, &b);
        for (k = 0; k < cnt; k++) {
            s32 j;
            u32 *t = data_020cc0a8;
            for (j = 0; j < 11; j++) {
                if (e->unk_00 == *t) return j;
                t++;
            }
            e++;
        }
        func_0209d2c0(&a, 1);
    }
    return 11;
}

extern "C" s32 func_02079fd8() {
    Unk_02079f54_Date a;
    Unk_02079f54_Date b;
    u32 *t = data_020cc0a8;
    s32 i;
    a.v[0] = 0;
    a.v[1] = 0;
    func_0209d498(&a);
    for (i = 0; i < 11; i++) {
        u32 v = *t;
        BOOL f;
        func_02116048(&a, &b, 8);
        if (func_0203f2e0(v, &b, 0)) f = TRUE; else f = FALSE;
        if (f) {
            if (v == func_02040c70()) return i;
        }
        t++;
    }
    return 11;
}

extern "C" void func_0207a038(u8 *base) {
    u8 *p = base;
    u8 mask = 0;
    s32 cnt = 0;
    s32 res = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((Unk_02002fc8 *)func_020805c4(p))->func_020030b4()) {
            if (func_02078580(func_0207e310(p)) == 0) {
                mask |= 1 << i;
                cnt++;
            }
        }
        p += 0x700;
    }
    s32 r = func_0207bcfc(mask, cnt, 8);
    if (r != -1) {
        res = (u8)r;
    } else {
        u8 *p2 = base;
        u8 m2 = 0;
        s32 c2 = 0;
        s32 j = 0;
        for (; j < 8; j++) {
            if (((Unk_02002fc8 *)func_020805c4(p2))->func_020030b4()) {
                if (func_0207e1f0(p2) == 3) {
                    if (j != func_0207a484(base)) {
                        m2 |= 1 << j;
                        c2++;
                    }
                }
            }
            p2 += 0x700;
        }
        r = func_0207bcfc(m2, c2, 8);
        if (r != -1) res = (u8)r;
    }
    func_020783f8()[0x161] = res;
}

extern "C" void func_0207a104(u8 *b) {
    Unk_0207a104_Date d;
    s32 r4, r6, r7;
    s32 v1, flag;
    s32 sel;
    sel = func_0207a484(b);
    func_0209cf88(&d);
    if (sel != -1) {
        if (func_0209cdc0(&d, b + 0x38b6) == 0) {
            func_02099790(b + 0x3830);
            return;
        }
        if (func_02099668(b + 0x3830)) {
            if (func_02099624(b + 0x3830, &d) == 0) func_02099790(b + 0x3830);
            return;
        }
        r7 = func_0209cd00(&d, b + 0x38ba);
        if (r7 == 0) return;
        v1 = 0;
        r4 = 0;
        flag = 0;
        if (b[0x38b9] == 0) {
            if (func_0209cd00(&d, b + 0x38b6) >= 10) {
                s32 t = func_0209cd00(b + 0x38ba, b + 0x38b6);
                if (t >= 0 && t < 10) v1 = 9 - t;
                flag = 1;
            }
        }
        if (r7 < 0) r6 = -r7; else r6 = r7;
        if (v1 > r6) v1 = r7;
        while (v1 > 0) {
            func_0207a310(b);
            v1--;
            r6--;
            r4++;
        }
        if (flag) b[0x38b9] = 1;
        while (r6 > 0) {
            func_0207a310(b);
            r6--;
            r4++;
            if (func_02099668(b + 0x3830)) break;
        }
        if (func_02099668(b + 0x3830)) {
            if (r6 >= 3 && r7 > 0) {
                func_02099790(b + 0x3830);
                return;
            }
            if (r4 > 0) {
                func_0209cffc(d.b + 4, b + 0x38ba, 0, 0, 0);
                if (r7 > 0) {
                    func_0209d2c0(d.b + 4, r4);
                    b[0x38bc] = d.b[9];
                    b[0x38bb] = d.b[8];
                    b[0x38ba] = d.b[7];
                } else if (r6 > 0) {
                    func_02099790(b + 0x3830);
                } else {
                    func_0209d164(d.b + 4, r4);
                    b[0x38bc] = d.b[9];
                    b[0x38bb] = d.b[8];
                    b[0x38ba] = d.b[7];
                }
            }
        } else {
            func_02116048(&d, b + 0x38ba, 4);
        }
    } else {
        if (func_0207a3a0(b)) {
            r4 = func_0207a3b8(b, (u8)(d.b[1] - 1));
            if (r4 != -1) {
                void *q = func_0207bf60(b, r4);
                if (q) {
                    if (((Unk_02002fc8 *)func_020805c4(q))->func_020030b4()) {
                        func_02099724(b + 0x3830, func_020805c4(q), &d);
                        b[0x38ea] = r4;
                        func_02079228(b + 0x381c);
                    }
                }
            }
        }
    }
}

extern "C" void func_0207a310(void *pp) {
    u8 *b = (u8 *)pp;
    u32 c = b[0x38be];
    void *r = NULL;
    if (func_02099690(b + 0x3830) || b[0x38b9]) {
        if (c == 0) c = 5;
        else if ((u8)c < 5) c--;
        b[0x38be] = c;
        r = func_02099710(b + 0x3830, b[0x38be]);
    } else {
        u8 n = c + 1;
        if (n < 5) {
            b[0x38be] = n;
            r = func_02099710(b + 0x3830, b[0x38be]);
        } else if ((u8)c < 5) {
            r = func_02099710(b + 0x3830, (u8)c);
        }
    }
    if (r) func_02094294(r);
}

extern "C" BOOL func_0207a3a0(void *p) {
    if (func_0207bb7c(p) >= 7) return TRUE;
    return FALSE;
}

extern "C" s32 func_0207a3b8(void *pp, u32 idx) {
    u8 *b = (u8 *)pp;
    if (idx >= 12) return -1;
    u8 mask = 0;
    Unk_02079f54_Date d;
    d.v[0] = 0;
    d.v[1] = 0;
    u8 *p = b;
    s32 cnt = 0;
    s32 i;
    func_0209d498(&d);
    for (i = 0; i < 8; i++) {
        if (i != *(s8 *)(b + 0x38ea)) {
            if (((Unk_02002fc8 *)func_020805c4(p))->func_020030b4()) {
                if (func_0207e1f0(p) == 3) {
                    if (func_0207cd48(p)) {
                        if (func_0207fa50(p, 15, &d) == -1) {
                            mask |= 1 << i;
                            cnt++;
                        }
                    }
                }
            }
        }
        p += 0x700;
    }
    s32 r4 = func_0207bcfc(mask, cnt, 8);
    if (func_0207bf60(b, r4)) {
        u8 *q = func_0207f948();
        if (!(func_02063b8c(data_020cc048[idx]) >= q[3] + 0x80)) return r4;
    }
    return -1;
}

extern "C" s32 func_0207a484(void *p) {
    if (func_0209ad68(func_0209978c((void *)func_0207a4b8(p)))) {
        return func_0207bfb4(p, func_02099788((void *)func_0207a4b8(p)));
    }
    return -1;
}

extern "C" s32 func_0207a4b8(void *p) {
    return (s32)((u8 *)p + 0x3830);
}

extern "C" void func_0207a4c4(u8 *p, s32 q) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (((Unk_02002fc8 *)func_020805c4(p))->func_020030b4()) {
            if (q == 0) {
                if (func_02070fbc(i, 0)) {
                    u16 v = 0x12a8;
                    func_0207fd90(p, &v);
                }
            }
            func_0207c7bc(p);
            s32 a = func_0209a60c(func_0207e268(p));
            s32 c = func_0209a940(a);
            if (func_0209ad68(c)) {
                if (func_0209abc4(c) == 0) {
                    func_02094294((void *)func_0209a92c(a));
                }
            }
            func_0207e4f4(p);
        }
        p += 0x700;
    }
}

extern "C" void func_0207a550(s32 unused, s32 q) {
    s32 i;
    for (i = 0; i < 4; i++) {
        void *e = func_02097868(data_021d735c, i);
        if (func_02094218(func_0209888c(e))) {
            u8 *r4 = (u8 *)func_0209865c(e) + 0x88;
            u8 *r6 = r4 + 0xc;
            if (func_0209ad68((s32)r6)) {
                if (func_0209ac64(r6) == 0x15) {
                    if (((Unk_02002fc8 *)r4)->func_020030b4()) {
                        u8 *r7 = r4 + 0x18;
                        if (func_0209abc4((s32)r6) == 0) {
                            if (func_0209d3a4((void *)func_0209ac44(r6), q) < 0) func_02099f1c(r4);
                        } else if (((Unk_0207a550_Rec *)r4)->unk_20 != 0) {
                            r7 = (u8 *)func_0209d3a4(r7, q);
                            func_0209abb4(r6, 4);
                            if (r7) {
                                u32 bits = ((Unk_0207a550_Rec *)r4)->unk_20;
                                if (func_020594dc(bits, func_0209888c(e), r4)) func_02099f1c(r4);
                            }
                        } else {
                            func_02099f1c(r4);
                        }
                    }
                }
            }
        }
    }
}

extern "C" void func_0207a624(void *b) {
    if (func_0207a834(b)) func_0207a63c(b);
}

extern "C" void func_0207a63c(void *bb) {
    u8 *b = (u8 *)bb;
    s32 a = func_0209750c(b);
    s32 r5 = 0x11;
    s32 r4 = 8;
    if (a != 0) {
        u16 v[2];
        u32 idx = 0;
        s32 self = func_0207a484(b);
        s32 i;
        func_02115fb4(data_021cc8c0, 0, r5);
        func_02115fb4(data_021cc854, 0, r4);
        for (i = 0; i < 13; i++) {
            if (func_0209acf8(&idx, data_020cbfd8[i])) {
                data_021cc8c0[idx] = 1;
                r5--;
            }
        }
        for (i = 0; i < 8; i++) {
            u8 *p = b + i * 0x700;
            if (((Unk_02002fc8 *)func_020805c4(p))->func_020030b4() && func_0207e1f0(p) == 3 && i != self) {
                u32 t = func_0207a8b8(b, p, a);
                if (t < 0x16) {
                    if (func_0209ad34() == 1) {
                        if (func_0209acf8(&idx, t)) {
                            data_021cc854[i] = 1;
                            r4--;
                            data_021cc8c0[idx] = 1;
                            r5--;
                        }
                    }
                }
            } else {
                data_021cc854[i] = 1;
                r4--;
            }
        }
        s32 zero = 0;
        for (i = 0; i < 8; i++) {
            u8 *p2;
            u8 *flag = &data_021cc854[i];
            if (*flag == 0) {
                p2 = b + i * 0x700;
                s32 e = func_0209a610(func_0207e268(p2));
                if (func_0209b3a4(e)) {
                    if (func_0209b328(e) == 0) {
                        s32 x = func_02078578(func_0207e310(p2));
                        v[0] = 0xfff1;
                        func_0209ad54(x, func_0209b354(e), v, zero);
                        *flag = 1;
                        r4--;
                    }
                }
            }
        }
        while (r4 > 0 && r5 > 0) {
            u8 *g;
            s32 m;
            s32 k2;
            u8 *f;
            s32 k;
            s32 x;
            s32 j;
            k = func_02063b8c(r4);
            for (j = 0; j < 8; j++) {
                f = &data_021cc854[j];
                if (*f == 0) {
                    if (k == 0) {
                        x = func_02078578(func_0207e310(b + j * 0x700));
                        k2 = func_02063b8c(r5);
                        for (m = 0; m < 17; m++) {
                            g = &data_021cc8c0[m];
                            if (*g == 0) {
                                if (k2 == 0) {
                                    v[1] = 0xfff1;
                                    func_0209ad54(x, (u8)(m + 5), &v[1], 0);
                                    *g = 1;
                                    r5--;
                                    break;
                                }
                                k2--;
                            }
                        }
                        *f = 1;
                        r4--;
                        break;
                    }
                    k--;
                }
            }
        }
    }
}
