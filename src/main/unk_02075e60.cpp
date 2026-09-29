#include "types.h"

class Unk_020cbb18 {
public:
    /* 0x00 */ u8 unk_00[0x64];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u8 unk_68[0x8];
    /* 0x70 */ void *unk_70;
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_020e416c;
extern u8 data_ov003_02258efc;
extern void *data_021f482c;
extern void (*data_020cbb1c[])(u32);
extern void (*data_020cbb24[])(u8 *, u32);
extern u8 data_020cbb2c[];
extern u16 data_020cbbd4[];
extern void (*data_020cbd60[])(void *);
extern void (*data_020cbe78[])(void *, u32, u32);

s32 func_02072770(Unk_020cbb18 *g, void *out, u32 idx);
void func_ov003_02226e70(u32 v);
u32 func_ov003_02226180(u32 v);
s32 func_ov003_02227100(u32 v);
s32 func_02072968(Unk_020cbb18 *g, u32 i);
void *func_02072970(Unk_020cbb18 *g, u32 i);
void func_02072960(Unk_020cbb18 *g, u32 i, s32 v);
void func_020728d4(Unk_020cbb18 *g);
void func_020728a4(Unk_020cbb18 *g, void *p, s32 n);
void func_02072824(Unk_020cbb18 *g, u32 a, u32 b);
void func_020ac7e8(u32 a);
void func_020ac7f8(void *p, u32 a);
void func_0209c3cc(void *p);
void func_020b1234(void *p, u32 a);
void func_020b1260(void *p, u32 a);
void func_020b1388(void *p);
void func_02051f40(u32 a);
void func_02051f50(u32 a);
void func_02051f68(void *p, u32 a);
void func_02051fcc(void *p);
void func_020520d0(u32 a, void *p);
void func_02052134(u32 a, void *p);
void func_020520a8(u32 a, void *p);
void func_0205218c(void *p);
void func_020521fc(void *p);
void func_0203eb60(void *p, u32 a);
void *func_020e8618(void *g, u32 a);
void func_020e85fc(void *g, void *p);
void func_0206f804(void *p, u32 a);
void func_02070560(void *p);
void func_02034048(void *p);
void *func_02076bb0(u32 a, u32 b);
void func_02072994(Unk_020cbb18 *g, void *p);
void func_02115fb4(void *p, u32 a, u32 b);
void func_02116048(void *src, void *dst, u32 n);
s32 func_02063a04(void *a, void *b, u32 n);
void func_020842c0(u32 a, u32 b);
void func_020843c4(u32 a, u32 b);
void func_02084404(u32 a, u32 b);
void func_020954f8(u32 a, u32 b);
void func_02038828(u32 a, u32 b, u32 c);
void func_ov003_0222e640(u32 a, u32 b, u32 c);
void func_020769c4(u32 a, s32 b);
void func_02076a6c(u32 a, s32 b, s32 c);
s32 func_020720f8();
s32 func_020eaca0();
void func_020723d4(Unk_020cbb18 *g);
s32 func_02072ddc(Unk_020cbb18 *g, u32 n);
void func_02076bf0(s32 p, u32 a, u32 b);
void func_020723ec(Unk_020cbb18 *g, u32 n);
u32 func_020723e0(Unk_020cbb18 *g);
void func_0207664c(u32 i); u32 func_020766e0(u32 i); void func_02076610(u32 a, s16 *b); void func_0207663c(u32 a, s32 *b);

static inline BOOL Unk_02075e60_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

struct Unk_02075e98_Nib { u8 lo : 4; u8 hi : 4; };

void func_02075e60(u32 a) {
    u8 b;
    func_02072770(data_020cbb18, &b, a);
    if (Unk_02075e60_IsZero(data_020e416c)) {
        func_ov003_02226e70(b);
    }
}

void func_02075e98(u32 a) {
    volatile u8 n;
    if (Unk_02075e60_IsZero(data_020e416c)) {
        Unk_020cbb18 *g = data_020cbb18;
        func_02072770(g, (void *)&n, a);
        u32 v = n;
        u32 h = (v << 20) >> 24;
        n = (v & 0xf) | 0x10;
        u32 t = n;
        if (t == 1) {
            data_ov003_02258efc = 1;
        } else {
            h--;
            if (h == (u32)g->unk_64) {
                data_ov003_02258efc = 0;
                func_ov003_02227100(t);
            } else {
                data_ov003_02258efc = 1;
            }
        }
    }
}

void func_02075f0c(u32 a, u32 b, u32 c, u32 d) {
    struct L { volatile u8 b; volatile u8 f; } l;
    l.f = 1;
    Unk_020cbb18 *g = data_020cbb18;
    func_02072770(g, (void *)&l, a);
    if (Unk_02075e60_IsZero(data_020e416c)) {
        l.f = func_ov003_02226180(l.b);
    }
    func_020728d4(g);
    if (l.f == 0) {
        l.b &= 0xf;
        l.b |= d << 4;
        l.b += 0x10;
        g = data_020cbb18;
        func_020728a4(g, (void *)&l, 1);
        func_02072824(g, 0x29, 7);
    } else {
        g = data_020cbb18;
        func_020728a4(g, (void *)&l.f, 1);
        func_02072824(g, 0x29, d);
    }
}

void func_02075fac(u32 a, u32 b, u32 c, u32 d) { func_020ac7e8(d); }

void func_02075fb8(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, a);
    func_020ac7f8(buf, d);
}

