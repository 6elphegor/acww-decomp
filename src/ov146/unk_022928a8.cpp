#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

// ---- main-module classes (copied from src/main/unk_0206f53c.cpp / unk_02062fd4.cpp) ----
class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a78;

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
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ void *unk_3c;
};

class Unk_020dd374 : public Unk_020e2a60 {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x0e */ u8 unk_0e[14];
};

class Unk_020dd38c : public Unk_020e2a78 {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

extern "C" {
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206f994(Unk_020e0488 *dst, const void *s, s32 len);
void func_0206ecf8(s32 a);
void func_0206ed2c(u32 v);
BOOL func_0206ef0c();
void func_0200402c(s32 a);
void *func_020ea574();
BOOL func_020a78a4(void *dst, const void *src, s32 n);
void func_020b3544(s32 a, void *buf);
s32 func_0208d4fc(void *p);
void func_02115fb4(void *dst, s32 v, s32 n);
void func_02116048(const void *src, void *dst, s32 n);
s32 func_02133150(s32 a, s32 b);
}

// ---- ov002 sub-objects (opaque bodies) ----
class Unk_020e0db4 {
public:
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    u32 unk_04[2];
};

// object at +0x13cc of the scene (size 0x64)
class Unk_ov002_0220464c : public Unk_020e0db4 {
public:
    virtual ~Unk_ov002_0220464c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    u8 unk_0c[0x64 - 0xc];
};

// object at +0x1a34 of the scene (size 0x48)
class Unk_ov002_022046b0 {
public:
    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    u8 unk_00[0x48];
};

// ---- ov002 scene base (vtable 0x022044e4) ----
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200980();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// ---- ov146 scene (vtable 0x02294080, size 0x1a7c) ----
class Unk_ov146_02294080 : public Unk_ov002_022044e4 {
public:
    // other groups
    void func_ov146_02292010(u32 m);
    void func_ov146_02292020(u32 m);
    BOOL func_ov146_02292030(u32 m);

    // this group
    BOOL func_ov146_022928a8(u8 *p);
    BOOL func_ov146_022928bc();
    void func_ov146_02292970();
    void func_ov146_02292aa0();
    void *func_ov146_02292b1c();
    void func_ov146_02292b24();
    void func_ov146_02292b48();
    void func_ov146_02292c3c();
    void func_ov146_02292e04();
    Unk_020e0488 *func_ov146_02292e30();
    void func_ov146_02292e68();
    void func_ov146_02292e94();
    void func_ov146_02292eb4();
    void func_ov146_02292ed4(s32 a, s32 b);
    void func_ov146_02292f38();
    void func_ov146_02292f7c();
    s32 func_ov146_02292fa0();
    s32 func_ov146_02292fec();
    void func_ov146_02293030();
    void func_ov146_022930a8();
    void func_ov146_022930e0();
    void func_ov146_02293128();
    void func_ov146_02293148();
    void func_ov146_02293164();
    void func_ov146_0229317c();
    void func_ov146_022931a8();

