#include "types.h"

extern "C" {
void func_02116048(const void *src, void *dst, u32 n);
BOOL func_02072e44(void *g);
BOOL func_02072e88(void *g, u32 i);
s32 func_0207521c(u32 x, u32 p, u32 len, u32 b, u32 c, u32 d);
u32 func_0207691c(u8 *p);
void func_02076ae8(u8 *src, u8 *a, u8 *b);
void func_02076934(void *out, u16 v);
void func_02076b08(void *out, u32 a, u32 b);
u32 func_020766d4(u32 a);
u32 func_020766e0();
u32 func_02076c0c(s32 a);
s32 func_020b50e8();
s32 func_020a6214(u32 a);
BOOL func_020a62f8(u32 a);
BOOL func_020a62a0();
void func_020a5cc0(s32 a);
void func_020741b0();
void func_020741a8();
}

struct Unk_02072408_Row {
    u32 v[3];
};

struct Unk_02072408_Tail {
    u32 pad[9];
    u32 a4c[3];
    u32 a58[3];
};

struct Unk_020cbb18 {
    u8 pad_00[0x18];
    u32 unk_18[3];
    u8 *unk_24;
    union {
        Unk_02072408_Row unk_28[4];
        Unk_02072408_Tail unk_28t;
    };
    s32 unk_64;
    u32 unk_68;
    u8 unk_6c;
    u8 pad_6d[0x78 - 0x6d];
    u8 *unk_78;
    u8 unk_7c[0xc4 - 0x7c];
    u8 *unk_c4;
    u32 unk_c8;
    u8 *unk_cc;
    u8 *unk_d0;
    u8 *unk_d4;
    u8 *unk_d8;
    u32 unk_dc;
    u8 *unk_e0;
    u8 *unk_e4;
    u32 unk_e8;
    u8 *unk_ec;
    u32 unk_f0;
    u8 *unk_f4;
    u32 unk_f8;
    u32 unk_fc;
    u32 unk_100;
    u8 *unk_104;
    u32 unk_108;
    u32 unk_10c;
    u8 pad_110[4];
    s16 unk_114;
    s16 unk_116;

    void func_02072408();
    s16 func_02072418();
    s16 func_02072424();
    void func_02072430(s16 v);
    void func_0207243c(s16 v);
    u32 func_02072448();
    void func_02072454(u32 v);
    void func_02072460();
    void func_0207246c(u32 v);
    u32 func_02072478();
    void func_02072484(u8 *src, u32 n);
    u32 func_020724ac();
    void func_020724b8(u32 v);
    void func_020724c4();
    void func_020724d0(u32 v);
    u32 func_020724d8();
    void func_020724e0();
    u32 func_02072558();
    void func_02072560(u32 v);
    void func_02072568();
    void func_02072574(u8 *v);
    u8 *func_0207257c();
    void func_02072584();
    u32 func_02072620();
    void func_02072628(u32 v);
    void func_02072630();
    void func_0207263c(u8 *v);
    u8 *func_02072644();
    void func_0207264c();
    u32 func_02072744();
    void func_0207274c(u32 v);
    void func_02072754();
    void func_02072760(u8 *v);
    u8 *func_02072768();
    void func_02072770(u8 *src, u32 n);
    u8 *func_02072798();
    void func_020727a0(u8 *v);
    u32 func_020727f8();
    void func_02072800(u32 v);
    void func_02072808();
    void func_02072814(u8 *v);
    u8 *func_0207281c();
    void func_02072824(u32 a, u32 b);
    void func_020728a4(u8 *p, u32 n);
    void func_020728d4();
    u32 func_02072900();
    void func_02072908(u32 v);
    void func_02072910();
    void func_0207292c(u8 *v);
    u8 *func_02072938();
    void func_02072940();
    void func_02072960(s32 i, u32 v);
    u32 func_02072968(s32 i);
    u8 *func_02072970(u32 i);
    void func_02072994(u8 *v);
    u8 *func_02072998();
    void func_0207299c();
    void func_020729a8(u32 v);
    BOOL func_020729bc(u32 v);
    BOOL func_020729cc(u32 v);
    u32 func_020729dc(s32 a);
    u32 func_02072a04(s32 a);
    void func_02072a24(s32 a);
    void func_02072a50(s32 a);
    void func_02072a6c();
    void func_02072a84();
    void func_02072c38();
    void func_02072c50(s32 a, u32 b);
    void func_02072c60(s32 a, u32 b, u32 c);
    u32 func_02072c80(s32 a, u32 b);
    void func_02072ca4(u8 *v);
    u8 *func_02072ca8(s32 a, s32 b);
    u8 *func_02072cb8(s32 a, s32 b);
    void func_02072cfc();
    void func_02072d0c(s32 a);
    void func_02072d28(s32 a, u32 v);
    u32 func_02072d44(s32 a);
};

