#include "types.h"

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;

    BOOL func_020729cc(u32 v);
    u32 func_02072e88(s32 i);
    void func_020728d4();
    void func_020728a4(u8 *src, u32 n);
    void func_02072824(u32 a, u32 b);
    void func_020724c4();
    void func_02072460();
    BOOL func_02072448();
    BOOL func_02072558();
    BOOL func_02072620();
    BOOL func_02072744();
};

extern Unk_020cbb18 *data_020cbb18;
extern u16 data_020e2974;
extern u32 data_020e29d0[2];

extern "C" {
s32 func_020b50e8();
u32 func_020b4994();
s32 func_020a5cc0(s32);
BOOL func_020a62f8(s32);
BOOL func_020a6328(s32);
u32 func_020a6358(s32);
s32 func_020a6280();
void func_020a63a8(s32, s32);
void func_020a63bc(u32, u32, u32, u32, u32);
void func_020a5fb0();
void func_020a5ed8(s32);
void func_020a5e74(s32, u8 *, u8 *, u8 *);
BOOL func_020a6474();
BOOL func_020a6478();
void func_020a66f8(void *);
void func_020a6700(void *, s32 *);
void func_020a6720(void *);
void func_020a672c(void *, s32 *, u8 *);
void func_020a6760(void *, u8 *, u8 *, u8 *);
void func_020a6790(void *);
void func_020a6754(void *);
void func_020a67a0(void *, u8 *, u8 *, u8 *, u32 *);
void func_020a681c(void *, s32, u32, u32, u32, u32);
void *func_020a6838(void *);
void *func_020a6848(void *);
void func_02116048(void *src, void *dst, u32 size);
void func_02133ef8(void *dst, u32 size);
}

struct Unk_020a512c_Ent {
    u32 a;
    u8 b;
    u8 pad[3];
};

struct Unk_020a56c4_Buf {
    u8 v[5];
    Unk_020a56c4_Buf() { func_020a6848(this); }
    ~Unk_020a56c4_Buf() { func_020a6838(this); }
};

struct Unk_020a512c {
    u8 unk_00[12];
    Unk_020a512c_Ent unk_0c[4];
    u32 unk_2c[4];
    u8 unk_3c[4][8];
    u8 unk_5c;
    u8 pad_5d[3];
    s32 unk_60;
    s32 unk_64;
    u8 unk_68[4];
    s32 unk_6c;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    u8 unk_7c;
    u8 pad_7d[3];
    s32 unk_80;
    u32 unk_84[4];

    void func_020a512c(u32 a, u32 b);
    void func_020a5188();
    u32 func_020a5198(s32 i);
    void func_020a51a4(s32 i, u32 v);
    void func_020a51b0();
    s32 func_020a5258();
    void func_020a5260(s32 v);
    u32 func_020a5268();
    void func_020a5270(u32 v);
    void func_020a5278();
    s32 func_020a52a4();
    void func_020a52a8(s32 v);
    s32 func_020a52ac();
    void func_020a52b0(s32 v);
    s32 func_020a52b4();
    void func_020a52b8(s32 v);
    void func_020a52bc();
    s32 func_020a5360();
    void func_020a5364(s32 v);
    void func_020a5368();
    u32 func_020a537c(s32 i);
    void func_020a5384(s32 i, u32 v);
    s32 func_020a538c();
    void func_020a5390(s32 v);
    void func_020a5394();
    s32 func_020a56ac();
    void func_020a56b0(s32 v);
    u32 func_020a56b4();
    void func_020a56bc(u32 v);
    void func_020a56c4();
    void func_020a5760(u32 *a, u32 *b);
    void func_020a5800();
    void func_020a5854();
    s32 func_020a58a0();
    void func_020a58b8(u32 *a, u32 *b);
    void func_020a5908();
    void func_020a59c0();

    /* callees defined elsewhere */
    void func_020a4c28();
    void func_020a4c10();
    void func_020a4bf8();
    void func_020a4bc0();
    void func_020a4770(u32 v);
    void func_020a4c58(u32 v);
    void func_020a4760(u32 v);
    void func_020a4750(u32 v);
    void func_020a4740(u32 v);
};

