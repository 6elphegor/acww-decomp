#include "types.h"

struct Unk_ov004_0224c198_Vec3 {
    s32 x, y, z;
};
typedef Unk_ov004_0224c198_Vec3 Unk_ov004_Vec3;

struct Unk_0204e858_Grid {
    void *cells;
    u32 w, h;
};

class Unk_020d89c8;
class Unk_ov004_0224c228;

struct Unk_ov004_022162f0_Actor {
    u8 pad[0x5c];
    Unk_ov004_Vec3 pos;
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[8];
};

extern "C" {
extern s32 data_020c8cbc;
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 data_021f4880[];
extern u8 data_ov004_022505a0[];
extern u8 data_ov004_0224c2e8[];
extern Unk_ov004_0224c228 *data_ov004_02250584;
extern u8 data_021d7350[];
extern u8 data_021dfd8c[];
extern Unk_0204e858_Grid *data_021c47c4;

Unk_ov004_022162f0_Actor *func_ov004_02215eac(void *);
s32 func_ov004_02215e84();
s32 func_020e9650(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e7b98(s32, s32);
s32 func_020e780c(s32, s32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_02019614(void *, u32, u32);
s32 func_020196b4(void *, u32, s32, s32, s32, s16, s16, s32, s32, u16, u16);
void func_0201a9ec(void *, void *);
s32 func_0201bb3c(void *, void *);
s32 func_0201a6c0(void *, u32, s32, s32, void *, s32, s32, u32);
s32 func_02063b8c(s32);
s32 func_02014220(void *);
void func_020135c4(void *);
void func_0203a680(void *);
void func_0203a844();
s32 func_02080ecc(void *, s32, s32, s32);
void *func_0207f55c(void *, void *);
void *func_0209750c();
void *func_0209888c(void *);
void *func_020805c4(void *);
s32 func_02080a74(void *);
void func_02080a98(void *);
s32 func_02037558(void *, s32, s32, s32);
s32 func_0204b288();
void func_0203002c(s32, s32);
s32 func_02031154(s32, s32);
void func_0204ed8c(void *, s32, s32);
void func_0204ee10(s32 *, s32 *, void *);
void func_0200301c(void *, void *, u32, u32);
void *func_020b51d4();
s32 func_0207bf84(void *, void *);
void *func_0207bf60(void *, void *);
s32 func_020157b8(void *, void *, u32);
}

// ---------------------------------------------------------------------------------------------------------------------
// Library bases (stubs; real layouts live in src/main)

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

class Unk_020d8938_Parent;

class Unk_020d8938 : public Unk_02015b54 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
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
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_0202d388(Unk_020d89c8 *owner, u32 idx);

    u8 pad_04[0x1a0 - 4];
};

class Unk_020d77a4 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual BOOL vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();

    void func_0201bc28(void *p);
};

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();

    /* 0x004 */ u8 pad_04[0x5c - 4];
    /* 0x05c */ Unk_ov004_Vec3 unk_5c;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[0x350 - 0x90];
    /* 0x350 */ u8 unk_350[0x3b0 - 0x350];
    /* 0x3b0 */ u8 unk_3b0[0x508 - 0x3b0];
    /* 0x508 */ u8 unk_508;
    /* 0x509 */ u8 pad_509[0x558 - 0x509];
    /* 0x558 */ u8 unk_558[8];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 pad_561[3];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x82c - 0x618];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[0x894 - 0x830];
};

// ---------------------------------------------------------------------------------------------------------------------
// Menu sub-object embedded at +0x898 of Unk_ov004_0224c228 (vtable 0x0224c198)

class Unk_ov004_0224c198 : public Unk_020d8938 {
public:
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);

    void func_ov004_022168c0(Unk_020d89c8 *owner);
    void func_ov004_022168e0();
    BOOL func_ov004_022168f8();
    void *func_ov004_0221691c();

    /* 0x1a0 */ Unk_ov004_0224c228 *unk_1a0;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224c228

typedef void (Unk_ov004_0224c228::*Unk_ov004_0224c228_VFn)();
typedef BOOL (Unk_ov004_0224c228::*Unk_ov004_0224c228_BFn)();