extern Unk_020cbb18 *data_020cbb18;

void Unk_020cbb18::func_02072408() { unk_114 = -1; }
s16 Unk_020cbb18::func_02072418() { return unk_116; }
s16 Unk_020cbb18::func_02072424() { return unk_114; }
void Unk_020cbb18::func_02072430(s16 v) { unk_116 = v; }
void Unk_020cbb18::func_0207243c(s16 v) { unk_114 = v; }
u32 Unk_020cbb18::func_02072448() { return unk_10c; }
void Unk_020cbb18::func_02072454(u32 v) { unk_10c = v; }
void Unk_020cbb18::func_02072460() { func_02072454(0); }
void Unk_020cbb18::func_0207246c(u32 v) { unk_108 = v; }
u32 Unk_020cbb18::func_02072478() { return unk_108; }
void Unk_020cbb18::func_02072484(u8 *src, u32 n) {
    func_02116048(src, unk_104, n);
    unk_104 += n;
}
u32 Unk_020cbb18::func_020724ac() { return unk_100; }
void Unk_020cbb18::func_020724b8(u32 v) { unk_100 = v; }
void Unk_020cbb18::func_020724c4() { func_020724b8(0); }
void Unk_020cbb18::func_020724d0(u32 v) { unk_fc = v; }
u32 Unk_020cbb18::func_020724d8() { return unk_fc; }

struct Unk_020724e0_Loc {
    u8 a;
    u8 b;
    u8 buf[5];
};

void Unk_020cbb18::func_020724e0() {
    Unk_020724e0_Loc l;
    u32 size = func_02072558();
    if (size != 0) {
        u32 pos = 0;
        u8 *p = func_0207257c();
        while (pos < size) {
            func_02116048(p, l.buf, 5);
            p += 5;
            pos += 5;
            func_02076ae8(&l.buf[4], &l.a, &l.b);
            u32 t = l.b;
            u32 len = func_0207691c(l.buf);
            func_0207521c(l.buf[2], (u32)p, len, l.buf[3], l.a, t);
            p += len;
            pos += len;
        }
        func_02072568();
    }
}
u32 Unk_020cbb18::func_02072558() { return unk_f8; }
void Unk_020cbb18::func_02072560(u32 v) { unk_f8 = v; }
void Unk_020cbb18::func_02072568() { func_02072560(0); }
void Unk_020cbb18::func_02072574(u8 *v) { unk_f4 = v; }
u8 *Unk_020cbb18::func_0207257c() { return unk_f4; }

