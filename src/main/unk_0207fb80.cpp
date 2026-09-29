#include "types.h"

extern "C" {
s32 func_02050fd0(void *p);
s32 func_020a78a4(void *dst, void *src, s32 n);
void func_02081218(void *p);
void func_02081200(void *p);
void func_020a7c3c(void *p);
s32 func_0207ce24(void *p);
s32 func_02063b8c(s32 a);
s32 func_020b35f8(void *a, void *b, void *c);
s32 func_020a7aa0(void *a, void *b, s32 c, s32 d);
s32 func_02115fb4(void *p, s32 v, s32 n);
void *func_020805c4(void *p);
s32 func_020030b4(void *p);
void *func_02002ff8(void *p);
u8 *func_020815b4(void *p);
void *func_02065634(void *p);
void func_020942d8(void *a, void *b);
s32 func_02094218(void *p);
s32 func_0207f88c(void *t, void *p);
s32 func_0207f86c(void *t, s32 p);
s32 func_02080d90();
s32 func_020942c8(void *p);
void *func_02097868(void *a, s32 i);
void *func_0209888c(void *p);
s32 func_02094058(void *p);
void *func_0207f854(void *t, void *p);
void func_02063888(void *p);
void func_02063870(void *p);
s32 func_02063954(void *p);
s32 func_020638d0(void *a, void *b);
s32 func_0203ce4c(s32 a, void *b);
s32 func_02059900(void *a, u32 b, void *c, void *d, void *e, s32 f);
void *func_0209750c();
s32 func_02098044(void *p, s32 a);
s32 func_0209d498(void *p);
s32 func_02116048(void *a, void *b, s32 n);
s32 func_0203f2e0(s32 a, void *b, s32 c);
s32 func_02080dd8();
s32 func_0208098c(void *p);
s32 func_020809b4(void *p);
s32 func_020809c8(void *p);
s32 func_020809f0(void *p);
void func_020b4154(void *p);
void func_020b413c(void *p);
s32 func_020b3270(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *func_02098308(void *p);
void func_0206338c(void *p, void *a, void *b);
void func_02063388(void *p);
s32 func_02062f94(void *a, void *b, void *c, void *d, s32 e, s32 f, void *g);
s32 func_0206c884(void *p);
void func_02094030(void *p);
void func_02094018(void *p);
s32 func_020655d0(void *p);
s32 func_0206c878(void *p);
void func_020a71d0(void *p);
void func_020a71b8(void *p);
void func_020940d0(void *a, void *b);
s32 func_0209b570(void *a, s32 i);
s32 func_020b35ac(void *a, void *b, s32 c);
s32 func_02062ad4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 func_0207c3dc(void *a, s32 b, void *c, void *d, s32 e);
s32 func_0207c47c(void *a, s32 b, s32 c, void *d, void *e, u16 *f);
s32 func_02080da4(void *a, s32 b);
s32 func_020941e8(void *a, void *b);
s32 func_02128930(void *a, void *b, s32 n);

extern u8 data_020e0654[];
extern u8 data_020e0660[];
extern u8 data_020e0668[];
extern u8 data_020e0674[];
extern u8 data_020e0680[];
extern u8 data_020e0688[];
extern u8 data_021d735c[];
extern u8 data_021d7352[];
extern void *data_020cbfc0[];
extern void *data_020cbfcc[];
}

struct Unk_0207fb80 {
    u8 unk_000[0x568];
    u8 unk_568[0x6c0 - 0x568];
    u8 unk_6c0[0x1e];
    u8 unk_6de[0x6ec - 0x6de];
    u16 unk_6ec;
    u8 unk_6ee[6];
    u8 unk_6f4;

    void func_0207fb80(void *p);
    void func_0207fba8(void *p, void *q);
    void func_0207fc08();
    void *func_0207fc1c();
    s32 func_0207fc50(s32 n);
    void func_0207fcdc(u16 *p);
        void func_0207fd90(u16 *p);
    u16 *func_0207fd9c();
    BOOL func_0207fda8();
    s32 func_0207fdc4();
    void func_0207fe28();
    void func_0207ff14(void *a);
    void func_02080078(void *a);
    void func_020801fc(void *a, void *b);
    BOOL func_02080450(u16 *p);
};

extern "C" {
void func_0207fe78(void *t, void *p);
void func_0207ff5c(void *t, void *p, void *q);
void func_020800b0(void *t, void *p, void *q);
void func_0207fc8c(u16 *out, void *idx);
void func_0207fd3c(u16 *out, void *idx);
void func_0207fd18(u16 *out, Unk_0207fb80 *o);
}

void Unk_0207fb80::func_0207fb80(void *p) {
    func_02050fd0(p);
    func_020a78a4(p, unk_6de, 10);
}

void Unk_0207fb80::func_0207fba8(void *dst, void *flag) {
    u32 buf[7];
    u8 b;
    func_02081218(buf);
    func_020a7c3c(dst);
    if (flag && func_0207ce24(this)) {
        b = func_02063b8c(0x10);
        func_020b35f8(dst, &b, data_020e0654);
    } else {
        func_0207fb80(buf);
        func_020a7aa0(dst, buf, 0, 0);
    }
    func_02081200(buf);
}

void Unk_0207fb80::func_0207fc08() {
    func_02115fb4(unk_6de, 0x85, 10);
}

void *Unk_0207fb80::func_0207fc1c() {
    u8 *r = 0;
    if (func_020030b4(func_020805c4(this))) {
        u8 *p = func_020815b4(func_02002ff8(func_020805c4(this)));
        if (p) {
            r = p + 0x28;
        }
    }
    return r;
}

s32 Unk_0207fb80::func_0207fc50(s32 n) {
    Unk_0207fb80 *p = this;
    s32 i;
    for (i = 0; i < n; i++) {
        if (!func_020030b4(p->unk_568 + (0x6c0 - 0x568))) {
            return i;
        }
        p = (Unk_0207fb80 *)((u8 *)p + 0x700);
    }
    return -1;
}

void func_0207fc8c(u16 *out, void *idx) {
    *out = 0x1380;
    if (func_020030b4(func_020805c4(idx))) {
        u8 *p = func_020815b4(func_02002ff8(func_020805c4(idx)));
        if (p) {
            u32 v = p[0x2e];
            *out = v < 0x20 ? (u16)(0x1380 + v) : 0x1380;
        }
    }
}

void Unk_0207fb80::func_0207fcdc(u16 *p) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1380 && v <= 0x139f) {
        r = TRUE;
    }
    if (r) {
        s32 i;
        if (v >= 0x1380 && v <= 0x139f) {
            i = v - 0x1380;
        } else {
            i = -1;
        }
        unk_6f4 = i;
    }
}

