#include "types.h"

struct Unk_0209f638 {
    u8 pad_00[0xeb];
    u8 unk_eb[5];
    u8 unk_f0[0x1f - 5];
    /* +0x10a */ u8 unk_10a;
};

struct Unk_020cbb18 {
    u8 pad_00[0x70];
    u32 func_02072e88(s32 i);
    BOOL func_020729cc(u32 v);
};
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021ed32c;

struct Unk_0209fb48_V3 { s32 v[3]; };
extern Unk_0209fb48_V3 data_020e2764;
extern Unk_0209fb48_V3 data_020e2770;

struct Unk_0209f898_Rec { u32 unk_00; u32 unk_04; };

extern "C" {
BOOL func_02073090(s32 a);
void func_0207312c();
u32 func_02073190();
void func_02073340();
void func_020720f8();
BOOL func_020eaca0();
BOOL func_020eaf90();
s32 func_020eaf18();
void func_020741b0();
void func_020741a8();
BOOL func_02074b58(s32 a, u32 b);
BOOL func_020748fc();
s32 func_020a13c4(Unk_0209f638 *p);
s32 func_020a1158(Unk_0209f638 *p, u32 v);
void func_020a1494(Unk_0209f638 *p);
void func_020a0268(Unk_0209f638 *p);
void func_020a1648(Unk_0209f638 *p);
void func_020a1614(Unk_0209f638 *p);
void *func_020a1484(Unk_0209f638 *p, s32 i);
void func_0209eb74(void *p);
void func_0209eb6c(void *p);
void func_020873e0();
void func_0209f000(Unk_0209f638 *p);
Unk_0209f898_Rec *func_02067918(s32 i);
void func_02115468(s32 v);
void func_02074eb4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *func_0208f0b0(s32 a);
BOOL func_0208f1c0(void *a);
void *func_0208f18c(void *a);
void func_02087368(void *a);
s32 func_02087354(void *a);
void *func_02087364(void *a);
void func_0208733c(void *a);
void func_02087328(void *a, u8 b);
void func_0208735c(void *a, void *b);
void func_02087344(void *a, s32 b);
void func_02116048(void *dst, void *src, u32 n);
void func_02063888(void *p);
void func_02063870(void *p);
void func_020638d0(void *a, void *b);
void *func_0209409c(void *a);
void *func_0209888c(void *a);
void *func_020986a4(void *a);
void *func_0209750c();
void *func_02097520(s32 i);
void *func_0209c37c(s32 a, s32 b);
BOOL func_02063b8c(s32 a);
void *func_02098680(void *a);
void *func_02098674(void *a);
void *func_02076c7c(void *a);
void *func_02076e1c(void *a);
void *func_02076db4(void *a);
void *func_02076cf0(void *a);
BOOL func_020e9d88(void *a, void *b);
void func_0209fef8(Unk_0209f638 *p, void *q);
BOOL func_0209fc68(Unk_0209f638 *p, void *a, void *b);
void func_0209fcc4(Unk_0209f638 *p, s32 idx);
void func_0209fbe4(Unk_0209f638 *p);
}