void Unk_020a512c::func_020a512c(u32 a, u32 b) {
    if (b != 0) {
        func_020a51a4(a, 6);
    } else if (a == 0) {
        func_020a51a4(0, 6);
    } else {
        u8 buf = 6;
        Unk_020cbb18 *o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4(&buf, 1);
        o->func_02072824(1, a);
        func_020a51a4(a, 7);
    }
}

void Unk_020a512c::func_020a5188() {
    u32 *p = unk_84;
    s32 i;
    for (i = 3; i >= 0; i--) *p++ = 7;
}

u32 Unk_020a512c::func_020a5198(s32 i) { return unk_84[i]; }
void Unk_020a512c::func_020a51a4(s32 i, u32 v) { unk_84[i] = v; }

void Unk_020a512c::func_020a51b0() {
    s32 r5 = 4;
    Unk_020cbb18 *o = data_020cbb18;
    s32 saved = o->unk_64;
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (o->func_02072e88(i) != 0 && func_020a62f8(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 != func_020a5258()) {
        if (r5 < 4) {
            if (o->func_020729cc(r5) == 0 && func_020a6328(saved) != 0 &&
                (s32)func_020a6358(r5) == func_020b50e8() && func_020a5cc0(func_020b50e8()) == 0) {
                Unk_020cbb18 *o2 = data_020cbb18;
                o2->func_020728d4();
                o2->func_02072824(0x11, r5);
            }
            func_020a5260(r5);
        } else {
            func_020a5260(4);
        }
    }
}

s32 Unk_020a512c::func_020a5258() { return unk_80; }
void Unk_020a512c::func_020a5260(s32 v) { unk_80 = v; }
u32 Unk_020a512c::func_020a5268() { return unk_7c; }
void Unk_020a512c::func_020a5270(u32 v) { unk_7c = v; }

void Unk_020a512c::func_020a5278() {
    s32 c = func_020a52a4();
    if (c < 4) {
        u32 t = func_020a6358(c);
        if ((s32)t == func_020b50e8()) {
            func_020a52a8(4);
        }
    }
}

s32 Unk_020a512c::func_020a52a4() { return unk_78; }
void Unk_020a512c::func_020a52a8(s32 v) { unk_78 = v; }
s32 Unk_020a512c::func_020a52ac() { return unk_74; }
void Unk_020a512c::func_020a52b0(s32 v) { unk_74 = v; }
s32 Unk_020a512c::func_020a52b4() { return unk_70; }
void Unk_020a512c::func_020a52b8(s32 v) { unk_70 = v; }

void Unk_020a512c::func_020a52bc() {
    s32 r5 = 4;
    s32 i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i) != 0 && func_020a62f8(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 != func_020a5360()) {
        if (r5 < 4) {
            if (o->func_020729cc(r5) == 0 && (s32)func_020a6358(r5) == func_020b50e8() &&
                func_020a6328(r5) != 0 && func_020a5cc0(func_020b50e8()) == 0) {
                Unk_020cbb18 *o2 = data_020cbb18;
                o2->func_020728d4();
                o2->func_02072824(0xd, r5);
            }
            func_020a5364(r5);
        } else {
            func_020a5364(4);
        }
    }
}

s32 Unk_020a512c::func_020a5360() { return unk_6c; }
void Unk_020a512c::func_020a5364(s32 v) { unk_6c = v; }

void Unk_020a512c::func_020a5368() {
    u8 *p = unk_68;
    s32 i;
    for (i = 3; i >= 0; i--) *p++ = 0;
}

u32 Unk_020a512c::func_020a537c(s32 i) { return unk_68[i]; }
void Unk_020a512c::func_020a5384(s32 i, u32 v) { unk_68[i] = v; }
s32 Unk_020a512c::func_020a538c() { return unk_64; }
void Unk_020a512c::func_020a5390(s32 v) { unk_64 = v; }

