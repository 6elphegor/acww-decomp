#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};

struct Unk_02029f58_T {
    u8 v[0x1c];
};

struct Unk_02029a88_Pair {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02029c74_Rec {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a;
    u8 unk_0b;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void func_02067abc(void *, u8 *, u32);
s32 func_02067a3c(void *, s32, void *);
void func_0200303c(void *, s32, u32, u32);
void *func_0209ac1c(s32);
void *func_02099db4(s32, void *);
void *func_02099d44(s32, void *, s32);
void *func_0209a4f0(void *);
void *func_0209a4e4(void *, s32);
s32 func_0209a42c(void *);
void func_0202d120(void *, void *);
void func_020157b8(void *, void *, s32);
void *func_0209ab94(void *);
void func_0201578c(void *, void *, s32, s32);
s32 func_0209abcc(void *);
void *func_0209750c();
void func_0209d498(void *);
s32 func_0209ac44(void *);
s32 func_0209d3d0(s32, void *, s32);
void *func_02098750(void *);
s32 func_0202cee4(void *, void *);
s32 func_0209ad68(void *);
s32 func_02128930(void *, void *, s32);
s32 func_0209ac64(void *);
s32 func_0206ed18();
s32 func_02080f94(void *);
void *func_0206ecf0();
void func_02080ccc(void *, void *, s32);
void *func_0209888c(void *);
void *func_0207f344(void *, void *, s32, void *);
void func_02094030(void *);
void func_02094018(void *);
void func_02080d4c(void *, void *);
s32 func_02080dd8();
void func_02115fb4(void *, s32, u32);
void func_0201511c(void *, s32, void *, s32, s32);
void func_020151d0(void *, s32);
void func_020940d0(void *, void *);
s32 func_0202a238(void *, void *, u32);
void func_020a7bd8(void *, void *);
void func_0209cf88(void *);
void func_02080cf8(void *, void *);
void func_020796d4(void *, void *);
void func_0207f368(void *, void *, void *);
}

extern Unk_0201d2d0_Data data_020c76b0;
extern u32 data_020c76e0;
extern u8 data_021bf4b4[];
extern u8 data_021bf49c[];
extern u8 data_021be730[];
extern u8 data_020c74fc[];
extern u8 data_021be668[];
extern u8 data_020c7500[];
extern u8 data_021bf394[];
extern u8 data_021bf3dc[];
extern u8 data_020c74f0[];
extern u8 data_020c74f4[];
extern u8 data_021bf7b4[];
extern u8 data_021bf0dc[];
extern u8 data_021bf0c4[];
extern u8 data_021bf0ac[];
extern u8 data_021bf094[];
extern u8 data_021be6c0[];
extern u8 data_021dfd8c[];
extern Unk_0201d2d0_Fn data_020d7fd0;
extern Unk_0201d2d0_Fn data_020d7a68;
extern Unk_0201d2d0_Fn data_020d7a98;
extern Unk_0201d2d0_Fn data_020d7f18;
extern Unk_0201d2d0_Fn data_020d7cc8;
extern Unk_0201d2d0_Fn data_020d7ab8;

static inline BOOL Unk_020298c8_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" BOOL func_020298c8(u16 *p, s32 v) {
    BOOL r = FALSE;
    if (Unk_020298c8_R1(p, 0x12e8, 0x131f) && v == 0) r = TRUE;
    return r;
}

extern "C" BOOL func_020298f8(u16 *p) {
    return Unk_020298c8_R1(p, 0x12e8, 0x131f);
}

extern "C" BOOL func_02029918(u16 *p, s32 v) {
    BOOL r = FALSE;
    if (Unk_020298c8_R1(p, 0x12b0, 0x12e7) && v == 0) r = TRUE;
    return r;
}

extern "C" BOOL func_02029948(u16 *p) {
    return Unk_020298c8_R1(p, 0x12b0, 0x12e7);
}

class Unk_0201d2d0 {
public:
    BOOL func_02029968(s32 unused, s32 a, s32 b);
    BOOL func_02029a88(s32 a, s32 b);
    BOOL func_02029c74(s32 a, s32 b);
    void func_02029d84(Unk_0201d2d0_Out *out);
    void func_02029de4(Unk_0201d2d0_Out *out);
    void func_02029e38(Unk_0201d2d0_Out *out);
    void func_02029e8c();
    void func_02029e98();
    void func_02029f04(Unk_0201d2d0_Out *out);
    void func_02029f58();
    void func_0202a030(s32 unused);
    void func_0202a074(Unk_0201d2d0_Out *out);
    void func_0202a0c8();
    void func_0202a18c();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void *func_0202d114();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xfc - 0xb4];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x128 - 0x11f];
    void *unk_128;
    u8 pad_12c[0x15c - 0x12c];
    void *unk_15c;
};