extern "C" s32 func_0209f638(Unk_0209f638 *self, u8 *st, s32 a2, s32 base, u8 a5, u8 a6, s32 a7, u8 a8, u32 a9) {
    Unk_020cbb18 *o5, *o2;
    u32 cur = *st;
    if (cur == base) {
        if (func_02073090(a9)) {
            func_0207312c();
            return 0x20;
        }
        s32 r = func_020a13c4(self);
        if (r == 1) {
            *st = a5;
        } else if (r == 3) {
        } else {
            func_0209eb74(&data_021ed32c);
            if (a8) {
                func_020a1494(self);
                func_0209fbe4(self);
                func_020873e0();
            }
            *st = base + 1;
        }
    } else if (cur == base + 1) {
        if (func_02073090(a9)) {
            func_0207312c();
            return 0x20;
        }
        s32 r = func_020a1158(self, (u32)(self->unk_10a << 24) >> 28);
        if (r == 1) {
            *st = a5;
        } else if (r == 0) {
            *st = base + 2;
        }
    } else if (cur == base + 2) {
        if (func_02073090(a9)) {
            func_0207312c();
            return 0x20;
        }
        s32 r6 = 1;
        s32 i = 3;
        o2 = data_020cbb18;
        for (; i >= 0; i--) {
            if (o2->func_02072e88(i) && !o2->func_020729cc(i)) {
                u8 v = self->unk_eb[i];
                if (v == 0) {
                    r6 = 0;
                    break;
                }
                if (v == 2) {
                    r6 = 2;
                    break;
                }
            }
        }
        if (r6) {
            if (a2 == 0) r6 = 0;
            else if (a2 == 2) r6 = 2;
        }
        if (r6 == 1) {
            func_020a0268(self);
            *st = base + 3;
        } else if (r6 == 2) {
            *st = a6;
        }
    } else if (cur == base + 3) {
        if (func_02073090(a9)) {
            func_0207312c();
            return 0x20;
        }
        func_020720f8();
        if (func_020eaca0()) {
            u32 m = func_02073190();
            if (func_02074b58(1, m)) {
                func_0209eb6c(&data_021ed32c);
                *st = base + 4;
            }
        }
    } else if (cur == base + 4) {
        if (func_02073090(a9)) {
            func_0207312c();
            return 0x20;
        }
        s32 r = func_020a1158(self, (u32)(self->unk_10a << 24) >> 28);
        if (r == 1) {
            *st = a5;
        } else if (r == 0) {
            *st = base + 5;
        }
    } else if (cur == base + 5) {
        if (func_02073090(a9)) {
            func_0207312c();
            return 0x20;
        }
        s32 r7 = 1;
        s32 i = 3;
        o5 = data_020cbb18;
        for (; i >= 0; i--) {
            if (o5->func_02072e88(i) && !o5->func_020729cc(i)) {
                u8 v = self->unk_eb[i];
                if (v == 0) {
                    r7 = 0;
                    break;
                }
                if (v == 2) {
                    r7 = 2;
                    break;
                }
            }
        }
        if (r7 == 1) {
            *st = base + 6;
        } else if (r7 == 2) {
            *st = a6;
        }
    } else if (cur == base + 6) {
        if (func_02073090(a9)) {
            func_0207312c();
            return 0x20;
        }
        u32 m = func_02073190();
        if (a7 < 4) {
            m = (u16)(m | (1 << a7));
        }
        if (func_02074b58(1, m)) {
            *st = base + 7;
        }
    }
    return 0x20;
}