void Unk_020cbb18::func_02072584() {
    Unk_020724e0_Loc l;
    u32 size = func_02072620();
    if (size != 0) {
        u8 *p = func_02072644();
        func_02116048(p, l.buf, 5);
        func_02076ae8(&l.buf[4], &l.a, &l.b);
        if (l.a == func_020b50e8()) {
            u32 pos = 0;
            while (pos < size) {
                func_02116048(p, l.buf, 5);
                p += 5;
                pos += 5;
                func_02076ae8(&l.buf[4], &l.a, &l.b);
                u32 t = l.b;
                u32 len = func_0207691c(l.buf);
                func_0207521c(l.buf[2], (u32)p, len, l.buf[3], l.a, t);
                p += len;
                pos += len;
            }
            func_02072630();
        }
    }
}
u32 Unk_020cbb18::func_02072620() { return unk_f0; }
void Unk_020cbb18::func_02072628(u32 v) { unk_f0 = v; }
void Unk_020cbb18::func_02072630() { func_02072628(0); }
void Unk_020cbb18::func_0207263c(u8 *v) { unk_ec = v; }
u8 *Unk_020cbb18::func_02072644() { return unk_ec; }

struct Unk_0207264c_Loc {
    u8 a;
    u8 b;
    u8 buf[5];
    u8 buf3[5];
    u8 buf2[5];
};

void Unk_020cbb18::func_0207264c() {
    Unk_0207264c_Loc l;
    s32 v6 = unk_64;
    if (func_02072e88(this, v6)) {
        u32 total = func_02072744();
        if (total != 0) {
            u8 *p = func_02072768();
            func_02116048(p, l.buf, 5);
            func_02076ae8(&l.buf[4], &l.a, &l.b);
            s32 v = func_020a6214(l.a);
            if (v >= 4) return;
            if (v == v6) {
                u32 c6 = func_02072558();
                u8 *dst = func_0207257c() + c6;
                u32 cnt = 0;
                u32 len;
                while (cnt < total) {
                    func_02116048(p, l.buf3, 5);
                    len = func_0207691c(l.buf3);
                    func_02116048(p, dst, len + 5);
                    dst += len + 5;
                    c6 += len + 5;
                    p += len + 5;
                    cnt += len + 5;
                }
                func_02072560(c6);
            } else {
                u32 c6 = 0;
                while (c6 < total) {
                    func_02116048(p, l.buf2, 5);
                    p += 5;
                    c6 += 5;
                    u32 len = func_0207691c(l.buf2);
                    func_020728d4();
                    func_020728a4(p, len);
                    func_02072824(l.buf2[2], l.buf2[3]);
                    p += len;
                    c6 += len;
                }
            }
            func_02072754();
        }
    }
}
u32 Unk_020cbb18::func_02072744() { return unk_e8; }
void Unk_020cbb18::func_0207274c(u32 v) { unk_e8 = v; }
void Unk_020cbb18::func_02072754() { func_0207274c(0); }
void Unk_020cbb18::func_02072760(u8 *v) { unk_e4 = v; }
u8 *Unk_020cbb18::func_02072768() { return unk_e4; }

void Unk_020cbb18::func_02072770(u8 *src, u32 n) {
    u8 *d = func_02072798();
    func_02116048(d, src, n);
    func_020727a0(d + n);
}
u8 *Unk_020cbb18::func_02072798() { return unk_e0; }
void Unk_020cbb18::func_020727a0(u8 *v) { unk_e0 = v; }

extern "C" BOOL func_020727a8(void *unused, u8 *buf, u32 n) {
    u32 o = data_020cbb18->func_020727f8();
    if (0x92e - o >= n) {
        Unk_020cbb18 *g = data_020cbb18;
        func_02116048(buf, g->func_0207281c() + o, n);
        g->func_02072800(o + n);
        return TRUE;
    }
    return FALSE;
}
u32 Unk_020cbb18::func_020727f8() { return unk_dc; }
void Unk_020cbb18::func_02072800(u32 v) { unk_dc = v; }
void Unk_020cbb18::func_02072808() { func_02072800(0); }
void Unk_020cbb18::func_02072814(u8 *v) { unk_d8 = v; }
u8 *Unk_020cbb18::func_0207281c() { return unk_d8; }