void func_02075fe0(u32 a) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, a);
    func_0209c3cc(buf);
}

void func_02076000(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, a);
    func_020b1234(buf, d);
}

void func_02076028(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, a);
    func_020b1260(buf, d);
}

void func_02076050(u32 a) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, a);
    func_020b1388(buf);
}

void func_02076070(u32 a, u32 b, u32 c, u32 d) { func_02051f40(d); }
void func_0207607c() { func_02051f50(0); }
void func_02076088() { func_02051f50(1); }

void func_02076094(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, 3);
    func_02051f68(buf, d);
}

void func_020760bc(u32 a) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, a);
    func_02051fcc(buf);
}

void func_020760dc(u32 a, u32 b, u32 c) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, 4);
    func_020520d0(c, buf);
}

void func_02076104(u32 a, u32 b, u32 c) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, 4);
    func_02052134(c, buf);
}

void func_0207612c(u32 a, u32 b, u32 c) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, 4);
    func_020520a8(c, buf);
}

void func_02076154(u32 a) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, a);
    func_0205218c(buf);
}

void func_02076174(u32 a) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, a);
    func_020521fc(buf);
}

void func_02076194(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, a);
    func_0203eb60(buf, d);
}

void func_020761bc(u32 a, u32 b, u32 c, u32 d) {
    void *g = data_021f482c;
    void *r = func_020e8618(g, a);
    func_02072770(data_020cbb18, r, a);
    func_0206f804(r, d);
    func_020e85fc(g, r);
}

void func_02076200(u32 a) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, a);
    func_02070560(buf);
}

void func_02076220(u32 a) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, a);
    func_02034048(buf);
}

void func_02076240() {
    void *p = func_02076bb0(0x68c, 4);
    func_02072994(data_020cbb18, p);
    if (p) {
        func_02115fb4(p, 0, 0x68c);
    }
    for (s32 i = 0; i < 0x46; i++) {
        func_0207664c(i);
    }
}