    /* 0x091 */ u8 unk_91[0x17];
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 unk_ac[2];
    /* 0x0ae */ s16 unk_ae;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7[3];
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc[0xe];
    /* 0x0ca */ u8 unk_ca[0x20];
    /* 0x0ea */ u8 unk_ea[0x20];
    /* 0x10a */ u8 unk_10a[0x20];
    /* 0x12a */ u8 unk_12a[0x20 * 0x13];
    /* 0x38a */ u8 unk_38a[0x13cc - 0x38a];
    /* 0x13cc */ Unk_ov002_0220464c unk_13cc;
    /* 0x1430 */ Unk_020e0488 unk_1430[0x14];
    /* 0x1930 */ u8 unk_1930[0x1a34 - 0x1930];
    /* 0x1a34 */ Unk_ov002_022046b0 unk_1a34;
};

BOOL Unk_ov146_02294080::func_ov146_022928bc() {
    s32 i;
    s32 cnt = 0;
    BOOL changed = FALSE;
    u8 *tbl;
    u8 *cp;
    u8 *rec;
    tbl = (u8 *)func_ov146_02292b1c();
    for (i = 0; i < 0x20; i++) {
        s32 off = i * 0x13;
        rec = (u8 *)this + off;
        if (rec[0x13a] == 6) {
            cp = (u8 *)this + cnt;
            if (i != cp[0xea]) {
                changed = TRUE;
                cp[0xea] = i;
            }
            if (func_ov146_022928a8(tbl + 0x180 + off)) {
                rec[0x13c] = (tbl + off)[0x192];
            }
            cp[0xca] = (tbl + off)[0x192];
            cnt++;
        }
    }
    for (; cnt < 0x20; cnt++) {
        if (unk_ea[cnt] != 0x20) {
            changed = TRUE;
            unk_ea[cnt] = 0x20;
            unk_ca[cnt] = 0;
        }
    }
    return changed;
}

void Unk_ov146_02294080::func_ov146_02292970() {
    u8 *tbl = (u8 *)func_ov146_02292b1c();
    s32 i;
    s32 cnt = 0;
    for (i = 0; i < 0x20; i++) {
        s32 off = i * 0x13;
        if (func_ov146_022928a8(tbl + 0x180 + off)) {
            if ((unk_12a + off)[0x10] == 6) {
                if (unk_10a[i] < 0x14) {
                    unk_10a[i]++;
                }
            } else {
                unk_10a[i] = 0;
                func_02116048(tbl + 0x180 + off, unk_12a + (u32)i * 0x13, 0x13);
            }
            cnt++;
        } else {
            if ((unk_12a + off)[0x10] == 6) {
                if (unk_10a[i] != 0) {
                    unk_10a[i]--;
                } else {
                    (unk_12a + off)[0x10] = 0;
                }
            }
        }
    }
    if (cnt != unk_b6) {
        u8 buf[3];
        Unk_020e0488 *w;
        unk_b6 = cnt;
        w = func_ov146_02292e30();
        if (unk_b6 < 10) {
            buf[0] = unk_b6 + 0x35;
            buf[1] = 0;
            buf[2] = 0;
        } else {
            buf[0] = unk_b6 / 10 + 0x35;
            buf[1] = unk_b6 % 10 + 0x35;
            buf[2] = 0;
        }
        func_0206f994(w, buf, 3);
        w->func_0206fb48(8, 0x1f4, 2, 9, 0, 1);
        w->func_0206fab4(0, 0);
    }
}

void Unk_ov146_02294080::func_ov146_02292aa0() {
    s32 i;
    u8 *tbl;
    s32 z;
    func_02115fb4(unk_12a, 0, 0x260);
    tbl = (u8 *)func_ov146_02292b1c();
    i = 0;
    z = 0;
    do {
        u8 *rec = tbl + 0x180 + i * 0x13;
        if (func_ov146_022928a8(rec)) {
            func_02116048(rec, unk_12a + (u32)i * 0x13, 0x13);
            unk_10a[i] = 0x14;
        } else {
            unk_10a[i] = z;
        }
        i++;
    } while (i < 0x20);
}

void Unk_ov146_02294080::func_ov146_02292b24() {
    if (unk_b5 == 0) {
        func_ov146_02292b48();
        unk_b5 = unk_b5 + 1;
    }
}

void Unk_ov146_02294080::func_ov146_02292b48() {
    Unk_020e0488 *w;
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0x65);
    w->func_0206fb9c(8, 0x93, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xc2);
    w->func_0206fb9c(8, 0x8d, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xc1);
    w->func_0206fb9c(8, 0x99, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xbc);
    w->func_0206fb48(8, 0xcd, 6, 0xe, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xbd);
    w->func_0206fb48(8, 0xed, 6, 0xe, 0, 0);
    w->func_0206fab4(1, 0);
}

void Unk_ov146_02294080::func_ov146_02292c3c() {
    static Unk_020dd374 sa;
    static Unk_020dd38c sb;
    Unk_020e0488 *w1;
    Unk_020e0488 *w2;
    s32 j;
    s32 idx;
    s32 col;
    func_ov146_02292b1c();
    idx = unk_ae;
    col = idx % 7;
    for (j = 0; j < 7; j++) {
        if (idx >= 0x20) {
            unk_bc[col] = 0x20;
        } else {
            s32 e = unk_ea[idx];
            s32 off;
            if (e == unk_bc[col]) {
                w1 = 0;
            } else if (e >= 0x20) {
                w1 = func_ov146_02292e30();
                w1->func_020a7c3c();
                w2 = func_ov146_02292e30();
                w2->func_020a7c3c();
                unk_bc[col] = 0x20;
            } else {
                unk_bc[col] = e;
                w1 = func_ov146_02292e30();
                off = e * 0x13;
                func_020a78a4(&sa, unk_12a + 8 + off, 8);
                sb.func_020a7aa0(&sa, 0, 0);
                func_020b3544(0, &sb);
                func_0206f9fc(w1, 0x66);
                w2 = func_ov146_02292e30();
                func_0206f994(w2, unk_12a + off, 8);
            }
            if (w1) {
                w1->func_0206fb9c(4, col * 0x14 + 0x11e, 10, 0xe - col, 0xf, 0);
                w1->func_0206fab4(0, 0);
                w2->func_0206fb9c(4, col * 0x10 + 0x1d2, 8, 0xe - col, 0xf, 0);
                w2->func_0206fab4(0, 0);
            }
        }
        idx++;
        col++;
        if (col >= 7) {
            col = 0;
        }
    }
}

void Unk_ov146_02294080::func_ov146_02292e04() {
    s32 i;
    unk_b4 = 0;
    for (i = 0; i < 0x14; i++) {
        unk_1430[i].func_0206fc44();
    }
}