extern "C" s32 func_0209f898(Unk_0209f638 *self, u8 *st, s32 base, s32 base2, u32 mask, u8 a6) {
    u32 cur = *st;
    if (cur == base) {
        if (func_02073090(mask)) {
            func_0207312c();
            return 0x20;
        }
        if (func_020eaf90() == 0) {
            if (func_02074b58(2, mask)) {
                *st = base + 1;
            }
        } else {
            if (func_02074b58(2, 1)) {
                *st = base + 1;
            }
        }
    } else if (cur == base + 1) {
        if (func_02073090(mask)) {
            func_0207312c();
            return 0x20;
        }
        func_020720f8();
        if (func_020eaca0()) {
            *st = base + 2;
        }
    } else if (cur == base + 2) {
        if (func_020eaf90() == 0) {
            BOOL flag = TRUE;
            u32 m = 0;
            s32 i;
            func_020741b0();
            for (i = 3; i >= 0; i--) {
                if (i != 0) {
                    u32 bit = 1 << i;
                    if (mask & bit) {
                        if (self->unk_f0[i] == 0) {
                            flag = FALSE;
                            m = m | bit;
                            m = (u16)m;
                        }
                    }
                }
            }
            BOOL err = func_02073090(m);
            func_020741a8();
            if (err) {
                func_0207312c();
                return 0x20;
            }
            if (flag) {
                func_02073340();
                func_0209f000(self);
                *st = base + 3;
            }
        } else {
            if (func_02073090(mask)) {
                func_0207312c();
                return 0x20;
            }
            if (self->unk_eb[0]) {
                if (func_020748fc()) {
                    *st = base + 3;
                }
            }
        }
    } else if (cur == base + 3) {
        if (func_020eaf90() == 0) {
            *st = base + 4;
        } else {
            if (func_02073090(mask)) {
                func_0207312c();
                return 0x20;
            }
            func_020720f8();
            if (func_020eaca0()) {
                func_02073340();
                func_0209f000(self);
                *st = base + 4;
            }
        }
    } else if (cur == base + 4) {
        if (a6) func_020a1648(self);
        *st = base + 5;
    }

    cur = *st;
    if (cur == base2) {
        if (func_02073090(mask)) {
            func_0207312c();
            return 0x20;
        }
        if (func_020eaf90() == 0) {
            if (func_02074b58(2, mask)) {
                *st = base2 + 1;
            }
        } else {
            if (func_020748fc()) {
                *st = base2 + 1;
            }
        }
    } else if (cur == base2 + 1) {
        if (func_02073090(mask)) {
            func_0207312c();
            return 0x20;
        }
        func_020720f8();
        if (func_020eaca0()) {
            *st = base2 + 2;
        }
    } else if (cur == base2 + 2) {
        if (func_020eaf90() == 0) {
            BOOL flag = TRUE;
            u32 m = 0;
            s32 i;
            func_020741b0();
            for (i = 3; i >= 0; i--) {
                if (i != 0) {
                    u32 bit = 1 << i;
                    if (mask & bit) {
                        if (self->unk_f0[i] == 0) {
                            flag = FALSE;
                            m = m | bit;
                            m = (u16)m;
                        }
                    }
                }
            }
            m = func_02073090(m);
            func_020741a8();
            if (m) {
                func_0207312c();
                return 0x20;
            }
            if (flag) {
                func_02073340();
                func_0209f000(self);
                *st = base2 + 3;
            }
        } else {
            func_02073340();
            func_0209f000(self);
            *st = base2 + 3;
        }
    } else if (cur == base2 + 3) {
        if (a6) func_020a1614(self);
        *st = base2 + 4;
    } else if (cur == base2 + 4) {
        if (func_02067918(0)->unk_04 == 0) {
            func_02115468(0);
        }
    }
    return 0x20;
}

extern "C" void func_0209fb48(Unk_0209f638 *self) {
    Unk_0209fb48_V3 a = data_020e2764;
    Unk_0209fb48_V3 b = data_020e2770;
    s32 i = 2;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        s32 n = i + 1;
        if (o->func_02072e88(n)) {
            s32 q = (s32)func_020a1484(self, n);
            if (q < 4) {
                if (func_0208f1c0(func_0208f0b0(q))) {
                    a.v[i] = 2;
                    b.v[i] = q;
                } else {
                    a.v[i] = 1;
                }
            } else {
                a.v[i] = 0;
            }
        }
    }
    func_02074eb4(a.v[0], b.v[0], a.v[1], b.v[1], a.v[2], b.v[2]);
}

extern "C" void func_0209fbe4(Unk_0209f638 *self) {
    void *p5 = func_0208f0b0(4);
    void *r4 = func_0209750c();
    u32 s1[7];
    func_02063888(s1);
    func_020638d0(func_0209409c(func_0209888c(r4)), s1);
    void *r6 = func_020986a4(r4);
    void *q = func_0208f18c(p5);
    u32 s2[7];
    func_02063888(s2);
    func_020638d0(func_02087364(q), s2);
    if (func_02087354(q)) {
        func_02116048(q, r6, 0xc);
        func_0208733c(q);
    }
    func_02087368(func_0208f18c(p5));
    func_02063870(s2);
    func_02063870(s1);
}