void func_02076280(u32 a, u32 b, u32 c, s32 d) {
    Unk_020cbb18 *g = data_020cbb18;
    s32 r = func_02072968(g, a);
    u32 sz = func_020766e0(a);
    void *obj = func_02072970(g, a);
    if (r == 0 && d == 0) {
        func_02116048(obj, g->unk_70, sz);
    }
    data_020cbe78[a](obj, b, c);
    if (d != 0) {
        func_02072960(g, a, 1);
    } else if (r == 0) {
        Unk_020cbb18 *h = data_020cbb18;
        s32 v = func_02063a04(obj, h->unk_70, sz);
        func_02072960(h, a, v);
    }
}
void func_02076308(u32 a) { func_020842c0(a, 0x45); }
void func_02076314(u32 a) { func_020842c0(a, 0x44); }
void func_02076320(u32 a) { func_020842c0(a, 0x43); }
void func_0207632c(u32 a) { func_020842c0(a, 0x42); }
void func_02076338(u32 a) { func_020842c0(a, 0x41); }
void func_02076344(u32 a) { func_020842c0(a, 0x40); }
void func_02076350(u32 a) { func_020842c0(a, 0x3f); }
void func_0207635c(u32 a) { func_020842c0(a, 0x3e); }
void func_02076368(u32 a) { func_020842c0(a, 0x3d); }
void func_02076374(u32 a) { func_020842c0(a, 0x3c); }
void func_02076380(u32 a) { func_020842c0(a, 0x3b); }
void func_0207638c(u32 a) { func_020842c0(a, 0x3a); }
void func_02076398(u32 a) { func_020842c0(a, 0x39); }
void func_020763a4(u32 a) { func_020842c0(a, 0x38); }
void func_020763b0(u32 a) { func_020842c0(a, 0x37); }
void func_020763bc(u32 a) { func_020842c0(a, 0x36); }
void func_020763c8(u32 a) { func_020842c0(a, 0x35); }
void func_020763d4(u32 a) { func_020842c0(a, 0x34); }
void func_020763e0(u32 a) { func_020842c0(a, 0x33); }
void func_020763ec(u32 a) { func_020842c0(a, 0x32); }
void func_020763f8(u32 a) { func_020842c0(a, 0x31); }
void func_02076404(u32 a) { func_020842c0(a, 0x30); }
void func_02076410(u32 a) { func_020842c0(a, 0x2f); }
void func_0207641c(u32 a) { func_020842c0(a, 0x2e); }
void func_02076428(u32 a) { func_020842c0(a, 0x2d); }
void func_02076434(u32 a) { func_020842c0(a, 0x2c); }
void func_02076440(u32 a) { func_020842c0(a, 0x2b); }
void func_0207644c(u32 a) { func_020842c0(a, 0x2a); }
void func_02076458(u32 a) { func_020842c0(a, 0x29); }
void func_02076464(u32 a) { func_020842c0(a, 0x28); }
void func_02076470(u32 a) { func_020842c0(a, 0x27); }
void func_0207647c(u32 a) { func_020842c0(a, 0x26); }
void func_02076488(u32 a) { func_020842c0(a, 0x25); }
void func_02076494(u32 a) { func_020842c0(a, 0x24); }
void func_020764a0(u32 a) { func_020842c0(a, 0x23); }
void func_020764ac(u32 a) { func_020842c0(a, 0x22); }
void func_020764b8(u32 a) { func_020842c0(a, 0x21); }
void func_020764c4(u32 a) { func_020842c0(a, 0x20); }
void func_02076560(u32 a) { func_020843c4(a, 0x13); }
void func_0207656c(u32 a) { func_020843c4(a, 0x12); }
void func_02076578(u32 a) { func_020843c4(a, 0x11); }
void func_02076584(u32 a) { func_020843c4(a, 0x10); }
void func_02076590(u32 a) { func_020843c4(a, 0xf); }
void func_0207659c(u32 a) { func_020843c4(a, 0xe); }
void func_020765a8(u32 a) { func_020843c4(a, 0xd); }
void func_020765b4(u32 a) { func_020843c4(a, 0xc); }
void func_020765c0(u32 a) { func_020954f8(a, 0xb); }
void func_020765cc(u32 a) { func_020954f8(a, 0xa); }
void func_020765d8(u32 a) { func_020954f8(a, 0x9); }
void func_020765e4(u32 a) { func_020954f8(a, 0x8); }
void func_02076674(u32 a) { func_02084404(a, 0x13); }
void func_02076680(u32 a) { func_02084404(a, 0x12); }
void func_0207668c(u32 a) { func_02084404(a, 0x11); }
void func_02076698(u32 a) { func_02084404(a, 0x10); }
void func_020766a4(u32 a) { func_02084404(a, 0xf); }
void func_020766b0(u32 a) { func_02084404(a, 0xe); }
void func_020766bc(u32 a) { func_02084404(a, 0xd); }
void func_020766c8(u32 a) { func_02084404(a, 0xc); }
void func_020764d0(u32 a, u32 b) { func_ov003_0222e640(a, 0x1f, b); }
void func_020764dc(u32 a, u32 b) { func_ov003_0222e640(a, 0x1e, b); }
void func_020764e8(u32 a, u32 b) { func_ov003_0222e640(a, 0x1d, b); }
void func_020764f4(u32 a, u32 b) { func_ov003_0222e640(a, 0x1c, b); }
void func_02076500(u32 a, u32 b) { func_ov003_0222e640(a, 0x1b, b); }
void func_0207650c(u32 a, u32 b) { func_ov003_0222e640(a, 0x1a, b); }
void func_02076518(u32 a, u32 b) { func_ov003_0222e640(a, 0x19, b); }
void func_02076524(u32 a, u32 b) { func_ov003_0222e640(a, 0x18, b); }
void func_02076530(u32 a, u32 b) { func_02038828(a, 0x17, b); }
void func_0207653c(u32 a, u32 b) { func_02038828(a, 0x16, b); }
void func_02076548(u32 a, u32 b) { func_02038828(a, 0x15, b); }
void func_02076554(u32 a, u32 b) { func_02038828(a, 0x14, b); }

