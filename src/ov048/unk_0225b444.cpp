#include "types.h"

struct Unk_ov048_0225b444_V {
    s32 a, b, c;
};

extern "C" {
extern Unk_ov048_0225b444_V data_ov048_0225c364;
extern Unk_ov048_0225b444_V data_ov048_0225c358;
extern Unk_ov048_0225b444_V data_ov048_0225c34c;
extern Unk_ov048_0225b444_V data_ov048_0225c340;
extern u32 data_ov048_0225c6e0;
extern u8 data_021c3cc0;
extern u16 data_020c6cc8;
extern u8 data_021d7352[];
extern void *data_020cbb18;

s32 func_020a5ef8();
void *func_02097520();
void *func_02067918(s32);
void func_02067958(void *);
s32 func_020b4934();
void func_020b4bbc(s32, s32);
void func_02094b0c(void *, s32, s32);
s32 func_020951b8(s32);
void func_02098a58(void *);
void func_020a710c(void *, u32);
void func_02067978(void *, void *);
void func_02094030(void *);
void func_02094018(void *);
void *func_0209888c(...);
void func_020940d0(void *, void *);
void func_02067a3c(void *, s32, void *);
s32 func_020a03c4();
void func_020b78c4();
s32 func_020a0414();
s32 func_02094f2c(s32, s32);
void func_02094f48(s32, s32);
void func_0201a99c(void *, s32);
s32 func_020a03e4();
void *func_0209750c();
s32 func_02087444();
void *func_020986a4(void *);
void *func_02087364(void *);
s32 func_02063954();
s32 func_02128930(void *, void *, u32);
void func_020872fc(void *);
s32 func_02087314(void *);
void func_0209801c(void *, s32);
u8 *func_02002d3c(s32, s32);
s32 func_020e7518(void *);
s32 func_020e7500(void *);
s32 func_0201622c(void *, s32, void *);
s32 func_020195c8(void *, s32, s32, s32, u32, s32);
s32 func_02019790(void *);
s32 func_0201a784(void *);
s32 func_0204137c(s32, s32);
s32 func_0200403c();
s32 func_020197a8(void *);
s32 func_02019614(void *, s32, u32);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, u32, s32);
s32 func_02063b8c(s32);
s32 func_ov004_0223f944();
s32 func_ov004_0223f958();
s32 func_02094ae8(s32, s32);
s32 func_02014220(void *);
s32 func_0203a488();
s32 func_ov004_02225ebc();
s32 func_ov004_02225ee0();
void func_0203d67c(void *);
s32 func_020eaf18();
s32 func_020721b4();
s32 func_020ea4dc(s32);
void func_02072368(void *, s32);
s32 func_02073368();
s32 func_020720f8();
s32 func_020eb650(s32);
void func_ov048_0225afd8(void *, s32, s32);
void *func_02063964(void *);
void func_02116048(void *, void *, u32);
void *func_02094104(void *);
s32 func_0207217c();
void func_020ea720(void *, s32);
}

class Unk_ov048_0225cbc8 {
public:
    virtual ~Unk_ov048_0225cbc8();
    virtual void vfunc_08();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x7e4 - 0x1f];
    s16 unk_7e4;
    u16 unk_7e6;
    u8 unk_7e8;
    u8 unk_7e9;
    u8 pad_7ea[2];
};

class Unk_ov048_0225cc58 {
public:
    BOOL func_ov048_0225b444();
    BOOL func_ov048_0225b454();
    BOOL func_ov048_0225b46c();
    BOOL func_ov048_0225b49c();
    BOOL func_ov048_0225b4e4();
    BOOL func_ov048_0225b578();
    BOOL func_ov048_0225b580();
    BOOL func_ov048_0225b588();
    BOOL func_ov048_0225b624();
    BOOL func_ov048_0225b634();
    BOOL func_ov048_0225b64c();
    BOOL func_ov048_0225b680();
    BOOL func_ov048_0225b70c();
    BOOL func_ov048_0225b770();
    BOOL func_ov048_0225b828();
    BOOL func_ov048_0225b854();
    BOOL func_ov048_0225b918();
    BOOL func_ov048_0225ba44();
    BOOL func_ov048_0225bb34();
    BOOL func_ov048_0225bb8c();
    BOOL func_ov048_0225bbf8();
    BOOL func_ov048_0225bc44();
    BOOL func_ov048_0225bcb0();
    BOOL func_ov048_0225bcc0();

    // out of range
    void func_ov048_0225bfb4(s32 s);

    u8 pad_000[0x2a0];
    u8 unk_2a0[0x334 - 0x2a0];
    u8 unk_334[0x350 - 0x334];
    u8 unk_350[0x3b0 - 0x350];
    u8 unk_3b0[0x564 - 0x3b0];
    u8 unk_564[0x618 - 0x564];
    u8 unk_618[0x654 - 0x618];
    s32 unk_654;
    Unk_ov048_0225cbc8 unk_658;
};

