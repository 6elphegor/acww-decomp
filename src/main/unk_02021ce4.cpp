#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_02021d50_Id {
    u16 id;
    u8 name[8];
};

struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec unk_5c;
    u8 pad_68[0x82c - 0x68];
    void *unk_82c;
};

typedef BOOL (Unk_0201d2d0::*Unk_0201d2d0_BFn)();

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202b4e8(void *, s32, u32);
void func_0202b4ac(void *, s32, void *);
void func_0202d864(u16 *, void *);
void *func_0207fd9c(void *);
void *func_0209750c();
void *func_0209888c(void *);
void *func_0207e310(void *);
s32 func_020805b8(void *);
void *func_02071e04(s32);
u16 *func_02071fa0(void *);
s32 func_02128930(void *, void *, s32);
s32 func_020941e8(void *, void *);
u16 *func_0209409c(void *);
void func_020157e8(void *, void *, s32);
void func_02015818(void *, void *, s32);
s32 func_0204ec14(void *, s32, s32, s32);
s32 func_0204ec14x(s32, s32, void *, s32);
void *func_0207e268(void *);
void *func_0209a610(void *);
s32 func_0209b354(void *);
s32 func_0209b3b0(s32);
s32 func_02078574(void *);
void func_0202c224(u16 *);
void func_0202c708(u16 *);
void func_0201578c(void *, void *, s32, s32);
}

extern Unk_0201d2d0_Data data_020c7880, data_020c7840, data_020c7888, data_020c76b8, data_020c78d0;
extern Unk_0201d2d0_Data data_020c76c8, data_020c7630, data_020c78f8, data_020c7900, data_020c7910;
extern Unk_0201d2d0_Data data_020c7708, data_020c7940;
extern u8 data_020c7530[];
extern u16 data_021d7352[];
extern void *data_021c47c4;
extern u8 data_020e416c;

static inline BOOL Unk_02021ef8_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_02021d50_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

class Unk_0201d2d0 {
public:
    BOOL func_02021ce4();
    BOOL func_02021d50();
    BOOL func_02021ea4();
    BOOL func_02021ef8();
    BOOL func_02021fe8();
    BOOL func_0202203c();
    BOOL func_020220c0();
    BOOL func_02022168();
    BOOL func_020221bc();
    BOOL func_02022224();
    BOOL func_02022270();
    BOOL func_0202235c();
    void func_02022448(s32 r1, Unk_0201d2d0_Data *d);
    BOOL func_020224b8();
    BOOL func_020225b4();
    BOOL func_02022608();
    BOOL func_0202265c();
    BOOL func_020226b0();
    BOOL func_02022704();
    BOOL func_02022758();
    BOOL func_020227ac();
    BOOL func_02022994();

    u8 pad_00[0xfc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
};

BOOL Unk_0201d2d0::func_02021ce4() {
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7880.unk_00, data_020c7880.unk_04, 0, 0);
    for (i = 0; i < 6; i++) {
        func_0202b4e8(this, i, data_020c7530[i]);
    }
    return TRUE;
}

BOOL Unk_0201d2d0::func_02021d50() {
    void *r7 = unk_fc->unk_82c;
    volatile u16 h = *(u16 *)func_0207fd9c(r7);
    s32 r4 = -1;
    u16 *r5;
    s32 t;
    u16 *q;
    if (func_0209750c() != 0) {
        r5 = (u16 *)func_0209888c(func_0209750c());
    } else {
        r5 = 0;
    }
    if (r5 != 0) {
        if (Unk_02021d50_R((u16 *)&h, 0x12a8, 0x12af)) {
            t = func_020805b8(r7);
            q = func_02071fa0(func_02071e04(t));
            if (r5[0] == q[0] && func_02128930(r5 + 1, q + 1, 8) == 0 && func_020941e8(r5, q) != 0) {
                r4 = 1;
            } else if (func_020941e8(r5, q) == 0) {
                Unk_02021d50_Id *p = (Unk_02021d50_Id *)data_021d7352;
                Unk_02021d50_Id *w = (Unk_02021d50_Id *)func_0209409c(q);
                if (w->id == p->id && func_02128930(w->name, p->name, 8) == 0) {
                    r4 = 2;
                } else {
                    r4 = 3;
                }
            }
            if (r4 != -1) {
                func_020157e8(this, func_02071fa0(func_02071e04(t)), 0);
                func_02015818(this, func_0209409c(func_02071fa0(func_02071e04(t))), 1);
            }
        } else {
            r4 = 0;
        }
    }
    if (r4 != -1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7888.unk_00, data_020c7888.unk_04, r4, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02021ea4() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7840.unk_00, data_020c7840.unk_04, 0, 0);
    return TRUE;
}