extern "C" BOOL func_0209fc68(Unk_0209f638 *self, void *a, void *b) {
    void *r6 = func_02076e1c(func_02076c7c(func_02098680(a)));
    u8 *r5 = (u8 *)func_02076db4(func_02098674(b));
    s32 i;
    u32 st = 0x1c;
    for (i = 0; i < 0x20; i++) {
        void *e = func_02076e1c(func_02076cf0(r5 + i * st));
        if (e) {
            if (func_020e9d88(r6, e)) return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0209fcc4(Unk_0209f638 *self, s32 idx) {
    void *r7 = func_02097520(idx);
    if (r7 == 0) return;
    u32 sa[7];
    func_02063888(sa);
    func_020638d0(func_0209409c(func_0209888c(r7)), sa);
    void *r6 = func_020986a4(r7);
    if (func_02087354(r6)) {
        func_0209fef8(self, r6);
        func_02063870(sa);
        return;
    }
    s32 found = 4;
    void *other = 0;
    void *other2 = 0;
    u32 sb[7];
    func_02063888(sb);
    s32 i = 0;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i < 4; i++) {
        if (i == idx) continue;
        if (!o->func_02072e88(i)) continue;
        other = func_02097520(i);
        if (!other) continue;
        func_020638d0(func_0209409c(func_0209888c(other)), sb);
        other2 = func_020986a4(other);
        if (func_02087354(other2)) continue;
        if (func_020eaf18() == 3 || func_020eaf18() == 4) {
            if (!func_0209fc68(self, other, r7)) continue;
            if (!func_0209fc68(self, r7, other)) continue;
        }
        found = i;
        break;
    }
    if (found == 4) {
        func_02063870(sb);
        func_02063870(sa);
        return;
    }
    s16 *pp = (s16 *)func_0209c37c(0, 0x49);
    if (*pp == 0 && func_02063b8c(0x10)) {
        func_02063870(sb);
        func_02063870(sa);
        return;
    }
    s32 r4 = func_02063b8c(2);
    func_02087328(other2, r4 == 0 ? 1 : 0);
    func_0208735c(other2, func_0209409c(func_0209888c(r7)));
    func_02087344(other2, 0xa);
    func_02087328(r6, r4 == 1 ? 1 : 0);
    func_0208735c(r6, func_0209409c(func_0209888c(other)));
    func_02087344(r6, 0xa);
    func_0209fef8(self, r6);
    func_0209fef8(self, other2);
    void *h7 = func_020a1484(self, idx);
    void *h5 = func_020a1484(self, found);
    void *c4 = func_02097520((s32)h7);
    void *m7 = func_0208f0b0((s32)h7);
    u32 sc[7];
    func_02063888(sc);
    if (c4) {
        func_020638d0(func_0209409c(func_0209888c(c4)), sc);
    }
    func_02116048(r6, func_0208f18c(m7), 0xc);
    c4 = func_02097520((s32)h5);
    void *m5 = func_0208f0b0((s32)h5);
    u32 sd[7];
    func_02063888(sd);
    if (c4) {
        func_020638d0(func_0209409c(func_0209888c(c4)), sd);
    }
    func_02116048(other2, func_0208f18c(m5), 0xc);
    func_02063870(sd);
    func_02063870(sc);
    func_02063870(sb);
    func_02063870(sa);
    return;
}

extern "C" void func_0209fefc(Unk_0209f638 *self) {
    Unk_020cbb18 *o;
    s32 i = 3;
    o = data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i)) {
            func_02087368(func_0208f18c(func_0208f0b0(i)));
        }
    }
    for (i = 3; i >= 0; i--) {
        if (o->func_02072e88(i)) {
            func_0209fcc4(self, i);
        }
    }
}

extern "C" void func_0209fef8(Unk_0209f638 *p, void *q) {}