void Unk_020cbb18::func_02072824(u32 a, u32 b) {
    u8 buf[8];
    if (func_02072e44(this)) {
        if (b - 6 <= 1) {
            func_020a5cc0(func_020b50e8());
        }
        u32 len = unk_d4 - unk_d0;
        func_02076934(buf, (u16)(len - 5));
        buf[2] = a;
        buf[3] = b;
        func_02076b08(buf + 4, func_020b50e8(), (u8)unk_64);
        func_02116048(buf, unk_d0, 5);
        unk_c8 += len;
        unk_cc = unk_d4;
    }
}
void Unk_020cbb18::func_020728a4(u8 *p, u32 n) {
    if (func_02072e44(this)) {
        func_02116048(p, unk_d4, n);
        unk_d4 += n;
    }
}
void Unk_020cbb18::func_020728d4() {
    if (func_02072e44(this)) {
        unk_d0 = unk_cc;
        unk_d4 = unk_cc + 5;
    }
}
u32 Unk_020cbb18::func_02072900() { return unk_c8; }
void Unk_020cbb18::func_02072908(u32 v) { unk_c8 = v; }
void Unk_020cbb18::func_02072910() {
    func_02072908(0);
    unk_cc = func_02072938();
}
void Unk_020cbb18::func_0207292c(u8 *v) {
    unk_c4 = v;
    unk_cc = v;
}
u8 *Unk_020cbb18::func_02072938() { return unk_c4; }
void Unk_020cbb18::func_02072940() {
    s32 i;
    for (i = 0x45; i >= 0; i--) {
        func_02072960(i, 0);
    }
}
void Unk_020cbb18::func_02072960(s32 i, u32 v) { unk_7c[i] = v; }
u32 Unk_020cbb18::func_02072968(s32 i) { return unk_7c[i]; }
u8 *Unk_020cbb18::func_02072970(u32 i) {
    u8 *p = func_02072998();
    if (p == 0) return 0;
    return p + func_020766d4(i);
}
void Unk_020cbb18::func_02072994(u8 *v) { unk_78 = v; }
u8 *Unk_020cbb18::func_02072998() { return unk_78; }
void Unk_020cbb18::func_0207299c() { func_020729a8(0); }
void Unk_020cbb18::func_020729a8(u32 v) {
    if (v > 4) {
        unk_6c = 0;
        return;
    }
    unk_6c = v;
}
BOOL Unk_020cbb18::func_020729bc(u32 v) {
    if (v == unk_68) return TRUE;
    return FALSE;
}
BOOL Unk_020cbb18::func_020729cc(u32 v) {
    if (v == unk_64) return TRUE;
    return FALSE;
}
u32 Unk_020cbb18::func_020729dc(s32 a) {
    u32 i = func_02076c0c(a);
    u32 c = unk_28t.a58[i];
    if (c >= 3) {
        return unk_28t.a4c[i];
    }
    u32 r = c + unk_28t.a4c[i];
    if (r >= 3) r -= 3;
    return r;
}
u32 Unk_020cbb18::func_02072a04(s32 a) {
    u32 i = func_02076c0c(a);
    if (unk_28t.a58[i] == 0) return 3;
    return unk_28t.a4c[i];
}
void Unk_020cbb18::func_02072a24(s32 a) {
    u32 i = func_02076c0c(a);
    unk_28t.a58[i] -= 1;
    u32 t = unk_28t.a4c[i] + 1;
    if (t >= 3) t = 0;
    unk_28t.a4c[i] = t;
}
void Unk_020cbb18::func_02072a50(s32 a) {
    u32 i = func_02076c0c(a);
    unk_28t.a58[i] += 1;
}
void Unk_020cbb18::func_02072a6c() {
    u32 *p = unk_28t.a4c;
    u32 *q = unk_28t.a58;
    s32 i;
    for (i = 2; i >= 0; i--) {
        *p++ = 0;
        *q++ = 0;
    }
}