BOOL Unk_0201d2d0::func_02029968(s32 unused, s32 a, s32 b) {
    BOOL r = FALSE;
    unk_15c = func_02099db4(a, func_0209ac1c(b));
    if (unk_15c != 0) {
        Unk_0201d568_S s;
        func_0201c95c(this, &s);
        func_0202d120(this, func_0209a4f0(unk_15c));
        func_020157b8(this, func_0209a4e4(unk_15c, r), r);
        func_020157b8(this, func_0209a4e4(unk_15c, 1), 1);
        func_0201578c(this, func_0209ab94(func_0202d114()), r, 7);
        if (func_0209a42c(unk_15c) != 0) {
            func_0201c938(this, &s, r, 0x23, 0x23, data_021bf4b4);
        } else {
            func_0201c938(this, &s, r, 0x1e, 0x1e, data_021bf49c);
        }
        func_0201c91c(this, &s, 1, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 2, data_020c7500, data_021be668);
        s.unk_20 = 3;
        s.unk_21 = s.unk_20 - 1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d7fd0);
        func_020679c0(unk_3c, 1);
        r = TRUE;
    }
    return r;
}

BOOL Unk_0201d2d0::func_02029a88(s32 a, s32 b) {
    struct { void *p; void *v; void *p10; Unk_02029a88_Pair pair; } l;
    s32 r6;
    u8 cnt;
    BOOL r7;
    Unk_0201d568_S s;
    l.v = func_02099d44(b, func_020805c4((void *)a), 1);
    if (l.v != 0) {
        l.p = func_0209a4f0(l.v);
    } else {
        l.p = 0;
    }
    r6 = l.p != 0 ? func_0209abcc(l.p) : 4;
    r7 = FALSE;
    if (r6 == 0 || r6 == 2) {
        if (func_0209a42c(l.v) == 0) {
            cnt = 0;
            l.pair.unk_00 = cnt;
            l.pair.unk_04 = cnt;
            l.p10 = func_0209750c();
            func_0209d498(&l.pair);
            func_0201c95c(this, &s);
            unk_15c = l.v;
            func_0202d120(this, l.p);
            func_020157b8(this, func_0209a4e4(unk_15c, cnt), cnt);
            func_020157b8(this, func_0209a4e4(unk_15c, 1), 1);
            func_0201578c(this, func_0209ab94(func_0202d114()), cnt, 7);
            if (func_0209d3d0(func_0209ac44(func_0202d114()), &l.pair, 0x3f) == -1) {
                if (r6 != 0) {
                    if (r6 == 2) {
                        func_0201c938(this, &s, cnt, 0x2b, 0x2b, data_021bf394);
                        cnt = cnt + 1;
                        r7 = TRUE;
                    }
                } else {
                    func_0201c938(this, &s, cnt, 0x27, 0x27, data_021bf394);
                    cnt = cnt + 1;
                    r7 = TRUE;
                }
            } else {
                if (r6 != 0) {
                    if (r6 == 2) {
                        func_0201c91c(this, &s, cnt, data_020c74f0, data_021bf3dc);
                        cnt = cnt + 1;
                        r7 = TRUE;
                    }
                } else {
                    r6 = (s32)func_02098750(l.p10);
                    if (func_0202cee4((void *)r6, func_0209ab94(func_0209a4f0(unk_15c))) != -1) {
                        func_0201c91c(this, &s, cnt, data_020c74f4, data_021bf3dc);
                        cnt = cnt + 1;
                        r7 = TRUE;
                    }
                }
            }
            if (r7 != 0) {
                func_0201c91c(this, &s, cnt, data_020c74fc, data_021be730);
                func_0201c91c(this, &s, (u8)(cnt + 1), data_020c7500, data_021be668);
                s.unk_20 = cnt + 2;
                s.unk_21 = s.unk_20 - 1;
                func_0201c870(this, &s);
                func_0202d1c0(data_020d7a68);
                func_020679c0(unk_3c, 1);
            }
        }
    }
    return r7;
}

