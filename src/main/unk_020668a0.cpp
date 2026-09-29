#include "types.h"

#define AT(T, off) (*(T *)((u8 *)this + (off)))
#define PTR(off) ((void *)((u8 *)this + (off)))

class Unk_020a7238;
class Unk_02066978_Owner;

extern "C" {
extern const char *data_020cba74[];
extern const char *data_020cba50[];
extern char data_021ca258[];
extern char data_020ddd7c[];
extern char data_020ddd90[];
extern char data_020ddda4[];
extern s8 data_020cba2c[];
extern u16 data_020cba10[];
extern u8 data_021d7350[];

s32 func_0212a15c(const char *a, const char *b, u32 n);
u32 func_0212a438(const char *s);
char *func_020639e8(char *buf, const char *fmt, ...);
void func_020638d0(void *dst, void *src);
void func_0200402c(void);
void func_0206c700(void *p);
void func_020a7264(void *dst, void *src);
void *func_020a8548(void *p);
s32 func_020a71f0(void *p);
s32 func_020a7208(void *p);
void func_020a7238(u8 *out, void *p);
s32 func_020a7240(void *p);
u32 func_020a7244(void *p);
u32 func_020a7248(void *p);
u32 func_020a724c(void *p);
void func_020a8520(void *p);
void func_020a84e0(void *p, u32 v);
void *func_020aa4d8(void *p);
Unk_02066978_Owner *func_020aa4e4(void *p);
void func_020a7188(void *p);
void func_020a7c3c(void *p);
void func_020a7fd8(void *p);
void func_0206b590(void *p, u32 v);
void func_0206b13c(void *p, s32 v);
void func_02067a84(void *self, u8 *p, s32 z);
s32 func_02067a6c(void *self);
s32 func_02067188(void *self);
void *func_0209750c(void);
s32 func_0209888c(void *p);
s32 func_0207f88c(void *a, s32 b);
void *func_0207f86c(void *a, s32 b);
void func_02080da4(void *a, s32 b);
void *func_02080dd8(void *a);
void func_0207787c(void *a, s32 b, void *c);
s32 func_0209836c(void *g, void *p);
void func_0207df18(void *a, void *b);
void func_0207df64(void *a, void *b);
void func_0207dfa0(void *a, void *b);
void func_0207d0a8(void *a, void *b, s32 c);
s32 func_0207e224(void *a, void *b);
s32 func_0207f1cc(void *a, void *b, s32 c);
void func_0207f230(void *a, void *b, s32 c);
void func_0207f38c(void *a, void *b, s32 c);
void func_0207fba8(void *a, void *b, s32 c);
void func_020940d0(s32 a, void *b);
}

class Unk_02066978_Owner {
public:
    virtual ~Unk_02066978_Owner();
    virtual void vfunc_08();
    virtual u32 vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u32 v);
    virtual void vfunc_18(u32 v);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void *vfunc_68();
};

Unk_02066978_Owner *func_02065f10(void *p);

class Unk_020e2a18 {
public:
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
    void func_020a8950(u8 *p);
    s32 func_020a89f0();
    u8 func_020a8a20(const char *path);
};

class Unk_02050288 {
public:
    virtual ~Unk_02050288();
    virtual void func_08();
    virtual u32 func_0c();
    void func_02050c44();
    void func_02050c90();
    u32 unk_04;
    u32 unk_08[2];
    u32 unk_10;
    u8 unk_14[0x24];
    u8 unk_38;
    u8 unk_39;
    u8 pad[0x14];
    u32 unk_50;
};
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);

class Unk_0206891c {
public:
    Unk_0206891c(void *owner);
    ~Unk_0206891c();
    void func_020688ac(u32 v);
    u8 pad[0x44];
};

class Unk_02066ce0 {
public:
    BOOL func_02066ce0();
    void func_02066cf8(s32 v);
    void func_02066cfc();
    u8 pad[0x10];
    s32 unk_10;
};