void Unk_ov146_02294080::func_ov146_02292e68() {
    unk_13cc.func_ov002_02202af0();
    unk_b3 = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov146_02294080::func_ov146_02292e94() {
    unk_13cc.func_ov002_02202b68();
    func_ov002_02200a58(7);
}

void Unk_ov146_02294080::func_ov146_0229317c() {
    if (unk_ba != 0) {
        unk_ba = *(volatile u8 *)&unk_ba - 1;
    } else {
        func_ov146_02292f7c();
        func_ov002_02200a60(1);
    }
}

void Unk_ov146_02294080::func_ov146_022931a8() {
    if (func_0208d4fc(&unk_13cc)) {
        func_ov146_02292eb4();
        func_ov002_02200a58(unk_b3);
        if (func_ov146_02292030(0x10)) {
            func_ov146_02292010(0x10);
            unk_b2 = 1;
            func_ov146_02292f38();
        }
    }
}

void Unk_ov146_02294080::func_ov146_02293128() {
    if (func_0206ef0c()) {
        func_ov146_02293164();
    } else {
        func_ov146_02293148();
    }
}

void Unk_ov146_02294080::func_ov146_02293148() {
    func_ov146_02293030();
    func_ov002_02200980();
    func_ov002_02200a58(3);
}

void Unk_ov146_02294080::func_ov146_02293164() {
    func_ov146_02292f7c();
    func_ov002_02200a58(0);
}

void Unk_ov146_02294080::func_ov146_022930a8() {
    func_0206ecf8(0);
    unk_b1 = 10;
    unk_ba = 5;
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
    func_0200402c(0x28);
}

void Unk_ov146_02294080::func_ov146_022930e0() {
    func_0206ecf8(1);
    func_0206ed2c(unk_bb);
    unk_b0 = 10;
    func_ov146_02292020(0x40);
    unk_ba = 5;
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
    func_0200402c(0x27);
}

void Unk_ov146_02294080::func_ov146_02292f38() {
    s32 a, b;
    if (unk_b2 == 2) {
        unk_13cc.func_ov002_02202c40();
    } else {
        unk_13cc.func_ov002_02202ca0();
    }
    a = func_ov146_02292fec();
    b = func_ov146_02292fa0();
    func_ov146_02292ed4(a, b);
}

void Unk_ov146_02294080::func_ov146_02293030() {
    s32 a, b;
    if (unk_b2 == 3) {
        u32 t = unk_a8 & 0xf;
        if (t != 0) {
            unk_a8 = *(volatile s32 *)&unk_a8 - t;
        }
    }
    a = func_ov146_02292fec();
    b = func_ov146_02292fa0();
    unk_13cc.func_ov002_02202a40(a, b);
    if (unk_b2 == 2) {
        unk_13cc.func_ov002_02202d00(1);
    } else {
        unk_13cc.func_ov002_02202d00(7);
    }
    func_ov146_02292eb4();
}

void Unk_ov146_02294080::func_ov146_02292ed4(s32 a, s32 b) {
    if (func_ov146_02292030(0x20)) {
        unk_13cc.func_ov002_022029e8(a, b, 3, 0);
        func_ov146_02292010(0x20);
    } else {
        unk_13cc.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_b3 = unk_8d;
    func_ov002_02200a58(6);
}

void Unk_ov146_02294080::func_ov146_02292eb4() {
    unk_13cc.func_ov002_02202a78();
    unk_13cc.vfunc_0c();
}

void Unk_ov146_02294080::func_ov146_02292f7c() {
    unk_13cc.func_ov002_02202d00(0);
    unk_13cc.vfunc_0c();
}

s32 Unk_ov146_02294080::func_ov146_02292fa0() {
    u32 m = unk_b2;
    if (m >= 3 && m <= 9) {
        return ((m - 3) << 4) + 0x40 - (unk_a8 & 0xf);
    }
    switch (m) {
    case 0:
    case 1:
        return 0xad;
    case 2:
        return unk_1a34.func_ov002_02202e60();
    default:
        return 0x60;
    }
}

s32 Unk_ov146_02294080::func_ov146_02292fec() {
    u32 m = unk_b2;
    if (m >= 3 && m <= 9) {
        return 0x1c;
    }
    switch (m) {
    case 0:
        return 0x47;
    case 1:
        return 0x99;
    case 2:
        return unk_1a34.func_ov002_02202e84();
    default:
        return 0x80;
    }
}

Unk_020e0488 *Unk_ov146_02294080::func_ov146_02292e30() {
    if (unk_b4 >= 0x14) {
        return &unk_1430[0x13];
    }
    unk_b4 = *(volatile u8 *)&unk_b4 + 1;
    return &unk_1430[unk_b4 - 1];
}

BOOL Unk_ov146_02294080::func_ov146_022928a8(u8 *p) {
    if (p[0x10] == 6 && p[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

// func_ov146_02292b1c (tail-call thunk) is defined last so it isn't inlined into callers
void *Unk_ov146_02294080::func_ov146_02292b1c() { return func_020ea574(); }