typedef BOOL (Unk_ov048_0225cc58::*Unk_ov048_0225cc58_Fn)();

static inline BOOL Unk_ov048_0225b4e4_Is2() {
    if (data_021c3cc0 == 2) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov048_0225b854_Is0() {
    if (data_021c3cc0 == 0) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------

BOOL Unk_ov048_0225cc58::func_ov048_0225b444() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b454() {
    func_020b4bbc(func_020b4934(), 1);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b46c() {
    s32 a = func_020a5ef8();
    void *b = func_02097520();
    if (func_020951b8(a) == 0) {
        func_02098a58(b);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b49c() {
    s32 a = func_020a5ef8();
    void *o = func_02067918(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        Unk_ov048_0225b444_V v;
        func_02067958(o);
        v = data_ov048_0225c364;
        func_02094b0c(&v, 0x35c, a);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b4e4() {
    u8 buf[0x1c];
    void *h;
    void *o;
    func_020a5ef8();
    h = func_02097520();
    if (Unk_ov048_0225b4e4_Is2()) {
        o = func_02067918(0);
        unk_658.vfunc_08();
        func_020a710c(&unk_658, data_ov048_0225c6e0);
        unk_658.unk_1e = 0x7b;
        func_02067978(o, &unk_658);
        func_02094030(&buf[4]);
        func_020940d0(func_0209888c(h), &buf[4]);
        func_02067a3c(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        func_02094018(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b578() {
    return func_ov048_0225b770();
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b580() {
    return func_ov048_0225b828();
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b588() {
    static Unk_ov048_0225cc58_Fn tbl[4] = {
        &Unk_ov048_0225cc58::func_ov048_0225b70c,
        &Unk_ov048_0225cc58::func_ov048_0225b680,
        &Unk_ov048_0225cc58::func_ov048_0225b64c,
        &Unk_ov048_0225cc58::func_ov048_0225b634,
    };
    if (unk_658.unk_7e9 < 4) {
        if ((this->*tbl[unk_658.unk_7e9])()) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b624() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b634() {
    func_020b4bbc(func_020b4934(), 1);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b64c() {
    void *o = func_02067918(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        if (func_020a03c4() == 0) {
            func_020b78c4();
            return FALSE;
        }
        func_02067958(o);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b680() {
    u8 buf[0x1c];
    void *h;
    void *o;
    s32 a = func_020a0414();
    h = func_02097520();
    if (func_020951b8(a) == 0) {
        o = func_02067918(0);
        unk_658.vfunc_08();
        func_020a710c(&unk_658, data_ov048_0225c6e0);
        unk_658.unk_1e = 0x67;
        func_02067978(o, &unk_658);
        func_02094030(&buf[4]);
        func_020940d0(func_0209888c(h), &buf[4]);
        func_02067a3c(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        func_02094018(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b70c() {
    Unk_ov048_0225b444_V v;
    s32 a = func_020a0414();
    if (Unk_ov048_0225b4e4_Is2()) {
        if (func_02094f2c(1, a)) {
            func_02094f48(1, 4);
            v = data_ov048_0225c358;
            func_02094b0c(&v, 0x35c, a);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b770() {
    static Unk_ov048_0225cc58_Fn tbl[6] = {
        &Unk_ov048_0225cc58::func_ov048_0225bbf8,
        &Unk_ov048_0225cc58::func_ov048_0225bb8c,
        &Unk_ov048_0225cc58::func_ov048_0225bb34,
        &Unk_ov048_0225cc58::func_ov048_0225ba44,
        &Unk_ov048_0225cc58::func_ov048_0225b918,
        &Unk_ov048_0225cc58::func_ov048_0225b854,
    };
    if (unk_658.unk_7e9 < 6) {
        if ((this->*tbl[unk_658.unk_7e9])()) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b828() {
    unk_658.unk_7e9 = 0;
    func_0201a99c(unk_350, unk_658.unk_7e4);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b854() {
    if (unk_654 == 8) {
        if (Unk_ov048_0225b854_Is0()) {
            func_020a03e4();
        } else {
            return FALSE;
        }
        func_ov048_0225bfb4(3);
    } else {
        func_020b4bbc(func_020b4934(), 0);
        func_ov048_0225bfb4(3);
    }
    return TRUE;
}

extern "C" BOOL func_ov048_0225b8a8() {
    void *h = func_0209750c();
    void *r4;
    if (func_02087444()) {
        r4 = func_020986a4(h);
        func_02087364(r4);
        if (func_02063954()) {
            u16 *q = (u16 *)data_021d7352;
            u16 *p = (u16 *)func_02087364(r4);
            if (p[0] == q[0]) {
                if (func_02128930(p + 1, q + 1, 8) == 0) {
                    goto skip;
                }
            }
        }
        func_020872fc(func_020986a4(func_0209750c()));
    skip:
        if (func_02087314(r4)) {
            func_0209801c(h, 0x36);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225b918() {
    u8 *base = func_02002d3c(0x73, 0);
    u8 *r4 = base + 0x334;
    u8 *r6 = base + 0x564;
    u8 *r7 = base + 0x2a0;
    u8 *sp8 = base + 0x3b0;
    if (func_020e7518(&unk_658.unk_7e8) == 0) {
        if (func_0201622c(r4, 0x81, r7) == 0) {
            if (func_0201622c(r4, 0x82, r7) == 0) {
                func_020195c8(r6, 1, 0x81, 1, data_020c6cc8, 0);
            }
        }
    }
    if (func_0201622c(unk_334, 0x81, unk_2a0) != 0) {
        if (func_02019790(unk_564) != 0) {
            func_020195c8(unk_564, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (func_0201622c(r4, 0x81, r7) != 0) {
        if (func_02019790(r6) != 0) {
            func_020195c8(r6, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (unk_658.unk_7e6 == 2) {
        func_0201a784(unk_3b0);
        func_0201a784(sp8);
    }
    if (func_020e7500(&unk_658.unk_7e6) == 0) {
        if (unk_654 == 8) {
            if (func_0204137c(2, 0xf)) {
                func_0200403c();
                return TRUE;
            }
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225ba44() {
    u8 *base = func_02002d3c(0x73, 0);
    u8 *r4 = base + 0x564;
    Unk_ov048_0225b444_V v;
    if (func_020197a8(unk_564) == 3) {
        if (func_02019790(unk_564)) {
            func_02019614(unk_564, 1, data_020c6cc8);
        }
    }
    if (func_020197a8(r4) == 3) {
        if (func_02019790(r4)) {
            func_020196b4(r4, 0, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        }
    }
    if (func_020197a8(unk_564) == 0) {
        if (func_020197a8(r4) == 0) {
            v = data_ov048_0225c34c;
            func_02094b0c(&v, 0x666, 4);
            func_020195c8(unk_564, 1, 0x81, 1, data_020c6cc8, 0);
            unk_658.unk_7e8 = func_02063b8c(5) + 5;
            unk_658.unk_7e6 = 0x16;
            func_ov004_0223f944();
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bb34() {
    if (func_020e7500(&unk_658.unk_7e6) == 0) {
        u8 *base = func_02002d3c(0x73, 0);
        func_020196b4(base + 0x564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bb8c() {
    if (func_020951b8(4) == 0) {
        func_02094ae8((s32)0xffff8000, 4);
        func_020196b4(unk_564, 3, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        unk_658.unk_7e6 = (u8)(func_02063b8c(5) + 5);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bbf8() {
    Unk_ov048_0225b444_V v;
    if (func_02014220(unk_618) == 0) {
        func_ov004_0223f958();
        v = data_ov048_0225c340;
        func_02094b0c(&v, 0x400, 4);
        func_02094f48(1, 4);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bc44() {
    switch (unk_658.unk_7e9) {
    case 0:
        if (func_02014220(unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        if (func_0203a488() == 0) {
            func_ov004_02225ebc();
            unk_658.unk_7e6 = 0x3c;
            unk_658.unk_7e9 = 2;
        }
        break;
    case 2:
        if (func_020e7500(&unk_658.unk_7e6) == 0) {
            func_0203d67c(this);
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bcb0() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bcc0() {
    u8 buf[0x14];
    void *h;
    switch (unk_658.unk_7e9) {
    case 0:
        if (func_02014220(unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        if (func_0203a488() == 0) {
            func_ov004_02225ee0();
            unk_658.unk_7e6 = 0x3c;
            unk_658.unk_7e9 = 2;
            if (func_020eaf18() == 4) {
                func_020ea4dc(func_020721b4());
                func_02072368(data_020cbb18, 0);
                func_02073368();
            }
        }
        break;
    case 2:
        if (func_020e7500(&unk_658.unk_7e6) == 0) {
            u8 t = unk_658.unk_1e;
            if (t == 0x46 || t == 0x6c) {
                if (func_020eaf18() == 3) {
                    if (func_020eb650(func_020720f8()) != 0) {
                        func_0203d67c(this);
                    }
                } else {
                    func_ov048_0225afd8(&unk_658, 1, 0);
                    h = func_0209750c();
                    func_02116048(func_02063964(data_021d7352), buf, 8);
                    func_02116048(func_02094104(func_0209888c(h)), buf + 8, 8);
                    buf[0x10] = 0;
                    func_0207217c();
                    func_020ea720(buf, 0x11);
                    func_02073368();
                    func_0203d67c(this);
                }
            }
        } else {
            if (func_020eaf18() == 3) {
                func_020eb650(func_020720f8());
            }
        }
        break;
    }
    return TRUE;
}