class Unk_020668a0 {
public:
    void func_020668a0();
    const char *func_02066900(const char *s);
    const char *func_0206693c(const char *s);
    char *func_02066978(const char *a, const char *b);
    void func_02066a14();
    void func_02066a50();
    void func_02066b0c();
    void func_02066b38();
    void func_02066b74();
    void func_02066bbc();
    void func_02066bf4();
    void func_02066c14();
    void func_02066c7c(s32 idx);
    BOOL func_02066d04();
    void func_02066d4c();
    BOOL func_02066d5c();
    void func_02066da0();
    BOOL func_02066db0();
    void func_02066df4();
    BOOL func_02066e04();
    void func_02066e40();
    BOOL func_02066e50();
    void func_02066e90();
    BOOL func_02066ea0();
    void func_02066f08();
    BOOL func_02066f2c();
    void func_02066f7c();
    BOOL func_02066f98();
    void func_02066fd4();
    BOOL func_02066fe4();
    void func_02067020();
    BOOL func_02067030();
    void func_02067060();
    BOOL func_02067070();
    void func_02067098();
    BOOL func_020670a8();
    void func_020670e4();
    void func_020670f4();
    void func_0206712c();
    void func_02067150();
    void func_02067170();

    u8 pad_0000[0x314];
    /* 0x0314 */ u8 unk_314[4];
    u8 pad_0318[0x270];
    /* 0x0588 */ Unk_02050288 *unk_588;
    /* 0x058c */ u8 unk_58c[4];
    u8 pad_0590[0x48c];
    /* 0x0a1c */ u8 unk_a1c[4];
    u8 pad_0a20[0x8a0];
    /* 0x12c0 */ u8 unk_12c0[4];
    u8 pad_12c4[0xe0];
    /* 0x13a4 */ u8 unk_13a4[4];
    u8 pad_13a8[0x8];
    /* 0x13b0 */ Unk_02066978_Owner *unk_13b0;
    /* 0x13b4 */ u8 unk_13b4[0xc];
    /* 0x13c0 */ u8 unk_13c0[11][0x34];
    /* 0x15fc */ u8 unk_15fc[4][0x34];
    /* 0x16cc */ u32 unk_16cc[4];
    u8 pad_16dc[0x1c];
    /* 0x16f8 */ u8 unk_16f8;
    u8 pad_16f9[0x167];
    /* 0x1860 */ u8 unk_1860[0x20];
    /* 0x1880 */ u8 unk_1880[0x1c];
    /* 0x189c */ u8 unk_189c[0x1c];
    /* 0x18b8 */ u8 unk_18b8[0x1c];
    /* 0x18d4 */ u8 unk_18d4[0x1c];
    /* 0x18f0 */ u8 unk_18f0[0x1c];
    /* 0x190c */ u8 unk_190c[0x1c];
    /* 0x1928 */ u8 unk_1928[0x34];
    /* 0x195c */ u8 unk_195c[0x34];
    /* 0x1990 */ u8 unk_1990[0x1c];
    /* 0x19ac */ u8 unk_19ac[0x24];
    /* 0x19d0 */ u8 unk_19d0[0x24];
    /* 0x19f4 */ u8 unk_19f4;
    /* 0x19f5 */ u8 unk_19f5;
    /* 0x19f6 */ u8 unk_19f6;
    u8 pad_19f7[0x1d];
    /* 0x1a14 */ u8 unk_1a14;
    /* 0x1a15 */ u8 unk_1a15;
    /* 0x1a16 */ u8 unk_1a16;
    u8 pad_1a17[0x2];
    /* 0x1a19 */ u8 unk_1a19;
    u8 pad_1a1a[3];
};

#define OWNER unk_13b0

#define M ((Unk_020e2a18 *)unk_a1c)
void Unk_020668a0::func_020668a0() {
    func_0206c700(unk_a1c);
    if (M->func_020a8a20(func_02066978(0, 0))) {
        M->func_020a8950((u8 *)unk_13b0 + 0x1e);
    }
    func_020a7264(unk_13b4, func_020a8548(unk_a1c));
    M->func_020a89f0();
}

const char *Unk_020668a0::func_02066900(const char *s) {
    const char **p;
    const char *e;
    for (p = data_020cba74; (e = *p) != 0; p++) {
        u32 n = func_0212a438(e);
        if (func_0212a15c(s, e, n) == 0 && s[n] == '_') {
            break;
        }
    }
    return e;
}

const char *Unk_020668a0::func_0206693c(const char *s) {
    const char **p;
    const char *e;
    for (p = data_020cba50; (e = *p) != 0; p++) {
        u32 n = func_0212a438(e);
        if (func_0212a15c(s, e, n) == 0 && s[n] == '_') {
            break;
        }
    }
    return e;
}

