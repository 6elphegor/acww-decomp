#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

struct Vec3Z2 {
    s32 x, y, z;
    Vec3Z2() {
        x = 0;
        y = 0;
        z = 0x1000;
    }
    ~Vec3Z2();
};

struct Unk_020d094c {
    char *unk_00;
    u8 unk_04, unk_05, unk_06, unk_07;
};

struct Vec3Z {
    s32 x, y, z;
    Vec3Z() {
        x = 0;
        y = 0;
        z = 0;
    }
    ~Vec3Z();
};

struct Col {
    u16 v;
};

struct RGB {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
};

struct Unk_020ac0c4_Entry {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15[3];
};

struct Unk_02033914 {
    u8 unk_00[0x40];
};

struct Mtx43 {
    s32 m[12];
};

struct Unk_021ede90 {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10;
};

class Unk_020abea8 {
public:
    void func_020abea8(s32 heap);
    void func_020abed4(Vec3 *pos);
    BOOL func_020ac0c4(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    void func_020ac1e0();

    /* 0x00 */ Vec3 unk_00;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 *unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 *unk_28;
    /* 0x2c */ Vec3 *unk_2c;
    /* 0x30 */ Unk_020ac0c4_Entry *unk_30;
};

struct Pack {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

struct Bits {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ff8ccc(void);
void func_02110be8(void *p);
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
u32 func_02133150(u32 a, u32 b);
void *func_020e8608(s32 heap, u32 size);
void func_020e85fc(s32 heap, void *p);
void func_02135558(void (*f)(), void *p);
void func_02106174(u32 a, u32 b, u32 c);
void func_0210622c(u32 a, u32 b, u32 c);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
void func_020e84f8(void *m, s32 a, s32 b, s32 c);
void func_01ffb94c(void *a, void *b, void *c);
void func_01ffc714(void *a, void *b);
s32 func_02030814(s32 a);
void func_020339bc(Unk_02033914 *p, Vec3 *pos, s32 a, s32 b);
s32 func_02033914(Unk_02033914 *p, s32 a);
void func_02033988(Unk_02033914 *p);
BOOL func_020b51fc(void);
s32 func_0203ef38(Vec3 *out, Vec3 *in);
void func_0203eeac(Vec3 *out, Vec3 *in);
void func_0205553c(void *a, Vec3 *scale);
void func_02054b14(void *a);
Col func_02064cc4(void);
RGB func_02064f2c(void);
s32 func_02064c84(s32 a);
void func_0209cf18(void *p);
BOOL func_02054c88(void *a, void *b, s32 c);
void func_02000c8c();
extern u8 data_020e416c;
extern u32 data_020e2dc4;
extern u8 data_020e2de4;
extern u8 data_020e2de8;
extern u32 data_020e2dc8;
extern s32 data_021f482c;
extern s32 data_021c620c;
extern u8 data_021f47e0[];
extern u8 data_021edf04[];
extern Unk_021ede90 *data_021ede90;
extern u8 data_021edea0[];
extern s32 data_021edf44;
extern s32 data_020d0964;
extern Unk_020ac0c4_Entry data_021ee114[];
extern Unk_020abea8 data_021ee010, data_021ee044, data_021ee078, data_021ee0ac, data_021ee0e0;
extern u32 data_021edf3c;
extern Unk_020d094c data_020d094c[];
extern u8 data_020e2e10[];
extern u8 data_020e2e2c[];
void *func_020641d8(void *p);
u8 *func_0210629c(void *p);
void func_02055724(void *p, s32 a);
u8 *func_0205588c(void *p, s32 heap);
void func_020e8558(void *p);
void func_020639e8(char *buf, const void *fmt, ...);
u32 func_02057100(u8 *base, char *name);
u32 func_02057078(u8 *base, char *name);
extern u32 data_021edf40;
extern s32 data_021edf48;
extern s32 data_021c3070;
extern Vec3 data_021c309c;
extern u8 data_021edfe0[];
extern u8 data_021edfbc[];
extern u8 data_0213c7e0[];
BOOL func_020b5184(void);
int func_020ac79c(void);
void func_020ac790(int v);
void *func_02072e44(void *h);
void func_020ada88(void);
void func_020ae3a4(void *p, int v);
u32 func_02063b8c(u32 n);
u32 func_020af1d8(void *p);
void func_020af1fc(void *p);
void func_020acb74(u32 a, u32 b, u32 c, u32 d, int mode, u8 flag, int e);
void func_020ac8d4(u32 a, u32 b, u8 c, u32 d);
BOOL func_020b5268(u32 v);
void func_020728d4(void *h);
void func_020728a4(void *h, void *p, u32 n);
void func_02072824(void *h, u32 a, u32 b);
u32 func_020aec4c(void);
u32 func_ov004_0223e9c0(u32 a, u32 b);
u16 *func_ov004_0223ea90(u32 a, u32 b);
u16 *func_ov004_0223ed40(void);
u32 func_020acf90(void *p, u32 v);
u32 func_020ad8d0(void *p, u16 *v);
BOOL func_020aca18(void);
void func_02061478(void *a, void *b);
void func_02062650(void *a, void *b);
void func_0203ce4c(u32 a, void *b);
void func_02065cd4(void *p);
void *func_0209750c(void);
void *func_0209888c(void *p);
u32 func_020ae02c(void *p);
void func_020656dc(void *o, void *a, void *b, void *c, void *d, void *e);
void func_02065588(void *o, u32 a, u32 b);
u32 func_0204bde8(void *p);
BOOL func_02096a50(void *o, int z);
void func_020ae740(void *p, u32 a, u32 b);
void *func_020986bc(void *p);
u16 *func_020acf54(void *p);
void func_020ace10(u16 *p, u32 v);
void func_02065cc8(void *p);
void func_0206260c(void *p);
BOOL func_02096880(void);
u32 func_020b50e8(void);
u16 *func_020ae844(void *p, u32 i, u16 *v);
u32 func_020ae82c(void *p, u16 *v);
u32 func_ov004_0223ecf4(u32 a, u32 b);
u32 func_02094058(void *p);
u32 func_020ae664(void *p, u32 a, u32 b, u32 c);
BOOL func_ov004_0223ec44(u32 *x, u32 *y, u32 a);
void func_020aee90(u32 x, u32 y, u32 c, u32 e);
BOOL func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
u16 *func_020ad8e8(void *p, u32 a, u32 b);
u16 *func_020acfa8(void *p, u32 a, u32 b);
void func_020ad854(void *p, u16 *v);
void func_020acfc4(void *p, u16 *v);
void func_020aedc4(u16 *p, u32 c, u32 e);
BOOL func_020aeb14(void *p);
u32 func_020acde8(u32 v);
u32 func_020acdd4(u32 i);
void func_020ace48(u16 *p, u32 add);
void func_020ace7c(void);
BOOL func_02098044(void *p, u32 i);
void func_0209801c(void *p, u32 i);
extern void *data_020cbb18;
extern u8 data_021ed104[];
extern u8 data_021ed2c0[];
extern u8 data_021ed2d4[];
extern u8 data_021ee160[];
extern int data_021ee178;
extern u16 data_021ee168;
extern u16 data_020d09b4[];
extern u16 data_020d0994[];
extern u16 data_020d098c[];
extern u8 data_020e2e38[];
extern u8 data_020e2e3c[];
extern u8 data_020e2e40[];
extern u8 data_020e2e64[];
extern u8 data_020e2e34[];
extern u8 data_020e2e74[];
void func_020ac724(void *a, void *b);
u8 func_020ac2e8(Vec3 *p, s32 q, u8 c);
u8 func_020ac2c8(Vec3 *p, s32 q);
u8 func_020ac2d8(Vec3 *p, s32 q);
void func_020abc10(Vec3 *pos, s32 a, s32 b, s32 c);
}

#define REG(a) (*(volatile u32 *)(a))

static inline BOOL inRange2(const u16 &a, const u16 &b) {
    BOOL r = FALSE;
    if (b >= 0x151d && a <= 0x151e) {
        r = TRUE;
    }
    return r;
}

static inline BOOL inRange2v(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x151d && a <= 0x151e) {
        r = TRUE;
    }
    return r;
}

static inline BOOL cmp16(u16 *a, u16 *b) {
    if (func_0204b2d4(a)) {
        return func_0204b25c(a) == func_0204b25c(b);
    }
    return *a == *b;
}

static inline BOOL isOne() {
    if (data_020e416c == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_020ace7c(void) {
    if (!func_02072e44(data_020cbb18)) {
        void *r5 = func_0209750c();
        if (r5) {
            u32 n = func_020acde8(*func_020acf54(func_020986bc(r5)));
            if (n) {
                u32 i;
                int z = 0;
                for (i = 0; i < n; i++) {
                    u32 j = i + 0x1c;
                    if (i < 4 && !func_02098044(r5, j)) {
                        u32 obj[0x3d];
                        u8 ib;
                        func_02065cd4(obj);
                        ib = i;
                        func_020656dc(obj, &ib, data_020e2e74, data_020e2e34, data_020e2e38, func_0209888c(r5));
                        func_02065588(obj, data_020d098c[i & 3], 1);
                        if (func_02096a50(obj, z)) {
                            func_0209801c(r5, j);
                        }
                        func_02065cc8(obj);
                    }
                }
            }
        }
    }
}

extern "C" void func_020ace48(u16 *p, u32 add) {
    u32 k = func_020acde8(*p);
    int s = add + *p;
    if (s >= 0xc350) {
        s = 0xc350;
    }
    *p = s;
    if (k != func_020acde8(*p)) {
        func_020ace7c();
    }
}

extern "C" void func_020ace10(u16 *p, u32 v) {
    u16 t = func_02133150(v, 100);
    if (func_020aeb14(data_021ed104)) {
        t = t * 5;
    }
    func_020ace48(p, t);
}

extern "C" u32 func_020acde8(u32 v) {
    int i;
    for (i = 4; i >= 0; i--) {
        if (v >= func_020acdd4(i)) {
            return i;
        }
    }
    return 0;
}

extern "C" u32 func_020acdd4(u32 i) {
    if (i < 5) {
        return data_020d0994[i];
    }
    return 0;
}

extern "C" u16 func_020acdac(u16 *p) {
    u32 k = func_020acde8(*p);
    if (k != 4) {
        return func_020acdd4(k + 1) - *p;
    }
    return 0;
}

extern "C" void func_020acb74(u32 a, u32 b, u32 c, u32 d, int mode, u8 flag, int e) {
    u16 cur;
    Pack p1;
    u32 x, y;
    Pack p2;
    e = e;
    if (a == 0x3f) {
        func_020ae740(data_021ed104, b, d);
        if (func_02072e44(data_020cbb18) && flag) {
            p1.a = a;
            p1.b = b;
            p1.c = d;
            p1.d = c;
            void *h = data_020cbb18;
            func_020728d4(h);
            func_020728a4(h, &p1, 4);
            func_02072824(h, 0x26, 4);
        }
    } else {
        cur = data_021ee168;
        switch (mode) {
        case 0:
            cur = *func_020ae844(data_021ed104, a, 0);
            break;
        case 1:
            cur = *func_020ad8e8(data_021ed2d4, a, 0);
            break;
        case 2:
            cur = *func_020acfa8(data_021ed2c0, a, 0);
            break;
        }
        if (!cmp16(&cur, &data_021ee168)) {
            switch (mode) {
            case 0:
                func_020ae664(data_021ed104, a, b, d);
                if (flag) {
                    func_020ace10(func_020acf54(func_020986bc(func_0209750c())), b);
                }
                if (isOne()) {
                    if (func_ov004_0223ec44(&x, &y, a)) {
                        if (a == 0x3f) {
                            e = 0;
                        }
                        func_020aee90(x, y, c, e);
                    }
                }
                break;
            case 1:
                func_020ad854(data_021ed2d4, &cur);
                func_020aedc4(&cur, c, e);
                break;
            case 2:
                func_020acfc4(data_021ed2c0, &cur);
                func_020aedc4(&cur, c, e);
                break;
            }
            if (func_02072e44(data_020cbb18) && flag) {
                p2.a = a;
                p2.b = b;
                p2.c = d;
                p2.d = c;
                void *h = data_020cbb18;
                func_020728d4(h);
                func_020728a4(h, &p2, 4);
                func_02072824(h, 0x26, 4);
            }
        }
    }
}

extern "C" void func_020acb28(int a) {
    BOOL x = func_02094058(func_0209888c(func_0209750c())) == 0;
    if (a > 0x249f0) {
        a = 0x249f0;
    }
    func_020acb74(0x3f, a, func_020b50e8(), x, 0, 1, 0);
}

extern "C" void func_020aca4c(u32 a, u32 b, u32 c, u32 d) {
    u16 v[2];
    u32 r;
    v[0] = *func_ov004_0223ed40();
    if (inRange2(v[0], v[0]) && func_020b50e8() == 0x1d) {
        u32 i;
        v[1] = 0xfff1;
        for (i = 0; i < 0x25; i++) {
            func_020ae844(data_021ed104, i, &v[1]);
            if (inRange2v(&v[1])) {
                break;
            }
        }
        r = i + func_ov004_0223ecf4(a, b);
    } else {
        r = func_020ae82c(data_021ed104, v);
    }
    if (r != (u32)-1) {
        BOOL x = func_02094058(func_0209888c(func_0209750c())) == 0;
        func_020af1fc(data_021ee160);
        func_020acb74(r, c, d, x, 0, 1, 0);
    }
}

extern "C" u32 func_020aca44(void) {
    return func_020aec4c();
}

extern "C" BOOL func_020aca18(void) {
    if (func_02072e44(data_020cbb18)) {
        return FALSE;
    }
    if (func_02096880()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020ac948(void *name) {
    if (func_020aca18()) {
        u16 id;
        u8 by;
        u32 s1[9];
        u32 obj[0x3d];
        func_02061478(&id, name);
        func_02062650(s1, &id);
        func_0203ce4c(1, s1);
        func_02065cd4(obj);
        void *r4 = func_0209750c();
        u8 *d = data_021ed104;
        by = func_020ae02c(d);
        func_020656dc(obj, &by, data_020e2e64, data_020e2e40, data_020e2e3c, func_0209888c(r4));
        func_02065588(obj, id, 1);
        u32 r = func_0204bde8(&id);
        if (func_02096a50(obj, 0)) {
            func_020ae740(d, r, 1);
            func_020ace10(func_020acf54(func_020986bc(func_0209750c())), r);
            func_02065cc8(obj);
            func_0206260c(s1);
            return TRUE;
        }
        func_02065cc8(obj);
        func_0206260c(s1);
    }
    return FALSE;
}

extern "C" void func_020ac8fc(u32 a, u32 b, u32 c) {
    u16 v = *func_ov004_0223ea90(a, b);
    u32 r = func_020ad8d0(data_021ed2d4, &v);
    if (r != (u32)-1) {
        func_020af1fc(data_021ee160);
        func_020acb74(r, 0, c, 1, 1, 1, 0);
    }
}

extern "C" u32 func_020ac8f4(void) {
    return func_020aec4c();
}

extern "C" void func_020ac8d4(u32 a, u32 b, u8 c, u32 d) {
    func_020acb74(a, 0, b, 1, 2, c, d);
}

extern "C" void func_020ac894(u32 a, u32 b, u32 c) {
    u32 r = func_020acf90(data_021ed2c0, func_ov004_0223e9c0(a, b));
    if (r != (u32)-1) {
        func_020af1fc(data_021ee160);
        func_020ac8d4(r, c, 1, 0);
    }
}

extern "C" u32 func_020ac88c(void) {
    return func_020aec4c();
}

extern "C" void func_020ac7f8(Bits *p, u32 arg) {
    u32 a = p->a;
    u8 d = p->d;
    BOOL c = p->c ? TRUE : FALSE;
    if (d == 10) {
        func_020acb74(a, 0, d, 1, 1, 0, 1);
    } else if (d == 15) {
        func_020ac8d4(a, d, 0, 1);
    } else if (func_020b5268(d)) {
        func_020acb74(a, p->b, d, c, 0, 0, 1);
    }
    if (a != 0x3f) {
        void *h = data_020cbb18;
        func_020728d4(h);
        func_02072824(h, 0x27, arg);
    }
}

extern "C" u32 func_020ac7e8(void) {
    return func_020af1d8(data_021ee160);
}

extern "C" void func_020ac7cc(u16 *p) {
    *p = data_020d09b4[func_02063b8c(12)];
}

extern "C" BOOL func_020ac7a8(void) {
    struct { u8 a; u8 b; u8 c; u8 d; } s;
    func_0209cf18(&s);
    if (s.b >= 8 && s.b < 0x17) {
        return TRUE;
    }
    return FALSE;
}

extern "C" int func_020ac79c(void) {
    return data_021ee178;
}

extern "C" void func_020ac790(int v) {
    data_021ee178 = v;
}

extern "C" void func_020ac750(void) {
    if (func_020b5184()) {
        if (func_020ac79c() == 2) {
            if (!func_02072e44(data_020cbb18)) {
                func_020ada88();
                func_020ae3a4(data_021ed104, 0);
            }
        }
        func_020ac790(0);
    }
}

extern "C" void func_020ac724(void *a, void *b) {
    func_01ffc714(a, b);
    func_01ffc714((u8 *)a + 12, (u8 *)b + 12);
    func_01ffc714((u8 *)a + 24, (u8 *)b + 24);
}

extern "C" void func_020ac500(void *arg) {
    u8 *ent1;
    Unk_020d094c *ent;
    u8 *mdl;
    u32 idx1;
    u32 idx2;
    u8 *blk;
    u32 v2c;
    u32 ev;
    u32 o6;
    s32 heap = data_021c620c;
    if (arg != 0) {
        data_021edf44 = 0;
        Unk_020ac0c4_Entry *e = data_021ee114;
        void *file = func_020641d8(data_020e2e10);
        u8 *res = func_0210629c(file);
        func_02055724(res, 0);
        mdl = func_0205588c(res, heap);
        func_020e8558(file);
        u32 i;
        for (i = 0; i < 3; i++) {
            ent = &data_020d094c[i];
            char *name = data_020d094c[i].unk_00;
            char buf[36];
            func_020639e8(buf, data_020e2e2c, name);
            e->unk_00 = 0;
            e->unk_04 = 0;
            e->unk_08 = 0;
            e->unk_00 = mdl;
            e->unk_14 = ent->unk_06;
            idx1 = func_02057100(e->unk_00, name);
            idx2 = func_02057078(e->unk_00, buf);
            u8 *t1 = e->unk_00 + 0x3c;
            u8 *ents = t1 + *(u16 *)(e->unk_00 + 0x42) + 4;
            u32 size1 = *(u16 *)(t1 + *(u16 *)(e->unk_00 + 0x42)) * idx1;
            ent1 = ents + size1;
            u8 *h2 = e->unk_00 + *(u16 *)(e->unk_00 + 0x34);
            o6 = *(u16 *)(h2 + 6);
            blk = h2 + o6;
            v2c = *(u16 *)(blk + *(u16 *)(h2 + o6) * idx2 + 4);
            ev = *(u32 *)(ents + size1);
            e->unk_04 = ev + (u16) * (u32 *)(e->unk_00 + 8);
            e->unk_08 = v2c + (u16) * (u32 *)(e->unk_00 + 0x2c);
            e->unk_04 |= ent->unk_04 << 18;
            e->unk_04 |= ent->unk_05 << 16;
            e->unk_10 = (*(u32 *)(ents + size1) >> 26) & 7;
            if (e->unk_10 != 2) {
                e->unk_08 >>= 1;
            }
            e->unk_0c = 1 << (((*(u32 *)ent1 >> 20) & 7) + 3);
            e->unk_0e = 1 << (((*(u32 *)ent1 >> 23) & 7) + 3);
            e++;
        }
        static Vec3Z2 v;
        data_021ee078.func_020ac0c4((Vec3 *)&v, 0x119a, 0x119a, 2, 0x2000, 0, heap);
        data_021ee0ac.func_020ac0c4((Vec3 *)&v, 0x1666, 0x1666, 2, 0x2000, 0, heap);
        data_021ee0e0.func_020ac0c4((Vec3 *)&v, 0x2000, 0x2000, 2, 0x2000, 0, heap);
        data_021ee010.func_020ac0c4((Vec3 *)&v, 0x1ccc, 0x1ccc, 0, 0, 0, heap);
        data_021ee044.func_020ac0c4((Vec3 *)&v, 0x555, 0x1000, 0, 0, 0, heap);
    }
}

extern "C" void func_020ac40c() {
    struct {
        u8 a, b;
    } t;
    func_0209cf18(&t);
    s32 x = (t.a + ((t.b + 6) % 12) * 60) << 12;
    x = func_01ffc5a4(x, 0x2d0000);
    data_021edf44 = func_01ffcb0c((x - 0x800) << 1, 0x1000);
    func_020e8388(data_021f47e0, 0, 0, 0);
    func_020e84f8(data_021f47e0, 0x20000, 0x20000, 0x20000);
    func_01ffb94c(data_021f47e0, data_0213c7e0, data_021edfe0);
    func_020ac724(data_021edfe0, data_021edfbc);
    RGB c1 = func_02064f2c();
    u8 s = c1.b + (c1.r + c1.g);
    u8 r4 = func_01ffcb0c(0x10000, func_01ffc5a4(s << 12, 0x5d000)) >> 12;
    s32 base = func_02064c84(0);
    u8 v = base + r4;
    if (v > 0x1f) {
        v = 0x1f;
    }
    data_020e2de8 = v;
    data_020e2de4 = v;
}

extern "C" void func_020ac3a4() {
    data_021edf44 = 0;
    Unk_020ac0c4_Entry *e = data_021ee114;
    u32 i;
    for (i = 0; i < 3; i++) {
        e->unk_00 = 0;
        e++;
    }
    s32 heap = data_021c620c;
    data_021ee078.func_020abea8(heap);
    data_021ee0ac.func_020abea8(heap);
    data_021ee0e0.func_020abea8(heap);
    data_021ee010.func_020abea8(heap);
    data_021ee044.func_020abea8(heap);
}

struct Unk_020ac2e8_V : Vec3 {
    Unk_020ac2e8_V() {}
    ~Unk_020ac2e8_V() {}
};

extern "C" u8 func_020ac2e8(Vec3 *p, s32 q, u8 r4) {
    if (data_021c3070 != 0) {
        Unk_020ac2e8_V v;
        v.x = data_021c309c.x;
        v.y = data_021c309c.y;
        v.z = data_021c309c.z;
        s32 d, e;
        s32 pz = p->z;
        if (v.z > pz) {
            d = v.z - pz;
            if (0xb000 < d) {
                r4 = r4 >> 5;
            } else {
                static s32 inv = ((s32 (*)(s32))func_01ffc5a4)(0xf80);
                r4 = r4 - (u8)(func_01ffcb0c(func_01ffcb0c(r4 << 12, inv), d) >> 12);
            }
        } else {
            d = pz - v.z;
            if (d > q + 0xc000) {
                return 0;
            }
            e = p->x - v.x;
            if (e < 0) {
                e = -e;
            }
            if (e > q + 0xf000) {
                return 0;
            }
        }
    }
    return r4;
}

extern "C" u8 func_020ac2d8(Vec3 *p, s32 q) {
    return func_020ac2e8(p, q, data_020e2de8);
}

extern "C" u8 func_020ac2c8(Vec3 *p, s32 q) {
    return func_020ac2e8(p, q, data_020e2de4);
}

extern "C" void func_020ac23c(Vec3 *p, u32 n) {
    if (n >= 2) {
        static Vec3Z v;
        Vec3 out;
        func_01ffd070(&out, p, (Vec3 *)&v);
        if (n == 2) {
            data_021ee078.func_020abed4(&out);
        } else if (n == 3) {
            data_021ee0ac.func_020abed4(&out);
        } else if (n == 4) {
            data_021ee0e0.func_020abed4(&out);
        }
    }
}

extern "C" void func_020ac22c(Vec3 *p) {
    data_021ee010.func_020abed4(p);
}

extern "C" void func_020ac1f8(Vec3 *p) {
    Vec3 local;
    Vec3 out;
    local.x = 0x166;
    local.y = 0;
    local.z = 0xc80;
    func_01ffd070(&out, p, &local);
    data_021ee044.func_020abed4(&out);
}

void Unk_020abea8::func_020ac1e0() {
    unk_00.x = 0;
    unk_00.y = 0;
    unk_00.z = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_1c = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
}

extern "C" void func_020ac1dc() {}

BOOL Unk_020abea8::func_020ac0c4(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap) {
    u32 i;
    if (heap == 0) {
        heap = data_021f482c;
    }
    unk_30 = &data_021ee114[idx];
    unk_00 = *pos;
    unk_0c = size >> 1;
    s32 v = unk_0c;
    if ((v >> shift) == 0) {
        v = shift;
    }
    unk_10 = v;
    unk_18 = 0;
    unk_14 = func_02133150(shift - 0x200, 0x2000) + 2;
    u32 n4 = unk_14 << 2;
    unk_1c = (s32 *)func_020e8608(heap, (n4 << 1) + unk_14 * 12);
    unk_28 = (s32 *)((u8 *)unk_1c + n4);
    unk_2c = (Vec3 *)((u8 *)unk_28 + n4);
    for (i = 0; i < unk_14; i++) {
        if (i == unk_14 - 1) {
            unk_1c[i] = shift;
        } else {
            unk_1c[i] = i << 13;
        }
    }
    if (a == 0 && b == 0) {
        unk_20 = 0;
        unk_24 = unk_30->unk_0c << 12;
    } else {
        unk_20 = func_01ffcb0c(unk_30->unk_0c << 12, a);
        unk_24 = func_01ffcb0c(unk_30->unk_0c << 12, b);
    }
    s32 *p6 = unk_1c;
    s32 *p7 = unk_28;
    for (i = 0; i < unk_14; i++) {
        *p7++ = func_01ffcb0c(0x1000 - func_01ffc5a4(*p6, shift), unk_30->unk_0e << 12);
        p6++;
    }
    return TRUE;
}

void Unk_020abea8::func_020abed4(Vec3 *pos) {
    Vec3 tmp;
    Col c0, c1;
    if (unk_30 != 0 && unk_30->unk_00 != 0) {
        u8 lvl = func_020ac2d8(pos, unk_10);
        if (lvl > 1) {
            func_01ff8ccc();
            REG(0x40004a8) = unk_30->unk_04;
            REG(0x40004ac) = unk_30->unk_08;
            REG(0x4000440) = 1;
            func_02110be8(data_021edfe0);
            REG(0x40004a4) = (lvl << 16) | ((unk_30->unk_14 << 24) | 0x8080);
            s32 *p7 = unk_1c;
            s32 *p28 = unk_28;
            Vec3 *vp = unk_2c;
            REG(0x4000500) = 3;
            s32 e1 = unk_1c[1];
            u32 i = 0;
            s32 lo, hi, neg;
            s32 shift = data_020d0964;
            s32 z1 = i;
            s32 z2 = i;
            for (; i < unk_14; i++) {
                s32 v;
                if (i != 0) {
                    v = e1;
                } else {
                    v = *p7;
                }
                s32 t = func_01ffcb0c(data_021edf44, v);
                lo = t + (pos->x - unk_0c);
                hi = t + (pos->x + unk_0c);
                if (pos->z != unk_18) {
                    neg = -*p7;
                    s32 y = func_02030814(z1);
                    tmp.x = z2;
                    tmp.y = y;
                    tmp.z = neg;
                    tmp.z = neg + pos->z;
                    func_0203eeac(vp, &tmp);
                    vp->y >>= shift;
                    vp->z >>= shift;
                }
                c0 = func_02064cc4();
                c1 = c0;
                REG(0x4000480) = c1.v;
                REG(0x4000488) = (u16)((unk_20 << 8) >> 16) | ((u16)((*p28 << 8) >> 16) << 16);
                s16 zz = vp->z;
                REG(0x400048c) = (u16)((lo << 11) >> 16) | ((u16)(s16)vp->y << 16);
                REG(0x400048c) = (u16)zz;
                REG(0x4000488) = (u16)((unk_24 << 8) >> 16) | ((u16)((*p28 << 8) >> 16) << 16);
                zz = vp->z;
                REG(0x400048c) = (u16)((hi << 11) >> 16) | ((u16)(s16)vp->y << 16);
                REG(0x400048c) = (u16)zz;
                p7++;
                p28++;
                vp++;
            }
            REG(0x4000504) = 0;
            REG(0x4000448) = 1;
            unk_18 = pos->z;
        }
    }
}

void Unk_020abea8::func_020abea8(s32 heap) {
    if (heap == 0) {
        heap = data_021f482c;
    }
    if (unk_1c != 0) {
        func_020e85fc(heap, unk_1c);
        unk_1c = 0;
    }
    unk_30 = 0;
}

extern "C" BOOL func_020abe58() {
    BOOL ret;
    if (func_02054c88(data_021edea0, &data_020e2dc8, 0)) {
        ret = TRUE;
    } else {
        ret = FALSE;
    }
    u8 *p = *(u8 **)(data_021edea0 + 0x5c);
    u8 *q = p + *(s32 *)(p + 8);
    q = q + *(s32 *)(q + *(u16 *)(q + 0xa) + 8);
    data_021ede90 = (Unk_021ede90 *)q;
    data_020e2dc4 = 1;
    func_0210622c(*(u32 *)(data_021edea0 + 0x5c), 1, 0x40);
    return ret;
}

extern "C" void func_020abe28() {
    Col c0, c1;
    data_020e2dc4 = 1;
    c0 = func_02064cc4();
    c1 = c0;
    func_02106174(*(u32 *)(data_021edea0 + 0x5c), 0, c1.v);
}

extern "C" void func_020abe10() {
    data_021ede90 = 0;
    func_02054b14(data_021edea0);
}

extern "C" void func_020abdd0(Vec3 *pos, s32 a, s32 b, s32 c) {
    if (c == 0) {
        c = 1;
    }
    s32 r6 = 0x1000;
    if (c != 0x1f) {
        r6 = func_01ffc5a4((c - 1) << 12, 0x1e000);
    }
    func_020abc10(pos, a, b, r6);
}

extern "C" void func_020abc10(Vec3 *pos, s32 a, s32 b, s32 c) {
    Unk_02033914 buf1;
    Unk_02033914 buf2;
    Vec3 pos2;
    Vec3 out;
    Vec3 scale;
    s32 off, d, absd;
    if (a == 0) {
        return;
    }
    s32 lvl = func_020ac2c8(pos, a);
    off = 0;
    if (data_020e416c == 0 ? 1 : off) {
        func_020339bc(&buf1, pos, 0, 0);
        off = func_02033914(&buf1, 0);
        if (off > 0) {
            off = 0;
        }
        func_02033988(&buf1);
    } else if (func_020b51fc()) {
        func_020339bc(&buf2, pos, 0, 0);
        off = func_02033914(&buf2, 0);
        func_02033988(&buf2);
    }
    d = pos->y - off;
    if (d < 0) {
        absd = -d;
    } else {
        absd = d;
    }
    if (d != 0) {
        lvl -= func_01ffcb0c(absd, func_01ffc5a4(0x1f000, b)) >> 12;
    }
    if (c != 0x1000) {
        lvl = (lvl * c) >> 12;
    }
    if (lvl > 1) {
        if (d != 0) {
            s32 k = func_01ffcb0c(func_01ffc5a4(-0x1000, b), absd) + 0x1000;
            if (k >= 0xf33) {
                k = 0x1000;
            }
            a = func_01ffcb0c(a, k);
        }
        if (a > 0) {
            s32 t;
            pos2 = *pos;
            pos2.y = off + func_02030814(0);
            t = func_0203ef38(&out, &pos2);
            func_020e8388(data_021f47e0, out.x, out.y, out.z);
            func_020e8434(data_021f47e0, t);
            *(Mtx43 *)data_021edf04 = *(Mtx43 *)data_021f47e0;
            scale.x = a;
            scale.y = 0x1000;
            scale.z = a;
            if (data_021ede90 != 0) {
                data_021ede90->unk_0c &= 0xffe0ffff;
                data_021ede90->unk_0c |= (lvl & 0x1f) << 16;
                data_021ede90->unk_0c &= 0xc0ffffff;
                data_021ede90->unk_0c |= data_020e2dc4 << 24;
                data_021ede90->unk_10 |= 0x3f1f0000;
            }
            func_0205553c(data_021edea0, &scale);
            data_020e2dc4++;
            if (data_020e2dc4 > 0xb) {
                data_020e2dc4 = 1;
            }
        }
    }
}

extern "C" void func_020abbcc(Vec3 *pos, s32 a) {
    Vec3 v;
    v = *pos;
    v.y = v.y - (func_02030814(0) + 0x800);
    func_020abc10(&v, a, 0xe00, 0x1000);
}

