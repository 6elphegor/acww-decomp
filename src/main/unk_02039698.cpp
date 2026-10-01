#include "types.h"

struct Unk_02039cf4_Obj {
    u32 unk_00;
    u32 unk_04;
};
extern "C" {
void func_02116048(void *src, void *dst, u32 size);
void func_0205113c(void *p);
void func_02089140(void *p);
void func_0209d124(void *p, u32 n);
u32 func_0209ceac(u32 a, u32 b, u32 c);
s32 func_02063b8c(s32 n);
void func_0206338c(Unk_02039cf4_Obj *o, s32 a, s32 b);
void func_02063388(Unk_02039cf4_Obj *o);
void func_02062f94(u16 *a, Unk_02039cf4_Obj *o, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL func_0204ba30(u16 *a, u16 *b);
s32 func_01ffb898(void *v, void *m, void *out);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_01ffc928(void *dst, void *a, void *b);
void func_01ffc714(void *dst, void *src);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    /* 0x04 */ Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// Buffer of fixed size 9 at +4
class Unk_020d9134 : public Unk_020d9218 {
public:
    Unk_020d9134();
    virtual ~Unk_020d9134();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x04 */ u8 unk_04[9];
};

// Pointer + size view
class Unk_020d914c : public Unk_020d9200 {
public:
    Unk_020d914c(u8 *data, u32 size);
    virtual ~Unk_020d914c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u32 unk_08;
};

class Unk_020d9164 : public Unk_020e2a60 {
public:
    Unk_020d9164(u8 *data, u32 size);
    virtual ~Unk_020d9164();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x10 */ u8 *unk_10;
    /* 0x14 */ u32 unk_14;
};

class Unk_020d917c : public Unk_020e2a78 {
public:
    Unk_020d917c();
    virtual ~Unk_020d917c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x14 */ u8 unk_14[0x20];
};

class Unk_020d9194 : public Unk_020e0db4 {
public:
    Unk_020d9194();
    virtual ~Unk_020d9194();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_020390c8();
    void func_0203900c();
    void func_02039508();
    void func_020393f8();
    void func_0203934c();
    void func_02039290();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_02089270 unk_1c;
    /* 0x30 */ Unk_02089270 unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ Unk_020d917c unk_54;
    /* 0x88 */ Unk_020d9134 unk_88;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
};

typedef void (Unk_020d9194::*Unk_020d9194_Fn)();

void Unk_020d9194::vfunc_0c() {
    if (unk_a8 > 0) {
        unk_a8--;
    }
    static Unk_020d9194_Fn tbl[4] = {&Unk_020d9194::func_02039508, &Unk_020d9194::func_020393f8,
                                     &Unk_020d9194::func_0203934c, &Unk_020d9194::func_02039290};
    (this->*tbl[unk_a0])();
    if (unk_a0 != 0) {
        if (unk_0c != 0) {
            unk_1c.func_02089140();
        }
        unk_30.func_02089140();
    }
}

void Unk_020d9194::vfunc_08() {
    if (unk_b0 != 0) {
        if (unk_0c == 0) {
            void *h = unk_30.func_02089248();
            s32 x = func_02089f68() + unk_30.func_02089228(-1);
            s32 y = unk_50 + (unk_4c + (unk_48 + func_02089f64()) + unk_30.func_02089210(-1));
            func_02087e70(0, h, x, y, unk_10, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            void *h1 = unk_1c.func_02089248();
            s32 x1 = func_02089f68() + unk_1c.func_02089228(-1);
            s32 y1 = unk_50 + (unk_4c + (unk_48 + func_02089f64()) + unk_1c.func_02089210(-1));
            void *h2 = unk_30.func_02089248();
            s32 x2 = func_02089f68() + unk_30.func_02089228(-1);
            s32 y2 = unk_50 + (unk_4c + (unk_48 + func_02089f64()) + unk_30.func_02089210(-1));
            func_02087e70(2, h1, x1, y1, unk_10, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(2, h2, x2, y2, unk_10, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

Unk_020d9194::~Unk_020d9194() {
    func_020390c8();
    func_0203900c();
}

Unk_020d9194::Unk_020d9194()
    : unk_0c(0), unk_10(0), unk_14(0), unk_18(0), unk_44(0), unk_48(0), unk_4c(0), unk_50(0) {
    unk_98 = 0;
    unk_9c = 0;
    unk_a0 = 0;
    unk_a4 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
}

u32 Unk_020d914c::vfunc_08() { return unk_08; }
u8 *Unk_020d914c::vfunc_0c() { return unk_04; }
Unk_020d914c::~Unk_020d914c() {}
u32 Unk_020d9134::vfunc_08() { return 9; }
u8 *Unk_020d9134::vfunc_0c() { return (u8 *)this + 4; }
Unk_020d9134::~Unk_020d9134() {}
Unk_020d9164::Unk_020d9164(u8 *data, u32 size) : unk_10(data), unk_14(size) {}
Unk_020d9164::~Unk_020d9164() {}
u32 Unk_020d9164::vfunc_08() { return unk_14; }
u8 *Unk_020d9164::vfunc_0c() { return unk_10; }
Unk_020d917c::Unk_020d917c() { func_020a7c3c(); }
Unk_020d917c::~Unk_020d917c() {}
u32 Unk_020d917c::vfunc_08() { return 0x21; }
u8 *Unk_020d917c::vfunc_0c() { return (u8 *)this + 0x12; }
Unk_020d9134::Unk_020d9134() { func_0205113c(this); }
Unk_020d914c::Unk_020d914c(u8 *data, u32 size) : unk_04(data), unk_08(size) {}

extern u16 data_021ed210[15];
extern u16 data_021ed22e[15];
extern s16 data_02135f44[];

extern "C" void func_02039bec(u16 *p) {
    for (s32 i = 0; i < 15; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void func_02039b6c(u16 *arr, void *src, s32 n) {
    if (n != 0) {
        if (n >= 4) {
            func_02039bec(arr);
        } else {
            u32 b[2];
            b[0] = 0;
            b[1] = 0;
            func_02116048(src, b, 8);
            func_0209d124(b, 6);
            switch (func_0209ceac(((u8 *)b)[5], ((u8 *)b)[4], ((u8 *)b)[3])) {
            case 0:
                break;
            case 1:
            case 4:
                func_02039bec(arr);
                break;
            case 2:
            case 5:
                if (n >= 2) {
                    func_02039bec(arr);
                }
                break;
            case 3:
            case 6:
                if (n >= 3) {
                    func_02039bec(arr);
                }
                break;
            }
        }
    }
}

extern "C" void func_02039c00() {}
extern "C" void func_02039c04() {}
extern "C" void func_02039d6c() {}
extern "C" void func_02039d70() {}
extern "C" void func_02039d74() {}
extern "C" void func_02039d8c() {}
extern "C" void func_02039d90() {}

extern "C" void func_02039d58(u16 *p) {
    for (s32 i = 0; i < 15; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void func_02039d78(u16 *p) {
    for (s32 i = 0; i < 90; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void func_02039c08(u16 *arr, s32 n) {
    s32 tbl[3] = {1, 0, 2};
    u32 out;
    Unk_02039cf4_Obj o1;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 15; i++) {
        if (arr[i] != 0xfff1) {
            cnt++;
        }
    }
    for (s32 k = 0; k < n; k++) {
        if (cnt >= 10) {
            break;
        }
        for (s32 j = 0; j < 15; j++) {
            u16 *e = &arr[j];
            if (*e == 0xfff1) {
                s32 r = func_02063b8c(100);
                s32 idx = 0xff;
                if (r >= 50 && r < 100) {
                } else if (r >= 30 && r < 50) {
                    *e = 0x1566;
                    cnt++;
                } else if (r >= 20 && r < 30) {
                    idx = 0;
                } else if (r >= 10 && r < 20) {
                    idx = 1;
                } else if (r >= 0 && r < 10) {
                    idx = 2;
                }
                if (idx != 0xff) {
                    func_0206338c(&o1, tbl[idx], 0);
                    func_02062f94((u16 *)&out, &o1, 0, 0, 1, 1, 0);
                    func_02063388(&o1);
                    *e = *(u16 *)&out;
                    cnt++;
                }
                break;
            }
        }
    }
}

extern "C" void func_02039cf4(u16 *p) {
    for (s32 i = 0; i < 3; i++) {
        s32 tbl[3] = {1, 0, 2};
        u16 out[2];
        Unk_02039cf4_Obj o1;
        func_0206338c(&o1, tbl[func_02063b8c(3)], 0);
        func_02062f94(out, &o1, 0, 0, 1, 1, 0);
        func_02063388(&o1);
        p[i] = out[0];
    }
}

extern "C" BOOL func_02039d94(u32 i, u16 v) {
    if (i < 15) {
        u16 t[2];
        t[0] = v;
        t[1] = 0xfff1;
        if (func_0204ba30(&t[0], &t[1])) {
            data_021ed22e[i] = t[1];
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 func_02039dd4(u32 i) {
    if (i < 15) {
        return data_021ed22e[i];
    }
    return 0xfff1;
}

extern "C" BOOL func_02039dec(u16 v) {
    for (u32 i = 0; i < 15; i++) {
        if (func_02039dd4(i) == 0xfff1) {
            return func_02039d94(i, v);
        }
    }
    return FALSE;
}

extern "C" s32 func_02039e1c() {
    s32 n = 0;
    u16 *p = data_021ed210;
    for (s32 i = 0; i < 15; i++) {
        if (p[i] != 0xfff1) {
            n++;
        }
    }
    return n;
}

extern "C" BOOL func_02039e44() {
    s32 i;
    u16 *p = data_021ed210;
    for (i = 0; i < 15; i++) {
        if (p[i] != 0xfff1) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_02039e6c(u16 v) {
    u16 *p = data_021ed210;
    s32 idx = 15;
    for (s32 i = 0; i < 15; i++) {
        if (p[i] == 0xfff1) {
            idx = i;
            i = 15;
        }
    }
    if (idx == 15) {
        for (idx = 0; idx < 14; idx++) {
            p[idx] = p[idx + 1];
        }
        idx = 14;
    }
    p[idx] = v;
}

class Unk_02039eb8 {
public:
    s32 func_02039eb8(void *m, void *v, s32 r, s32 *out);
    void func_02039f9c();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04[3];
    /* 0x10 */ s32 unk_10[3];
    /* 0x1c */ s32 unk_1c[3];
    /* 0x28 */ s32 unk_28[3];
    /* 0x34 */ s32 unk_34[6];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u16 unk_58;
};

s32 Unk_02039eb8::func_02039eb8(void *m, void *v, s32 r, s32 *out) {
    func_01ffb898(v, m, out);
    s32 t = -out[2];
    if (t < unk_50 - r) {
        return 0x7fffffff;
    }
    if (t > unk_54 + r) {
        return 0x7fffffff;
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_04[2]);
        s32 b = func_01ffcb0c(out[0], unk_04[0]);
        s32 c = func_01ffcb0c(out[1], unk_04[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_10[2]);
        s32 b = func_01ffcb0c(out[0], unk_10[0]);
        s32 c = func_01ffcb0c(out[1], unk_10[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_1c[2]);
        s32 b = func_01ffcb0c(out[0], unk_1c[0]);
        s32 c = func_01ffcb0c(out[1], unk_1c[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_28[2]);
        s32 b = func_01ffcb0c(out[0], unk_28[0]);
        s32 c = func_01ffcb0c(out[1], unk_28[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    return -out[2];
}

void Unk_02039eb8::func_02039f9c() {
    s32 v[12];
    s32 idx = unk_58 >> 4;
    s32 s = func_01ffc5a4(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]);
    s32 y = func_01ffcb0c(unk_50, s);
    s32 x = func_01ffcb0c(unk_4c, y);
    v[0] = -x;
    v[1] = -y;
    v[2] = -unk_50;
    v[3] = -x;
    v[4] = y;
    v[5] = -unk_50;
    v[6] = x;
    v[7] = y;
    v[8] = -unk_50;
    v[9] = x;
    v[10] = -y;
    v[11] = -unk_50;
    func_01ffc928(&v[3], &v[0], &unk_04[0]);
    func_01ffc928(&v[6], &v[3], &unk_10[0]);
    func_01ffc928(&v[9], &v[6], &unk_1c[0]);
    func_01ffc928(&v[0], &v[9], &unk_28[0]);
    func_01ffc714(&unk_04[0], &unk_04[0]);
    func_01ffc714(&unk_10[0], &unk_10[0]);
    func_01ffc714(&unk_1c[0], &unk_1c[0]);
    func_01ffc714(&unk_28[0], &unk_28[0]);
}