char *Unk_020668a0::func_02066978(const char *a, const char *b) {
    u32 r6 = (u32)b;
    if (r6 == 0) {
        r6 = OWNER->vfunc_0c();
    }
    const char *r5 = a ? a : (const char *)unk_13b0 + 4;
    const char *r7 = func_0206693c(r5);
    if (r7 != 0) {
        r5 += func_0212a438(r7) + 1;
        const char *r4 = func_02066900(r5);
        if (r4 != 0) {
            const char *e = r5 + (func_0212a438(r4) + 1);
            func_020639e8(data_021ca258, data_020ddd7c, r6, r7, r4, e);
        } else {
            func_020639e8(data_021ca258, data_020ddd90, r6, r7, r5);
        }
    } else {
        func_020639e8(data_021ca258, data_020ddda4, r6, r5);
    }
    return data_021ca258;
}

void Unk_020668a0::func_02066a14() {
    Unk_02066978_Owner *o = func_020aa4e4(unk_314);
    Unk_0206891c loc(this);
    loc.func_020688ac(o->vfunc_0c());
}

void Unk_020668a0::func_02066a50() {
    u8 loc;
    unk_1a15 = 1;
    unk_1a14 = 1;
    unk_1a16 = 0;
    func_0206b590(unk_58c, func_020a71f0(unk_13b4) == 1 ? 1 : 0);
    s32 r4 = func_020a7208(unk_13b4);
    func_0206b13c(unk_12c0, r4);
    unk_16f8 = r4 == 1 ? 1 : 0;
    func_020a7238(&loc, unk_13b4);
    func_02067a84(this, &loc, 0);
    func_02066bbc();
    func_02066b0c();
    func_020a8520(unk_13a4);
    func_020a84e0(unk_13a4, M->vfunc_08());
}

void Unk_020668a0::func_02066b0c() {
    s32 r0 = func_020a7240(unk_13b4);
    if (r0 < 2) {
        if (data_020cba10[r0] != 0) {
            func_0200402c();
        }
    }
}

void Unk_020668a0::func_02066b38() {
    if (unk_1a16 != 0) {
        OWNER->vfunc_18(func_020a7244(func_020aa4d8(unk_314)));
        unk_1a16 = 0;
    }
}

void Unk_020668a0::func_02066b74() {
    if (unk_1a15 != 0) {
        func_02066c7c(func_020a724c(unk_13b4));
        OWNER->vfunc_14(func_020a7244(unk_13b4));
        unk_1a15 = 0;
    }
}

void Unk_020668a0::func_02066bbc() {
    if (unk_1a14 != 0) {
        OWNER->vfunc_10(func_020a7248(unk_13b4));
        unk_1a14 = 0;
    }
}

void Unk_020668a0::func_02066bf4() {
    if (unk_588 != 0) {
        func_020a7fd8(unk_588);
        unk_588 = 0;
    }
}

void Unk_020668a0::func_02066c14() {
    unk_588 = func_020a8054(0x89, 8, 2);
    if (unk_588 != 0) {
        unk_588->unk_50 = 2;
        unk_588->unk_39 = 0xe;
        Unk_02066978_Owner *o = func_02065f10(unk_13b0);
        Unk_02050288 *t = unk_588;
        t->unk_10 = o->vfunc_0c();
        unk_588->func_02050c44();
        unk_588->unk_38 = 2;
        unk_588->func_02050c90();
    }
}

void Unk_020668a0::func_02066c7c(s32 idx) {
    if (idx != 0) {
        void *r4 = OWNER->vfunc_68();
        void *g = func_0209750c();
        if (r4 != 0) {
            s32 r7 = func_0207f88c(r4, func_0209888c(g));
            void *r6 = func_0207f86c(r4, r7);
            if (r6 != 0) {
                func_02080da4(r6, data_020cba2c[idx]);
                func_0207787c(r4, r7, func_02080dd8(r6));
            }
        }
    }
}

BOOL Unk_02066ce0::func_02066ce0() {
    BOOL r = FALSE;
    if (unk_10 > 0) {
        unk_10--;
        if (unk_10 == 0) {
            r = TRUE;
        }
    }
    return r;
}

void Unk_02066ce0::func_02066cf8(s32 v) {
    unk_10 = v;
}

void Unk_02066ce0::func_02066cfc() {
    unk_10 = 0;
}

BOOL Unk_020668a0::func_02066d04() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_19d0);
    if (r6 != 0) {
        void *g = func_0209750c();
        if (func_0207f1cc(r6, unk_19d0, func_0209888c(g)) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}

void Unk_020668a0::func_02066d4c() { func_020a7c3c(unk_19d0); }

BOOL Unk_020668a0::func_02066d5c() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_19ac);
    if (r6 != 0) {
        void *g = func_0209750c();
        func_0207f230(r6, unk_19ac, func_0209888c(g));
        r4 = TRUE;
    }
    return r4;
}