BOOL Unk_0201d2d0::func_02021ef8() {
    static BOOL (Unk_0201d2d0::*tbl[8])() = {
        &Unk_0201d2d0::func_0202235c, &Unk_0201d2d0::func_02022270, &Unk_0201d2d0::func_02022224,
        &Unk_0201d2d0::func_020221bc, &Unk_0201d2d0::func_02022168, &Unk_0201d2d0::func_020220c0,
        &Unk_0201d2d0::func_0202203c, &Unk_0201d2d0::func_02021fe8};
    s32 idx;
    if (Unk_02021ef8_IsZero(data_020e416c)) {
        idx = func_02078574(func_0207e310(unk_fc->unk_82c));
        if (func_0209b3b0(idx) != 0) {
            return (this->*tbl[idx])();
        }
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02021fe8() {
    u16 h;
    func_0202d864(&h, unk_fc);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        func_02022448(7, &data_020c76b8);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202203c() {
    u16 h;
    void *r5 = data_021c47c4;
    BOOL r4;
    func_0202d864(&h, unk_fc);
    r4 = FALSE;
    if (r5 != 0) {
        Unk_0201d2d0_Vec *v = &unk_fc->unk_5c;
        s32 px = v->x >> 17;
        s32 pz = v->z >> 17;
        if (func_0204ec14(r5 ? r5 : r5, px, pz, 8) != 0) {
            r4 = TRUE;
        }
    }
    if (r4 != 0) {
        volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
            func_02022448(6, &data_020c78d0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_020220c0() {
    s32 r4 = -1;
    u16 h;
    func_0202d864(&h, unk_fc);
    if (Unk_02021d50_R(&h, 0x1378, 0x1378)) {
        r4 = 0;
        if (func_0209b354(func_0209a610(func_0207e268(unk_fc->unk_82c))) != 5) {
            r4 = 2;
        }
    }
    if (r4 != -1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c76c8.unk_00, data_020c76c8.unk_04, r4, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02022168() {
    u16 h;
    func_0202d864(&h, unk_fc);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        func_02022448(4, &data_020c7630);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_020221bc() {
    u16 h;
    func_0202d864(&h, unk_fc);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        func_02022448(3, &data_020c78f8);
        func_0202b4ac(this, 5, unk_fc->unk_82c);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02022224() {
    u16 h[4];
    func_0202d864(h, unk_fc);
    if (Unk_02021d50_R(h, 0x1369, 0x1369)) {
        func_02022448(2, &data_020c7900);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_02022270() {
    s32 r4 = -1;
    u16 h[2];
    func_0202d864(&h[1], unk_fc);
    if (Unk_02021d50_R(&h[1], 0x1374, 0x1374)) {
        r4 = 0;
        if (func_0209b354(func_0209a610(func_0207e268(unk_fc->unk_82c))) != 1) {
            r4 = 1;
        }
    }
    if (r4 != -1) {
        h[0] = 0xfff1;
        func_0202c224(&h[0]);
        if (Unk_02021d50_R(&h[0], 0x12e8, 0x131f)) {
            func_0201578c(this, &h[0], 0, 7);
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7910.unk_00, data_020c7910.unk_04, r4, 0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202235c() {
    s32 r4 = -1;
    u16 h[2];
    func_0202d864(&h[1], unk_fc);
    if (Unk_02021d50_R(&h[1], 0x1376, 0x1376)) {
        r4 = 0;
        if (func_0209b354(func_0209a610(func_0207e268(unk_fc->unk_82c))) != 0) {
            r4 = 2;
        }
    }
    if (r4 != -1) {
        h[0] = 0xfff1;
        func_0202c708(&h[0]);
        if (Unk_02021d50_R(&h[0], 0x12b0, 0x12e7)) {
            func_0201578c(this, &h[0], 0, 7);
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7708.unk_00, data_020c7708.unk_04, r4, 0);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_0201d2d0::func_02022448(s32 r1, Unk_0201d2d0_Data *d) {
    s32 r6 = r1 != func_0209b354(func_0209a610(func_0207e268(unk_fc->unk_82c))) ? 1 : 0;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, r6, 0);
}

BOOL Unk_0201d2d0::func_020224b8() {
    static BOOL (Unk_0201d2d0::*tbl[8])() = {
        &Unk_0201d2d0::func_02022994, &Unk_0201d2d0::func_020227ac, &Unk_0201d2d0::func_02022758,
        &Unk_0201d2d0::func_02022704, &Unk_0201d2d0::func_020226b0, &Unk_0201d2d0::func_0202265c,
        &Unk_0201d2d0::func_02022608, &Unk_0201d2d0::func_020225b4};
    s32 idx = 8;
    if (Unk_02021ef8_IsZero(data_020e416c)) {
        if (unk_fc->unk_82c != 0) {
            idx = func_0209b354(func_0209a610(func_0207e268(unk_fc->unk_82c)));
        }
    }
    if (func_0209b3b0(idx) != 0) {
        return (this->*tbl[idx])();
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_020225b4() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7940.unk_00, data_020c7940.unk_04, 0, 0);
    return TRUE;
}