void Unk_020a512c::func_020a5394() {
    Unk_020cbb18 *o = data_020cbb18;
    s32 r7 = o->unk_64;
    u8 b0, b1, b2, b3, b4, b5;
    s32 best;
    s32 flag;
    s32 i;
    switch ((u32)func_020a56ac()) {
    case 16:
        if (data_020e2974 == 5) {
            func_020a5fb0();
            func_020a5368();
            func_020a5270(0);
            func_020a5ed8(0);
        }
        break;
    case 0:
        if (func_020a62f8(r7) != 0) {
            func_020a56b0(1);
        }
        break;
    case 1:
        if (func_020a6478() != 0) break;
        if (func_020a6474() != 0) break;
        func_020a5e74(r7, &b0, &b1, &b2);
        if (b1 != 0) {
            best = 4;
            for (i = 0; i < 4; i++) {
                if (i != r7 && o->func_02072e88(i) != 0 && b0 == func_020a6358(i)) {
                    best = i;
                    break;
                }
            }
            if (best < 4) {
                func_020a5390(best);
                func_020a56b0(2);
            } else {
                func_020a5390(4);
                func_020a56b0(5);
            }
        } else {
            func_020a5390(4);
            func_020a56b0(4);
        }
        break;
    case 2:
        flag = 1;
        if (func_020a5cc0(func_020b50e8()) == 0) {
            for (i = 3; i >= 0; i--) {
                if (i != r7 && o->func_02072e88(i) != 0) {
                    s32 t = func_020a6358(i);
                    if (t == func_020b50e8() && func_020a537c(i) == 0) {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag != 0) {
            if (o->func_02072744() != 0) break;
            if (o->func_02072620() != 0) break;
            if (o->func_02072558() != 0) break;
            if (func_020a6474() != 0) break;
            func_020a5368();
            o->func_020724c4();
            func_020a56b0(3);
        }
        break;
    case 4:
        if (func_020a5268() == 0 && func_020a5cc0(func_020b50e8()) == 0) break;
        func_020a5270(0);
        func_020a56b0(5);
        break;
    case 8:
        if (func_020a538c() != 4) {
            if (func_020a6328(func_020a538c()) == 0 && func_020a5cc0(func_020b50e8()) == 0) break;
            func_020a56b0(9);
        } else {
            func_020a56b0(9);
        }
        break;
    case 9: {
        u32 v = func_020b4994();
        best = 4;
        for (i = 3; i >= 0; i--) {
            if (i != r7 && o->func_02072e88(i) != 0) {
                func_020a5e74(i, &b3, &b4, &b5);
                if (b3 == v && b4 != 0) {
                    best = i;
                    break;
                }
            }
        }
        if (best < 4) {
            func_020a52b8(best);
            func_020a56bc(0);
            o->func_02072460();
            if (func_020a5cc0(func_020b4994()) == 0) {
                Unk_020cbb18 *o2 = data_020cbb18;
                o2->func_020728d4();
                o2->func_02072824(0xe, func_020a52b4());
            }
            func_020a56b0(10);
        } else {
            func_020a52b8(4);
            func_020a56bc(1);
            func_020a56b0(11);
        }
        break;
    }
    case 10:
        if (o->func_02072448() != 0 || func_020a5cc0(func_020b4994()) != 0) {
            func_020a56b0(11);
        }
        break;
    case 11:
    case 12:
    case 13:
        break;
    case 14:
        func_020a63a8(((Unk_020cbb18 *)o)->unk_64, 1);
        func_020a56b0(15);
        break;
    case 15:
        if (func_020a6280() == 0) {
            func_020a56b0(16);
        }
        break;
    }
}

s32 Unk_020a512c::func_020a56ac() { return unk_60; }
void Unk_020a512c::func_020a56b0(s32 v) { unk_60 = v; }
u32 Unk_020a512c::func_020a56b4() { return unk_5c; }
void Unk_020a512c::func_020a56bc(u32 v) { unk_5c = v; }

void Unk_020a512c::func_020a56c4() {
    u32 i = 0;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i < 4; i++) {
        u8 b0, b1, b2;
        u8 buf[5];
        u32 out;
        u8 *p = unk_3c[i];
        func_020a67a0(p, &b0, &b1, &b2, &out);
        if (out != 0) {
            func_020a63bc(i, b0, b1, b2, out);
            func_020a6848(buf);
            func_020a681c(buf, i, b0, b1, b2, out);
            o->func_020728d4();
            o->func_020728a4(buf, 2);
            o->func_02072824(9, 4);
            func_020a6790(p);
            func_020a6838(buf);
        }
    }
}

void Unk_020a512c::func_020a5760(u32 *a, u32 *b) {
    Unk_020cbb18 *o;
    s32 r5 = func_020a58a0();
    if (r5 < 4) {
        u32 *p = &unk_2c[r5];
        s32 v;
        func_020a6700(p, &v);
        if (v == 1) {
            s32 r7 = 1;
            s32 tmp;
            u8 byte;
            func_020a672c(unk_0c, &tmp, &byte);
            s32 i;
            i = 3;
            o = data_020cbb18;
            for (; i >= 0; i--) {
                if (r5 != i && o->func_02072e88(i) != 0 && byte == func_020a6358(i)) {
                    r7 = 0;
                    break;
                }
            }
            func_020a63bc(r5, byte, r7, 0, 7);
            func_020a66f8(p);
            func_020a5854();
            *a = r5;
            *b = 7;
        }
    }
}

void Unk_020a512c::func_020a5800() {
    s32 idx = ((volatile Unk_020cbb18 *)data_020cbb18)->unk_64;
    u32 *p = &unk_2c[idx];
    s32 v;
    func_020a6700(p, &v);
    if (v != 0) {
        u8 b = v;
        Unk_020cbb18 *o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4(&b, 1);
        o->func_02072824(10, 0);
        func_020a66f8(p);
    }
}

void Unk_020a512c::func_020a5854() {
    if (func_020a58a0() < 4) {
        u8 *p = (u8 *)unk_0c;
        s32 i;
        for (i = 2; i >= 0; i--) {
            u8 *q = p + 8;
            s32 v;
            u8 byte;
            func_020a672c(q, &v, &byte);
            if (v >= 4) break;
            func_02116048(q, p, 8);
            p += 8;
        }
        func_020a6720(p);
    }
}

void Unk_020a512c::func_020a58b8(u32 *a, u32 *b) {
    s32 r5 = 4;
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (func_020a62f8(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 >= 4) {
        s32 r4 = func_020a58a0();
        if (r4 < 4) {
            func_020a63bc(r4, 0x3f, 0, 1, 4);
            *a = r4;
            *b = 4;
        }
    }
}

void Unk_020a512c::func_020a5908() {
    struct {
        u8 b0, b1, b2;
        u8 buf[5];
    } l;
    u32 idx[2] = {4, 4};
    u32 cnt[2];
    func_02133ef8(cnt, 8);
    func_020a5760(&idx[0], &cnt[0]);
    func_020a58b8(&idx[1], &cnt[1]);
    u32 i = 0;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i < 2; i++) {
        u32 off = i << 2;
        s32 r7 = *(u32 *)((u8 *)idx + off);
        if (r7 < 4) {
            func_020a6760(&unk_00[r7 * 3], &l.b0, &l.b1, &l.b2);
            func_020a6848(l.buf);
            func_020a681c(l.buf, r7, l.b0, l.b1, l.b2, *(u32 *)((u8 *)cnt + off));
            o->func_020728d4();
            o->func_020728a4(l.buf, 2);
            o->func_02072824(9, 4);
            func_020a6838(l.buf);
        }
    }
}

void Unk_020a512c::func_020a59c0() {
    s32 i = 3;
    u8 *self = (u8 *)this;
    u8 *r7 = (u8 *)unk_0c;
    for (; i >= 0; i--) {
        func_020a6754(&unk_00[i * 3]);
        func_020a6720(r7 + i * 8);
        func_020a66f8(self + 0x2c + i * 4);
        func_020a6790(self + 0x3c + i * 8);
    }
    func_020a4c28();
    func_020a4c10();
    func_020a4bf8();
    func_020a4bc0();
    func_020a4770(0);
    func_020a5188();
    func_020a5390(4);
    func_020a5368();
    func_020a5364(4);
    func_020a56b0(16);
    func_020a52b0(4);
    func_020a52a8(4);
    func_020a52b8(4);
    func_020a5270(0);
    func_020a5260(4);
    func_020a4c58(4);
    func_020a56bc(0);
    func_020a4760(0);
    func_020a4750(4);
    func_020a4740(0);
}

s32 Unk_020a512c::func_020a58a0() {
    s32 v;
    u8 byte;
    func_020a672c(unk_0c, &v, &byte);
    return v;
}
