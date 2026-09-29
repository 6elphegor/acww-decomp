#include "types.h"

class Unk_020254ec;

struct Unk_020254ec_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_020254ec_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_020254ec_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_02025540_Tbl {
    s32 pad[0x19];
    s32 unk_64;
};

struct Unk_020257f0_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};

struct Unk_0202585c_Pair {
    u32 a, b;
};

typedef void (Unk_020254ec::*Unk_020254ec_Fn)();

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0202d1d4(void *, void *);
void func_02067abc(void *, u8 *, u32);
void *func_0202d114(void *);
s32 func_0209a938(void *);
void *func_0209a940(void *);
s32 func_0209ad68(void *);
s32 func_0209ac64(void *);
void func_0209ace8(void *, s32 *);
s32 func_0209a8f4(s32);
void func_0209a9f0(void *, s32, void *, s32, s32);
void func_020775a0(void *, s32, void *, s32, s32);
void func_0207e310(void *);
void func_02078578();
s32 func_0209ad80();
void *func_0209750c();
s32 func_0209888c(void *);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_0209d498(void *);
s32 func_0209a8e0(void *);
s32 func_02052c54(u16 *);
s32 func_0209a874();
void func_0201577c(void *, s32, void *, void *, void *);
void func_0201578c(void *, void *, s32, s32);
void *func_0207e268(void *);
s32 func_0209a60c(void *);
s32 func_0207efa0(void *);
s32 func_0209a7d0(s32, s32);
void func_0209a8c8(void *, s32);
void func_020776cc(void *, s32);
void func_0209a774(u16 *, s32, s32);
s32 func_02062ad4(u16 *, u32, u32, u32, u32, u32, u32, u32, u32, u32);
s32 func_02063b8c(s32);
s32 func_0207bcfc(s32, s32, s32);
s32 func_0207f968(void *);
u16 *func_0207fd9c(void *);
s32 func_0202c33c(u16 *, s32, s32, s32, s32);
void func_020259b4(u16 *out, Unk_020254ec *self, u32 idx);
void func_02025bb0(u16 *out, Unk_020254ec *self, u32 idx);
void func_02025a50(u16 *p);
s32 func_02025a68(u16 *p, s32 v);
void func_02025d24(u16 *out, u32 mask, s32 cnt, void *x, u8 a, u32 b);
}

extern Unk_020254ec_Data data_020d7e48;
extern Unk_020254ec_Data data_020c7918;
extern Unk_020254ec_Data data_020c7920;
extern u32 *data_020d8850[];
extern Unk_02025540_Tbl *data_020cbb18;
extern u8 data_021bf5bc[];
extern u8 data_021bf574[];
extern u8 data_021bf58c[];
extern u8 data_020d8ad4[];
extern Unk_020254ec_Fn data_020d7eb0;
extern Unk_020254ec_Fn data_020d7ec0;
extern Unk_020254ec_Fn data_020d7ec8;
extern void (*data_020c7af4[])(u16 *, s32, void *);
extern void (*data_020c7b4c[])(u16 *, s32, u16 *);
extern void (*data_020c7ae0[])(u16 *, Unk_0202585c_Pair *);

class Unk_020254ec {
public:
    void func_020254ec();
    void func_02025540(Unk_020254ec_Out *out);
    void func_020255fc();
    void func_02025680(Unk_020254ec_Out *out);
    void func_020256ec();
    void func_02025780(Unk_020254ec_Out *out);
    void func_020257e8();
    void func_020257f0();
    void func_0202585c();
    void func_0202d1c0(Unk_020254ec_Fn fn);
    void func_0202d294(Unk_020254ec_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    void (Unk_020254ec::*unk_ac)(Unk_020254ec_Out *);
    u8 pad_b4[0xfc - 0xb4];
    Unk_020254ec_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x156 - 0x122];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
};