BOOL Unk_0201d2d0::func_02029c74(s32 a, s32 b) {
    void *r6;
    void *p;
    BOOL result;
    r6 = func_02099db4(b, 0);
    p = func_0209a4f0(r6);
    result = FALSE;
    if (func_0209ad68(p) != 0 && func_0209abcc(p) == 1) {
        Unk_02029c74_Rec *r4 = (Unk_02029c74_Rec *)func_0209a4e4(r6, 1);
        Unk_02029c74_Rec *r7 = (Unk_02029c74_Rec *)func_020805c4((void *)a);
        if (r7->unk_00 == r4->unk_00 && func_02128930(r7->unk_02, r4->unk_02, 8) == 0 && r7->unk_0b == r4->unk_0b && func_0209a42c(r6) == 0) {
            s32 t = func_0209ac64(p);
            switch (t) {
            case 0xe:
            case 0x10:
            case 0x11: {
                Unk_0201d568_S s;
                func_0201c95c(this, &s);
                unk_15c = r6;
                func_0202d120(this, p);
                func_0201c938(this, &s, 0, 0x1d, 0x1d, data_021bf7b4);
                func_0201c91c(this, &s, 1, data_020c74fc, data_021be730);
                func_0201c91c(this, &s, 2, data_020c7500, data_021be668);
                s.unk_20 = 3;
                s.unk_21 = s.unk_20 - 1;
                func_0201c870(this, &s);
                func_0202d1c0(data_020d7a98);
                func_020679c0(unk_3c, 1);
                result = TRUE;
            }
            }
        }
    }
    return result;
}

void Unk_0201d2d0::func_02029d84(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c76b0.unk_00, data_020c76b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02029de4(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(func_020805c4(unk_fc->unk_82c)));
    unk_11e = 1;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02029e38(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(func_020805c4(unk_fc->unk_82c)));
    unk_11e = 5;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02029e8c() {
    func_0202a030(0);
}

void Unk_0201d2d0::func_02029e98() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x4a, 0x4a, data_021bf0dc);
    func_0201c938(this, &s, 1, 0x49, 0x49, data_021bf0c4);
    s.unk_20 = 2;
    s.unk_21 = -1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7f18);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_02029f04(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(func_020805c4(unk_fc->unk_82c)));
    unk_11e = 4;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02029f58() {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_02029f58_T t;
    if (func_0206ed18() != 0) {
        void *r4 = unk_fc->unk_82c;
        func_0202d1d4(this, data_021bf0ac);
        if (unk_128 != 0 && func_02080f94(unk_128) != 0) {
            func_02080ccc(unk_128, func_0206ecf0(), 8);
        } else {
            void *r6 = func_0206ecf0();
            unk_128 = func_0207f344(r4, r6, 8, func_0209888c(func_0209750c()));
        }
        if (unk_128 != 0) {
            func_02094030(&t);
            func_02080d4c(unk_128, &t);
            func_02067a3c(unk_3c, 0, &t);
            func_02094018(&t);
        }
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202a030(s32 unused) {
    func_02115fb4(data_021be6c0, 0, 0x20);
    func_0201511c(this, 0x11, data_021be6c0, 8, 0);
    func_020151d0(this, 6);
    func_0202d33c(data_020d7cc8);
}

void Unk_0201d2d0::func_0202a074(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(func_020805c4(unk_fc->unk_82c)));
    unk_11e = 3;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202a0c8() {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_0201d568_S s;
    if (unk_128 != 0 && func_02080dd8() >= 0x40) {
        func_0201c95c(this, &s);
        func_0201c938(this, &s, 0, 0x47, 0x47, data_021bf094);
        func_0201c938(this, &s, 1, 0x48, 0x48, data_021bf0dc);
        s.unk_20 = 2;
        s.unk_21 = -1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d7ab8);
        func_020679c0(unk_3c, 1);
    } else {
        func_0202d1d4(this, data_021bf0dc);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        func_02067abc(unk_3c, &b, out.unk_00);
    }
}

void Unk_0201d2d0::func_0202a18c() {
    u32 x;
    Unk_02029f58_T a;
    Unk_02029f58_T b;
    void *r4 = func_0209888c(func_0209750c());
    func_02094030(&a);
    func_02094030(&b);
    func_020940d0(r4, &b);
    if (func_0202a238(&a, &b, func_02003098(func_020805c4(unk_fc->unk_82c))) == 0) {
        func_020a7bd8(&a, &b);
    }
    if (unk_128 != 0) {
        func_0209cf88(&x);
        func_02080cf8(unk_128, &a);
        func_020796d4(data_021dfd8c, &x);
    } else {
        func_0207f368(unk_fc->unk_82c, &a, r4);
    }
    func_02067a3c(unk_3c, 0, &a);
    func_02094018(&b);
    func_02094018(&a);
}