void Unk_020668a0::func_02066da0() { func_020a7c3c(unk_19ac); }

BOOL Unk_020668a0::func_02066db0() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_1990);
    if (r6 != 0) {
        void *g = func_0209750c();
        func_0207f38c(r6, unk_1990, func_0209888c(g));
        r4 = TRUE;
    }
    return r4;
}

void Unk_020668a0::func_02066df4() { func_020a7c3c(unk_1990); }

BOOL Unk_020668a0::func_02066e04() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_195c);
    if (r6 != 0) {
        func_0207d0a8(r6, unk_195c, 0);
        r4 = TRUE;
    }
    return r4;
}

void Unk_020668a0::func_02066e40() { func_020a7c3c(unk_195c); }

BOOL Unk_020668a0::func_02066e50() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_1928);
    if (r6 != 0) {
        if (func_0207e224(r6, unk_1928) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}

void Unk_020668a0::func_02066e90() { func_020a7c3c(unk_1928); }

BOOL Unk_020668a0::func_02066ea0() {
    BOOL r4 = TRUE;
    if (unk_19f5 == 0) {
        void *g = func_0209750c();
        func_020a7c3c(unk_190c);
        if (func_0209836c(g, unk_190c) == 0) {
            void *r0 = OWNER->vfunc_68();
            if (r0 != 0) {
                func_0207df18(r0, unk_190c);
                unk_19f6 = r4;
            } else {
                r4 = FALSE;
            }
        }
        unk_19f5 = 1;
    }
    return r4;
}

void Unk_020668a0::func_02066f08() {
    unk_19f5 = 0;
    unk_19f6 = 0;
    func_020a7c3c(unk_190c);
}

BOOL Unk_020668a0::func_02066f2c() {
    BOOL r4 = TRUE;
    if (unk_19f4 == 0) {
        void *r6 = OWNER->vfunc_68();
        func_020a7c3c(unk_18f0);
        if (r6 != 0) {
            func_0207df18(r6, unk_18f0);
        } else {
            r4 = FALSE;
        }
        unk_19f4 = 1;
    }
    return r4;
}

void Unk_020668a0::func_02066f7c() {
    unk_19f4 = 0;
    func_020a7c3c(unk_18f0);
}

BOOL Unk_020668a0::func_02066f98() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_18d4);
    if (r6 != 0) {
        func_0207df64(r6, unk_18d4);
        r4 = TRUE;
    }
    return r4;
}

void Unk_020668a0::func_02066fd4() { func_020a7c3c(unk_18d4); }

BOOL Unk_020668a0::func_02066fe4() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_18b8);
    if (r6 != 0) {
        func_0207dfa0(r6, unk_18b8);
        r4 = TRUE;
    }
    return r4;
}

void Unk_020668a0::func_02067020() { func_020a7c3c(unk_18b8); }

BOOL Unk_020668a0::func_02067030() {
    void *r4 = func_0209750c();
    func_020a7c3c(unk_189c);
    func_020940d0(func_0209888c(r4), unk_189c);
    return TRUE;
}

void Unk_020668a0::func_02067060() { func_020a7c3c(unk_189c); }

BOOL Unk_020668a0::func_02067070() {
    func_020a7c3c(unk_1880);
    func_020638d0((u8 *)((u32)data_021d7350 + 2), unk_1880);
    return TRUE;
}

void Unk_020668a0::func_02067098() { func_020a7c3c(unk_1880); }

BOOL Unk_020668a0::func_020670a8() {
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    func_020a7c3c(unk_1860);
    if (r6 != 0) {
        func_0207fba8(r6, unk_1860, 1);
        r4 = TRUE;
    }
    return r4;
}

void Unk_020668a0::func_020670e4() { func_020a7c3c(unk_1860); }

void Unk_020668a0::func_020670f4() {
    s32 i;
    for (i = 0; i < 4; i++) {
        func_020a7188(unk_15fc[i]);
        unk_16cc[i] = 7;
    }
}

void Unk_020668a0::func_0206712c() {
    s32 i;
    for (i = 0; i < 11; i++) {
        func_020a7188(unk_13c0[i]);
    }
}

void Unk_020668a0::func_02067150() {
    func_02067170();
    func_0206712c();
    func_020670f4();
    func_02067a6c(this);
}

void Unk_020668a0::func_02067170() {
    func_02067188(this);
    unk_1a19 = 0;
}