void func_0207fd18(u16 *out, Unk_0207fb80 *o) {
    u16 r = 0x1380;
    *out = r;
    u32 v = o->unk_6f4;
    if (v < 0x20) {
        if (v < 0x20) {
            r = v + 0x1380;
        }
        *out = r;
    }
}

void func_0207fd3c(u16 *out, void *idx) {
    *out = 0x11a8;
    if (func_020030b4(func_020805c4(idx))) {
        u8 *p = func_020815b4(func_02002ff8(func_020805c4(idx)));
        if (p) {
            u32 v = *(u16 *)(p + 0x2c);
            *out = v < 0x100 ? (u16)(0x11a8 + v) : 0x11a8;
        }
    }
}

void Unk_0207fb80::func_0207fd90(u16 *p) {
    unk_6ec = *p;
}

u16 *Unk_0207fb80::func_0207fd9c() {
    return &unk_6ec;
}

BOOL Unk_0207fb80::func_0207fda8() {
    s32 t = func_0207fdc4();
    BOOL r = FALSE;
    s32 m = -1;
    if (t != m) {
        r = TRUE;
    }
    return r;
}

s32 Unk_0207fb80::func_0207fdc4() {
    u32 obj[7];
    void *p = func_02065634(unk_568);
    if (p) {
        func_020942d8(obj, p);
        if (func_02094218(obj)) {
            s32 r = func_0207f88c(this, obj);
            if (func_0207f86c(this, r)) {
                if (func_02080d90()) {
                    func_020942c8(obj);
                    return r;
                }
            }
        }
        func_020942c8(obj);
    }
    return -1;
}

