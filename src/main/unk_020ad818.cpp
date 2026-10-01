#include "types.h"

// Two unrelated-looking classes share this range (no vtables found).
// Unk_020ad818: date/time-like slot object; 0xc..0xe = 3 date bytes, 0xf = flag, 0x10 = u16[6]
struct V8 { u8 b0, b1, b2, b3, b4, b5, b6, b7; };
struct B4 { u8 b[4]; };
struct E12 { u16 h; u8 pad[10]; };
struct G { u8 p0, p1, p2, p3; };
struct S1 { u8 pad[0xc]; u8 c, d, e, f; u16 arr[6]; };
// Unk_020adb70: text-entry object; 0x4 = u16 str[0x24], 0x52..0x55 = date bytes, 0x5a = flag bitfield
struct S { u8 pad0[4]; u16 str[0x24]; u8 pad1[6]; u8 f52, f53, f54, f55; u8 pad2[4]; u16 lo : 5; u16 cnt : 4; u16 kind : 2; u16 rest : 5; };
struct Ch {
    u16 v;
    Ch(u16 x) { v = x; }
    ~Ch() {}
};

extern "C" {
extern u8 data_020d0988[], data_020d096c[], data_020d0974[], data_020d0968[], data_020d0970[], data_020d0984[], data_020d0980[], data_020d097c[], data_020d0978[];
extern u16 data_020d09b4[];
extern u8 data_021ed104[];
extern u8 data_021ee1f4[];
extern u8 data_021d7350[];
extern u32 data_020cbb18;

void func_02004b60(void*);
void func_0203442c(void*);
void func_021355f0(void*, u32, u32, void (*)(void*));
void func_02135714(void*, u32, u32, void (*)(void*), void (*)(void*));
void func_02116048(const void*, void*, u32);
u32 func_020af070(u32, u32, void*);
void func_020aef80(u32, void*, void*, u32);
u16* func_020af034(u32, void*, void*, u32, u32);
void func_020af0c4(void*, void*, u32);
void func_020af0f8(void*, void*, u32, u32, u32, u32, u32);
void func_020af160(void*, void*, u32, u32, u32, u32, u32);
void func_0209d498(V8*);
void func_0209d164(V8*, u32);
u32 func_02072e44(u32);
void func_020633a0(void*, u32, u32, u32);
u32 func_0204b2d4(void);
u32 func_0204b25c(u16*);
u32 func_02063b8c(u32);
void func_020ad798(S1*);
void func_020ad79c(S1*, u32*);
void func_020ad7b8(S1*, u32*);
u32 func_020ac79c(void);
u32 func_020ae9e0(void*);
u32 func_020ae888(void*);
void* func_0204da0c(u32);
void* func_0204ec8c(void*, u32);
u32 func_02037558(void*, u32, u32, u32);
u32 func_0204b1a0(void);
u16 func_0204b160(u32);
void func_02037590(void*, void*, u32, u32, u32);
u32 func_020aec74(void*);
void func_020aecc4(void);
G* func_020aeac4(void*);
void func_020ae3a4(void*, u32);
s32 func_02063394(void*, u32);
BOOL func_0209e170(void*, u32);
void func_0209cf88(B4*);
s32 func_0209cd00(B4*, u8*);
void func_0209e120(void*, u32);
void func_0209e148(void*, u32);
s32 func_0209ceac(u32, u32, u32);
void func_0209d2c0(V8*, s32);
s32 func_0203f508(E12*, V8*);
BOOL func_020ae290(u16);
s32 func_0209d3d0(V8*, V8*, u32);
void func_020aed98(u32, u32);

u32 func_020ae02c(S*);
void func_020ae008(S*, u32);
u32 func_020adff0(S*);
u32 func_020adfd8(S*);
u32 func_020adfc0(S*);
u32 func_020adfa8(S*);
u32 func_020adf90(S*);
u32 func_020adf78(S*);
u32 func_020adf60(S*);
u32 func_020adf48(S*);
u32 func_020adf30(S*);
u32 func_020adf2c(S*);
void func_020ada2c(S1*);
u32 func_020ad8c0(S1*, u32);
u16* func_020ad8e8(S1*, u32, u32);
void func_020ad904(S1*, void*);
u32 func_020ad930(S1*, void*);
void func_020ad970(S1*, u32, u32, u32);
void func_020ad838(S1*, u32*);
void func_020ad818(S1*, u32*);

// mwcc emits functions in reverse order: highest address first.

void func_020ae040(S *s, V8 *p) {
    V8 A;
    B4 B;
    V8 C, D, E, F, G, H, I;
    E12 arr1[7];
    E12 arr2[7];
    s32 mode;
    u8 d5;
    u8 e5;
    s32 n1;
    s32 n2;
    u8 d4;
    u8 d3;
    u8 e4;
    u8 e3;
    s32 k, i, cnt1, cnt2, r, r5;
    func_02116048(p, &A, 8);
    mode = func_02063394(data_021ee1f4, 2);
    if (func_0209e170(data_021d7350, 5)) {
        func_0209cf88(&B);
        r = func_0209cd00(&B, &s->f52);
        if (r >= 1) {
            func_0209e120(data_021d7350, 5);
        } else if (r <= -7) {
            func_0209e120(data_021d7350, 5);
        }
    }
    if (!func_0209e170(data_021d7350, 5)) {
        func_02116048(p, &C, 8);
        k = func_0209ceac(C.b5, C.b4, C.b3);
        if (k != 6 && k != 0) {
            r5 = 6 - k;
            if (r5 < 0) r5 = -r5;
            func_02116048(&C, &D, 8);
            func_02116048(&C, &E, 8);
            func_0209d2c0(&D, r5);
            func_0209d2c0(&E, r5 + 1);
            d4 = D.b4;
            d3 = D.b3;
            d5 = D.b5;
            e4 = E.b4;
            e3 = E.b3;
            e5 = E.b5;
            func_02116048(&D, &H, 8);
            n1 = func_0203f508(arr1, &H);
            func_02116048(&E, &I, 8);
            n2 = func_0203f508(arr2, &I);
            cnt1 = 0;
            cnt2 = 0;
            for (i = 0; i < n1; i++) {
                if (func_020ae290(arr1[i].h)) cnt1++;
            }
            for (i = 0; i < n2; i++) {
                if (func_020ae290(arr2[i].h)) cnt2++;
            }
            if (cnt1 == 0 && cnt2 == 0) {
                if (mode == 0) {
                    s->f54 = d5;
                    s->f53 = d4;
                    s->f52 = d3;
                    s->f55 = 0;
                } else {
                    s->f54 = e5;
                    s->f53 = e4;
                    s->f52 = e3;
                    s->f55 = 0;
                }
                func_0209e120(data_021d7350, 6);
                func_0209e148(data_021d7350, 5);
            }
        }
    }
    if (func_0209e170(data_021d7350, 5)) {
        ((u32*)&F)[0] = 0;
        ((u32*)&F)[1] = 0;
        F.b5 = s->f54;
        F.b4 = s->f53;
        F.b3 = s->f52;
        F.b2 = 6;
        F.b1 = 0;
        if (func_0209d3d0(&F, &A, 0x38) == -1) {
            func_0209e120(data_021d7350, 5);
        } else {
            func_02116048(&F, &G, 8);
            func_0209d164(&G, 4);
            if (func_0209d3d0(&G, &A, 0x38) == -1) {
                if (func_0209d3d0(&A, &F, 0x38) == -1) {
                    if (!func_0209e170(data_021d7350, 6)) {
                        func_020aed98(s->f53, s->f52);
                        func_0209e148(data_021d7350, 6);
                    }
                }
            }
        }
    }
}
void func_020ae03c(S *s) {}
u32 func_020ae02c(S *s) { return s->kind & 3; }
void func_020ae008(S *s, u32 v) { s->kind = (u16)(v & 3); }
u32 func_020adff0(S *s) { return data_020d0978[func_020ae02c(s)]; }
u32 func_020adfd8(S *s) { return data_020d097c[func_020ae02c(s)]; }
u32 func_020adfc0(S *s) { return data_020d0980[func_020ae02c(s)]; }
u32 func_020adfa8(S *s) { return data_020d0984[func_020ae02c(s)]; }
u32 func_020adf90(S *s) { return data_020d0970[func_020ae02c(s)]; }
u32 func_020adf78(S *s) { return data_020d0968[func_020ae02c(s)]; }
u32 func_020adf60(S *s) { return data_020d0974[func_020ae02c(s)]; }
u32 func_020adf48(S *s) { return data_020d096c[func_020ae02c(s)]; }
u32 func_020adf30(S *s) { return data_020d0988[func_020ae02c(s)]; }
u32 func_020adf2c(S *s) { return 1; }
void func_020add64(S *s, s32 *p) {
    static Ch tbl[7] = {Ch(0x1369), Ch(0x1378), Ch(0x1376), Ch(0x1374), Ch(0x156c), Ch(0x136b), Ch(0x137a)};
    s32 t = (func_020ae02c(s) == 0) ? ~2 : 0;
    u32 start = *p;
    u32 i;
    func_020af0f8(s->str, p, 0, t + 7, func_020adff0(s), 0x25, 0);
    if (func_020ae02c(s) == 0) {
        u32 cnt = 0;
        u32 j = 0;
        S *base = (S*)((u16*)s + start);
        for (; j < func_020adff0(s); j++) {
            u16 *q = &s->str[start + j];
            u32 m;
            if (func_0204b2d4()) {
                u16 three = 3;
                u32 a = func_0204b25c(q);
                m = (a == func_0204b25c(&three)) ? 1 : 0;
            } else {
                m = (base->str[j] == 3) ? 1 : 0;
            }
            if (m) cnt++;
        }
        if (cnt == 0) {
            u16 *d = &s->str[start + func_02063b8c(2)];
            *d = 3;
        }
    }
    S *base2;
    i = 0;
    base2 = (S*)((u16*)s + start);
    for (; i < func_020adff0(s); i++) {
        base2->str[i] = tbl[base2->str[i]].v;
    }
}
void func_020add3c(S *s, void *p) {
    func_020af160(s->str, p, 0, 0, func_020adfd8(s), 0x25, 0);
}
void func_020adcec(S *s, s32 *p) {
    u32 start = *p;
    u32 i;
    func_020af0f8(s->str, p, 0, 0xc, func_020adfc0(s), 0x25, 0);
    for (i = start; i < start + func_020adfc0(s); i++) {
        s->str[i] = data_020d09b4[s->str[i]];
    }
}
void func_020adcbc(S *s, void *p) {
    func_020af0f8(s->str, p, 0x151d, 2, func_020adfa8(s), 0x25, 0);
}
void func_020adc94(S *s, void *p) {
    func_020af160(s->str, p, 4, 0, func_020adf90(s), 0x25, 0);
}
void func_020adc6c(S *s, void *p) {
    func_020af160(s->str, p, 3, 0, func_020adf78(s), 0x25, 0);
}
void func_020adc44(S *s, void *p) {
    func_020af160(s->str, p, 1, 0, func_020adf60(s), 0x25, 0);
}
void func_020adbd0(S *s, s32 *p) {
    u32 i;
    for (i = 0; i < func_020adf48(s); i++) {
        u32 c = s->cnt & 0xf;
        u16 v;
        if (c < 16) v = 0x1521 + c; else v = 0x1521;
        s->str[(*p)++] = v;
        s->cnt++;
    }
}
void func_020adba0(S *s, void *p) {
    func_020af0f8(s->str, p, 0x151f, 1, func_020adf30(s), 0x25, 0);
}
void func_020adb70(S *s, void *p) {
    func_020af0f8(s->str, p, 0x155e, 1, func_020adf2c(s), 0x25, 0);
}
u32 func_020ada88(void) {
    u32 r6;
    void *r7;
    u32 y, x;
    if (func_020ac79c() == 1) return 0;
    if (func_020ae9e0(data_021ed104)) {
        r6 = func_020ae888(data_021ed104);
        void *t = func_0204da0c(r6);
        if (t) {
            r7 = func_0204ec8c(t, 2);
            if (r7) {
                for (y = 0; y < 16; y++) {
                    for (x = 0; x < 16; x++) {
                        if (func_02037558(r7, x, y, 0) && func_0204b1a0()) {
                            u16 name;
                            u32 a[2];
                            V8 b;
                            name = func_0204b160(r6);
                            func_02037590(r7, &name, x, y, 0);
                            func_020ae008((S*)data_021ed104, r6);
                            a[0] = 0; a[1] = 0;
                            if (func_020aec74(a)) {
                                ((u32*)&b)[0] = 0; ((u32*)&b)[1] = 0;
                                func_0209d498(&b);
                                if (b.b5 == ((V8*)a)->b5 && b.b4 == ((V8*)a)->b4 && b.b3 == ((V8*)a)->b3) func_020aecc4();
                            }
                            func_020aeac4(data_021ed104)->p3 = 0;
                            func_020ae3a4(data_021ed104, 1);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
void* func_020ada60(void *p) {
    func_02135714(p, 6, 2, func_0203442c, func_02004b60);
    return p;
}
void* func_020ada44(void *p) {
    func_021355f0(p, 6, 2, func_02004b60);
    return p;
}
void func_020ada2c(S1 *s) {
    func_020af0c4(s, s->arr, 6);
    s->f = 1;
}
void func_020ada24(S1 *s) { func_020ada2c(s); }
void func_020ada20() {}
void func_020ad9c4(S1 *s) {
    V8 t;
    ((u32*)&t)[0] = 0;
    ((u32*)&t)[1] = 0;
    func_0209d498(&t);
    if (t.b2 < 6) func_0209d164(&t, 1);
    if (!func_02072e44(data_020cbb18) && func_020ad930(s, &t)) {
        func_020ad970(s, t.b5, t.b4, t.b3);
        func_020ad904(s, &t);
    }
}
void func_020ad970(S1 *s, u32 a, u32 b, u32 c) {
    u32 x;
    func_020ada2c(s);
    func_020633a0(&data_021ee1f4, a, b, c);
    x = 0;
    func_020ad838(s, &x);
    func_020ad818(s, &x);
    func_020ad7b8(s, &x);
    func_020ad79c(s, &x);
    func_020ad798(s);
}
u32 func_020ad930(S1 *s, void *p) {
    V8 buf;
    func_02116048(p, &buf, 8);
    if (s->e != buf.b5 || s->d != buf.b4 || s->c != buf.b3 || s->f != 0) return 1;
    return 0;
}
void func_020ad904(S1 *s, void *p) {
    V8 buf;
    func_02116048(p, &buf, 8);
    s->e = buf.b5;
    s->d = buf.b4;
    s->c = buf.b3;
    s->f = 0;
}
u16* func_020ad8e8(S1 *s, u32 a, u32 c) {
    return func_020af034(a, s, s->arr, 6, c);
}
u32 func_020ad854(S1 *s, u16 *key) {
    u32 i;
    for (i = 0; i < 6; i++) {
        u16 *p = func_020ad8e8(s, i, 0);
        BOOL m;
        if (func_0204b2d4()) {
            m = (func_0204b25c(p) == func_0204b25c(key)) ? TRUE : FALSE;
        } else {
            m = (*p == *key) ? TRUE : FALSE;
        }
        if (m) {
            return func_020ad8c0(s, i);
        }
    }
    return 0;
}
void func_020ad8d0(S1 *s, u32 a) {
    func_020aef80(a, s, s->arr, 6);
}
u32 func_020ad8c0(S1 *s, u32 a) {
    return func_020af070(a, 6, s->arr);
}
void func_020ad838(S1 *a, u32 *b) {
    func_020af160(a, b, 7, 0x1d, 1, 6, 1);
}
void func_020ad818(S1 *a, u32 *b) {
    func_020af160(a, b, 2, 0, 3, 6, 1);
}

}