class Unk_ov004_0224c228 : public Unk_020d89c8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_68();

    void func_ov004_02215fc0();
    void func_ov004_02215fe4();
    void func_ov004_02216024();
    void func_ov004_0221605c();
    void func_ov004_02216100();
    void func_ov004_022161a4();
    void func_ov004_022162f0();
    void func_ov004_02216634();
    BOOL func_ov004_02215fe0();
    BOOL func_ov004_02216148();
    BOOL func_ov004_02215ff0();
    BOOL func_ov004_022160a4();
    BOOL func_ov004_02216028();
    BOOL func_ov004_0221622c();
    BOOL func_ov004_022165dc();
    BOOL func_ov004_022166e8(s32 idx);
    void func_ov004_02216a0c();
    void func_ov004_02216a44();
    BOOL func_ov004_02216b08();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ Unk_ov004_0224c198 unk_898;
    /* 0xa3c */ Unk_ov004_0224c228_BFn unk_a3c;
    /* 0xa44 */ u8 pad_a44[2];
    /* 0xa46 */ u16 unk_a46;
    /* 0xa48 */ s16 unk_a48;
    /* 0xa4a */ u16 unk_a4a;
    /* 0xa4c */ Unk_ov004_Vec3 unk_a4c;
    /* 0xa58 */ Unk_ov004_Vec3 unk_a58;
};