void Unk_0207fb80::func_0207fe28() {
    if (func_020030b4(func_020805c4(this))) {
        if ((u32)data_021d735c != 0) {
            s32 i;
            for (i = 0; i < 4; i++) {
                void *p = func_02097868(data_021d735c, i);
                if (p) {
                    if (func_02094218(func_0209888c(p))) {
                        func_0207fe78(this, p);
                    }
                }
            }
        }
    }
}

extern "C" void func_0207fe78(void *t, void *p) {
    u32 obj[8];
    void *r6 = func_020805c4(t);
    if (func_020030b4(r6)) {
        if (p) {
            void *q = func_0209888c(p);
            if (func_02094218(q)) {
                if (!func_02094058(q)) {
                    if (func_0207f854(t, q)) {
                        func_02063888(obj);
                        u32 g = (u32)data_021d7352;
                        if (g != 0) {
                            if (func_02063954((void *)g)) {
                                func_020638d0((void *)g, obj);
                                func_0203ce4c(2, obj);
                            }
                        }
                        func_02059900(data_020e0660, (u8)func_02063b8c(5), q, r6, 0, -1);
                        func_02063870(obj);
                    }
                }
            }
        }
    }
}

static inline BOOL Unk_0207ff5c_B(s32 v) {
    if (v) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0207fb80::func_0207ff14(void *a) {
    if ((u32)data_021d735c != 0) {
        s32 i;
        for (i = 0; i < 4; i++) {
            void *p = func_02097868(data_021d735c, i);
            if (p) {
                if (func_02094218(func_0209888c(p))) {
                    func_0207ff5c(this, p, a);
                }
            }
        }
    }
}

extern "C" void func_0207ff5c(void *t, void *p, void *q) {
    u32 buf[2];
    u8 buf2[8];
    u32 str[12];
    void *r7 = func_020805c4(t);
    if (!p) {
        p = func_0209750c();
    }
    if (func_020030b4(r7) && p) {
        void *r6 = func_0209888c(p);
        if (func_02094218(r6) && !func_02094058(r6) && !func_02098044(p, 1)) {
            u32 ok = 0;
            buf[0] = ok;
            buf[1] = ok;
            if (q == 0) {
                func_0209d498(buf);
            } else {
                func_02116048(q, buf, 8);
            }
            func_02116048(buf, buf2, 8);
            if (Unk_0207ff5c_B(func_0203f2e0(0x13, buf2, 0))) {
                if (((u8 *)buf)[2] >= 6) {
                    ok = 1;
                }
            }
            if (ok) {
                void *e = func_0207f854(t, r6);
                if (e) {
                    if (func_02080dd8() >= 0x40) {
                        if (!func_0208098c(e)) {
                            func_020b4154(str);
                            func_020b3270(str, ((u8 *)buf)[5] + 0x7d0, 4, 0, 0, 0);
                            func_0203ce4c(2, str);
                            if (func_02059900(data_020e0668, (u8)func_02063b8c(3), r6, r7, 0, 2)) {
                                func_020809b4(e);
                            }
                            func_020b413c(str);
                        }
                    }
                }
            }
        }
    }
}

void Unk_0207fb80::func_02080078(void *a) {
    if ((u32)data_021d735c != 0) {
        s32 i;
        for (i = 0; i < 4; i++) {
            void *p = func_02097868(data_021d735c, i);
            if (p) {
                func_020800b0(this, p, a);
            }
        }
    }
}

extern "C" void func_020800b0(void *t, void *p, void *q) {
    u16 h[2];
    u32 buf[2];
    u32 o1[2];
    u32 o2[2];
    void *r10 = func_020805c4(t);
    if (!p) {
        p = func_0209750c();
    }
    if (func_020030b4(r10) && p) {
        void *r7 = func_0209888c(p);
        if (func_02094218(r7) && !func_02094058(r7) && !func_02098044(p, 1)) {
            u32 z = 0;
            buf[0] = z;
            buf[1] = z;
            u8 *r5 = (u8 *)func_02098308(p);
            u32 ok = 0;
            if (q == 0) {
                func_0209d498(buf);
            } else {
                func_02116048(q, buf, 8);
            }
            if (r5[1] == ((u8 *)buf)[4] && r5[0] == ((u8 *)buf)[3] && ((u8 *)buf)[2] >= 6) {
                ok = 1;
            }
            if (ok) {
                void *e = func_0207f854(t, r7);
                if (e) {
                    if (func_02080dd8() >= 0x40) {
                        if (!func_020809c8(e)) {
                            h[0] = 0xfff1;
                            u16 *hp = 0;
                            func_0206338c(o1, data_020cbfc0[func_02063b8c(3)], hp);
                            o2[0] = o1[0];
                            o2[1] = o1[1];
                            func_02062f94(&h[1], o2, hp, hp, 1, 1, hp);
                            h[0] = h[1];
                            func_02063388(o2);
                            if (h[0] != 0xfff1) {
                                hp = h;
                            }
                            if (func_02059900(data_020e0674, (u8)func_02063b8c(3), r7, r10, hp, -1)) {
                                func_020809f0(e);
                            }
                            func_02063388(o1);
                        }
                    }
                }
            }
        }
    }
}

void Unk_0207fb80::func_020801fc(void *p, void *q) {
    void *r;
    u32 v1c;
    u32 x;
    u8 c;
    u16 res, ha, hb, hc, hd;
    u32 v30;
    u32 o[7];
    u32 str80[13];
    u32 t1[2], t3[2], t5[2], t2[2], t4[2], t6[2];
    r = func_020805c4(this);
    if (p == 0) return;
    if (func_02098044(p, 1)) return;
    if (!func_020030b4(r)) return;
    void *r7 = func_0209888c(p);
    if (!func_02094218(r7)) return;
    void *e = func_0207f854(this, r7);
    s32 k = func_0206c884(q);
    func_02094030(o);
    switch (k) {
    case 1: {
        s32 t = func_02063b8c(3);
        func_0207c3dc(data_020e0680, t, r7, r, 0);
        if (e) {
            func_02080da4(e, -3);
        }
        break;
    }
    case 2: {
        res = 0xfff1;
        func_020a71d0(str80);
        v1c = 0;
        v30 = 0;
        func_020940d0(r7, o);
        func_0203ce4c(0, o);
        s32 i;
        for (i = 0; i < 6; i++) {
            x = func_0209b570(&v30, i);
            func_020a7c3c(str80);
            c = v30;
            func_020b35ac(str80, &c, x);
            func_0203ce4c(i + 2, str80);
        }
        if (func_020655d0(q) != 0xfff1) {
            s32 w = func_0206c878(q);
            if (w <= 0x20) {
                if (func_02063b8c(2) == 0) {
                    func_0206338c(t1, (void *)2, 0);
                    t2[0] = t1[0];
                    t2[1] = t1[1];
                    func_02062f94(&ha, t2, 0, 0, 1, 1, 0);
                    res = ha;
                    func_02063388(t2);
                    func_02063388(t1);
                } else {
                    func_02062ad4(&hb, 0x1518, 5, 0, 0, 0, 1, 10, 0, 1);
                    res = hb;
                }
            } else if (w <= 0x2f) {
                func_0206338c(t3, 0, 0);
                t4[0] = t3[0];
                t4[1] = t3[1];
                func_02062f94(&hc, t4, 0, 0, 1, 1, 0);
                res = hc;
                func_02063388(t4);
                func_02063388(t3);
            } else {
                func_0206338c(t5, data_020cbfcc[func_02063b8c(3)], 0);
                t6[0] = t5[0];
                t6[1] = t5[1];
                func_02062f94(&hd, t6, 0, 0, 1, 1, 0);
                res = hd;
                func_02063388(t6);
                func_02063388(t5);
            }
            if (res != 0xfff1) {
                v1c = 10;
            }
        }
        func_0207c47c(data_020e0688, v1c, 10, r7, r, &res);
        if (e) {
            if (func_020655d0(q) != 0xfff1) {
                func_02080da4(e, 5);
            } else {
                func_02080da4(e, 3);
            }
        }
        func_020a71b8(str80);
        break;
    }
    }
    func_02094018(o);
}

BOOL Unk_0207fb80::func_02080450(u16 *p) {
    u16 o[12];
    void *r6 = func_02065634(unk_568);
    if (func_02094218(p) && r6) {
        func_020942d8(o, r6);
        if (p[0] == o[0] && !func_02128930(p + 1, o + 1, 8) && func_020941e8(p, o) && func_0207f854(this, p) && func_02080d90()) {
            func_020942c8(o);
            return TRUE;
        }
        func_020942c8(o);
    }
    return FALSE;
}