void Unk_020cbb18::func_02072a84() {
    s32 outer;
    u32 i;
    u32 x;
    u32 lim;
    s32 cc;
    u32 k;
    u32 bb;
    u32 dbg;
    u32 len;
    Unk_020cbb18 *g;
    u32 rem;
    u32 n;
    u32 t;
    u8 *p;
    u16 j;
    u8 c;
    u8 a, b;
    u8 buf[5];
    outer = 2;
    g = data_020cbb18;
    do {
        for (i = 0; i < 4; i++) {
            if (func_020729cc(i)) continue;
            x = func_02072a04(i);
            if (x >= 3) continue;
            lim = func_02072c80(i, x) - 1;
            p = func_02072cb8(i, x) + 1;
            j = 0;
            do {
                func_02116048(p, &c, 1);
                p++;
                j = (u16)(j + 1);
                cc = c;
                if (cc >= 0x46) break;
                n = func_020766e0();
                func_02116048(p, func_02072970(cc), n);
                p += n;
                j = (u16)(j + n);
            } while (j < lim);
            k = 0;
            rem = (u16)(lim - j);
            while (k < rem) {
                func_02116048(p, buf, 5);
                p += 5;
                k += 5;
                t = buf[3];
                func_02076ae8(&buf[4], &a, &b);
                bb = b;
                dbg = func_020b50e8();
                len = func_0207691c(buf);
                if (func_020a62f8(unk_64) && t == 7 && a != dbg) {
                    t = func_02072620();
                    u8 *dd = func_02072644() + t;
                    func_02116048(p - 5, dd, len + 5);
                    u32 nf = t; nf += len + 5; func_02072628(nf);
                } else {
                    if (func_020a62a0() == 0 && t == 6) {
                    } else if (t == 6 && a != dbg) {
                    } else if (t == 7 && a != dbg) {
                    } else {
                        func_0207521c(buf[2], (u32)p, len, t, a, bb);
                    }
                }
                p += len;
                k += len;
            }
            func_020741b0();
            g->func_02072c50(i, x);
            g->func_02072a24(i);
            g->func_02072d0c(i);
            func_020741a8();
        }
        outer--;
    } while (outer >= 0);
}

void Unk_020cbb18::func_02072c38() {
    u32 *p = (u32 *)&unk_28[0];
    s32 i;
    for (i = 4; i >= 0; i--) {
        *p++ = 0;
    }
    func_02072a6c();
}
void Unk_020cbb18::func_02072c50(s32 a, u32 b) { func_02072c60(a, b, 0); }
void Unk_020cbb18::func_02072c60(s32 a, u32 b, u32 c) {
    unk_28[func_02076c0c(a)].v[b] = c;
}
u32 Unk_020cbb18::func_02072c80(s32 a, u32 b) {
    return unk_28[func_02076c0c(a)].v[b];
}
void Unk_020cbb18::func_02072ca4(u8 *v) { unk_24 = v; }
u8 *Unk_020cbb18::func_02072ca8(s32 a, s32 b) {
    return unk_24 + ((b + a * 3) << 12);
}
u8 *Unk_020cbb18::func_02072cb8(s32 a, s32 b) {
    if (a >= 4) return unk_24;
    if (func_020729cc(a)) return 0;
    if (a < unk_64) {
        return unk_24 + ((b + a * 3) << 12);
    }
    return unk_24 + ((b + (a - 1) * 3) << 12);
}
void Unk_020cbb18::func_02072cfc() {
    s32 i;
    u32 *p = unk_18;
    for (i = 2; i >= 0; i--) *p++ = 0;
}
void Unk_020cbb18::func_02072d0c(s32 a) { unk_18[func_02076c0c(a)] += 1; }
void Unk_020cbb18::func_02072d28(s32 a, u32 v) { unk_18[func_02076c0c(a)] = v; }
u32 Unk_020cbb18::func_02072d44(s32 a) { return unk_18[func_02076c0c(a)]; }
