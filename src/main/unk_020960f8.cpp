#include "types.h"

class Unk_02065554 {
public:
    u8 func_02065578();
    u8 pad[0xf4];
};

struct Unk_02096354_Arg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_020966f8_Rec {
    union { struct { u32 a; u32 b; }; struct { u8 d0, d1, d2, d3, d4, d5, d6, d7; }; };
};

struct Unk_02096484_Base {
    union { struct { u32 a; u32 b; }; struct { u8 d0, d1, d2, d3, d4, d5, d6, d7; }; };
    Unk_02096484_Base() { a = 0; b = 0; }
};
struct Unk_02096484_Rec : Unk_02096484_Base {
    Unk_02096484_Rec() { a = 0; b = 0; }
};

extern u8 data_021edb68[];
extern u8 data_020e1d74[];
extern u8 data_020e1d80[];
extern u8 data_020e1d90[];
extern u8 data_020e1d34[];
extern u8 data_020e1d28[];
extern u8 data_021ecfa8[];
extern u32 data_020d0444[];
extern u8 *data_020e1d40[];
extern u32 data_020d0454[];
extern u8 *data_020e1d50[];
extern u8 data_021eb98c[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
extern void *data_020cbb18;

extern "C" {
void func_02065cd4(void *);
void func_02065c94(void *);
void func_02065cc8(void *);
void *func_0209750c(void);
void *func_0209888c(void *);
u8 func_02095f10(s32);
u32 func_02095f38(s32);
s32 func_020656dc(void *, void *, u8 *, void *, void *, void *);
void func_02065588(void *, u32, s32);
s32 func_02096aac(void *);
s32 func_02096a50(void *, s32);
void *func_02097a30(void *);
void *func_02097a3c(void *);
s32 func_02096d28(void *, s32);
void func_02096d4c(void *, s32);
void func_02096d6c(void *, s32);
s32 func_02063b8c(s32);
u32 func_0209ce68(u32, u32, u32, u32);
u8 *func_02098308(void *);
u32 func_02096d1c(void *);
void func_02096d10(void *, u32);
s32 func_02096dbc(void *, void *);
void func_02096da4(void *, void *);
void func_02116048(void *, void *, u32);
void func_0209d2c0(void *, s32);
s32 func_0209d3d0(void *, void *, u32);
void func_0209d498(void *);
s32 func_02096880(void);
s32 func_02096b24(s32);
s32 func_02096acc(void *, s32, s32);
s32 func_0208f070(void *);
void *func_0208f05c(void *);
void *func_0208f088(void *);
void *func_02098878(void *);
void func_02065ba4(void *, void *);
void func_02065ac0(void *);
s32 func_02072e44(void *);
u8 *func_02096fc8(void *);
s32 func_02096fa0(void *, u32);
void func_02096fb8(void *, u32);
s32 func_020978c8(void *, s32);
u8 *func_02097868(void *, s32);
u8 *func_02096e50(void *);
Unk_02065554 *func_02096e54(void *);
void func_02096e28(void *);
void func_02096b74(void);
void *func_02097020(void *, s32);
void func_02065e70(void *, void *);
void *func_0206561c(void);
void *func_02065628(void);
void func_02003130(void *);
void func_0200315c(void *, void *);
void func_02003100(void *);
s32 func_0207bfb4(void *, void *);
s32 func_0207c014(s32);
void func_020942f8(void *);
void func_02094264(void *, void *);
void func_020942c8(void *);
s32 func_02097740(void *, void *);
s32 func_020978fc(s32);
u32 func_02096344(u8);
u8 func_02096338(u8);
u8 *func_020960f8(s32);
s32 func_02096120(s32, s32);
s32 func_020961dc(s32, s32, s32, s32);
void func_02096258(s32, s32);
s32 func_02096288(s32, s32, s32);
s32 func_020962d0(s32, s32);
void func_02096308(s32);
s32 func_02096354(Unk_02096354_Arg *);
s32 func_020963d0(Unk_02096354_Arg *);
s32 func_02096484(Unk_02096354_Arg *);
void func_02096570(Unk_02096354_Arg *, s32);
void func_02096618(void);
u8 func_02096670(u32);
u8 func_020966b0(u32);
u8 func_020966d0(u32, u32);
void func_020966f8(void);
s32 func_02096880(void);
s32 func_020968b8(void *);
void func_020968e0(void);
s32 func_020968e4(void *, s32);
s32 func_02096914(void *, s32);
s32 func_02096960(void);
s32 func_020969b8(void);
}

extern "C" u8 *func_020960f8(s32 a) {
    if (a >= 0 && a < 0x22) return data_020e1d74;
    if (a >= 0x22 && a < 0x5a) return data_020e1d80;
    return data_020e1d90;
}

extern "C" s32 func_02096120(s32 a, s32 b) {
    u8 rec[3];
    u32 buf[0xf4 / 4];
    s32 r4;
    func_02065cd4(buf);
    func_02065c94(buf);
    r4 = (s32)func_0209888c(func_0209750c());
    rec[0] = data_021edb68[0];
    rec[0] = func_02095f10(a);
    rec[1] = 1;
    if (a == 0x1a) rec[1] = 0x12;
    rec[2] = func_020966d0(3, b);
    func_020656dc(buf, rec, func_020960f8(a), rec + 1, rec + 2, (void *)r4);
    u32 t = func_02095f38(a);
    if (t != 0xfff1) func_02065588(buf, t, 1);
    if (func_02096aac(buf)) {
        func_02065cc8(buf);
        return 1;
    }
    if (func_02096a50(buf, 0)) {
        func_02065cc8(buf);
        return 1;
    }
    func_02065cc8(buf);
    return 0;
}

extern "C" s32 func_020961dc(s32 a, s32 b, s32 c, s32 d) {
    void *g;
    s32 v8, vc;
    s32 r7;
    g = func_02097a30(func_0209750c());
    r7 = func_020962d0(a, b);
    if (r7 == 0) {
        if (d == 0) return 0;
        r7 = b;
        func_02096258(a, b);
        d = 0;
    }
    v8 = func_02096288(a, b, func_02063b8c(r7));
    vc = func_02096120(v8, c);
    if (vc != 0) {
        if (r7 == 1 && d == 1) func_02096258(a, b);
        else func_02096d6c(g, v8);
    }
    return vc;
}

extern "C" void func_02096258(s32 a, s32 n) {
    void *g = func_02097a30(func_0209750c());
    s32 i;
    for (i = 0; i < n; a++, i++) func_02096d4c(g, a);
}

extern "C" s32 func_02096288(s32 a, s32 n, s32 k) {
    void *g = func_02097a30(func_0209750c());
    s32 cnt = 0, idx = a, i = cnt;
    for (; i < n; idx++, i++) {
        if (func_02096d28(g, idx) == 0) {
            if (cnt == k) return idx;
            cnt++;
        }
    }
    return a;
}

extern "C" s32 func_020962d0(s32 a, s32 n) {
    void *g = func_02097a30(func_0209750c());
    s32 cnt = 0, i = cnt;
    for (; i < n; a++, i++) {
        if (func_02096d28(g, a) == 0) cnt++;
    }
    return cnt;
}

extern "C" void func_02096308(s32 x) {
    s32 i;
    for (i = 1; i <= 12; i++) {
        if (i != x) {
            s32 t = func_02096344((u8)i);
            func_02096258(t, func_02096338((u8)i));
        }
    }
}

extern "C" s32 func_02096354(Unk_02096354_Arg *p) {
    s32 r6 = func_02096344((u8)p->unk_04);
    s32 r7 = func_02096338((u8)p->unk_04);
    s32 r4 = func_020962d0(r6, r7);
    if (r4 == r7) {
        return func_020961dc(r6, r7, (u8)p->unk_04, 0);
    }
    if (func_02063b8c(r4 + func_020962d0(0x22, 0x38)) < r4) {
        return func_020961dc(r6, r7, (u8)p->unk_04, 0);
    }
    return func_020961dc(0x22, 0x38, (u8)p->unk_04, 1);
}

extern "C" s32 func_020963d0(Unk_02096354_Arg *p) {
    s32 c = p->unk_08;
    s32 b = p->unk_04;
    if (b == c) return func_020961dc(c * 2 - 2, 2, (u8)b, 1);
    if (b == 4 && c == 1) return func_020961dc(0x1c, 2, (u8)b, 1);
    if (b == 12 && c == 0x18) return func_020961dc(0x1e, 2, (u8)b, 1);
    if (b == 6) {
        if (p->unk_08 == func_0209ce68((u8)p->unk_00, (u8)b, 0, 3))
            return func_020961dc(0x1a, 2, (u8)p->unk_04, 1);
    }
    if (p->unk_04 == 5) {
        if (p->unk_08 == func_0209ce68((u8)p->unk_00, (u8)p->unk_04, 0, 2))
            return func_020961dc(0x18, 2, (u8)p->unk_04, 1);
    }
    return 0;
}

extern "C" s32 func_02096484(Unk_02096354_Arg *p) {
    void *r5 = func_0209750c();
    void *r6 = func_02097a30(r5);
    u8 *q = func_02098308(r5);
    if (*(u16 *)q == 0) return 0;
    if (p->unk_00 == func_02096d1c(r6)) return 0;
    s32 r;
    Unk_02096484_Rec A;
    A.d5 = p->unk_00;
    A.d4 = q[1];
    A.d3 = q[0];
    Unk_02096484_Rec B;
    B.d5 = p->unk_00;
    B.d4 = p->unk_04;
    B.d3 = p->unk_08;
    Unk_02096484_Base C;
    func_02116048(&A, &C, 8);
    func_0209d2c0(&C, 7);
    r = 0;
    if (C.d5 != A.d5) {
        C.d5 = A.d5;
        if (func_0209d3d0(&B, &C, 0x38) == 1) {
            if (func_0209d3d0(&B, &A, 0x38) == -1) goto end;
        }
        r = 1;
    } else {
        if (func_0209d3d0(&B, &C, 0x38) == 1) goto end;
        if (func_0209d3d0(&B, &A, 0x38) == -1) goto end;
        r = 1;
    }
end:
    if (r) r = func_020961dc(0x20, 2, (u8)p->unk_04, 1);
    return r;
}

extern "C" void func_02096570(Unk_02096354_Arg *p, s32 n) {
    void *r6 = func_0209750c();
    void *r4;
    if (r6 == 0) return;
    if (n < 1) return;
    if (func_02096880() == 0) {
        if (func_02096b24(-1) == 1) return;
    }
    r4 = func_02097a30(r6);
    func_02096308((u8)p->unk_04);
    if (func_02096dbc(r4, p) != 0) return;
    if (func_02096484(p) != 0) {
        func_02096d10(r4, (u8)p->unk_00);
        func_02096da4(r4, p);
        return;
    }
    if (func_020963d0(p) != 0) {
        func_02096da4(r4, p);
        return;
    }
    if (func_02063b8c(10) < 2) {
        if (func_02096354(p) != 0) {
            func_02096da4(r4, p);
            return;
        }
    }
    func_02096da4(r4, p);
}

extern "C" void func_02096618(void) {
    void *r6 = data_021ecfa8;
    if (func_0208f070(r6) != 0) {
        if (func_02096b24(-1) == 0) {
            void *r5 = func_0208f05c(r6);
            void *r4 = func_02098878(func_0209750c());
            func_02065ba4(r5, r4);
            func_02065ac0(r5);
            if (func_02096acc(r5, (s32)r4, 0) != 0) func_0208f088(r6);
        }
    }
}

extern "C" u8 func_02096670(u32 x) {
    s32 i;
    if (x <= 2 || x == 12) i = 3;
    else if (x <= 5) i = 0;
    else if (x <= 8) i = 1;
    else i = 2;
    return data_020e1d40[i][func_02063b8c(data_020d0444[i])];
}

extern "C" u8 func_020966b0(u32 i) {
    return data_020e1d50[i][func_02063b8c(data_020d0454[i])];
}

extern "C" u8 func_020966d0(u32 a, u32 b) {
    if (func_02063b8c(10) < 3) return func_02096670(b);
    return func_020966b0(a);
}

extern "C" void func_020966f8(void) {
    u8 *r5;
    if (func_02072e44(data_020cbb18)) return;
    u8 *const g = data_021eb98c;
    r5 = func_02096fc8(g);
    Unk_020966f8_Rec A;
    Unk_020966f8_Rec Y, Z;
    s32 z0, z1, z2;
    s32 i;
    u8 *r6;
    void *s0;
    Unk_02065554 *s4;
    A.a = 0; A.b = 0;
    func_0209d498(&A);
    Y.a = 0; Y.b = 0; Z.a = 0; Z.b = 0;
    if (func_02096fa0(g, 1)) {
        Y.a = 0; Y.b = 0;
        Y.d5 = r5[2];
        Y.d4 = r5[1];
        Y.d3 = r5[0];
        func_02116048(&Y, &Z, 8);
        if (r5[3] < 9) {
            r5[3] = 9;
            Z.d2 = 0x11;
        } else if (r5[3] < 0x11) {
            r5[3] = 0x11;
            Z.d2 = 9;
            func_0209d2c0(&Z, 1);
        } else {
            r5[3] = 9;
            func_0209d2c0(&Y, 1);
            Z.d2 = 0x11;
            func_0209d2c0(&Z, 1);
        }
        Y.d2 = r5[3];
        if (func_0209d3d0(&A, &Y, 0x3c) != -1) {
            func_02096b74();
            if (func_0209d3d0(&A, &Z, 0x3c) != -1) func_02096b74();
        }
    } else {
        func_02096fb8(g, 1);
    }
    z2 = 0; z1 = 0; z0 = 0;
    for (i = 0; i < 4; i++) {
        if (func_020978c8(data_021d735c, i)) {
            s0 = func_02097868(data_021d735c, i);
            r6 = func_02096e50(func_02097a3c(s0));
            s4 = func_02096e54(func_02097a3c(s0));
            if (s4->func_02065578()) {
                Y.a = z0; Y.b = z0;
                Y.d5 = r6[2];
                Y.d4 = r6[1];
                Y.d3 = r6[0];
                Y.d2 = 9;
                if (func_0209d3d0(&A, &Y, 0x3c) != ~z2) {
                    if (func_02096acc(s4, i, z1)) func_02096e28(func_02097a3c(s0));
                }
            }
        }
    }
    r5[2] = A.d5;
    r5[1] = A.d4;
    r5[0] = A.d3;
    r5[3] = A.d2;
}

extern "C" s32 func_02096880(void) {
    s32 i;
    u8 *p = (u8 *)func_02097020(data_021eb98c, 0);
    for (i = 0; i < 10; p += 0xf4, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) return 1;
    }
    return 0;
}