void Unk_020254ec::func_020254ec() {
    u8 b;
    Unk_020254ec_Out out;
    func_0202d1d4(this, data_021bf5bc);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_020254ec::func_02025540(Unk_020254ec_Out *out) {
    Unk_020254ec_Data d = data_020d7e48;
    s32 r6 = func_0209a938(unk_160);
    s32 r7 = func_0209ac64(func_0202d114(this));
    s32 x = 0;
    func_0209ace8(func_0202d114(this), &x);
    if (r6 < func_0209a8f4(r7) && x < 5) {
        d.unk_00 = data_020d8850[x][r6];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_020254ec::func_020255fc() {
    void *r6 = unk_fc->unk_82c;
    s32 r4 = 0;
    s32 r7;
    if (func_0209ad68(func_0209a940(unk_160)) == 0) {
        r7 = func_0209ac64(func_0202d114(this));
        r4 = 1;
    } else {
        r7 = func_0209ac64(func_0209a940(unk_160));
    }
    func_0209a9f0(unk_160, r7, &unk_120, 0, r4);
    func_020775a0(r6, r7, &unk_120, 4, r4);
    func_0207e310(r6);
    func_02078578();
    func_0209ad80();
}

void Unk_020254ec::func_02025680(Unk_020254ec_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7918.unk_00, data_020c7918.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_0202d294(data_020d7eb0);
}

void Unk_020254ec::func_020256ec() {
    void *r6 = unk_fc->unk_82c;
    s32 r4 = 0;
    s32 r7;
    if (func_0209ad68(func_0209a940(unk_160)) == 0) {
        r7 = func_0209ac64(func_0202d114(this));
        r4 = 1;
    } else {
        r7 = func_0209ac64(func_0209a940(unk_160));
    }
    func_0209a9f0(unk_160, r7, &unk_120, func_0209888c(func_0209750c()), r4);
    func_020775a0(r6, r7, &unk_120, data_020cbb18->unk_64, r4);
    func_0207e310(r6);
    func_02078578();
    func_0209ad80();
}

void Unk_020254ec::func_02025780(Unk_020254ec_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7920.unk_00, data_020c7920.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5e;
}

void Unk_020254ec::func_020257e8() {
    func_020256ec();
}

void Unk_020254ec::func_020257f0() {
    Unk_020257f0_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x1f, 0x1f, data_021bf574);
    func_0201c938(this, &s, 1, 0x20, 0x20, data_021bf58c);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7ec0);
    func_020679c0(unk_3c, 1);
}

static inline BOOL R1(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
    return r;
}

void Unk_020254ec::func_0202585c() {
    Unk_0202585c_Pair pr;
    u8 arr[2];
    u16 h1;
    u16 h2;
    s32 r5 = 0;
    pr.a = r5;
    pr.b = r5;
    if (func_0209ad68(func_0209a940(unk_160)) != 0) {
        r5 = func_0209a938(unk_160);
    }
    func_0209d498(&pr);
    switch ((u32)func_0209ac64(func_0202d114(this))) {
    case 0:
        if (unk_120 != 0xfff1) {
            func_0201578c(this, &unk_120, 0, 7);
        }
        break;
    case 1:
        if (unk_120 != 0xfff1) {
            func_0201578c(this, &unk_120, 0, 7);
        }
        break;
    case 2: {
        if (unk_120 == 0xfff1) {
            func_020259b4(&h1, this, r5);
            unk_120 = h1;
        }
        if (r5 >= 2) {
            s32 v = func_0209a8e0(unk_160);
            if (v >= 0x18) {
                if (R1(&unk_120)) {
                    v = func_02052c54(&unk_120);
                }
            }
            if (v < 0x18) {
                s32 r = func_0209a874();
                if (r != -1) {
                    arr[0] = r;
                    arr[1] = 0;
                    func_0201577c(this, 0, arr, data_020d8ad4, &arr[1]);
                }
            }
        }
        break;
    }
    case 3:
        if (unk_120 == 0xfff1) {
            func_02025bb0(&h2, this, r5);
            unk_120 = h2;
        }
        if (unk_120 != 0xfff1) {
            func_0201578c(this, &unk_120, 0, 7);
        }
        break;
    case 4:
        break;
    }
    func_0202d294(data_020d7ec8);
}

extern "C" {

void func_020259b4(u16 *out, Unk_020254ec *self, u32 idx) {
    if (idx < 5) {
        void (*fn)(u16 *, s32, void *) = data_020c7af4[idx];
        if (fn != 0) {
            void *r6 = self->unk_fc->unk_82c;
            fn(out, func_0209a60c(func_0207e268(r6)), r6);
            return;
        }
    }
    *out = 0xfff1;
}

void func_020259f8(u16 *out, void *a, void *b) {
    u32 r4 = func_0209a8e0(a);
    if (r4 == 0x18) {
        r4 = (u8)func_0209a7d0(func_0207efa0(b), 10);
        func_0209a8c8(a, r4);
        func_020776cc(b, r4);
    }
    if (r4 < 0x18) {
        func_0209a774(out, r4, 0);
    } else {
        *out = 0xfff1;
    }
}

void func_02025a50(u16 *p) {
    func_02025a68(p, func_02052c54(p));
}

s32 func_02025a68(u16 *p, s32 v) {
    u16 tmp;
    s32 idx;
    u32 i;
    s32 j;
    if (R1(p)) {
        tmp = 0xfff1;
        if (R1(p)) {
            idx = (*p - 0x450c) >> 2;
        } else {
            idx = -1;
        }
        for (i = 0; i < 0x34; i++) {
            tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
            if (v == func_02052c54(&tmp)) {
                for (j = 0; j < 3; j++) {
                    if (idx == j + (s32)i) return j;
                }
                break;
            }
        }
    }
    return -1;
}


static inline BOOL R2(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x450c && a <= 0x45db) r = TRUE;
    return r;
}

void func_02025afc(u16 *out) {
    u16 arr[2];
    func_02062ad4(&arr[0], 0x450c, 0x34, 0, 0, 0, 1, 10, 0, 1);
    func_02062ad4(&arr[1], 0x450c, 0x34, 0, 0, (u32)func_0209750c(), 0, 10, 0, 1);
    *out = 0xfff1;
    if (R2(&arr[0])) {
        if (R2(&arr[1]) && (func_02063b8c(10) & 1)) {
            *out = arr[1];
        } else {
            *out = arr[0];
        }
    } else {
        *out = arr[1];
    }
}

void func_02025bb0(u16 *out, Unk_020254ec *self, u32 idx) {
    if (idx < 7) {
        void (*fn)(u16 *, s32, u16 *) = data_020c7b4c[idx];
        if (fn != 0) {
            void *r6 = self->unk_fc->unk_82c;
            s32 r7 = func_0207f968(r6);
            u16 t = *func_0207fd9c(r6);
            fn(out, r7, &t);
            return;
        }
    }
    *out = 0xfff1;
}

void func_02025c04(u16 *out, u8 *p, u32 arg) {
    u16 arr[2];
    *out = 0xfff1;
    func_02062ad4(&arr[0], 0x11a8, 0x100, arg, 1, (u32)func_0209750c(), 0, *p, 0, 1);
    *out = arr[0];
    if (*out == 0xfff1) {
        func_02062ad4(&arr[1], 0x11a8, 0x100, arg, 1, (u32)func_0209750c(), 1, *p, 0, 1);
        *out = arr[1];
    }
}

void func_02025c80(u16 *out, u8 *p, u32 arg) {
    func_02062ad4(out, 0x11a8, 0x100, arg, 1, 0, 0, *p, 0, 1);
}

void func_02025cb0(u16 *out, u8 *p, u32 arg) {
    u16 arr[2];
    u16 mask;
    s32 cnt;
    s32 i;
    *out = 0xfff1;
    mask = 0;
    cnt = 0;
    for (i = 0; i < 10; i++) {
        if (i != p[1]) {
            mask |= 1 << i;
            cnt++;
        }
    }
    func_02025d24(&arr[0], mask, cnt, func_0209750c(), 1, arg);
    *out = arr[0];
    if (*out == 0xfff1) {
        func_02025d24(&arr[1], mask, cnt, 0, 0, arg);
        *out = arr[1];
    }
}

void func_02025d24(u16 *out, u32 mask, s32 cnt, void *x, u8 a, u32 b) {
    u16 buf;
    s32 r;
    *out = 0xfff1;
    while ((r = func_0207bcfc(mask, cnt, 10)) != -1) {
        func_02062ad4(&buf, 0x11a8, 0x100, b, 1, (u32)x, a, r, 0, 1);
        *out = buf;
        break;
    }
}

void func_02025d80(u16 *out, void *unused, u32 idx) {
    if (idx < 5) {
        void (*fn)(u16 *, Unk_0202585c_Pair *) = data_020c7ae0[idx];
        if (fn != 0) {
            Unk_0202585c_Pair pr;
            pr.a = 0;
            pr.b = 0;
            func_0209d498(&pr);
            fn(out, &pr);
            return;
        }
    }
    *out = 0xfff1;
}

void func_02025dbc(u16 *out, u8 *p) {
    *out = 0xfff1;
    if (!func_0202c33c(out, 3, 4, p[4], p[3])) {
        func_0202c33c(out, 0, 2, p[4], p[3]);
    }
}

}