extern "C" s32 func_ov004_02216ba4(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *in, s32 angle);

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov004_0224c228::func_ov004_022162f0() {
    Unk_ov004_Vec3 v;
    Unk_ov004_022162f0_Actor *a = func_ov004_02215eac(this);
    s32 d;
    if (a) {
        d = func_020e9650(&a->pos, &unk_5c);
    } else {
        d = data_020c8cbc;
    }
    if (unk_a46 != 0) {
        unk_a46--;
    }
    if (unk_508 != 0) {
        if (func_020197a8(unk_564) == 1) {
            if (func_02019614(unk_564, 1, data_020c6cc8)) {
                goto end;
            }
        }
    }
    if (d < 0x3334) {
        if (func_ov004_022166e8(1)) {
            goto end;
        }
    }
    if (func_020197a8(unk_564) == 0) {
        if (unk_a4a != 0) {
            unk_a4a--;
        }
        if (unk_a4a == 0) {
            unk_a48 = func_ov004_02216ba4(&unk_a58, &unk_5c, unk_8e);
            unk_a4c.x = unk_a58.x;
            unk_a4c.y = unk_a58.y;
            unk_a4c.z = unk_a58.z;
            if (a && d >= 0x6000 && func_02063b8c(2) == 0) {
                d = func_020e7b98(a->pos.x - unk_5c.x, a->pos.z - unk_5c.z);
                s32 df = func_020e780c(unk_8e, d);
                Unk_ov004_Vec3 *pa = &a->pos;
                s32 xx = *(volatile s32 *)&a->pos.x;
                Unk_ov004_Vec3 *pq = &unk_a58;
                pq->x = xx;
                unk_a58.y = pa->y;
                unk_a58.z = pa->z;
                unk_a4c.x = pq->x;
                unk_a4c.y = pq->y;
                unk_a4c.z = pq->z;
                if (df >= 0x2000) {
                    unk_a48 = d;
                }
            }
            s16 t = unk_a48;
            if (t != unk_8e) {
                if (!func_020196b4(unk_564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                unk_a4a = func_02063b8c(0x46) + 0x14;
            } else {
                if (!func_020196b4(unk_564, 1, 1, unk_a58.x, unk_a58.z, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                unk_a4a = func_02063b8c(0x50) + 0x14;
            }
        } else {
            if (func_02019790(unk_564)) {
                func_02019614(unk_564, 1, data_020c6cc8);
            }
        }
    } else {
        if (func_020197a8(unk_564) == 3) {
            if (func_02019790(unk_564)) {
                func_020196b4(unk_564, 1, 1, unk_a58.x, unk_a58.z, 0, 0, 0, 0, data_020c6cc8, 0);
            }
        } else if (func_020197a8(unk_564) == 1) {
            switch (func_0201bb3c(this, &v)) {
            case 1:
                func_02019614(unk_564, 1, data_020c6cc8);
                break;
            case 2: {
                Unk_ov004_Vec3 *pv = &unk_a4c;
                pv->x = v.x;
                unk_a4c.y = v.y;
                unk_a4c.z = v.z;
                func_0201a9ec(unk_350, &unk_a4c);
                break;
            }
            default:
                if (func_020e96ec(&unk_a4c, &unk_a58)) {
                    Unk_ov004_Vec3 *pw = &unk_a58;
                    unk_a4c.x = pw->x;
                    unk_a4c.y = unk_a58.y;
                    unk_a4c.z = unk_a58.z;
                    func_0201a9ec(unk_350, pw);
                } else if (func_020e9650(&unk_a58, &unk_5c) < 0x200) {
                    func_02019614(unk_564, 1, data_020c6cc8);
                }
                break;
            }
        }
    }
end:;
}

BOOL Unk_ov004_0224c228::func_ov004_022165dc() {
    if (func_02019614(unk_564, 1, data_020c6cc8)) {
        func_0201a6c0(unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_02216634() {
    static Unk_ov004_0224c228_VFn tbl[7] = {
        &Unk_ov004_0224c228::func_ov004_022162f0, &Unk_ov004_0224c228::func_ov004_022161a4,
        &Unk_ov004_0224c228::func_ov004_02216100, &Unk_ov004_0224c228::func_ov004_0221605c,
        &Unk_ov004_0224c228::func_ov004_02216024, &Unk_ov004_0224c228::func_ov004_02215fe4,
        &Unk_ov004_0224c228::func_ov004_02215fc0,
    };
    s32 s = unk_894;
    if (s < 7) {
        (this->*tbl[s])();
    }
}

BOOL Unk_ov004_0224c228::func_ov004_022166e8(s32 idx) {
    static Unk_ov004_0224c228_BFn tbl[7] = {
        &Unk_ov004_0224c228::func_ov004_022165dc, &Unk_ov004_0224c228::func_ov004_0221622c,
        &Unk_ov004_0224c228::func_ov004_02216148, &Unk_ov004_0224c228::func_ov004_022160a4,
        &Unk_ov004_0224c228::func_ov004_02216028, &Unk_ov004_0224c228::func_ov004_02215ff0,
        &Unk_ov004_0224c228::func_ov004_02215fe0,
    };
    if (idx < 7) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224c198::vfunc_18() {}
void Unk_ov004_0224c198::vfunc_14() {}
void Unk_ov004_0224c198::vfunc_10() {}

void Unk_ov004_0224c198::vfunc_78(void *arg) {
    Unk_ov004_0224c228 *o = unk_1a0;
    u32 *out = (u32 *)arg;
    func_0200301c(func_020805c4(o->unk_82c), data_ov004_022505a0, 0x28, (u32)data_ov004_0224c2e8);
    out[0] = (u32)data_ov004_022505a0;
    s32 r6 = 2;
    if (func_ov004_022168f8()) {
        r6 = 0;
    } else if (func_ov004_02215e84()) {
        r6 = 1;
    }
    func_ov004_022168e0();
    switch (r6) {
    case 0:
        ((u8 *)arg)[4] = func_02063b8c(2) + 0x1a;
        break;
    case 1:
        ((u8 *)arg)[4] = func_02063b8c(4) + 0x1e;
        break;
    default:
        ((u8 *)arg)[4] = func_02063b8c(2) + 0x1c;
        break;
    }
    o = unk_1a0;
    if (*(void **)((u8 *)o + 0x8d4)) {
        u8 *const g = data_021d7350;
        void *p = func_020b51d4();
        if (func_0207bf84(data_021dfd8c, p)) {
            Unk_020e1c64 loc;
            func_020157b8((u8 *)unk_1a0 + 0x898, func_020805c4(func_0207bf60(g + 0x8a3c, p)), 1);
        }
        Unk_ov004_0224c228 *o2 = unk_1a0;
        if (o2) {
            void *m = o2->unk_82c;
            if (m) {
                func_020157b8((u8 *)unk_1a0 + 0x898, func_020805c4(m), 0);
            }
        }
    }
}

void Unk_ov004_0224c198::func_ov004_022168c0(Unk_020d89c8 *owner) {
    func_0202d388(owner, 0x11);
    unk_1a0 = (Unk_ov004_0224c228 *)owner;
}

void Unk_ov004_0224c198::func_ov004_022168e0() {
    void *p = func_ov004_0221691c();
    if (p) {
        func_02080a98(p);
    }
}

BOOL Unk_ov004_0224c198::func_ov004_022168f8() {
    void *p = func_ov004_0221691c();
    if (p) {
        if (func_02080a74(p)) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

void *Unk_ov004_0224c198::func_ov004_0221691c() {
    Unk_ov004_0224c228 *o = unk_1a0;
    if (o && o->unk_82c) {
        void *r = func_0209888c(func_0209750c());
        return func_0207f55c(unk_1a0->unk_82c, r);
    }
    return 0;
}

void Unk_ov004_0224c228::vfunc_4c(s32 a, u32 b) {
    Unk_ov004_Vec3 v;
    v.x = unk_5c.x;
    v.y = unk_5c.y;
    v.z = unk_5c.z;
    v.y += 0x2000;
    switch (a) {
    case 3:
        unk_560 = b;
        func_ov004_022166e8(4);
        break;
    case 0:
        unk_560 = b;
        func_0203a680(&v);
        func_ov004_022166e8(5);
        break;
    case 8:
        func_ov004_02216a0c();
        func_0203a844();
        func_ov004_022166e8(0);
        break;
    case 4:
        func_ov004_022166e8(0);
        break;
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

BOOL Unk_ov004_0224c228::vfunc_48() {
    if (func_02014220(unk_618)) {
        return FALSE;
    }
    if (unk_894 <= 3) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_02216a0c() {
    void *p = func_0209750c();
    if (p) {
        if (unk_82c) {
            void *r = func_0209888c(p);
            func_02080ecc(func_0207f55c(unk_82c, r), 0, 0, 0);
        }
    }
}

void Unk_ov004_0224c228::func_ov004_02216a44() {
    Unk_0204e858_Grid *g = data_021c47c4;
    void *c;
    s32 y, x;
    if ((u8 *)g->w > (u8 *)0 && (u8 *)g->h > (u8 *)0 && g->cells) {
        c = g->cells;
    } else {
        c = 0;
    }
    y = 0;
    volatile s32 z = 0;
    for (; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (func_02037558(c, x, y, z)) {
                if (func_0204b288()) {
                    func_0203002c(x, y);
                }
            }
        }
    }
}

BOOL Unk_ov004_0224c228::vfunc_68() {
    func_ov004_02216634();
    return TRUE;
}

BOOL Unk_ov004_0224c228::vfunc_10() {
    if (!Unk_020d89c8::vfunc_10()) {
        return FALSE;
    }
    data_ov004_02250584 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224c228::vfunc_24() {
    if (unk_a3c) {
        return (this->*unk_a3c)();
    }
    return TRUE;
}

BOOL Unk_ov004_0224c228::func_ov004_02216b08() {
    if (Unk_020d77a4::vfunc_24()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c228::vfunc_00() {
    if (!Unk_020d89c8::vfunc_00()) {
        return FALSE;
    }
    unk_a3c = &Unk_ov004_0224c228::func_ov004_02216b08;
    func_ov004_02216a44();
    func_020135c4(unk_558);
    return TRUE;
}

BOOL Unk_ov004_0224c228::vfunc_04() {
    if (!Unk_020d89c8::vfunc_04()) {
        return FALSE;
    }
    data_ov004_02250584 = this;
    func_0201bc28(&unk_898);
    unk_898.func_ov004_022168c0(this);
    func_ov004_022166e8(0);
    return TRUE;
}

extern "C" s32 func_ov004_02216ba4(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *in, s32 angle) {
    s32 gx, gy;
    s32 count, y, x, z;
    func_0204ee10(&gx, &gy, in);
    count = 0;
    y = count;
    z = count;
    do {
        x = z;
        do {
            if (x != gx && y != gy) {
                if (func_02031154(x, y)) {
                    count++;
                }
            }
            x++;
        } while (x < 16);
        y++;
    } while (y < 14);
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    if (count != 0) {
        s32 pick = func_02063b8c(count);
        s32 k = 0;
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (x != gx && y != gy) {
                    if (func_02031154(x, y)) {
                        if (k == pick) {
                            func_0204ed8c(out, x, y);
                            s32 d = func_020e7b98(out->x - in->x, out->z - in->z);
                            if (func_020e780c(angle, d) < 0x2000) {
                                d = angle;
                            }
                            return d;
                        }
                        k++;
                    }
                }
            }
        }
    }
    return angle;
}