extern "C" s32 func_020968b8(void *p) {
    if (p == 0) p = func_0209750c();
    if (func_02096e54(func_02097a3c(p))->func_02065578() != 0) return 1;
    return 0;
}

extern "C" void func_020968e0(void) {}

extern "C" s32 func_020968e4(void *base, s32 n) {
    s32 i, cnt;
    cnt = 0;
    i = cnt;
    for (; i < n; i++) {
        if (((Unk_02065554 *)((u8 *)base + i * 0xf4))->func_02065578()) cnt++;
    }
    return cnt;
}

extern "C" s32 func_02096914(void *base, s32 n) {
    s32 i = 0, j = i;
    for (; i < n; i++) {
        u8 *e = (u8 *)base + i * 0xf4;
        if (((Unk_02065554 *)e)->func_02065578()) {
            if (i != j) {
                func_02065e70((u8 *)base + j * 0xf4, e);
                func_02065c94(e);
            }
            j++;
        }
    }
    return j;
}

extern "C" s32 func_02096960(void) {
    void *r5 = data_021dfd8c;
    void *r4 = func_0206561c();
    u8 tmp[12];
    s32 res;
    if (r4 == 0) return -1;
    func_02003130(tmp);
    func_0200315c(tmp, r4);
    res = func_0207bfb4(r5, tmp);
    if (func_0207c014(res)) {
        func_02003100(tmp);
        return res;
    }
    func_02003100(tmp);
    return -2;
}

extern "C" s32 func_020969b8(void) {
    void *r4 = func_02065628();
    u8 tmp[0x18];
    s32 res;
    if (r4 == 0) return -1;
    func_020942f8(tmp);
    func_02094264(tmp, r4);
    res = func_02097740(data_021d735c, tmp);
    if (func_020978fc(res)) {
        func_020942c8(tmp);
        return res;
    }
    func_020942c8(tmp);
    return -2;
}

extern "C" u8 func_02096338(u8 v) { return data_020e1d34[v - 1]; }
extern "C" u32 func_02096344(u8 v) { return data_020e1d28[v - 1] + 0x5a; }