void func_020765f0(u32 a, s16 *b) { func_02076610(a, b); }
void func_020765f8(u32 a, s16 *b) { func_02076610(a, b); }
void func_02076600(u32 a, s16 *b) { func_02076610(a, b); }
void func_02076608(u32 a, s16 *b) { func_02076610(a, b); }
void func_02076610(u32 a, s16 *b) { func_020769c4(a, *b); }
void func_0207661c(u32 a, s32 *b) { func_0207663c(a, b); }
void func_02076624(u32 a, s32 *b) { func_0207663c(a, b); }
void func_0207662c(u32 a, s32 *b) { func_0207663c(a, b); }
void func_02076634(u32 a, s32 *b) { func_0207663c(a, b); }
void func_0207663c(u32 a, s32 *b) { func_02076a6c(a, b[0], b[2]); }

void func_0207664c(u32 i) {
    void (*f)(void *) = data_020cbd60[i];
    if (f) {
        void *o = func_02072970(data_020cbb18, i);
        f(o);
    }
}

u32 func_020766d4(u32 i) { return data_020cbbd4[i]; }
u32 func_020766e0(u32 i) { return data_020cbb2c[i]; }

void func_020766ec(u8 *p, u32 n) {
    struct { u8 id; u8 pad; u16 len; } h;
    u8 buf[3];
    while (n != 0) {
        func_02116048(p, buf, 3);
        p += 3;
        n -= 3;
        func_02116048(buf, &h.len, 2);
        func_02116048(buf + 2, &h.id, 1);
        u32 len = h.len;
        u32 id = h.id;
        data_020cbb24[id](p, len);
        p += len;
        n -= len;
    }
}

s32 func_02076744(u32 a) {
    struct { u16 len; u8 hdr[3]; } l;
    func_020720f8();
    if (func_020eaca0() == 0) {
        return 0;
    }
    Unk_020cbb18 *g = data_020cbb18;
    func_020723d4(g);
    func_02076bf0(func_02072ddc(g, 4), 0, 0xd);
    func_020723ec(g, 1);
    s32 i = 0;
    goto test0;
loop0:
    {
        u32 s = func_020723e0(g);
        u8 *dst = (u8 *)func_02072ddc(g, 4) + s;
        func_020723ec(g, s + 3);
        data_020cbb1c[i](a);
        u32 e = func_020723e0(g);
        if (e <= s + 3) {
            func_020723ec(g, s);
        } else {
            l.len = e - s - 3;
            func_02116048(&l.len, l.hdr, 2);
            l.hdr[2] = i;
            func_02116048(l.hdr, dst, 3);
        }
    }
    i++;
test0:
    if (i < 2) goto loop0;
    return 1;
}
}
